// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconfigurable_fir_filter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconfigurable_fir_filter::Vconfigurable_fir_filter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconfigurable_fir_filter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , data_valid{vlSymsp->TOP.data_valid}
    , data_out_valid{vlSymsp->TOP.data_out_valid}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconfigurable_fir_filter::Vconfigurable_fir_filter(const char* _vcname__)
    : Vconfigurable_fir_filter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconfigurable_fir_filter::~Vconfigurable_fir_filter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconfigurable_fir_filter___024root___eval_debug_assertions(Vconfigurable_fir_filter___024root* vlSelf);
#endif  // VL_DEBUG
void Vconfigurable_fir_filter___024root___eval_static(Vconfigurable_fir_filter___024root* vlSelf);
void Vconfigurable_fir_filter___024root___eval_initial(Vconfigurable_fir_filter___024root* vlSelf);
void Vconfigurable_fir_filter___024root___eval_settle(Vconfigurable_fir_filter___024root* vlSelf);
void Vconfigurable_fir_filter___024root___eval(Vconfigurable_fir_filter___024root* vlSelf);

void Vconfigurable_fir_filter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconfigurable_fir_filter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconfigurable_fir_filter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconfigurable_fir_filter___024root___eval_static(&(vlSymsp->TOP));
        Vconfigurable_fir_filter___024root___eval_initial(&(vlSymsp->TOP));
        Vconfigurable_fir_filter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconfigurable_fir_filter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconfigurable_fir_filter::eventsPending() { return false; }

uint64_t Vconfigurable_fir_filter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconfigurable_fir_filter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconfigurable_fir_filter___024root___eval_final(Vconfigurable_fir_filter___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_fir_filter::final() {
    Vconfigurable_fir_filter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconfigurable_fir_filter::hierName() const { return vlSymsp->name(); }
const char* Vconfigurable_fir_filter::modelName() const { return "Vconfigurable_fir_filter"; }
unsigned Vconfigurable_fir_filter::threads() const { return 1; }
void Vconfigurable_fir_filter::prepareClone() const { contextp()->prepareClone(); }
void Vconfigurable_fir_filter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconfigurable_fir_filter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconfigurable_fir_filter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconfigurable_fir_filter___024root__trace_init_top(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconfigurable_fir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fir_filter___024root*>(voidSelf);
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_fir_filter___024root__trace_decl_types(tracep);
    Vconfigurable_fir_filter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_register(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconfigurable_fir_filter::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconfigurable_fir_filter::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconfigurable_fir_filter___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
