// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclock_divider__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vclock_divider::Vclock_divider(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclock_divider__Syms(contextp(), _vcname__, this)}
    , clk_in{vlSymsp->TOP.clk_in}
    , rst_n{vlSymsp->TOP.rst_n}
    , div_ratio{vlSymsp->TOP.div_ratio}
    , duty_cycle{vlSymsp->TOP.duty_cycle}
    , clk_out{vlSymsp->TOP.clk_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclock_divider::Vclock_divider(const char* _vcname__)
    : Vclock_divider(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclock_divider::~Vclock_divider() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclock_divider___024root___eval_debug_assertions(Vclock_divider___024root* vlSelf);
#endif  // VL_DEBUG
void Vclock_divider___024root___eval_static(Vclock_divider___024root* vlSelf);
void Vclock_divider___024root___eval_initial(Vclock_divider___024root* vlSelf);
void Vclock_divider___024root___eval_settle(Vclock_divider___024root* vlSelf);
void Vclock_divider___024root___eval(Vclock_divider___024root* vlSelf);

void Vclock_divider::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclock_divider::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclock_divider___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclock_divider___024root___eval_static(&(vlSymsp->TOP));
        Vclock_divider___024root___eval_initial(&(vlSymsp->TOP));
        Vclock_divider___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclock_divider___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclock_divider::eventsPending() { return false; }

uint64_t Vclock_divider::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vclock_divider::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclock_divider___024root___eval_final(Vclock_divider___024root* vlSelf);

VL_ATTR_COLD void Vclock_divider::final() {
    Vclock_divider___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclock_divider::hierName() const { return vlSymsp->name(); }
const char* Vclock_divider::modelName() const { return "Vclock_divider"; }
unsigned Vclock_divider::threads() const { return 1; }
void Vclock_divider::prepareClone() const { contextp()->prepareClone(); }
void Vclock_divider::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vclock_divider::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vclock_divider___024root__trace_decl_types(VerilatedVcd* tracep);

void Vclock_divider___024root__trace_init_top(Vclock_divider___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vclock_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_divider___024root*>(voidSelf);
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vclock_divider___024root__trace_decl_types(tracep);
    Vclock_divider___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vclock_divider___024root__trace_register(Vclock_divider___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vclock_divider::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vclock_divider::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vclock_divider___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
