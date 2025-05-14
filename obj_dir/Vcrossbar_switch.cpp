// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcrossbar_switch__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcrossbar_switch::Vcrossbar_switch(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcrossbar_switch__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , select{vlSymsp->TOP.select}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcrossbar_switch::Vcrossbar_switch(const char* _vcname__)
    : Vcrossbar_switch(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcrossbar_switch::~Vcrossbar_switch() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcrossbar_switch___024root___eval_debug_assertions(Vcrossbar_switch___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrossbar_switch___024root___eval_static(Vcrossbar_switch___024root* vlSelf);
void Vcrossbar_switch___024root___eval_initial(Vcrossbar_switch___024root* vlSelf);
void Vcrossbar_switch___024root___eval_settle(Vcrossbar_switch___024root* vlSelf);
void Vcrossbar_switch___024root___eval(Vcrossbar_switch___024root* vlSelf);

void Vcrossbar_switch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcrossbar_switch::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcrossbar_switch___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcrossbar_switch___024root___eval_static(&(vlSymsp->TOP));
        Vcrossbar_switch___024root___eval_initial(&(vlSymsp->TOP));
        Vcrossbar_switch___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcrossbar_switch___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcrossbar_switch::eventsPending() { return false; }

uint64_t Vcrossbar_switch::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcrossbar_switch::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcrossbar_switch___024root___eval_final(Vcrossbar_switch___024root* vlSelf);

VL_ATTR_COLD void Vcrossbar_switch::final() {
    Vcrossbar_switch___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcrossbar_switch::hierName() const { return vlSymsp->name(); }
const char* Vcrossbar_switch::modelName() const { return "Vcrossbar_switch"; }
unsigned Vcrossbar_switch::threads() const { return 1; }
void Vcrossbar_switch::prepareClone() const { contextp()->prepareClone(); }
void Vcrossbar_switch::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcrossbar_switch::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcrossbar_switch___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcrossbar_switch___024root__trace_init_top(Vcrossbar_switch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcrossbar_switch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrossbar_switch___024root*>(voidSelf);
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcrossbar_switch___024root__trace_decl_types(tracep);
    Vcrossbar_switch___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcrossbar_switch___024root__trace_register(Vcrossbar_switch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcrossbar_switch::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcrossbar_switch::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcrossbar_switch___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
