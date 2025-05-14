// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfifo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfifo::Vfifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfifo__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , wr_en{vlSymsp->TOP.wr_en}
    , rd_en{vlSymsp->TOP.rd_en}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , full{vlSymsp->TOP.full}
    , empty{vlSymsp->TOP.empty}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfifo::Vfifo(const char* _vcname__)
    : Vfifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfifo::~Vfifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfifo___024root___eval_debug_assertions(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vfifo___024root___eval_static(Vfifo___024root* vlSelf);
void Vfifo___024root___eval_initial(Vfifo___024root* vlSelf);
void Vfifo___024root___eval_settle(Vfifo___024root* vlSelf);
void Vfifo___024root___eval(Vfifo___024root* vlSelf);

void Vfifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfifo___024root___eval_static(&(vlSymsp->TOP));
        Vfifo___024root___eval_initial(&(vlSymsp->TOP));
        Vfifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfifo::eventsPending() { return false; }

uint64_t Vfifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfifo___024root___eval_final(Vfifo___024root* vlSelf);

VL_ATTR_COLD void Vfifo::final() {
    Vfifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfifo::hierName() const { return vlSymsp->name(); }
const char* Vfifo::modelName() const { return "Vfifo"; }
unsigned Vfifo::threads() const { return 1; }
void Vfifo::prepareClone() const { contextp()->prepareClone(); }
void Vfifo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfifo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfifo___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfifo___024root__trace_init_top(Vfifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfifo___024root__trace_decl_types(tracep);
    Vfifo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfifo___024root__trace_register(Vfifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfifo::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfifo::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfifo___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
