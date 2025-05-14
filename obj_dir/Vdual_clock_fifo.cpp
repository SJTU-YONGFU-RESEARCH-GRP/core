// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdual_clock_fifo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdual_clock_fifo::Vdual_clock_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdual_clock_fifo__Syms(contextp(), _vcname__, this)}
    , wr_clk{vlSymsp->TOP.wr_clk}
    , wr_rst_n{vlSymsp->TOP.wr_rst_n}
    , rd_clk{vlSymsp->TOP.rd_clk}
    , rd_rst_n{vlSymsp->TOP.rd_rst_n}
    , wr_en{vlSymsp->TOP.wr_en}
    , wr_data{vlSymsp->TOP.wr_data}
    , full{vlSymsp->TOP.full}
    , almost_full{vlSymsp->TOP.almost_full}
    , rd_en{vlSymsp->TOP.rd_en}
    , rd_data{vlSymsp->TOP.rd_data}
    , empty{vlSymsp->TOP.empty}
    , almost_empty{vlSymsp->TOP.almost_empty}
    , fifo_count{vlSymsp->TOP.fifo_count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdual_clock_fifo::Vdual_clock_fifo(const char* _vcname__)
    : Vdual_clock_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdual_clock_fifo::~Vdual_clock_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdual_clock_fifo___024root___eval_debug_assertions(Vdual_clock_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vdual_clock_fifo___024root___eval_static(Vdual_clock_fifo___024root* vlSelf);
void Vdual_clock_fifo___024root___eval_initial(Vdual_clock_fifo___024root* vlSelf);
void Vdual_clock_fifo___024root___eval_settle(Vdual_clock_fifo___024root* vlSelf);
void Vdual_clock_fifo___024root___eval(Vdual_clock_fifo___024root* vlSelf);

void Vdual_clock_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdual_clock_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdual_clock_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdual_clock_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vdual_clock_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vdual_clock_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdual_clock_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdual_clock_fifo::eventsPending() { return false; }

uint64_t Vdual_clock_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdual_clock_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdual_clock_fifo___024root___eval_final(Vdual_clock_fifo___024root* vlSelf);

VL_ATTR_COLD void Vdual_clock_fifo::final() {
    Vdual_clock_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdual_clock_fifo::hierName() const { return vlSymsp->name(); }
const char* Vdual_clock_fifo::modelName() const { return "Vdual_clock_fifo"; }
unsigned Vdual_clock_fifo::threads() const { return 1; }
void Vdual_clock_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vdual_clock_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdual_clock_fifo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdual_clock_fifo___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdual_clock_fifo___024root__trace_init_top(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdual_clock_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_clock_fifo___024root*>(voidSelf);
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdual_clock_fifo___024root__trace_decl_types(tracep);
    Vdual_clock_fifo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_register(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdual_clock_fifo::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdual_clock_fifo::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdual_clock_fifo___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
