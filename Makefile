PROJ=soc
TOP_MODULE=soc

# Directories
CORE_DIR = ./core/rtl
PERIPHERALS_DIR = ./peripherals
BUILD_DIR   = ./build

# Specify hardware revision of your OrangeCrab: `r0.1` or `r0.2`
VERSION:=r0.2

VERILOG_FILES += $(wildcard $(CORE_DIR)/*.sv)
VERILOG_FILES += $(wildcard $(PERIPHERALS_DIR)/*.sv)
VERILOG_FILES += $(wildcard *.sv)

INCLUDE_DIRS = $(CORE_DIR) $(PERIPHERALS_DIR)
INCLUDE_FLAGS = $(addprefix -I,$(INCLUDE_DIRS))

RM         = rm -rf
MKDIR	   = mkdir -p

.PHONY: all
all: flash

# We don't actually need to do anything to verilog files.
# This explicitly empty recipe is merely referenced from
# the %.ys recipe below. Since it depends on those files,
# make will check them for modifications to know if it needs to rebuild.
%.sv: ;

.PHONY: build_dir
build_dir:
	$(MKDIR) $(BUILD_DIR)

# Build the yosys script.
# This recipe depends on the actual verilog files (defined in $(VERILOG_FILES))
# Also, this recipe will generate the whole script as an intermediate file.
# The script will call read_verilog for each file listed in $(VERILOG_FILES),
# Then, the script will execute synth_ecp5, looking for the top module named $(TOP_MODULE)
# Lastly, it will write the json output for nextpnr-ecp5 to use as input.
$(BUILD_DIR)/$(PROJ).ys: build_dir $(VERILOG_FILES)
	$(file >$@)
	$(foreach V,$(VERILOG_FILES),$(file >>$@,read_verilog -sv $(INCLUDE_FLAGS) $V))
	$(file >>$@,synth_ecp5 -top $(TOP_MODULE))
	$(file >>$@,write_json "$(basename $@).json")

# Run the yosys script to synthasize the logic and netlist (in json format)
# to provide for nextpnr-ecp5.
$(BUILD_DIR)/$(PROJ).json: $(BUILD_DIR)/$(PROJ).ys
	yosys -s "$<"

# Run nextpnr-ecp5 to place the logic components and route the nets to pins.
$(BUILD_DIR)/$(PROJ).config: $(BUILD_DIR)/$(PROJ).json
	nextpnr-ecp5 --json $< --textcfg $@ --85k --lpf soc_ulx3s.lpf

# Generate the final bitstream from the pnr output.
$(BUILD_DIR)/$(PROJ).bit: $(BUILD_DIR)/$(PROJ).config
	ecppack --compress --input $< --bit $@

flash: $(BUILD_DIR)/$(PROJ).bit
	openFPGALoader --board=ulx3s $(BUILD_DIR)/$(PROJ).bit

.PHONY: clean
clean:
	$(RM) $(BUILD_DIR)

.PHONY: all
all: flash
