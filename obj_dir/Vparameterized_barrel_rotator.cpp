// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vparameterized_barrel_rotator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vparameterized_barrel_rotator::Vparameterized_barrel_rotator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vparameterized_barrel_rotator__Syms(contextp(), _vcname__, this)}
    , rotate_amount{vlSymsp->TOP.rotate_amount}
    , direction{vlSymsp->TOP.direction}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vparameterized_barrel_rotator::Vparameterized_barrel_rotator(const char* _vcname__)
    : Vparameterized_barrel_rotator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vparameterized_barrel_rotator::~Vparameterized_barrel_rotator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vparameterized_barrel_rotator___024root___eval_debug_assertions(Vparameterized_barrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG
void Vparameterized_barrel_rotator___024root___eval_static(Vparameterized_barrel_rotator___024root* vlSelf);
void Vparameterized_barrel_rotator___024root___eval_initial(Vparameterized_barrel_rotator___024root* vlSelf);
void Vparameterized_barrel_rotator___024root___eval_settle(Vparameterized_barrel_rotator___024root* vlSelf);
void Vparameterized_barrel_rotator___024root___eval(Vparameterized_barrel_rotator___024root* vlSelf);

void Vparameterized_barrel_rotator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vparameterized_barrel_rotator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vparameterized_barrel_rotator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vparameterized_barrel_rotator___024root___eval_static(&(vlSymsp->TOP));
        Vparameterized_barrel_rotator___024root___eval_initial(&(vlSymsp->TOP));
        Vparameterized_barrel_rotator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vparameterized_barrel_rotator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vparameterized_barrel_rotator::eventsPending() { return false; }

uint64_t Vparameterized_barrel_rotator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vparameterized_barrel_rotator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vparameterized_barrel_rotator___024root___eval_final(Vparameterized_barrel_rotator___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_barrel_rotator::final() {
    Vparameterized_barrel_rotator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vparameterized_barrel_rotator::hierName() const { return vlSymsp->name(); }
const char* Vparameterized_barrel_rotator::modelName() const { return "Vparameterized_barrel_rotator"; }
unsigned Vparameterized_barrel_rotator::threads() const { return 1; }
void Vparameterized_barrel_rotator::prepareClone() const { contextp()->prepareClone(); }
void Vparameterized_barrel_rotator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vparameterized_barrel_rotator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vparameterized_barrel_rotator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vparameterized_barrel_rotator___024root__trace_init_top(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vparameterized_barrel_rotator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_barrel_rotator___024root*>(voidSelf);
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vparameterized_barrel_rotator___024root__trace_decl_types(tracep);
    Vparameterized_barrel_rotator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_register(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vparameterized_barrel_rotator::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vparameterized_barrel_rotator::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vparameterized_barrel_rotator___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
