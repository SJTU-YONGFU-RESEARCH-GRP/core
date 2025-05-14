// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbarrel_shifter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbarrel_shifter::Vbarrel_shifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbarrel_shifter__Syms(contextp(), _vcname__, this)}
    , shift_amount{vlSymsp->TOP.shift_amount}
    , shift_direction{vlSymsp->TOP.shift_direction}
    , rotate{vlSymsp->TOP.rotate}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbarrel_shifter::Vbarrel_shifter(const char* _vcname__)
    : Vbarrel_shifter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbarrel_shifter::~Vbarrel_shifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbarrel_shifter___024root___eval_debug_assertions(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG
void Vbarrel_shifter___024root___eval_static(Vbarrel_shifter___024root* vlSelf);
void Vbarrel_shifter___024root___eval_initial(Vbarrel_shifter___024root* vlSelf);
void Vbarrel_shifter___024root___eval_settle(Vbarrel_shifter___024root* vlSelf);
void Vbarrel_shifter___024root___eval(Vbarrel_shifter___024root* vlSelf);

void Vbarrel_shifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbarrel_shifter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbarrel_shifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbarrel_shifter___024root___eval_static(&(vlSymsp->TOP));
        Vbarrel_shifter___024root___eval_initial(&(vlSymsp->TOP));
        Vbarrel_shifter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbarrel_shifter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbarrel_shifter::eventsPending() { return false; }

uint64_t Vbarrel_shifter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbarrel_shifter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbarrel_shifter___024root___eval_final(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter::final() {
    Vbarrel_shifter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbarrel_shifter::hierName() const { return vlSymsp->name(); }
const char* Vbarrel_shifter::modelName() const { return "Vbarrel_shifter"; }
unsigned Vbarrel_shifter::threads() const { return 1; }
void Vbarrel_shifter::prepareClone() const { contextp()->prepareClone(); }
void Vbarrel_shifter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbarrel_shifter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbarrel_shifter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbarrel_shifter___024root__trace_init_top(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbarrel_shifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter___024root*>(voidSelf);
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbarrel_shifter___024root__trace_decl_types(tracep);
    Vbarrel_shifter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_register(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbarrel_shifter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbarrel_shifter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbarrel_shifter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
