// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vgray_counter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vgray_counter::Vgray_counter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vgray_counter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , direction{vlSymsp->TOP.direction}
    , load{vlSymsp->TOP.load}
    , data_in{vlSymsp->TOP.data_in}
    , gray_out{vlSymsp->TOP.gray_out}
    , binary_out{vlSymsp->TOP.binary_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vgray_counter::Vgray_counter(const char* _vcname__)
    : Vgray_counter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vgray_counter::~Vgray_counter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vgray_counter___024root___eval_debug_assertions(Vgray_counter___024root* vlSelf);
#endif  // VL_DEBUG
void Vgray_counter___024root___eval_static(Vgray_counter___024root* vlSelf);
void Vgray_counter___024root___eval_initial(Vgray_counter___024root* vlSelf);
void Vgray_counter___024root___eval_settle(Vgray_counter___024root* vlSelf);
void Vgray_counter___024root___eval(Vgray_counter___024root* vlSelf);

void Vgray_counter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgray_counter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vgray_counter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vgray_counter___024root___eval_static(&(vlSymsp->TOP));
        Vgray_counter___024root___eval_initial(&(vlSymsp->TOP));
        Vgray_counter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vgray_counter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vgray_counter::eventsPending() { return false; }

uint64_t Vgray_counter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vgray_counter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vgray_counter___024root___eval_final(Vgray_counter___024root* vlSelf);

VL_ATTR_COLD void Vgray_counter::final() {
    Vgray_counter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vgray_counter::hierName() const { return vlSymsp->name(); }
const char* Vgray_counter::modelName() const { return "Vgray_counter"; }
unsigned Vgray_counter::threads() const { return 1; }
void Vgray_counter::prepareClone() const { contextp()->prepareClone(); }
void Vgray_counter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vgray_counter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vgray_counter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vgray_counter___024root__trace_init_top(Vgray_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vgray_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgray_counter___024root*>(voidSelf);
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vgray_counter___024root__trace_decl_types(tracep);
    Vgray_counter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vgray_counter___024root__trace_register(Vgray_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vgray_counter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vgray_counter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vgray_counter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
