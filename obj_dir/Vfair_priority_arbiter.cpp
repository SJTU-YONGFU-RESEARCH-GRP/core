// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfair_priority_arbiter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfair_priority_arbiter::Vfair_priority_arbiter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfair_priority_arbiter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , request{vlSymsp->TOP.request}
    , priorities{vlSymsp->TOP.priorities}
    , grant{vlSymsp->TOP.grant}
    , grant_idx{vlSymsp->TOP.grant_idx}
    , valid{vlSymsp->TOP.valid}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfair_priority_arbiter::Vfair_priority_arbiter(const char* _vcname__)
    : Vfair_priority_arbiter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfair_priority_arbiter::~Vfair_priority_arbiter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfair_priority_arbiter___024root___eval_debug_assertions(Vfair_priority_arbiter___024root* vlSelf);
#endif  // VL_DEBUG
void Vfair_priority_arbiter___024root___eval_static(Vfair_priority_arbiter___024root* vlSelf);
void Vfair_priority_arbiter___024root___eval_initial(Vfair_priority_arbiter___024root* vlSelf);
void Vfair_priority_arbiter___024root___eval_settle(Vfair_priority_arbiter___024root* vlSelf);
void Vfair_priority_arbiter___024root___eval(Vfair_priority_arbiter___024root* vlSelf);

void Vfair_priority_arbiter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfair_priority_arbiter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfair_priority_arbiter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfair_priority_arbiter___024root___eval_static(&(vlSymsp->TOP));
        Vfair_priority_arbiter___024root___eval_initial(&(vlSymsp->TOP));
        Vfair_priority_arbiter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfair_priority_arbiter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfair_priority_arbiter::eventsPending() { return false; }

uint64_t Vfair_priority_arbiter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfair_priority_arbiter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfair_priority_arbiter___024root___eval_final(Vfair_priority_arbiter___024root* vlSelf);

VL_ATTR_COLD void Vfair_priority_arbiter::final() {
    Vfair_priority_arbiter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfair_priority_arbiter::hierName() const { return vlSymsp->name(); }
const char* Vfair_priority_arbiter::modelName() const { return "Vfair_priority_arbiter"; }
unsigned Vfair_priority_arbiter::threads() const { return 1; }
void Vfair_priority_arbiter::prepareClone() const { contextp()->prepareClone(); }
void Vfair_priority_arbiter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfair_priority_arbiter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfair_priority_arbiter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfair_priority_arbiter___024root__trace_init_top(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfair_priority_arbiter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfair_priority_arbiter___024root*>(voidSelf);
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfair_priority_arbiter___024root__trace_decl_types(tracep);
    Vfair_priority_arbiter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_register(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfair_priority_arbiter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfair_priority_arbiter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfair_priority_arbiter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
