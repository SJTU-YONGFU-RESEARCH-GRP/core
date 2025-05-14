// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconfigurable_clz_clo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconfigurable_clz_clo::Vconfigurable_clz_clo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconfigurable_clz_clo__Syms(contextp(), _vcname__, this)}
    , count_ones{vlSymsp->TOP.count_ones}
    , count_out{vlSymsp->TOP.count_out}
    , all_zeros{vlSymsp->TOP.all_zeros}
    , all_ones{vlSymsp->TOP.all_ones}
    , data_in{vlSymsp->TOP.data_in}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vconfigurable_clz_clo::Vconfigurable_clz_clo(const char* _vcname__)
    : Vconfigurable_clz_clo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconfigurable_clz_clo::~Vconfigurable_clz_clo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconfigurable_clz_clo___024root___eval_debug_assertions(Vconfigurable_clz_clo___024root* vlSelf);
#endif  // VL_DEBUG
void Vconfigurable_clz_clo___024root___eval_static(Vconfigurable_clz_clo___024root* vlSelf);
void Vconfigurable_clz_clo___024root___eval_initial(Vconfigurable_clz_clo___024root* vlSelf);
void Vconfigurable_clz_clo___024root___eval_settle(Vconfigurable_clz_clo___024root* vlSelf);
void Vconfigurable_clz_clo___024root___eval(Vconfigurable_clz_clo___024root* vlSelf);

void Vconfigurable_clz_clo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconfigurable_clz_clo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconfigurable_clz_clo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconfigurable_clz_clo___024root___eval_static(&(vlSymsp->TOP));
        Vconfigurable_clz_clo___024root___eval_initial(&(vlSymsp->TOP));
        Vconfigurable_clz_clo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconfigurable_clz_clo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconfigurable_clz_clo::eventsPending() { return false; }

uint64_t Vconfigurable_clz_clo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconfigurable_clz_clo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconfigurable_clz_clo___024root___eval_final(Vconfigurable_clz_clo___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_clz_clo::final() {
    Vconfigurable_clz_clo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconfigurable_clz_clo::hierName() const { return vlSymsp->name(); }
const char* Vconfigurable_clz_clo::modelName() const { return "Vconfigurable_clz_clo"; }
unsigned Vconfigurable_clz_clo::threads() const { return 1; }
void Vconfigurable_clz_clo::prepareClone() const { contextp()->prepareClone(); }
void Vconfigurable_clz_clo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconfigurable_clz_clo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconfigurable_clz_clo___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconfigurable_clz_clo___024root__trace_init_top(Vconfigurable_clz_clo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconfigurable_clz_clo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_clz_clo___024root*>(voidSelf);
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_clz_clo___024root__trace_decl_types(tracep);
    Vconfigurable_clz_clo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_clz_clo___024root__trace_register(Vconfigurable_clz_clo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconfigurable_clz_clo::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconfigurable_clz_clo::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconfigurable_clz_clo___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
