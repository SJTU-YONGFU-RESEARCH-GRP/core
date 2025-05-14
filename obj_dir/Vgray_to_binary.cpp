// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vgray_to_binary__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vgray_to_binary::Vgray_to_binary(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vgray_to_binary__Syms(contextp(), _vcname__, this)}
    , gray_in{vlSymsp->TOP.gray_in}
    , binary_out{vlSymsp->TOP.binary_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vgray_to_binary::Vgray_to_binary(const char* _vcname__)
    : Vgray_to_binary(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vgray_to_binary::~Vgray_to_binary() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vgray_to_binary___024root___eval_debug_assertions(Vgray_to_binary___024root* vlSelf);
#endif  // VL_DEBUG
void Vgray_to_binary___024root___eval_static(Vgray_to_binary___024root* vlSelf);
void Vgray_to_binary___024root___eval_initial(Vgray_to_binary___024root* vlSelf);
void Vgray_to_binary___024root___eval_settle(Vgray_to_binary___024root* vlSelf);
void Vgray_to_binary___024root___eval(Vgray_to_binary___024root* vlSelf);

void Vgray_to_binary::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgray_to_binary::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vgray_to_binary___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vgray_to_binary___024root___eval_static(&(vlSymsp->TOP));
        Vgray_to_binary___024root___eval_initial(&(vlSymsp->TOP));
        Vgray_to_binary___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vgray_to_binary___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vgray_to_binary::eventsPending() { return false; }

uint64_t Vgray_to_binary::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vgray_to_binary::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vgray_to_binary___024root___eval_final(Vgray_to_binary___024root* vlSelf);

VL_ATTR_COLD void Vgray_to_binary::final() {
    Vgray_to_binary___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vgray_to_binary::hierName() const { return vlSymsp->name(); }
const char* Vgray_to_binary::modelName() const { return "Vgray_to_binary"; }
unsigned Vgray_to_binary::threads() const { return 1; }
void Vgray_to_binary::prepareClone() const { contextp()->prepareClone(); }
void Vgray_to_binary::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vgray_to_binary::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vgray_to_binary___024root__trace_decl_types(VerilatedVcd* tracep);

void Vgray_to_binary___024root__trace_init_top(Vgray_to_binary___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vgray_to_binary___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgray_to_binary___024root*>(voidSelf);
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vgray_to_binary___024root__trace_decl_types(tracep);
    Vgray_to_binary___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vgray_to_binary___024root__trace_register(Vgray_to_binary___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vgray_to_binary::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vgray_to_binary::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vgray_to_binary___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
