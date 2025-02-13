// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtb_soc___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"BEQ", "BNE", "BLT", "BGE", "BLTU", "BGEU"};
        const char* __VenumItemValues[]
        = {"0", "1", "100", "101", "110", "111"};
        tracep->declDTypeEnum(1, "branch_gen.__typeimpenum18", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FETCH", "EXECUTE", "WB"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(2, "control_unit.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "REQUEST", "WAIT4ACK"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(3, "memory.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_soc___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_soc___024root__traceDeclTypesSub0(tracep);
}
