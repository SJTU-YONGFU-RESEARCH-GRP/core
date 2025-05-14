// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbinary_to_gray__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbinary_to_gray::Vbinary_to_gray(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbinary_to_gray__Syms(contextp(), _vcname__, this)}
    , binary_in{vlSymsp->TOP.binary_in}
    , gray_out{vlSymsp->TOP.gray_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbinary_to_gray::Vbinary_to_gray(const char* _vcname__)
    : Vbinary_to_gray(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbinary_to_gray::~Vbinary_to_gray() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbinary_to_gray___024root___eval_debug_assertions(Vbinary_to_gray___024root* vlSelf);
#endif  // VL_DEBUG
void Vbinary_to_gray___024root___eval_static(Vbinary_to_gray___024root* vlSelf);
void Vbinary_to_gray___024root___eval_initial(Vbinary_to_gray___024root* vlSelf);
void Vbinary_to_gray___024root___eval_settle(Vbinary_to_gray___024root* vlSelf);
void Vbinary_to_gray___024root___eval(Vbinary_to_gray___024root* vlSelf);

void Vbinary_to_gray::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbinary_to_gray::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbinary_to_gray___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbinary_to_gray___024root___eval_static(&(vlSymsp->TOP));
        Vbinary_to_gray___024root___eval_initial(&(vlSymsp->TOP));
        Vbinary_to_gray___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbinary_to_gray___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbinary_to_gray::eventsPending() { return false; }

uint64_t Vbinary_to_gray::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbinary_to_gray::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbinary_to_gray___024root___eval_final(Vbinary_to_gray___024root* vlSelf);

VL_ATTR_COLD void Vbinary_to_gray::final() {
    Vbinary_to_gray___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbinary_to_gray::hierName() const { return vlSymsp->name(); }
const char* Vbinary_to_gray::modelName() const { return "Vbinary_to_gray"; }
unsigned Vbinary_to_gray::threads() const { return 1; }
void Vbinary_to_gray::prepareClone() const { contextp()->prepareClone(); }
void Vbinary_to_gray::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbinary_to_gray::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbinary_to_gray___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbinary_to_gray___024root__trace_init_top(Vbinary_to_gray___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbinary_to_gray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbinary_to_gray___024root*>(voidSelf);
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbinary_to_gray___024root__trace_decl_types(tracep);
    Vbinary_to_gray___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_register(Vbinary_to_gray___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbinary_to_gray::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbinary_to_gray::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbinary_to_gray___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
