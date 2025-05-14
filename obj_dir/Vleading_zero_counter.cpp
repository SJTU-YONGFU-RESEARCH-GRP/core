// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vleading_zero_counter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vleading_zero_counter::Vleading_zero_counter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vleading_zero_counter__Syms(contextp(), _vcname__, this)}
    , zero_count{vlSymsp->TOP.zero_count}
    , valid_input{vlSymsp->TOP.valid_input}
    , data_in{vlSymsp->TOP.data_in}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vleading_zero_counter::Vleading_zero_counter(const char* _vcname__)
    : Vleading_zero_counter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vleading_zero_counter::~Vleading_zero_counter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vleading_zero_counter___024root___eval_debug_assertions(Vleading_zero_counter___024root* vlSelf);
#endif  // VL_DEBUG
void Vleading_zero_counter___024root___eval_static(Vleading_zero_counter___024root* vlSelf);
void Vleading_zero_counter___024root___eval_initial(Vleading_zero_counter___024root* vlSelf);
void Vleading_zero_counter___024root___eval_settle(Vleading_zero_counter___024root* vlSelf);
void Vleading_zero_counter___024root___eval(Vleading_zero_counter___024root* vlSelf);

void Vleading_zero_counter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vleading_zero_counter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vleading_zero_counter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vleading_zero_counter___024root___eval_static(&(vlSymsp->TOP));
        Vleading_zero_counter___024root___eval_initial(&(vlSymsp->TOP));
        Vleading_zero_counter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vleading_zero_counter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vleading_zero_counter::eventsPending() { return false; }

uint64_t Vleading_zero_counter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vleading_zero_counter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vleading_zero_counter___024root___eval_final(Vleading_zero_counter___024root* vlSelf);

VL_ATTR_COLD void Vleading_zero_counter::final() {
    Vleading_zero_counter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vleading_zero_counter::hierName() const { return vlSymsp->name(); }
const char* Vleading_zero_counter::modelName() const { return "Vleading_zero_counter"; }
unsigned Vleading_zero_counter::threads() const { return 1; }
void Vleading_zero_counter::prepareClone() const { contextp()->prepareClone(); }
void Vleading_zero_counter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vleading_zero_counter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vleading_zero_counter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vleading_zero_counter___024root__trace_init_top(Vleading_zero_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vleading_zero_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vleading_zero_counter___024root*>(voidSelf);
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vleading_zero_counter___024root__trace_decl_types(tracep);
    Vleading_zero_counter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_register(Vleading_zero_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vleading_zero_counter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vleading_zero_counter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vleading_zero_counter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
