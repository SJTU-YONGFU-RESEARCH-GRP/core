// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varbiter_rr__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Varbiter_rr::Varbiter_rr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varbiter_rr__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , request{vlSymsp->TOP.request}
    , grant{vlSymsp->TOP.grant}
    , active{vlSymsp->TOP.active}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Varbiter_rr::Varbiter_rr(const char* _vcname__)
    : Varbiter_rr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varbiter_rr::~Varbiter_rr() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varbiter_rr___024root___eval_debug_assertions(Varbiter_rr___024root* vlSelf);
#endif  // VL_DEBUG
void Varbiter_rr___024root___eval_static(Varbiter_rr___024root* vlSelf);
void Varbiter_rr___024root___eval_initial(Varbiter_rr___024root* vlSelf);
void Varbiter_rr___024root___eval_settle(Varbiter_rr___024root* vlSelf);
void Varbiter_rr___024root___eval(Varbiter_rr___024root* vlSelf);

void Varbiter_rr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varbiter_rr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varbiter_rr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varbiter_rr___024root___eval_static(&(vlSymsp->TOP));
        Varbiter_rr___024root___eval_initial(&(vlSymsp->TOP));
        Varbiter_rr___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varbiter_rr___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Varbiter_rr::eventsPending() { return false; }

uint64_t Varbiter_rr::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Varbiter_rr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varbiter_rr___024root___eval_final(Varbiter_rr___024root* vlSelf);

VL_ATTR_COLD void Varbiter_rr::final() {
    Varbiter_rr___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varbiter_rr::hierName() const { return vlSymsp->name(); }
const char* Varbiter_rr::modelName() const { return "Varbiter_rr"; }
unsigned Varbiter_rr::threads() const { return 1; }
void Varbiter_rr::prepareClone() const { contextp()->prepareClone(); }
void Varbiter_rr::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Varbiter_rr::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Varbiter_rr___024root__trace_decl_types(VerilatedVcd* tracep);

void Varbiter_rr___024root__trace_init_top(Varbiter_rr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Varbiter_rr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varbiter_rr___024root*>(voidSelf);
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Varbiter_rr___024root__trace_decl_types(tracep);
    Varbiter_rr___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Varbiter_rr___024root__trace_register(Varbiter_rr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Varbiter_rr::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Varbiter_rr::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Varbiter_rr___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
