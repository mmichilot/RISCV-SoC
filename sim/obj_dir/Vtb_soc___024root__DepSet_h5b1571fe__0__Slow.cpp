// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc.h for the primary calling header

#include "Vtb_soc__pch.h"
#include "Vtb_soc___024root.h"

VL_ATTR_COLD void Vtb_soc___024root___eval_static__TOP(Vtb_soc___024root* vlSelf);
VL_ATTR_COLD void Vtb_soc___024root____Vm_traceActivitySetAll(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc___024root___eval_static(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_static\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_soc___024root___eval_static__TOP(vlSelf);
    Vtb_soc___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_soc___024root___eval_static__TOP(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_static__TOP\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_soc__DOT__cycleCnt = 0U;
}

VL_ATTR_COLD void Vtb_soc___024root___eval_initial__TOP(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc___024root___eval_initial(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_initial\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_soc___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

extern const VlWide<15>/*479:0*/ Vtb_soc__ConstPool__CONST_h6136e1ab_0;

VL_ATTR_COLD void Vtb_soc___024root___eval_initial__TOP(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_initial__TOP\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Memory Mailbox: 0x%08x\n\nSIMULATION START\n",0,
                 32,vlSelfRef.mem_mailbox);
    VL_READMEM_N(true, 32, 8192, 0, VL_CVT_PACK_STR_NW(15, Vtb_soc__ConstPool__CONST_h6136e1ab_0)
                 ,  &(vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_soc___024root___eval_final(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_final\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__stl(Vtb_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_soc___024root___eval_phase__stl(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc___024root___eval_settle(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_settle\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_soc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_soc.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_soc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__stl(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___dump_triggers__stl\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_soc___024root___stl_sequent__TOP__0(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc___024root___eval_stl(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_stl\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_soc___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtb_soc__ConstPool__TABLE_h972ecedf_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_soc__ConstPool__TABLE_h6ef0a82c_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_soc__ConstPool__TABLE_h6e5c89b1_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtb_soc__ConstPool__TABLE_h42ded2fd_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_soc__ConstPool__TABLE_hce6cb327_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_soc__ConstPool__TABLE_hf9f88e0d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_soc__ConstPool__TABLE_hca0ce0e6_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtb_soc__ConstPool__TABLE_h353c248b_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_soc__ConstPool__TABLE_ha3611fe4_0;

VL_ATTR_COLD void Vtb_soc___024root___stl_sequent__TOP__0(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___stl_sequent__TOP__0\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_0;
    tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*1:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.tb_soc__DOT__soc__DOT__interrupts = (
                                                   (0xfffffff7U 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__interrupts) 
                                                   | (8U 
                                                      & (vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q 
                                                         << 3U)));
    __Vtableidx3 = (0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst);
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src 
        = Vtb_soc__ConstPool__TABLE_h972ecedf_0[__Vtableidx3];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_finish = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime 
        = (((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q)));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write = 0U;
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
    __Vtableidx7 = vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state;
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o = Vtb_soc__ConstPool__TABLE_h6ef0a82c_0
        [__Vtableidx7];
    vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o = Vtb_soc__ConstPool__TABLE_h6e5c89b1_0
        [__Vtableidx7];
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending 
        = ((0U != (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q 
                   & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip)) 
           & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q 
              >> 3U));
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_break = 0U;
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_call = 0U;
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
    vlSelfRef.tb_soc__DOT__soc__DOT__interrupts = (
                                                   (0xffffff7fU 
                                                    & vlSelfRef.tb_soc__DOT__soc__DOT__interrupts) 
                                                   | ((vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime 
                                                       >= 
                                                       (((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q)))) 
                                                      << 7U));
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
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data 
        = ((0U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_src))
            ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data
            : ((1U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_src))
                ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out
                : 0U));
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
    vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata 
        = ((0x4000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
            ? (0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                        >> 0xfU)) : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data);
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
    if ((0U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))) {
        vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read = 1U;
    }
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
    vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i 
        = ((~ (IData)((0U != (0x2000000U ^ (0xffff0000U 
                                            & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
           & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o));
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

VL_ATTR_COLD void Vtb_soc___024root___eval_triggers__stl(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD bool Vtb_soc___024root___eval_phase__stl(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_phase__stl\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_soc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__act(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___dump_triggers__act\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__nba(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___dump_triggers__nba\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_soc___024root____Vm_traceActivitySetAll(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root____Vm_traceActivitySetAll\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_soc___024root___ctor_var_reset(Vtb_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___ctor_var_reset\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->mem_mailbox = 0;
    vlSelf->tb_soc__DOT__cycleCnt = 0;
    vlSelf->tb_soc__DOT__dump_memory__Vstatic__fp = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__dump_memory__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__dump_memory__Vstatic__mem_start = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__dump_memory__Vstatic__mem_end = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__interrupts = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__wb_cyc_o = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__wb_stb_o = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__wb_we_o = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__wb_ack_i = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__wb_sel_o = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__soc__DOT__wb_adr_o = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__wb_dat_o = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__sram_ack_o = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__sram_dat_o = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__led_ack_o = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__led_dat_o = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__imem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__dmem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__dmem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__dmem_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__illegal_inst = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__env_call = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__env_break = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__trap_finish = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__alu_b_src = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__alu_a_src = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__reg_src = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__pc_src = VL_RAND_RESET_I(3);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__immed_type = VL_RAND_RESET_I(3);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__pc_data = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__alu_a_data = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__alu_b_data = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__trap_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__trap_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__branch_gen__DOT__branch_func_e = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code = VL_RAND_RESET_I(5);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__mem_request = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__data_next = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_soc__DOT__soc__DOT__sram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_soc__DOT__soc__DOT__sram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__msip_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__msip_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtime_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtime_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_soc__DOT__soc__DOT__led_driver__DOT__register[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_soc__DOT__soc__DOT__led_driver__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
