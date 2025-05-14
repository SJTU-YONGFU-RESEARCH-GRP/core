// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfir_filter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfir_filter::Vfir_filter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfir_filter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , data_in{vlSymsp->TOP.data_in}
    , data_valid{vlSymsp->TOP.data_valid}
    , data_out_valid{vlSymsp->TOP.data_out_valid}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfir_filter::Vfir_filter(const char* _vcname__)
    : Vfir_filter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfir_filter::~Vfir_filter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfir_filter___024root___eval_debug_assertions(Vfir_filter___024root* vlSelf);
#endif  // VL_DEBUG
void Vfir_filter___024root___eval_static(Vfir_filter___024root* vlSelf);
void Vfir_filter___024root___eval_initial(Vfir_filter___024root* vlSelf);
void Vfir_filter___024root___eval_settle(Vfir_filter___024root* vlSelf);
void Vfir_filter___024root___eval(Vfir_filter___024root* vlSelf);

void Vfir_filter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfir_filter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfir_filter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfir_filter___024root___eval_static(&(vlSymsp->TOP));
        Vfir_filter___024root___eval_initial(&(vlSymsp->TOP));
        Vfir_filter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfir_filter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfir_filter::eventsPending() { return false; }

uint64_t Vfir_filter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfir_filter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfir_filter___024root___eval_final(Vfir_filter___024root* vlSelf);

VL_ATTR_COLD void Vfir_filter::final() {
    Vfir_filter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfir_filter::hierName() const { return vlSymsp->name(); }
const char* Vfir_filter::modelName() const { return "Vfir_filter"; }
unsigned Vfir_filter::threads() const { return 1; }
void Vfir_filter::prepareClone() const { contextp()->prepareClone(); }
void Vfir_filter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfir_filter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfir_filter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfir_filter___024root__trace_init_top(Vfir_filter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir_filter___024root*>(voidSelf);
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir_filter___024root__trace_decl_types(tracep);
    Vfir_filter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfir_filter___024root__trace_register(Vfir_filter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfir_filter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfir_filter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfir_filter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
