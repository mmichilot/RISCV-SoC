// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_soc__Syms.h"


VL_ATTR_COLD void Vtb_soc___024root__trace_init_sub__TOP__0(Vtb_soc___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_init_sub__TOP__0\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"mem_mailbox",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->pushPrefix("tb_soc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"mem_mailbox",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+6,0,"leds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+173,0,"mailbox_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"mailbox_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"MAX_CYCLE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"cycleCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2,0,"dump_memory__Vstatic__fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"dump_memory__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"dump_memory__Vstatic__mem_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"dump_memory__Vstatic__mem_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("soc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"leds",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+82,0,"timer_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"software_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"interrupts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"wb_cyc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"wb_stb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"wb_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"wb_ack_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"wb_sel_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"wb_adr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"wb_dat_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"wb_dat_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"SRAM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"SRAM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"sram_ack_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"sram_dat_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"clint_ack_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"clint_dat_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"led_ack_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"led_dat_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"SRAM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"SRAM_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"CLINT_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"CLINT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"LED_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"LED_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"sram_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"clint_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"led_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("clint", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"software_int",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"timer_int",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"msip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"msip_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"mtime_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"mtime_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"mtimeh_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"mtimeh_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"mtimecmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"mtimecmp_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"mtimecmph_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"mtimecmph_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+106,0,"mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"mtimecmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("setup_reg_write", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"RESET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"wb_cyc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"wb_stb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"wb_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"wb_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"wb_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"wb_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"wb_adr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"interrupts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+17,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+111,0,"imem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"dmem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"dmem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"imem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dmem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"illegal_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"inst_addr_misalign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"load_addr_misalign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"store_addr_misalign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"env_call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"env_break",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"trap_finish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"alu_b_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"alu_a_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"reg_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+126,0,"pc_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"immed_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+127,0,"pc_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"take_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"immed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"alu_a_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"alu_b_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"trap_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"trap_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+135,0,"irq_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("branch_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+24,0,"take_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"branch_func_e",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+31,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"take_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"trap_pending",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"trap_finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"illegal_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"inst_addr_misalign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"load_addr_misalign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"store_addr_misalign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"env_call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"env_break",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"imem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"dmem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"dmem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"csr_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"imem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dmem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+17,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"func12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+140,0,"current_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+141,0,"s_pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"s_imem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"s_dmem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"s_dmem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"s_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"s_csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"csr_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"csr_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+34,0,"csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"misaligned_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"trap_finish",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"mip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"trap_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"trap_pending",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"mie",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+135,0,"irq_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"s_csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"mtvec_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"mstatush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"mstatush_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"mscratch_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"mstatus_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"mstatus_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"mepc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"mcause_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"mtval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"mtval_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"mie_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+17,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+24,0,"take_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"trap_pending",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"trap_finish",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"immed_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,0,"alu_a_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"alu_b_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"reg_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+126,0,"pc_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+187,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("immed_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"immed_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"immed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("irq_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"irq_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"mie",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"mip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"interrupts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"illegal_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"inst_addr_misalign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"load_addr_misalign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"store_addr_misalign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"env_call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"env_break",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"trap_pending",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"trap_cause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"interrupt_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"exception_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"exception_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"imem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"imem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"imem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"dmem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"dmem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dmem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"dmem_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"dmem_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"dmem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"dmem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"wb_cyc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"wb_stb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"wb_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"wb_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"wb_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"wb_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"wb_adr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"current_state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+164,0,"next_state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+165,0,"mem_request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"invalid_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"data_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("prog_cntr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"RESET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"ld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+38+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("led_driver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+168,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"leds",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+70+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"SIZE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+170,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+85,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"slv0_adr_prefix",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"slv0_adr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"acmp0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"slv1_adr_prefix",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"slv1_adr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"acmp1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"slv2_adr_prefix",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"slv2_adr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"acmp2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_soc___024root__trace_init_top(Vtb_soc___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_init_top\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_soc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_soc___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_soc___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_soc___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_soc___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_soc___024root__trace_register(Vtb_soc___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_register\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_soc___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_soc___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_soc___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_soc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_soc___024root__trace_const_0_sub_0(Vtb_soc___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_soc___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_const_0\n"); );
    // Init
    Vtb_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc___024root*>(voidSelf);
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_soc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_soc___024root__trace_const_0_sub_0(Vtb_soc___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_const_0_sub_0\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+175,(0x30d40U),32);
    bufp->fullIData(oldp+176,(0x8000U),32);
    bufp->fullIData(oldp+177,(0xfU),32);
    bufp->fullIData(oldp+178,(0x80000000U),32);
    bufp->fullIData(oldp+179,(0xffff8000U),32);
    bufp->fullIData(oldp+180,(0x2000000U),32);
    bufp->fullIData(oldp+181,(0xffff0000U),32);
    bufp->fullIData(oldp+182,(0x2010000U),32);
    bufp->fullIData(oldp+183,(0xfffffffcU),32);
    bufp->fullIData(oldp+184,(4U),32);
    bufp->fullBit(oldp+185,(0U));
    bufp->fullCData(oldp+186,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__branch_gen__DOT__branch_func_e),3);
    bufp->fullCData(oldp+187,(5U),3);
    bufp->fullIData(oldp+188,(0U),32);
    bufp->fullIData(oldp+189,(0x2000U),32);
    bufp->fullIData(oldp+190,(0xffff8000U),32);
}

VL_ATTR_COLD void Vtb_soc___024root__trace_full_0_sub_0(Vtb_soc___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_soc___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_full_0\n"); );
    // Init
    Vtb_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc___024root*>(voidSelf);
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_soc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_soc___024root__trace_full_0_sub_0(Vtb_soc___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_full_0_sub_0\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_soc__DOT__cycleCnt),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__fp),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_start),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_end),32);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register
                            [0U]),8);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o));
    bufp->fullBit(oldp+9,(vlSelfRef.tb_soc__DOT__soc__DOT__sram_ack_o));
    bufp->fullIData(oldp+10,(vlSelfRef.tb_soc__DOT__soc__DOT__sram_dat_o),32);
    bufp->fullBit(oldp+11,(vlSelfRef.tb_soc__DOT__soc__DOT__led_ack_o));
    bufp->fullIData(oldp+12,(vlSelfRef.tb_soc__DOT__soc__DOT__led_dat_o),32);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+16,((0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)),7);
    bufp->fullCData(oldp+17,((7U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+18,((vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+19,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_src));
    bufp->fullCData(oldp+20,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_src),2);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src),2);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type),3);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op),4);
    bufp->fullBit(oldp+24,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__take_branch));
    bufp->fullIData(oldp+25,(((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                               ? ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                   ? 0U : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                            ? 0U : 
                                           VL_EXTENDS_II(32,21, 
                                                         (((0x100000U 
                                                            & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst) 
                                                              | (0x800U 
                                                                 & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                                    >> 9U)))) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                                >> 0x14U))))))
                               : ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                   ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                       ? (0xfffff000U 
                                          & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                       : VL_EXTENDS_II(32,13, 
                                                       (((0x1000U 
                                                          & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                             >> 0x13U)) 
                                                         | (0x800U 
                                                            & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                               << 4U))) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                                 >> 7U))))))
                                   : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                       ? VL_EXTENDS_II(32,12, 
                                                       ((0xfe0U 
                                                         & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                              >> 7U))))
                                       : VL_EXTENDS_II(32,12, 
                                                       (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                        >> 0x14U)))))),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__data),32);
    bufp->fullBit(oldp+31,(((0x4000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                             ? ((0x2000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                 ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data 
                                    < vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data)
                                 : VL_LTS_III(32, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data))
                             : ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 0xdU))) 
                                && (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data 
                                    == vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data)))));
    bufp->fullSData(oldp+32,((vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+33,((3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                    >> 0xcU))),2);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata),32);
    bufp->fullBit(oldp+35,((1U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                  >> 0xeU))));
    bufp->fullCData(oldp+36,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state),2);
    bufp->fullBit(oldp+37,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req));
    bufp->fullIData(oldp+38,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[0]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[1]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[2]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[3]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[4]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[5]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[6]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[7]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[8]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[9]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[10]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[11]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[12]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[13]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[14]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[15]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[16]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[17]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[18]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[19]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[20]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[21]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[22]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[23]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[24]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[25]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[26]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[27]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[28]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[29]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[30]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[31]),32);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[0]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[1]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[2]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[3]),8);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+76,(((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
                            & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i))));
    bufp->fullIData(oldp+77,(((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                               ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                                   ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata
                                   : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__data)
                               : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                                   ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out
                                   : ((IData)(4U) + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)))),32);
    bufp->fullCData(oldp+78,(((0U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))
                               ? (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read) 
                                   & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1))
                                   ? 1U : 0U) : ((1U 
                                                  == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))
                                                    ? 
                                                   ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready)
                                                     ? 0U
                                                     : 1U)
                                                    : 0U))
                                                  : 0U))),2);
    bufp->fullBit(oldp+79,(((~ (IData)((0U != (0x2010000U 
                                               ^ (0xfffffffcU 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
                            & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o))));
    bufp->fullBit(oldp+80,(((~ (IData)((0U != (0x80000000U 
                                               ^ (0xffff8000U 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
                            & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o))));
    bufp->fullIData(oldp+81,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o),32);
    bufp->fullBit(oldp+82,((vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime 
                            >= (((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q))))));
    bufp->fullBit(oldp+83,((1U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q)));
    bufp->fullIData(oldp+84,(vlSelfRef.tb_soc__DOT__soc__DOT__interrupts),32);
    bufp->fullBit(oldp+85,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o));
    bufp->fullBit(oldp+86,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i));
    bufp->fullCData(oldp+87,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o),4);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+90,(((0U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                               ? (1U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q)
                               : ((0x4000U == (0xffffU 
                                               & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                   ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q
                                   : ((0x4004U == (0xffffU 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                       ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q
                                       : ((0xbff8U 
                                           == (0xffffU 
                                               & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                           ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q
                                           : ((0xbffcU 
                                               == (0xffffU 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                               ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q
                                               : 0U)))))),32);
    bufp->fullBit(oldp+91,((1U & (~ (IData)((0U != 
                                             (0x80000000U 
                                              ^ (0xffff8000U 
                                                 & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))));
    bufp->fullBit(oldp+92,((1U & (~ (IData)((0U != 
                                             (0x2000000U 
                                              ^ (0xffff0000U 
                                                 & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))));
    bufp->fullBit(oldp+93,((1U & (~ (IData)((0U != 
                                             (0x2010000U 
                                              ^ (0xfffffffcU 
                                                 & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))));
    bufp->fullBit(oldp+94,(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i));
    bufp->fullSData(oldp+95,((0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o)),16);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q),32);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n),32);
    bufp->fullIData(oldp+100,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q),32);
    bufp->fullIData(oldp+103,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n),32);
    bufp->fullIData(oldp+104,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q),32);
    bufp->fullIData(oldp+105,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n),32);
    bufp->fullQData(oldp+106,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime),64);
    bufp->fullQData(oldp+108,((((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q)))),64);
    bufp->fullBit(oldp+110,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we));
    bufp->fullBit(oldp+111,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read));
    bufp->fullBit(oldp+112,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_read));
    bufp->fullBit(oldp+113,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_write));
    bufp->fullBit(oldp+114,(((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read) 
                             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1))));
    bufp->fullBit(oldp+115,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready));
    bufp->fullBit(oldp+116,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_write));
    bufp->fullBit(oldp+117,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_write));
    bufp->fullBit(oldp+118,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write));
    bufp->fullBit(oldp+119,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign));
    bufp->fullBit(oldp+121,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign));
    bufp->fullBit(oldp+122,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign));
    bufp->fullBit(oldp+123,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_call));
    bufp->fullBit(oldp+124,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_break));
    bufp->fullBit(oldp+125,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_finish));
    bufp->fullCData(oldp+126,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src),3);
    bufp->fullIData(oldp+127,(((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                                ? ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                                    ? ((IData)(4U) 
                                       + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)
                                    : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                                        ? ((IData)(4U) 
                                           + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)
                                        : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q))
                                : ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                                    ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                                        ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q
                                        : (0xfffffffeU 
                                           & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out))
                                    : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                                        ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out
                                        : ((IData)(4U) 
                                           + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out))))),32);
    bufp->fullIData(oldp+128,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out),32);
    bufp->fullIData(oldp+129,(((IData)(4U) + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)),32);
    bufp->fullIData(oldp+130,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data),32);
    bufp->fullIData(oldp+131,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out),32);
    bufp->fullBit(oldp+132,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending));
    bufp->fullIData(oldp+133,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip),32);
    bufp->fullIData(oldp+134,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause),32);
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q 
                                   >> 3U))));
    bufp->fullIData(oldp+136,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata),32);
    bufp->fullIData(oldp+137,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q),32);
    bufp->fullIData(oldp+138,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q),32);
    bufp->fullIData(oldp+139,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q),32);
    bufp->fullCData(oldp+140,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state),2);
    bufp->fullBit(oldp+141,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write));
    bufp->fullBit(oldp+142,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read));
    bufp->fullBit(oldp+143,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write));
    bufp->fullBit(oldp+144,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read));
    bufp->fullBit(oldp+145,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write));
    bufp->fullBit(oldp+146,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write));
    bufp->fullIData(oldp+147,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata),32);
    bufp->fullIData(oldp+148,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_n),32);
    bufp->fullIData(oldp+149,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q),32);
    bufp->fullIData(oldp+150,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_n),32);
    bufp->fullIData(oldp+151,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q),32);
    bufp->fullIData(oldp+152,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_n),32);
    bufp->fullIData(oldp+153,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q),32);
    bufp->fullIData(oldp+154,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n),32);
    bufp->fullIData(oldp+155,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n),32);
    bufp->fullIData(oldp+156,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q),32);
    bufp->fullIData(oldp+157,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n),32);
    bufp->fullIData(oldp+158,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q),32);
    bufp->fullIData(oldp+159,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n),32);
    bufp->fullIData(oldp+160,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_n),32);
    bufp->fullBit(oldp+161,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending));
    bufp->fullBit(oldp+162,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_pending));
    bufp->fullCData(oldp+163,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code),5);
    bufp->fullCData(oldp+164,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__next_state),2);
    bufp->fullBit(oldp+165,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__mem_request));
    bufp->fullIData(oldp+166,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__data_next),32);
    bufp->fullBit(oldp+167,(((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_write) 
                             | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))));
    bufp->fullCData(oldp+168,((3U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o)),2);
    bufp->fullSData(oldp+169,((0x7fffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o)),15);
    bufp->fullBit(oldp+170,(vlSelfRef.clk));
    bufp->fullBit(oldp+171,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+172,(vlSelfRef.mem_mailbox),32);
    bufp->fullBit(oldp+173,(((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
                               & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o)) 
                              & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o)) 
                             & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                                == vlSelfRef.mem_mailbox))));
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelfRef.rst_n)))));
}
