// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsequence_detector_fsm__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsequence_detector_fsm::Vsequence_detector_fsm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsequence_detector_fsm__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , serial_in{vlSymsp->TOP.serial_in}
    , config_pattern{vlSymsp->TOP.config_pattern}
    , load_pattern{vlSymsp->TOP.load_pattern}
    , pattern_detected{vlSymsp->TOP.pattern_detected}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsequence_detector_fsm::Vsequence_detector_fsm(const char* _vcname__)
    : Vsequence_detector_fsm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsequence_detector_fsm::~Vsequence_detector_fsm() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsequence_detector_fsm___024root___eval_debug_assertions(Vsequence_detector_fsm___024root* vlSelf);
#endif  // VL_DEBUG
void Vsequence_detector_fsm___024root___eval_static(Vsequence_detector_fsm___024root* vlSelf);
void Vsequence_detector_fsm___024root___eval_initial(Vsequence_detector_fsm___024root* vlSelf);
void Vsequence_detector_fsm___024root___eval_settle(Vsequence_detector_fsm___024root* vlSelf);
void Vsequence_detector_fsm___024root___eval(Vsequence_detector_fsm___024root* vlSelf);

void Vsequence_detector_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsequence_detector_fsm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsequence_detector_fsm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsequence_detector_fsm___024root___eval_static(&(vlSymsp->TOP));
        Vsequence_detector_fsm___024root___eval_initial(&(vlSymsp->TOP));
        Vsequence_detector_fsm___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsequence_detector_fsm___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsequence_detector_fsm::eventsPending() { return false; }

uint64_t Vsequence_detector_fsm::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsequence_detector_fsm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsequence_detector_fsm___024root___eval_final(Vsequence_detector_fsm___024root* vlSelf);

VL_ATTR_COLD void Vsequence_detector_fsm::final() {
    Vsequence_detector_fsm___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsequence_detector_fsm::hierName() const { return vlSymsp->name(); }
const char* Vsequence_detector_fsm::modelName() const { return "Vsequence_detector_fsm"; }
unsigned Vsequence_detector_fsm::threads() const { return 1; }
void Vsequence_detector_fsm::prepareClone() const { contextp()->prepareClone(); }
void Vsequence_detector_fsm::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsequence_detector_fsm::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsequence_detector_fsm___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsequence_detector_fsm___024root__trace_init_top(Vsequence_detector_fsm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsequence_detector_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsequence_detector_fsm___024root*>(voidSelf);
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsequence_detector_fsm___024root__trace_decl_types(tracep);
    Vsequence_detector_fsm___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsequence_detector_fsm___024root__trace_register(Vsequence_detector_fsm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsequence_detector_fsm::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsequence_detector_fsm::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsequence_detector_fsm___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
