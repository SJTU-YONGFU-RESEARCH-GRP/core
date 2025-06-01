// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmulti_ported_fifo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmulti_ported_fifo::Vmulti_ported_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmulti_ported_fifo__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , wr_en{vlSymsp->TOP.wr_en}
    , wr_ready{vlSymsp->TOP.wr_ready}
    , rd_en{vlSymsp->TOP.rd_en}
    , rd_valid{vlSymsp->TOP.rd_valid}
    , full{vlSymsp->TOP.full}
    , almost_full{vlSymsp->TOP.almost_full}
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

Vmulti_ported_fifo::Vmulti_ported_fifo(const char* _vcname__)
    : Vmulti_ported_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmulti_ported_fifo::~Vmulti_ported_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmulti_ported_fifo___024root___eval_debug_assertions(Vmulti_ported_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vmulti_ported_fifo___024root___eval_static(Vmulti_ported_fifo___024root* vlSelf);
void Vmulti_ported_fifo___024root___eval_initial(Vmulti_ported_fifo___024root* vlSelf);
void Vmulti_ported_fifo___024root___eval_settle(Vmulti_ported_fifo___024root* vlSelf);
void Vmulti_ported_fifo___024root___eval(Vmulti_ported_fifo___024root* vlSelf);

void Vmulti_ported_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmulti_ported_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmulti_ported_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmulti_ported_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vmulti_ported_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vmulti_ported_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmulti_ported_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmulti_ported_fifo::eventsPending() { return false; }

uint64_t Vmulti_ported_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmulti_ported_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmulti_ported_fifo___024root___eval_final(Vmulti_ported_fifo___024root* vlSelf);

VL_ATTR_COLD void Vmulti_ported_fifo::final() {
    Vmulti_ported_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmulti_ported_fifo::hierName() const { return vlSymsp->name(); }
const char* Vmulti_ported_fifo::modelName() const { return "Vmulti_ported_fifo"; }
unsigned Vmulti_ported_fifo::threads() const { return 1; }
void Vmulti_ported_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vmulti_ported_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmulti_ported_fifo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmulti_ported_fifo___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmulti_ported_fifo___024root__trace_init_top(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmulti_ported_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmulti_ported_fifo___024root*>(voidSelf);
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmulti_ported_fifo___024root__trace_decl_types(tracep);
    Vmulti_ported_fifo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_register(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmulti_ported_fifo::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmulti_ported_fifo::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmulti_ported_fifo___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
