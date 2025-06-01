// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconfigurable_sync_fifo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconfigurable_sync_fifo::Vconfigurable_sync_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconfigurable_sync_fifo__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , wr_en{vlSymsp->TOP.wr_en}
    , rd_en{vlSymsp->TOP.rd_en}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , full{vlSymsp->TOP.full}
    , empty{vlSymsp->TOP.empty}
    , almost_full{vlSymsp->TOP.almost_full}
    , almost_empty{vlSymsp->TOP.almost_empty}
    , fill_level{vlSymsp->TOP.fill_level}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconfigurable_sync_fifo::Vconfigurable_sync_fifo(const char* _vcname__)
    : Vconfigurable_sync_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconfigurable_sync_fifo::~Vconfigurable_sync_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconfigurable_sync_fifo___024root___eval_debug_assertions(Vconfigurable_sync_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vconfigurable_sync_fifo___024root___eval_static(Vconfigurable_sync_fifo___024root* vlSelf);
void Vconfigurable_sync_fifo___024root___eval_initial(Vconfigurable_sync_fifo___024root* vlSelf);
void Vconfigurable_sync_fifo___024root___eval_settle(Vconfigurable_sync_fifo___024root* vlSelf);
void Vconfigurable_sync_fifo___024root___eval(Vconfigurable_sync_fifo___024root* vlSelf);

void Vconfigurable_sync_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconfigurable_sync_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconfigurable_sync_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconfigurable_sync_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vconfigurable_sync_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vconfigurable_sync_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconfigurable_sync_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconfigurable_sync_fifo::eventsPending() { return false; }

uint64_t Vconfigurable_sync_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconfigurable_sync_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconfigurable_sync_fifo___024root___eval_final(Vconfigurable_sync_fifo___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_sync_fifo::final() {
    Vconfigurable_sync_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconfigurable_sync_fifo::hierName() const { return vlSymsp->name(); }
const char* Vconfigurable_sync_fifo::modelName() const { return "Vconfigurable_sync_fifo"; }
unsigned Vconfigurable_sync_fifo::threads() const { return 1; }
void Vconfigurable_sync_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vconfigurable_sync_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconfigurable_sync_fifo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconfigurable_sync_fifo___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconfigurable_sync_fifo___024root__trace_init_top(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconfigurable_sync_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_sync_fifo___024root*>(voidSelf);
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_sync_fifo___024root__trace_decl_types(tracep);
    Vconfigurable_sync_fifo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_register(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconfigurable_sync_fifo::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconfigurable_sync_fifo::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconfigurable_sync_fifo___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
