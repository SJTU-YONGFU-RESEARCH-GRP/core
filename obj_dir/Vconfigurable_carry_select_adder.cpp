// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconfigurable_carry_select_adder__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconfigurable_carry_select_adder::Vconfigurable_carry_select_adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconfigurable_carry_select_adder__Syms(contextp(), _vcname__, this)}
    , cin{vlSymsp->TOP.cin}
    , cout{vlSymsp->TOP.cout}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , sum{vlSymsp->TOP.sum}
    , __PVT__configurable_carry_select_adder__DOT__first_block{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__first_block}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0}
    , __PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1{vlSymsp->TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vconfigurable_carry_select_adder::Vconfigurable_carry_select_adder(const char* _vcname__)
    : Vconfigurable_carry_select_adder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconfigurable_carry_select_adder::~Vconfigurable_carry_select_adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconfigurable_carry_select_adder___024root___eval_debug_assertions(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG
void Vconfigurable_carry_select_adder___024root___eval_static(Vconfigurable_carry_select_adder___024root* vlSelf);
void Vconfigurable_carry_select_adder___024root___eval_initial(Vconfigurable_carry_select_adder___024root* vlSelf);
void Vconfigurable_carry_select_adder___024root___eval_settle(Vconfigurable_carry_select_adder___024root* vlSelf);
void Vconfigurable_carry_select_adder___024root___eval(Vconfigurable_carry_select_adder___024root* vlSelf);

void Vconfigurable_carry_select_adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconfigurable_carry_select_adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconfigurable_carry_select_adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconfigurable_carry_select_adder___024root___eval_static(&(vlSymsp->TOP));
        Vconfigurable_carry_select_adder___024root___eval_initial(&(vlSymsp->TOP));
        Vconfigurable_carry_select_adder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconfigurable_carry_select_adder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconfigurable_carry_select_adder::eventsPending() { return false; }

uint64_t Vconfigurable_carry_select_adder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconfigurable_carry_select_adder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconfigurable_carry_select_adder___024root___eval_final(Vconfigurable_carry_select_adder___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_carry_select_adder::final() {
    Vconfigurable_carry_select_adder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconfigurable_carry_select_adder::hierName() const { return vlSymsp->name(); }
const char* Vconfigurable_carry_select_adder::modelName() const { return "Vconfigurable_carry_select_adder"; }
unsigned Vconfigurable_carry_select_adder::threads() const { return 1; }
void Vconfigurable_carry_select_adder::prepareClone() const { contextp()->prepareClone(); }
void Vconfigurable_carry_select_adder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconfigurable_carry_select_adder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconfigurable_carry_select_adder___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconfigurable_carry_select_adder___024root__trace_init_top(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconfigurable_carry_select_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_carry_select_adder___024root*>(voidSelf);
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_decl_types(tracep);
    Vconfigurable_carry_select_adder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_register(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconfigurable_carry_select_adder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconfigurable_carry_select_adder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconfigurable_carry_select_adder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
