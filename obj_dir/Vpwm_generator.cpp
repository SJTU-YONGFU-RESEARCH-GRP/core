// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpwm_generator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpwm_generator::Vpwm_generator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpwm_generator__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , duty_cycle{vlSymsp->TOP.duty_cycle}
    , period{vlSymsp->TOP.period}
    , pwm_out{vlSymsp->TOP.pwm_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpwm_generator::Vpwm_generator(const char* _vcname__)
    : Vpwm_generator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpwm_generator::~Vpwm_generator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpwm_generator___024root___eval_debug_assertions(Vpwm_generator___024root* vlSelf);
#endif  // VL_DEBUG
void Vpwm_generator___024root___eval_static(Vpwm_generator___024root* vlSelf);
void Vpwm_generator___024root___eval_initial(Vpwm_generator___024root* vlSelf);
void Vpwm_generator___024root___eval_settle(Vpwm_generator___024root* vlSelf);
void Vpwm_generator___024root___eval(Vpwm_generator___024root* vlSelf);

void Vpwm_generator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpwm_generator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpwm_generator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpwm_generator___024root___eval_static(&(vlSymsp->TOP));
        Vpwm_generator___024root___eval_initial(&(vlSymsp->TOP));
        Vpwm_generator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpwm_generator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpwm_generator::eventsPending() { return false; }

uint64_t Vpwm_generator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpwm_generator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpwm_generator___024root___eval_final(Vpwm_generator___024root* vlSelf);

VL_ATTR_COLD void Vpwm_generator::final() {
    Vpwm_generator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpwm_generator::hierName() const { return vlSymsp->name(); }
const char* Vpwm_generator::modelName() const { return "Vpwm_generator"; }
unsigned Vpwm_generator::threads() const { return 1; }
void Vpwm_generator::prepareClone() const { contextp()->prepareClone(); }
void Vpwm_generator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpwm_generator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpwm_generator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpwm_generator___024root__trace_init_top(Vpwm_generator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpwm_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpwm_generator___024root*>(voidSelf);
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpwm_generator___024root__trace_decl_types(tracep);
    Vpwm_generator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpwm_generator___024root__trace_register(Vpwm_generator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpwm_generator::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpwm_generator::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpwm_generator___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
