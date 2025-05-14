// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdual_port_ram__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdual_port_ram::Vdual_port_ram(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdual_port_ram__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , addr_a{vlSymsp->TOP.addr_a}
    , data_a{vlSymsp->TOP.data_a}
    , we_a{vlSymsp->TOP.we_a}
    , q_a{vlSymsp->TOP.q_a}
    , addr_b{vlSymsp->TOP.addr_b}
    , data_b{vlSymsp->TOP.data_b}
    , we_b{vlSymsp->TOP.we_b}
    , q_b{vlSymsp->TOP.q_b}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdual_port_ram::Vdual_port_ram(const char* _vcname__)
    : Vdual_port_ram(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdual_port_ram::~Vdual_port_ram() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdual_port_ram___024root___eval_debug_assertions(Vdual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG
void Vdual_port_ram___024root___eval_static(Vdual_port_ram___024root* vlSelf);
void Vdual_port_ram___024root___eval_initial(Vdual_port_ram___024root* vlSelf);
void Vdual_port_ram___024root___eval_settle(Vdual_port_ram___024root* vlSelf);
void Vdual_port_ram___024root___eval(Vdual_port_ram___024root* vlSelf);

void Vdual_port_ram::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdual_port_ram::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdual_port_ram___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdual_port_ram___024root___eval_static(&(vlSymsp->TOP));
        Vdual_port_ram___024root___eval_initial(&(vlSymsp->TOP));
        Vdual_port_ram___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdual_port_ram___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdual_port_ram::eventsPending() { return false; }

uint64_t Vdual_port_ram::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdual_port_ram::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdual_port_ram___024root___eval_final(Vdual_port_ram___024root* vlSelf);

VL_ATTR_COLD void Vdual_port_ram::final() {
    Vdual_port_ram___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdual_port_ram::hierName() const { return vlSymsp->name(); }
const char* Vdual_port_ram::modelName() const { return "Vdual_port_ram"; }
unsigned Vdual_port_ram::threads() const { return 1; }
void Vdual_port_ram::prepareClone() const { contextp()->prepareClone(); }
void Vdual_port_ram::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdual_port_ram::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdual_port_ram___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdual_port_ram___024root__trace_init_top(Vdual_port_ram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_port_ram___024root*>(voidSelf);
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdual_port_ram___024root__trace_decl_types(tracep);
    Vdual_port_ram___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdual_port_ram___024root__trace_register(Vdual_port_ram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdual_port_ram::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdual_port_ram::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdual_port_ram___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
