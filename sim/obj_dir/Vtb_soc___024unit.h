// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_soc.h for the primary calling header

#ifndef VERILATED_VTB_SOC___024UNIT_H_
#define VERILATED_VTB_SOC___024UNIT_H_  // guard

#include "verilated.h"


class Vtb_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_soc___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_soc___024unit(Vtb_soc__Syms* symsp, const char* v__name);
    ~Vtb_soc___024unit();
    VL_UNCOPYABLE(Vtb_soc___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
