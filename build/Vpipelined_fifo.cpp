// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpipelined_fifo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpipelined_fifo::Vpipelined_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpipelined_fifo__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , wr_en{vlSymsp->TOP.wr_en}
    , full{vlSymsp->TOP.full}
    , almost_full{vlSymsp->TOP.almost_full}
    , rd_en{vlSymsp->TOP.rd_en}
    , empty{vlSymsp->TOP.empty}
    , almost_empty{vlSymsp->TOP.almost_empty}
    , data_count{vlSymsp->TOP.data_count}
    , wr_data{vlSymsp->TOP.wr_data}
    , rd_data{vlSymsp->TOP.rd_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpipelined_fifo::Vpipelined_fifo(const char* _vcname__)
    : Vpipelined_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpipelined_fifo::~Vpipelined_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpipelined_fifo___024root___eval_debug_assertions(Vpipelined_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vpipelined_fifo___024root___eval_static(Vpipelined_fifo___024root* vlSelf);
void Vpipelined_fifo___024root___eval_initial(Vpipelined_fifo___024root* vlSelf);
void Vpipelined_fifo___024root___eval_settle(Vpipelined_fifo___024root* vlSelf);
void Vpipelined_fifo___024root___eval(Vpipelined_fifo___024root* vlSelf);

void Vpipelined_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpipelined_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpipelined_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpipelined_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vpipelined_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vpipelined_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpipelined_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpipelined_fifo::eventsPending() { return false; }

uint64_t Vpipelined_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpipelined_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpipelined_fifo___024root___eval_final(Vpipelined_fifo___024root* vlSelf);

VL_ATTR_COLD void Vpipelined_fifo::final() {
    Vpipelined_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpipelined_fifo::hierName() const { return vlSymsp->name(); }
const char* Vpipelined_fifo::modelName() const { return "Vpipelined_fifo"; }
unsigned Vpipelined_fifo::threads() const { return 1; }
void Vpipelined_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vpipelined_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpipelined_fifo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpipelined_fifo___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpipelined_fifo___024root__trace_init_top(Vpipelined_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpipelined_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipelined_fifo___024root*>(voidSelf);
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpipelined_fifo___024root__trace_decl_types(tracep);
    Vpipelined_fifo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_register(Vpipelined_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpipelined_fifo::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpipelined_fifo::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpipelined_fifo___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
