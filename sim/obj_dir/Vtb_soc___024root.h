// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_soc.h for the primary calling header

#ifndef VERILATED_VTB_SOC___024ROOT_H_
#define VERILATED_VTB_SOC___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_soc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ tb_soc__DOT__soc__DOT__wb_cyc_o;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__wb_stb_o;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__wb_we_o;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__wb_ack_i;
        CData/*3:0*/ tb_soc__DOT__soc__DOT__wb_sel_o;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__sram_ack_o;
        CData/*0:0*/ tb_soc__DOT__soc__DOT____Vcellinp__clint__wb_stb_i;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__led_ack_o;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__imem_read;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__dmem_read;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__dmem_write;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__dmem_ready;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__pc_write;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__reg_write;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr_write;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__illegal_inst;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__inst_addr_misalign;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__load_addr_misalign;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__store_addr_misalign;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__env_call;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__env_break;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__trap_finish;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__alu_b_src;
        CData/*1:0*/ tb_soc__DOT__soc__DOT__core__DOT__alu_a_src;
        CData/*1:0*/ tb_soc__DOT__soc__DOT__core__DOT__reg_src;
        CData/*2:0*/ tb_soc__DOT__soc__DOT__core__DOT__pc_src;
        CData/*2:0*/ tb_soc__DOT__soc__DOT__core__DOT__immed_type;
        CData/*3:0*/ tb_soc__DOT__soc__DOT__core__DOT__alu_op;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__take_branch;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__trap_pending;
        CData/*1:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__current_state;
        CData/*1:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__next_state;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_pc_write;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_imem_read;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_write;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_dmem_read;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_reg_write;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__control_unit__DOT__s_csr_write;
        CData/*2:0*/ tb_soc__DOT__soc__DOT__core__DOT__branch_gen__DOT__branch_func_e;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__interrupt_pending;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_pending;
        CData/*4:0*/ tb_soc__DOT__soc__DOT__core__DOT__irq_controller__DOT__exception_code;
        CData/*1:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__current_state;
        CData/*1:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__next_state;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__mem_request;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__invalid_req;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT____VdfgRegularize_h192772c8_0_1;
        CData/*0:0*/ tb_soc__DOT__soc__DOT__clint__DOT__setup_reg_write__DOT__unnamedblk1__DOT__we;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(mem_mailbox,31,0);
        IData/*31:0*/ tb_soc__DOT__cycleCnt;
        IData/*31:0*/ tb_soc__DOT__dump_memory__Vstatic__fp;
        IData/*31:0*/ tb_soc__DOT__dump_memory__Vstatic__i;
        IData/*31:0*/ tb_soc__DOT__dump_memory__Vstatic__mem_start;
        IData/*31:0*/ tb_soc__DOT__dump_memory__Vstatic__mem_end;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__interrupts;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__wb_adr_o;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__wb_dat_i;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__wb_dat_o;
    };
    struct {
        IData/*31:0*/ tb_soc__DOT__soc__DOT__sram_dat_o;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__led_dat_o;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__pc_data;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__pc_out;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__rs1_data;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__rs2_data;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__alu_a_data;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__alu_b_data;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__alu_out;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__mip;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__trap_cause;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr_rdata;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT____Vcellinp__csr__csr_wdata;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__inst;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__data;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__s_csr_wdata;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtvec_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatush_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mscratch_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mstatus_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mepc_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mcause_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mtval_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__csr__DOT__mie_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__core__DOT__memory__DOT__data_next;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__sram__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__msip_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__msip_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtime_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtime_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtimeh_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtimecmp_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_q;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtimecmph_n;
        IData/*31:0*/ tb_soc__DOT__soc__DOT__led_driver__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_soc__DOT__soc__DOT__clint__DOT__mtime;
        VlUnpacked<IData/*31:0*/, 32> tb_soc__DOT__soc__DOT__core__DOT__reg_file__DOT__regs;
        VlUnpacked<IData/*31:0*/, 8192> tb_soc__DOT__soc__DOT__sram__DOT__mem;
        VlUnpacked<CData/*7:0*/, 4> tb_soc__DOT__soc__DOT__led_driver__DOT__register;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    std::string firmware_file;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_soc___024root(Vtb_soc__Syms* symsp, const char* v__name);
    ~Vtb_soc___024root();
    VL_UNCOPYABLE(Vtb_soc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
