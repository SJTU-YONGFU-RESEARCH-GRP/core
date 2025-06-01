// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcache_fifo__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcache_fifo::Vcache_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcache_fifo__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , wr_en{vlSymsp->TOP.wr_en}
    , wr_tag{vlSymsp->TOP.wr_tag}
    , wr_ready{vlSymsp->TOP.wr_ready}
    , rd_en{vlSymsp->TOP.rd_en}
    , rd_tag{vlSymsp->TOP.rd_tag}
    , rd_valid{vlSymsp->TOP.rd_valid}
    , rd_hit{vlSymsp->TOP.rd_hit}
    , full{vlSymsp->TOP.full}
    , empty{vlSymsp->TOP.empty}
    , data_count{vlSymsp->TOP.data_count}
    , clear_stats{vlSymsp->TOP.clear_stats}
    , wr_data{vlSymsp->TOP.wr_data}
    , rd_data{vlSymsp->TOP.rd_data}
    , cache_hits{vlSymsp->TOP.cache_hits}
    , cache_misses{vlSymsp->TOP.cache_misses}
    , hit_ratio{vlSymsp->TOP.hit_ratio}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcache_fifo::Vcache_fifo(const char* _vcname__)
    : Vcache_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcache_fifo::~Vcache_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcache_fifo___024root___eval_debug_assertions(Vcache_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vcache_fifo___024root___eval_static(Vcache_fifo___024root* vlSelf);
void Vcache_fifo___024root___eval_initial(Vcache_fifo___024root* vlSelf);
void Vcache_fifo___024root___eval_settle(Vcache_fifo___024root* vlSelf);
void Vcache_fifo___024root___eval(Vcache_fifo___024root* vlSelf);

void Vcache_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcache_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcache_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcache_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vcache_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vcache_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcache_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcache_fifo::eventsPending() { return false; }

uint64_t Vcache_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcache_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcache_fifo___024root___eval_final(Vcache_fifo___024root* vlSelf);

VL_ATTR_COLD void Vcache_fifo::final() {
    Vcache_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcache_fifo::hierName() const { return vlSymsp->name(); }
const char* Vcache_fifo::modelName() const { return "Vcache_fifo"; }
unsigned Vcache_fifo::threads() const { return 1; }
void Vcache_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vcache_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcache_fifo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcache_fifo___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcache_fifo___024root__trace_init_top(Vcache_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcache_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_fifo___024root*>(voidSelf);
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcache_fifo___024root__trace_decl_types(tracep);
    Vcache_fifo___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcache_fifo___024root__trace_register(Vcache_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcache_fifo::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcache_fifo::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcache_fifo___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
