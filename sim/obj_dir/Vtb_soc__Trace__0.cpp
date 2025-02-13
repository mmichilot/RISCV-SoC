// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_soc__Syms.h"


void Vtb_soc___024root__trace_chg_0_sub_0(Vtb_soc___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_soc___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_chg_0\n"); );
    // Init
    Vtb_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc___024root*>(voidSelf);
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_soc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_soc___024root__trace_chg_0_sub_0(Vtb_soc___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_chg_0_sub_0\n"); );
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_soc__DOT__cycleCnt),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__fp),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__i),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_start),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_soc__DOT__dump_memory__Vstatic__mem_end),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+5,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register
                               [0U]),8);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_soc__DOT__soc__DOT__sram_ack_o));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_soc__DOT__soc__DOT__sram_dat_o),32);
        bufp->chgBit(oldp+10,(vlSelfRef.tb_soc__DOT__soc__DOT__led_ack_o));
        bufp->chgIData(oldp+11,(vlSelfRef.tb_soc__DOT__soc__DOT__led_dat_o),32);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+15,((0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)),7);
        bufp->chgCData(oldp+16,((7U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+17,((vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+18,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_src));
        bufp->chgCData(oldp+19,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_src),2);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src),2);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type),3);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_op),4);
        bufp->chgBit(oldp+23,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__take_branch));
        bufp->chgIData(oldp+24,(((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                  ? ((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                      ? 0U : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__immed_type))
                                               ? 0U
                                               : VL_EXTENDS_II(32,21, 
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
        bufp->chgIData(oldp+25,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_b_data),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__data),32);
        bufp->chgBit(oldp+30,(((0x4000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                ? ((0x2000U & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst)
                                    ? (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data 
                                       < vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data)
                                    : VL_LTS_III(32, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data, vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data))
                                : ((1U & (~ (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                             >> 0xdU))) 
                                   && (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs1_data 
                                       == vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__rs2_data)))));
        bufp->chgSData(oldp+31,((vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgCData(oldp+32,((3U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                       >> 0xcU))),2);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata),32);
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst 
                                     >> 0xeU))));
        bufp->chgCData(oldp+35,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state),2);
        bufp->chgBit(oldp+36,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req));
        bufp->chgIData(oldp+37,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[0]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[1]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[2]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[3]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[4]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[5]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[6]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[7]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[8]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[9]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[10]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[11]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[12]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[13]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[14]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[15]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[16]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[17]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[18]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[19]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[20]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[21]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[22]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[23]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[24]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[25]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[26]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[27]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[28]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[29]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[30]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs[31]),32);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[0]),8);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[1]),8);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[2]),8);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__register[3]),8);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_soc__DOT__soc__DOT__led_driver__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_soc__DOT__soc__DOT__sram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
                               & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i))));
        bufp->chgIData(oldp+76,(((2U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                                  ? ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                                      ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata
                                      : vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__data)
                                  : ((1U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_src))
                                      ? vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out
                                      : ((IData)(4U) 
                                         + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)))),32);
        bufp->chgCData(oldp+77,(((0U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))
                                  ? (((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read) 
                                      & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1))
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state))
                                   ? ((3U == (0x7fU 
                                              & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))
                                       ? ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready)
                                           ? 2U : 1U)
                                       : ((0x23U == 
                                           (0x7fU & vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst))
                                           ? ((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready)
                                               ? 0U
                                               : 1U)
                                           : 0U)) : 0U))),2);
        bufp->chgBit(oldp+78,(((~ (IData)((0U != (0x2010000U 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
                               & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o))));
        bufp->chgBit(oldp+79,(((~ (IData)((0U != (0x80000000U 
                                                  ^ 
                                                  (0xffff8000U 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))) 
                               & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+80,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_o),32);
        bufp->chgBit(oldp+81,((vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime 
                               >= (((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q))))));
        bufp->chgBit(oldp+82,((1U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q)));
        bufp->chgIData(oldp+83,(vlSelfRef.tb_soc__DOT__soc__DOT__interrupts),32);
        bufp->chgBit(oldp+84,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o));
        bufp->chgBit(oldp+85,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_ack_i));
        bufp->chgCData(oldp+86,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_sel_o),4);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_soc__DOT__soc__DOT__wb_dat_i),32);
        bufp->chgIData(oldp+89,(((0U == (0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                  ? (1U & vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q)
                                  : ((0x4000U == (0xffffU 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                      ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q
                                      : ((0x4004U == 
                                          (0xffffU 
                                           & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                          ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q
                                          : ((0xbff8U 
                                              == (0xffffU 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                              ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q
                                              : ((0xbffcU 
                                                  == 
                                                  (0xffffU 
                                                   & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))
                                                  ? vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q
                                                  : 0U)))))),32);
        bufp->chgBit(oldp+90,((1U & (~ (IData)((0U 
                                                != 
                                                (0x80000000U 
                                                 ^ 
                                                 (0xffff8000U 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))));
        bufp->chgBit(oldp+91,((1U & (~ (IData)((0U 
                                                != 
                                                (0x2000000U 
                                                 ^ 
                                                 (0xffff0000U 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))));
        bufp->chgBit(oldp+92,((1U & (~ (IData)((0U 
                                                != 
                                                (0x2010000U 
                                                 ^ 
                                                 (0xfffffffcU 
                                                  & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o))))))));
        bufp->chgBit(oldp+93,(vlSelfRef.tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i));
        bufp->chgSData(oldp+94,((0xffffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o)),16);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_q),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__msip_n),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_q),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime_n),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n),32);
        bufp->chgQData(oldp+105,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtime),64);
        bufp->chgQData(oldp+107,((((QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q)))),64);
        bufp->chgBit(oldp+109,(vlSelfRef.tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we));
        bufp->chgBit(oldp+110,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read));
        bufp->chgBit(oldp+111,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_read));
        bufp->chgBit(oldp+112,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_write));
        bufp->chgBit(oldp+113,(((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__imem_read) 
                                & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1))));
        bufp->chgBit(oldp+114,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__dmem_ready));
        bufp->chgBit(oldp+115,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_write));
        bufp->chgBit(oldp+116,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__reg_write));
        bufp->chgBit(oldp+117,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_write));
        bufp->chgBit(oldp+118,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__illegal_inst));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign));
        bufp->chgBit(oldp+122,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_call));
        bufp->chgBit(oldp+123,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__env_break));
        bufp->chgBit(oldp+124,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_finish));
        bufp->chgCData(oldp+125,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src),3);
        bufp->chgIData(oldp+126,(((4U & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_src))
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
        bufp->chgIData(oldp+127,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out),32);
        bufp->chgIData(oldp+128,(((IData)(4U) + vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_out)),32);
        bufp->chgIData(oldp+129,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_a_data),32);
        bufp->chgIData(oldp+130,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__alu_out),32);
        bufp->chgBit(oldp+131,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending));
        bufp->chgIData(oldp+132,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__mip),32);
        bufp->chgIData(oldp+133,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_cause),32);
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q 
                                      >> 3U))));
        bufp->chgIData(oldp+135,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr_rdata),32);
        bufp->chgIData(oldp+136,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q),32);
        bufp->chgIData(oldp+137,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q),32);
        bufp->chgIData(oldp+138,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q),32);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state),2);
        bufp->chgBit(oldp+140,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write));
        bufp->chgBit(oldp+141,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read));
        bufp->chgBit(oldp+142,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read));
        bufp->chgBit(oldp+144,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write));
        bufp->chgBit(oldp+145,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write));
        bufp->chgIData(oldp+146,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata),32);
        bufp->chgIData(oldp+147,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_n),32);
        bufp->chgIData(oldp+148,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q),32);
        bufp->chgIData(oldp+149,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_n),32);
        bufp->chgIData(oldp+150,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q),32);
        bufp->chgIData(oldp+151,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_n),32);
        bufp->chgIData(oldp+152,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q),32);
        bufp->chgIData(oldp+153,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n),32);
        bufp->chgIData(oldp+154,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n),32);
        bufp->chgIData(oldp+155,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q),32);
        bufp->chgIData(oldp+156,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n),32);
        bufp->chgIData(oldp+157,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q),32);
        bufp->chgIData(oldp+158,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n),32);
        bufp->chgIData(oldp+159,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_n),32);
        bufp->chgBit(oldp+160,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending));
        bufp->chgBit(oldp+161,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_pending));
        bufp->chgCData(oldp+162,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code),5);
        bufp->chgCData(oldp+163,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__next_state),2);
        bufp->chgBit(oldp+164,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__mem_request));
        bufp->chgIData(oldp+165,(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__data_next),32);
        bufp->chgBit(oldp+166,(((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__pc_write) 
                                | (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__core__DOT__trap_pending))));
        bufp->chgCData(oldp+167,((3U & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o)),2);
        bufp->chgSData(oldp+168,((0x7fffU & vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o)),15);
    }
    bufp->chgBit(oldp+169,(vlSelfRef.clk));
    bufp->chgBit(oldp+170,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+171,(vlSelfRef.mem_mailbox),32);
    bufp->chgBit(oldp+172,(((((IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_cyc_o) 
                              & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_stb_o)) 
                             & (IData)(vlSelfRef.tb_soc__DOT__soc__DOT__wb_we_o)) 
                            & (vlSelfRef.tb_soc__DOT__soc__DOT__wb_adr_o 
                               == vlSelfRef.mem_mailbox))));
    bufp->chgBit(oldp+173,((1U & (~ (IData)(vlSelfRef.rst_n)))));
}

void Vtb_soc___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root__trace_cleanup\n"); );
    // Init
    Vtb_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc___024root*>(voidSelf);
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
