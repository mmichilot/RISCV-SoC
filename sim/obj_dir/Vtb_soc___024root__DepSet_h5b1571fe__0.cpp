// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc.h for the primary calling header

#include "Vtb_soc__pch.h"
#include "Vtb_soc___024root.h"

void Vtb_soc___024root___eval_act(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_act\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_soc___024root___nba_sequent__TOP__0(Vtb_soc___024root* vlSelf);
void Vtb_soc___024root___nba_sequent__TOP__1(Vtb_soc___024root* vlSelf);
void Vtb_soc___024root___nba_sequent__TOP__2(Vtb_soc___024root* vlSelf);
void Vtb_soc___024root___nba_comb__TOP__0(Vtb_soc___024root* vlSelf);

void Vtb_soc___024root___eval_nba(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_nba\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_soc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_soc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_soc___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtb_soc___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_soc___024root___nba_sequent__TOP__0(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___nba_sequent__TOP__0\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_soc__DOT__cycleCnt;
    __Vdly__tb_soc__DOT__cycleCnt = 0;
    // Body
    __Vdly__tb_soc__DOT__cycleCnt = vlSelfRef.tb_soc__DOT__cycleCnt;
    __Vdly__tb_soc__DOT__cycleCnt = ((IData)(1U) + vlSelfRef.tb_soc__DOT__cycleCnt);
    if (VL_UNLIKELY(((0x30d40U == vlSelfRef.tb_soc__DOT__cycleCnt)))) {
        VL_WRITEF_NX("Max cycle count reached, terminating...\n",0);
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_start = 0U;
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__fp 
            = VL_FOPEN_NN(std::string{"memdump"}, std::string{"w"});
        ;
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_end = 0x2000U;
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i, vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_end)) {
            VL_FWRITEF_NX(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__fp,"%08x\n",0,
                          32,vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem
                          [(0x1fffU & vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i)]);
            vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i);
        }
        VL_FINISH_MT("tb_soc.sv", 46, "");
    }
    if (VL_UNLIKELY(((((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
                         & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o)) 
                        & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o)) 
                       & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                          == vlSelfRef.mem_mailbox)) 
                      & ((0xffU == (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o)) 
                         | (1U == (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o))))))) {
        VL_WRITEF_NX("SIMULATION FINISHED\n",0);
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_start = 0U;
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__fp 
            = VL_FOPEN_NN(std::string{"memdump"}, std::string{"w"});
        ;
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_end = 0x2000U;
        vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i, vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_end)) {
            VL_FWRITEF_NX(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__fp,"%08x\n",0,
                          32,vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem
                          [(0x1fffU & vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i)]);
            vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i);
        }
        VL_FINISH_MT("tb_soc.sv", 52, "");
    }
    vlSelfRef.tb_soc__DOT__cycleCnt = __Vdly__tb_soc__DOT__cycleCnt;
}

extern const VlUnpacked<CData/*0:0*/, 4> Vtb_soc__ConstPool__TABLE_h6ef0a82c_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_soc__ConstPool__TABLE_h6e5c89b1_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_soc__ConstPool__TABLE_h972ecedf_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtb_soc__ConstPool__TABLE_h42ded2fd_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_soc__ConstPool__TABLE_hce6cb327_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_soc__ConstPool__TABLE_hf9f88e0d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_soc__ConstPool__TABLE_hca0ce0e6_0;

