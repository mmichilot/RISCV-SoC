`timescale 1ns / 1ps

module addr_decoder #(
        NUM_INPUTS = 2
    ) (
        input  logic [31:0] adr_i,

        input  logic [NUM_INPUTS-1:0][63:0] rules,

        output logic [NUM_INPUTS-1:0] input_select
    );

    always_comb begin
        integer i;
        for (i = 0; i < NUM_INPUTS; i++) begin
            logic [31:0] prefix, mask;
            {prefix, mask} = rules[i];
            input_select[i] = ~|((adr_i & mask) ^ prefix);
        end
    end

endmodule
