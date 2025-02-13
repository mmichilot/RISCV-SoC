// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_soc__pch.h"
#include "Vtb_soc.h"
#include "Vtb_soc___024root.h"
#include "Vtb_soc___024unit.h"

// FUNCTIONS
Vtb_soc__Syms::~Vtb_soc__Syms()
{
}

Vtb_soc__Syms::Vtb_soc__Syms(VerilatedContext* contextp, const char* namep, Vtb_soc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(128);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
