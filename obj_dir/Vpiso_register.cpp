// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpiso_register__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpiso_register::Vpiso_register(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpiso_register__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , load{vlSymsp->TOP.load}
    , parallel_in{vlSymsp->TOP.parallel_in}
    , serial_out{vlSymsp->TOP.serial_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpiso_register::Vpiso_register(const char* _vcname__)
    : Vpiso_register(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpiso_register::~Vpiso_register() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpiso_register___024root___eval_debug_assertions(Vpiso_register___024root* vlSelf);
#endif  // VL_DEBUG
void Vpiso_register___024root___eval_static(Vpiso_register___024root* vlSelf);
void Vpiso_register___024root___eval_initial(Vpiso_register___024root* vlSelf);
void Vpiso_register___024root___eval_settle(Vpiso_register___024root* vlSelf);
void Vpiso_register___024root___eval(Vpiso_register___024root* vlSelf);

void Vpiso_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpiso_register::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpiso_register___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpiso_register___024root___eval_static(&(vlSymsp->TOP));
        Vpiso_register___024root___eval_initial(&(vlSymsp->TOP));
        Vpiso_register___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpiso_register___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpiso_register::eventsPending() { return false; }

uint64_t Vpiso_register::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpiso_register::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpiso_register___024root___eval_final(Vpiso_register___024root* vlSelf);

VL_ATTR_COLD void Vpiso_register::final() {
    Vpiso_register___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpiso_register::hierName() const { return vlSymsp->name(); }
const char* Vpiso_register::modelName() const { return "Vpiso_register"; }
unsigned Vpiso_register::threads() const { return 1; }
void Vpiso_register::prepareClone() const { contextp()->prepareClone(); }
void Vpiso_register::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpiso_register::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpiso_register___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpiso_register___024root__trace_init_top(Vpiso_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpiso_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpiso_register___024root*>(voidSelf);
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpiso_register___024root__trace_decl_types(tracep);
    Vpiso_register___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpiso_register___024root__trace_register(Vpiso_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpiso_register::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpiso_register::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpiso_register___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
