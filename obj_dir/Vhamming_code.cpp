// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhamming_code__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhamming_code::Vhamming_code(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhamming_code__Syms(contextp(), _vcname__, this)}
    , data_in{vlSymsp->TOP.data_in}
    , encoded_out{vlSymsp->TOP.encoded_out}
    , received_in{vlSymsp->TOP.received_in}
    , data_out{vlSymsp->TOP.data_out}
    , single_bit_error{vlSymsp->TOP.single_bit_error}
    , corrected_code{vlSymsp->TOP.corrected_code}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhamming_code::Vhamming_code(const char* _vcname__)
    : Vhamming_code(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhamming_code::~Vhamming_code() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhamming_code___024root___eval_debug_assertions(Vhamming_code___024root* vlSelf);
#endif  // VL_DEBUG
void Vhamming_code___024root___eval_static(Vhamming_code___024root* vlSelf);
void Vhamming_code___024root___eval_initial(Vhamming_code___024root* vlSelf);
void Vhamming_code___024root___eval_settle(Vhamming_code___024root* vlSelf);
void Vhamming_code___024root___eval(Vhamming_code___024root* vlSelf);

void Vhamming_code::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhamming_code::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhamming_code___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhamming_code___024root___eval_static(&(vlSymsp->TOP));
        Vhamming_code___024root___eval_initial(&(vlSymsp->TOP));
        Vhamming_code___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhamming_code___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhamming_code::eventsPending() { return false; }

uint64_t Vhamming_code::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhamming_code::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhamming_code___024root___eval_final(Vhamming_code___024root* vlSelf);

VL_ATTR_COLD void Vhamming_code::final() {
    Vhamming_code___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhamming_code::hierName() const { return vlSymsp->name(); }
const char* Vhamming_code::modelName() const { return "Vhamming_code"; }
unsigned Vhamming_code::threads() const { return 1; }
void Vhamming_code::prepareClone() const { contextp()->prepareClone(); }
void Vhamming_code::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhamming_code::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhamming_code___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhamming_code___024root__trace_init_top(Vhamming_code___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhamming_code___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_code___024root*>(voidSelf);
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhamming_code___024root__trace_decl_types(tracep);
    Vhamming_code___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhamming_code___024root__trace_register(Vhamming_code___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhamming_code::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhamming_code::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhamming_code___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
