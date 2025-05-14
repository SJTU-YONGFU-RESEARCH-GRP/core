// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varbiter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Varbiter::Varbiter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varbiter__Syms(contextp(), _vcname__, this)}
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

Varbiter::Varbiter(const char* _vcname__)
    : Varbiter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varbiter::~Varbiter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varbiter___024root___eval_debug_assertions(Varbiter___024root* vlSelf);
#endif  // VL_DEBUG
void Varbiter___024root___eval_static(Varbiter___024root* vlSelf);
void Varbiter___024root___eval_initial(Varbiter___024root* vlSelf);
void Varbiter___024root___eval_settle(Varbiter___024root* vlSelf);
void Varbiter___024root___eval(Varbiter___024root* vlSelf);

void Varbiter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varbiter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varbiter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varbiter___024root___eval_static(&(vlSymsp->TOP));
        Varbiter___024root___eval_initial(&(vlSymsp->TOP));
        Varbiter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varbiter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Varbiter::eventsPending() { return false; }

uint64_t Varbiter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Varbiter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varbiter___024root___eval_final(Varbiter___024root* vlSelf);

VL_ATTR_COLD void Varbiter::final() {
    Varbiter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varbiter::hierName() const { return vlSymsp->name(); }
const char* Varbiter::modelName() const { return "Varbiter"; }
unsigned Varbiter::threads() const { return 1; }
void Varbiter::prepareClone() const { contextp()->prepareClone(); }
void Varbiter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Varbiter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Varbiter___024root__trace_decl_types(VerilatedVcd* tracep);

void Varbiter___024root__trace_init_top(Varbiter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Varbiter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varbiter___024root*>(voidSelf);
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Varbiter___024root__trace_decl_types(tracep);
    Varbiter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Varbiter___024root__trace_register(Varbiter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Varbiter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Varbiter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Varbiter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
