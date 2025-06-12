// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnon_restoring_divider__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vnon_restoring_divider::Vnon_restoring_divider(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnon_restoring_divider__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , start{vlSymsp->TOP.start}
    , dividend{vlSymsp->TOP.dividend}
    , divisor{vlSymsp->TOP.divisor}
    , quotient{vlSymsp->TOP.quotient}
    , remainder{vlSymsp->TOP.remainder}
    , valid{vlSymsp->TOP.valid}
    , busy{vlSymsp->TOP.busy}
    , error{vlSymsp->TOP.error}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vnon_restoring_divider::Vnon_restoring_divider(const char* _vcname__)
    : Vnon_restoring_divider(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnon_restoring_divider::~Vnon_restoring_divider() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnon_restoring_divider___024root___eval_debug_assertions(Vnon_restoring_divider___024root* vlSelf);
#endif  // VL_DEBUG
void Vnon_restoring_divider___024root___eval_static(Vnon_restoring_divider___024root* vlSelf);
void Vnon_restoring_divider___024root___eval_initial(Vnon_restoring_divider___024root* vlSelf);
void Vnon_restoring_divider___024root___eval_settle(Vnon_restoring_divider___024root* vlSelf);
void Vnon_restoring_divider___024root___eval(Vnon_restoring_divider___024root* vlSelf);

void Vnon_restoring_divider::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnon_restoring_divider::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnon_restoring_divider___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnon_restoring_divider___024root___eval_static(&(vlSymsp->TOP));
        Vnon_restoring_divider___024root___eval_initial(&(vlSymsp->TOP));
        Vnon_restoring_divider___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnon_restoring_divider___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnon_restoring_divider::eventsPending() { return false; }

uint64_t Vnon_restoring_divider::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnon_restoring_divider::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnon_restoring_divider___024root___eval_final(Vnon_restoring_divider___024root* vlSelf);

VL_ATTR_COLD void Vnon_restoring_divider::final() {
    Vnon_restoring_divider___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnon_restoring_divider::hierName() const { return vlSymsp->name(); }
const char* Vnon_restoring_divider::modelName() const { return "Vnon_restoring_divider"; }
unsigned Vnon_restoring_divider::threads() const { return 1; }
void Vnon_restoring_divider::prepareClone() const { contextp()->prepareClone(); }
void Vnon_restoring_divider::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vnon_restoring_divider::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnon_restoring_divider___024root__trace_decl_types(VerilatedVcd* tracep);

void Vnon_restoring_divider___024root__trace_init_top(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnon_restoring_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnon_restoring_divider___024root*>(voidSelf);
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vnon_restoring_divider___024root__trace_decl_types(tracep);
    Vnon_restoring_divider___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_register(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vnon_restoring_divider::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vnon_restoring_divider::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnon_restoring_divider___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