VL_INLINE_OPT void Vtb_soc___024root___nba_sequent__TOP__1(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___nba_sequent__TOP__1\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*1:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req;
    __Vdly__tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__soc__DOT__sram_ack_o;
    __Vdly__tb_soc__DOT__soc__DOT__sram_ack_o = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__soc__DOT__led_ack_o;
    __Vdly__tb_soc__DOT__soc__DOT__led_ack_o = 0;
    IData/*31:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0;
    __VdlyVal__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0;
    __VdlyDim0__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0;
    __VdlySet__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0;
    __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0;
    __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1;
    __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1;
    __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2;
    __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2;
    __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3;
    __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3;
    __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0;
    __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1;
    __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2;
    __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3;
    __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3 = 0;
    // Body
    __Vdly__tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0 = 0U;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1 = 0U;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2 = 0U;
    __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3 = 0U;
    __Vdly__tb_soc__DOT__soc__DOT__led_ack_o = vlSelfRef.tb_soc__DOT__soc__DOT__led_ack_o;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0 = 0U;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1 = 0U;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2 = 0U;
    __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3 = 0U;
    __Vdly__tb_soc__DOT__soc__DOT__sram_ack_o = vlSelfRef.tb_soc__DOT__soc__DOT__sram_ack_o;
    __VdlySet__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0 = 0U;
    if ((((0U != (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state)) 
          & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__mem_request))) 
         & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i)))) {
        __Vdly__tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req = 1U;
    } else if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req) 
                & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i))) {
        __Vdly__tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req = 0U;
    }
    if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_write) 
         & (0U != (0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                            >> 7U))))) {
        __VdlyVal__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0 
            = ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                    ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata
                    : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__data)
                : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                    ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out
                    : ((IData)(4U) + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)));
        __VdlyDim0__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0 
            = (0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                        >> 7U));
        __VdlySet__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0 = 1U;
    }
    __Vdly__tb_soc__DOT__soc__DOT__led_ack_o = 0U;
    if ((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
          & ((~ (IData)((0U != (0x2010000U ^ (0xfffffffcU 
                                              & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o))) 
         & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__led_ack_o)))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_soc__DOT__soc__DOT__led_dat_o 
            = (((vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register
                 [3U] << 0x18U) | (vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register
                                   [2U] << 0x10U)) 
               | ((vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register
                   [1U] << 8U) | vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register
                  [0U]));
        __Vdly__tb_soc__DOT__soc__DOT__led_ack_o = 1U;
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0 
                = (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o);
            __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0 = 1U;
        }
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
                >> 1U))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1 
                = (0xffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o 
                            >> 8U));
            __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1 = 1U;
        }
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
                >> 2U))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2 
                = (0xffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o 
                            >> 0x10U));
            __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2 = 1U;
        }
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
                >> 3U))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3 
                = (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o 
                   >> 0x18U);
            __VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3 = 1U;
        }
    }
    __Vdly__tb_soc__DOT__soc__DOT__sram_ack_o = 0U;
    if ((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
          & ((~ (IData)((0U != (0x80000000U ^ (0xffff8000U 
                                               & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o))) 
         & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__sram_ack_o)))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_soc__DOT__soc__DOT__sram_dat_o 
            = vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem
            [(0x1fffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                         >> 2U))];
        __Vdly__tb_soc__DOT__soc__DOT__sram_ack_o = 1U;
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0 
                = (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o);
            __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0 
                = (0x1fffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                              >> 2U));
            __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0 = 1U;
        }
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
                >> 1U))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1 
                = (0xffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o 
                            >> 8U));
            __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1 
                = (0x1fffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                              >> 2U));
            __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1 = 1U;
        }
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
                >> 2U))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2 
                = (0xffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o 
                            >> 0x10U));
            __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2 
                = (0x1fffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                              >> 2U));
            __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2 = 1U;
        }
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o) 
             & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
                >> 3U))) {
            __VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3 
                = (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o 
                   >> 0x18U);
            __VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3 
                = (0x1fffU & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                              >> 2U));
            __VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3 = 1U;
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req 
        = __Vdly__tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req;
    if (__VdlySet__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0) {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[__VdlyDim0__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0] 
            = __VdlyVal__tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs__v0;
    }
    if (__VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0) {
        vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[0U] 
            = __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v0;
    }
    if (__VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1) {
        vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[1U] 
            = __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v1;
    }
    if (__VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2) {
        vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[2U] 
            = __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v2;
    }
    if (__VdlySet__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3) {
        vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[3U] 
            = __VdlyVal__tb_soc__DOT__soc__DOT__led_driver__DOT__register__v3;
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__led_ack_o = __Vdly__tb_soc__DOT__soc__DOT__led_ack_o;
    if (__VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0) {
        vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem[__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem
                [__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v0));
    }
    if (__VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1) {
        vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem[__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem
                [__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2) {
        vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem[__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem
                [__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3) {
        vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem[__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem
                [__VdlyDim0__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_soc__DOT__soc__DOT__sram__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__sram_ack_o = __Vdly__tb_soc__DOT__soc__DOT__sram_ack_o;
    if (vlSelfRef.rst_n) {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__next_state;
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_read))) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__data 
                = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__data_next;
        }
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read))) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                = vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i;
        }
    } else {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__data = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst = 0U;
    }
    __Vtableidx7 = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state;
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o = Vtb_soc__ConstPool__TABLE_h6ef0a82c_0
        [__Vtableidx7];
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o = Vtb_soc__ConstPool__TABLE_h6e5c89b1_0
        [__Vtableidx7];
    __Vtableidx3 = (0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst);
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src 
        = Vtb_soc__ConstPool__TABLE_h972ecedf_0[__Vtableidx3];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op 
        = ((0x40U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
            ? 0U : ((0x20U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                     ? ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                         ? ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                             ? 0U : ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                      ? 0U : ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                               ? ((1U 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                   ? 
                                                  ((8U 
                                                    & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                       >> 0x1bU)) 
                                                   | (7U 
                                                      & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                         >> 0xcU)))
                                                   : 0U)
                                               : 0U)))
                         : 0U) : ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                   ? ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                       ? 0U : ((4U 
                                                & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                     ? 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((8U 
                                                       & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                          >> 0x1bU)) 
                                                      | (7U 
                                                         & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                            >> 0xcU)))
                                                      : 
                                                     (7U 
                                                      & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                         >> 0xcU)))
                                                     : 0U)
                                                    : 0U)))
                                   : 0U)));
    __Vtableidx1 = (0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst);
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type 
        = Vtb_soc__ConstPool__TABLE_h42ded2fd_0[__Vtableidx1];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data 
        = ((0U == (0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                            >> 0x14U))) ? 0U : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs
           [(0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                      >> 0x14U))]);
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data 
        = ((0U == (0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                            >> 0xfU))) ? 0U : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs
           [(0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                      >> 0xfU))]);
    __Vtableidx2 = (0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst);
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_src 
        = Vtb_soc__ConstPool__TABLE_hce6cb327_0[__Vtableidx2];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_src 
        = Vtb_soc__ConstPool__TABLE_hf9f88e0d_0[__Vtableidx2];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata 
        = ((0x4000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
            ? (0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                        >> 0xfU)) : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data);
    __Vtableidx5 = ((((0x4000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                       ? ((0x2000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                           ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data 
                              < vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data)
                           : VL_LTS_III(32, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data))
                       : ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                    >> 0xdU))) && (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data 
                                                   == vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data))) 
                     << 3U) | (7U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                     >> 0xcU)));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__take_branch 
        = Vtb_soc__ConstPool__TABLE_hca0ce0e6_0[__Vtableidx5];
    if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_src) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_src) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data 
                = ((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                    ? ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                        ? 0U : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                 ? 0U : VL_EXTENDS_II(32,21, 
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
                            ? (0xfffff000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
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
                                             >> 0x14U)))));
        }
    } else {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data;
    }
}

VL_INLINE_OPT void Vtb_soc___024root___nba_sequent__TOP__2(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___nba_sequent__TOP__2\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip 
            = vlSelfRef.tb_soc__DOT__soc__DOT__interrupts;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state 
            = ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending)
                ? 0U : (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__next_state));
        if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_write) 
             | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out 
                = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_data;
        }
    } else {
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q = 0x1800U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out = 0x80000000U;
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__interrupts = (
                                                   (0xfffffff7U 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__interrupts) 
                                                   | (8U 
                                                      & (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q 
                                                         << 3U)));
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime 
        = (((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q)));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending 
        = ((0U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q 
                   & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip)) 
           & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q 
              >> 3U));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read = 0U;
    if ((0U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read = 1U;
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__interrupts = (
                                                   (0xffffff7fU 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__interrupts) 
                                                   | ((vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime 
                                                       >= 
                                                       (((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q)))) 
                                                      << 7U));
}

extern const VlUnpacked<CData/*2:0*/, 1024> Vtb_soc__ConstPool__TABLE_h353c248b_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_soc__ConstPool__TABLE_ha3611fe4_0;

VL_INLINE_OPT void Vtb_soc___024root___nba_comb__TOP__0(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___nba_comb__TOP__0\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_0;
    tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_0 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata 
        = ((vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                               ? 0U : ((0x20000000U 
                                        & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                        ? ((0x10000000U 
                                            & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                            ? ((0x8000000U 
                                                & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                ? 0U
                                                : (
                                                   (0x4000000U 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                    ? 
                                                   ((0x2000000U 
                                                     & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                      ? 0U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                        ? 
                                                       ((0x200000U 
                                                         & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                          ? 0U
                                                          : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip))
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                         ? 
                                                        ((0x100000U 
                                                          & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                          ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q
                                                          : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q)
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                          ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q
                                                          : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q))))))
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                      ? 
                                                     ((0x800000U 
                                                       & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                          ? 0U
                                                          : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q))))
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                        ? 
                                                       ((0x200000U 
                                                         & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                          ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q
                                                          : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q))
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                                          ? 0x40000100U
                                                          : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q))))))))
                                            : 0U) : 0U)));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_finish = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_break = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_call = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
        = ((0U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_src))
            ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data
            : ((1U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_src))
                ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out
                : 0U));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata 
        = ((1U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                         >> 0xcU))) ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata
            : ((2U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                             >> 0xcU))) ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata 
                                           | vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata)
                : ((3U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                 >> 0xcU))) ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata 
                                               & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata))
                    : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata)));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out 
        = ((8U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
            ? ((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                    ? 0U : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                             ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data, 
                                              (0x1fU 
                                               & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data))
                             : 0U)) : ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                                                 - vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data))))
            : ((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                        ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                           & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data)
                        : (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                           | vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data))
                    : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                        ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                           >> (0x1fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data))
                        : (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                           ^ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data)))
                : ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                        ? ((vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                            < vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data)
                            ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op))
                        ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                           << (0x1fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data))
                        : (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
                           + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data)))));
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_SHIFTL_III(32,32,32, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data, 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out), 3U))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data, 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              (1U 
                                                                               & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out 
                                                                                >> 1U)), 4U))
                                                   : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign = 0U;
    if ((0U != (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
        if ((1U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
            if ((0x40U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((0x20U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                        if ((0U != 
                                             (7U & 
                                              (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                               >> 0xcU)))) {
                                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 1U;
                                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write = 1U;
                                        }
                                        if ((0U == 
                                             (7U & 
                                              (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                               >> 0xcU)))) {
                                            if ((0U 
                                                 != 
                                                 (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                  >> 0x14U))) {
                                                if (
                                                    (1U 
                                                     != 
                                                     (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                      >> 0x14U))) {
                                                    if (
                                                        (0x302U 
                                                         == 
                                                         (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                          >> 0x14U))) {
                                                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_finish = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     == 
                                                     (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                      >> 0x14U))) {
                                                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_break = 1U;
                                                }
                                            }
                                            if ((0U 
                                                 == 
                                                 (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                  >> 0x14U))) {
                                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_call = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        } else if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                if ((0U == (7U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                  >> 0xcU)))) {
                                    if ((0U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                >> 0x14U))) {
                                        if ((1U != 
                                             (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                              >> 0x14U))) {
                                            if ((0x302U 
                                                 != 
                                                 (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                  >> 0x14U))) {
                                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                            }
                        } else {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        }
                    } else if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 1U;
                                }
                                if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                                }
                            } else {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                            }
                        } else {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        }
                    } else if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 1U;
                            }
                            if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                            }
                        } else {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        }
                    } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        }
                    } else {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                    }
                    if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                  >> 4U)))) {
                        if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign 
                                            = (0U != 
                                               (3U 
                                                & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out));
                                    }
                                }
                            }
                        } else if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign 
                                        = (1U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out 
                                                 >> 1U));
                                }
                            }
                        } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign 
                                    = ((0U != (3U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out)) 
                                       & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__take_branch));
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                }
            } else if ((0x20U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                  >> 3U)))) {
                        if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 1U;
                            }
                        }
                    }
                    if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                    } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        }
                    } else {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                    }
                } else if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                } else if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                    }
                } else {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                }
            } else if ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                              >> 3U)))) {
                    if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 1U;
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                    }
                } else {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                }
            } else if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                        }
                    } else {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                    }
                } else {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                }
            } else if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
            } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))) {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
                }
            } else {
                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                          >> 6U)))) {
                if ((0x20U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write = 1U;
                                        if ((2U == 
                                             (3U & 
                                              (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                               >> 0xcU)))) {
                                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign 
                                                = (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out));
                                        } else if (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                        >> 0xcU)))) {
                                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign 
                                                = (1U 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                              >> 5U)))) {
                    if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read = 1U;
                                        if ((2U == 
                                             (3U & 
                                              (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                               >> 0xcU)))) {
                                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign 
                                                = (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out));
                                        } else if (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                        >> 0xcU)))) {
                                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign 
                                                = (1U 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 1U;
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_pending 
        = ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst) 
           | ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign) 
              | ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign) 
                 | ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign) 
                    | ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_break) 
                       | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_call))))));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 0x13U;
    if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending) {
        if ((0x800U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip)) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 0xbU;
        } else if ((0x80U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip)) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 7U;
        } else if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip)) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 3U;
        }
    } else if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_pending) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 2U;
        } else if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 0U;
        } else if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_call) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 0xbU;
        } else if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_break) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 3U;
        } else if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 4U;
        } else if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = 6U;
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending 
        = ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending) 
           | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_pending));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause 
        = (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending) 
            << 0x1fU) | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_write 
        = ((1U & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))) 
           && (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write));
    __Vtableidx4 = (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__take_branch) 
                     << 9U) | ((0x1fcU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          << 2U)) | 
                               (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_finish) 
                                 << 1U) | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src 
        = Vtb_soc__ConstPool__TABLE_h353c248b_0[__Vtableidx4];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write 
        = ((1U & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))) 
           && (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read 
        = ((1U & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))) 
           && (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_write 
        = ((1U & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))) 
           && (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_read 
        = ((1U & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))) 
           && (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_data 
        = ((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
            ? ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                ? ((IData)(4U) + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)
                : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                    ? ((IData)(4U) + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)
                    : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q))
            : ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                    ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q
                    : (0xfffffffeU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out))
                : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
                    ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out
                    : ((IData)(4U) + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out))));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q;
    if (((((((((0x305U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                           >> 0x14U)) | (0x310U == 
                                         (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 0x14U))) 
              | (0x340U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                            >> 0x14U))) | (0x300U == 
                                           (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                            >> 0x14U))) 
            | (0x341U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                          >> 0x14U))) | (0x342U == 
                                         (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 0x14U))) 
          | (0x343U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                        >> 0x14U))) | (0x304U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                  >> 0x14U)))) {
        if ((0x305U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                        >> 0x14U))) {
            if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_n 
                    = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
            }
        }
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q;
        if ((0x305U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                        >> 0x14U))) {
            if ((0x310U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                            >> 0x14U))) {
                if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_n 
                        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
                }
            }
            if ((0x310U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                            >> 0x14U))) {
                if ((0x340U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                >> 0x14U))) {
                    if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_n 
                            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
                    }
                }
                if ((0x340U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                >> 0x14U))) {
                    if ((0x300U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                    >> 0x14U))) {
                        if ((0x341U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                        >> 0x14U))) {
                            if ((0x342U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                            >> 0x14U))) {
                                if ((0x343U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                >> 0x14U))) {
                                    if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_n 
                                            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
                                    }
                                }
                                if ((0x343U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                                >> 0x14U))) {
                                    if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n 
                                            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
                                    }
                                }
                            }
                            if ((0x342U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                            >> 0x14U))) {
                                if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n 
                                        = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
                                }
                            }
                        }
                        if ((0x341U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                        >> 0x14U))) {
                            if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n 
                                    = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
                            }
                        }
                    }
                    if ((0x300U == (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                    >> 0x14U))) {
                        if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n 
                                = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q;
    }
    if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending) {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n 
            = (0xfffffff7U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n);
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n 
            = ((0xffffff7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n) 
               | (0x80U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q 
                           << 4U)));
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out;
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n 
            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause;
        if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause)) {
                        if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause))) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n 
                                = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out;
                        }
                    } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause)) {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n 
                            = ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause)
                                ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out
                                : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst);
                    } else if ((1U & (~ vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause))) {
                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n 
                            = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out;
                    }
                }
            }
        }
    } else if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_finish) {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n 
            = ((0xfffffff7U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n) 
               | (8U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q 
                        >> 4U)));
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n 
            = (0x80U | vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n);
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o = ((1U 
                                                 & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read))) 
                                                && (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_read) 
                                                     | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_write)) 
                                                    && (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_write)));
    if (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read) {
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o = 0xfU;
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out;
    } else if (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_read) 
                | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_write))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o = 
            (0xfU & ((0U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                   >> 0xcU))) ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out))
                      : ((1U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                       >> 0xcU))) ? 
                         ((IData)(3U) << (3U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out))
                          : ((2U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                           >> 0xcU)))
                              ? 0xfU : 0U))));
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out;
    } else {
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o = 0U;
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o = 0U;
    }
    tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_0 
        = ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_read) 
           | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_write));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__mem_request 
        = ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read) 
           | (IData)(tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_0));
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i = 0U;
    if ((1U & (~ (IData)((0U != (0x80000000U ^ (0xffff8000U 
                                                & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i = vlSelfRef.tb_soc__DOT__soc__DOT__sram_dat_o;
    }
    if ((1U & (~ (IData)((0U != (0x2000000U ^ (0xffff0000U 
                                               & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i = 
            ((0U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
              ? (1U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q)
              : ((0x4000U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                  ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q
                  : ((0x4004U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                      ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q
                      : ((0xbff8U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                          ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q
                          : ((0xbffcU == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                              ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q
                              : 0U)))));
    }
    if ((1U & (~ (IData)((0U != (0x2010000U ^ (0xfffffffcU 
                                               & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i = vlSelfRef.tb_soc__DOT__soc__DOT__led_dat_o;
    }
    vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i 
        = ((~ (IData)((0U != (0x2000000U ^ (0xffff0000U 
                                            & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
           & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o));
    if ((0x4000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
        if ((0x4000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__data_next 
                = ((0U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                 >> 0xcU))) ? (0xffU 
                                               & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, 
                                                                   (3U 
                                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out), 3U))))
                    : ((1U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                     >> 0xcU))) ? (0xffffU 
                                                   & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (3U 
                                                                        & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out), 3U))))
                        : vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i));
        }
    } else {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__data_next 
            = ((0U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                             >> 0xcU))) ? VL_EXTENDS_II(32,8, 
                                                        (0xffU 
                                                         & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out), 3U)))))
                : ((1U == (3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                 >> 0xcU))) ? VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i 
                                                                >> 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out), 3U)))))
                    : vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i));
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n 
        = vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q;
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n 
        = (IData)(((1ULL + vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime) 
                   >> 0x20U));
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n 
        = ((IData)(1U) + vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q);
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we 
        = ((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i)) 
            & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o)) 
           & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o));
    if ((0U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n 
                = ((0xfffffffeU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n) 
                   | (1U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4000U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n 
                = ((0xffffff00U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n) 
                   | (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4004U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n 
                = ((0xffffff00U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n) 
                   | (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbff8U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n 
                = ((0xffffff00U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n) 
                   | (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbffcU == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n 
                = ((0xffffff00U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n) 
                   | (0xffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we 
        = ((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i)) 
            & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o)) 
           & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
              >> 1U));
    if ((0U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n 
                = ((0xfffffffeU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n) 
                   | (1U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4000U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n 
                = ((0xffff00ffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n) 
                   | (0xff00U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4004U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n 
                = ((0xffff00ffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n) 
                   | (0xff00U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbff8U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n 
                = ((0xffff00ffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n) 
                   | (0xff00U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbffcU == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n 
                = ((0xffff00ffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n) 
                   | (0xff00U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we 
        = ((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i)) 
            & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o)) 
           & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
              >> 2U));
    if ((0U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n 
                = ((0xfffffffeU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n) 
                   | (1U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4000U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n 
                = ((0xff00ffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n) 
                   | (0xff0000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4004U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n 
                = ((0xff00ffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n) 
                   | (0xff0000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbff8U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n 
                = ((0xff00ffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n) 
                   | (0xff0000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbffcU == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n 
                = ((0xff00ffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n) 
                   | (0xff0000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we 
        = ((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i)) 
            & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o)) 
           & ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o) 
              >> 3U));
    if ((0U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n 
                = ((0xfffffffeU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n) 
                   | (1U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4000U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n 
                = ((0xffffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n) 
                   | (0xff000000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0x4004U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n 
                = ((0xffffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n) 
                   | (0xff000000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbff8U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n 
                = ((0xffffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n) 
                   | (0xff000000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    } else if ((0xbffcU == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))) {
        if (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we) {
            vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n 
                = ((0xffffffU & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n) 
                   | (0xff000000U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o));
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i = (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
                                                  & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i)) 
                                                 | ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__led_ack_o) 
                                                    | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__sram_ack_o)));
    __Vtableidx6 = (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i) 
                     << 3U) | (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__mem_request) 
                                << 2U) | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state)));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__next_state 
        = Vtb_soc__ConstPool__TABLE_ha3611fe4_0[__Vtableidx6];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1 
        = ((~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req)) 
           & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready 
        = ((IData)(tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_0) 
           & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))
            ? (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read) 
                & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))
                               ? ((3U == (0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))
                                   ? ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready)
                                       ? 2U : 1U) : 
                                  ((0x23U == (0x7fU 
                                              & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))
                                    ? ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready)
                                        ? 0U : 1U) : 0U))
                               : 0U));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 0U;
    if ((0U != (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
        if ((1U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
            if ((0x40U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((0x20U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
                        }
                    }
                }
            } else if ((0x20U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                  >> 3U)))) {
                        if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                                vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write 
                                    = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready;
                            }
                        }
                    }
                }
            } else if ((0x10U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                              >> 3U)))) {
                    if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
                        }
                    }
                }
            } else if ((8U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                if ((4U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                    if ((2U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                        if ((1U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)) {
                            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
            vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = 1U;
        }
    }
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_write 
        = ((1U & (~ (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))) 
           && (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write));
}

void Vtb_soc___024root___eval_triggers__act(Vtb_soc___024root* vlSelf);

bool Vtb_soc___024root___eval_phase__act(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_phase__act\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_soc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_soc___024root___eval_phase__nba(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_phase__nba\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_soc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__nba(Vtb_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__act(Vtb_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_soc___024root___eval(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_soc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_soc.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_soc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_soc.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_soc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_soc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_soc___024root___eval_debug_assertions(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_debug_assertions\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
