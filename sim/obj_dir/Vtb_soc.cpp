// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_soc__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtb_soc::Vtb_soc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_soc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , mem_mailbox{vlSymsp->TOP.mem_mailbox}
    , firmware_file{vlSymsp->TOP.firmware_file}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_soc::Vtb_soc(const char* _vcname__)
    : Vtb_soc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_soc::~Vtb_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_soc___024root___eval_debug_assertions(Vtb_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_soc___024root___eval_static(Vtb_soc___024root* vlSelf);
void Vtb_soc___024root___eval_initial(Vtb_soc___024root* vlSelf);
void Vtb_soc___024root___eval_settle(Vtb_soc___024root* vlSelf);
void Vtb_soc___024root___eval(Vtb_soc___024root* vlSelf);

void Vtb_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_soc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_soc___024root___eval_static(&(vlSymsp->TOP));
        Vtb_soc___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_soc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_soc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_soc::eventsPending() { return false; }

uint64_t Vtb_soc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_soc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_soc___024root___eval_final(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc::final() {
    Vtb_soc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_soc::hierName() const { return vlSymsp->name(); }
const char* Vtb_soc::modelName() const { return "Vtb_soc"; }
unsigned Vtb_soc::threads() const { return 1; }
void Vtb_soc::prepareClone() const { contextp()->prepareClone(); }
void Vtb_soc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_soc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_soc___024root__trace_decl_types(VerilatedFst* tracep);

void Vtb_soc___024root__trace_init_top(Vtb_soc___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc___024root*>(voidSelf);
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_soc___024root__trace_decl_types(tracep);
    Vtb_soc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_soc___024root__trace_register(Vtb_soc___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_soc::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_soc::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_soc___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
