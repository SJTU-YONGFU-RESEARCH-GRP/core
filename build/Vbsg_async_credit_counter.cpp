// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbsg_async_credit_counter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbsg_async_credit_counter::Vbsg_async_credit_counter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbsg_async_credit_counter__Syms(contextp(), _vcname__, this)}
    , w_clk_i{vlSymsp->TOP.w_clk_i}
    , r_clk_i{vlSymsp->TOP.r_clk_i}
    , gray_i{vlSymsp->TOP.gray_i}
    , binary_o{vlSymsp->TOP.binary_o}
    , w_inc_token_i{vlSymsp->TOP.w_inc_token_i}
    , w_reset_i{vlSymsp->TOP.w_reset_i}
    , r_reset_i{vlSymsp->TOP.r_reset_i}
    , r_dec_credit_i{vlSymsp->TOP.r_dec_credit_i}
    , r_infinite_credits_i{vlSymsp->TOP.r_infinite_credits_i}
    , r_credits_avail_o{vlSymsp->TOP.r_credits_avail_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbsg_async_credit_counter::Vbsg_async_credit_counter(const char* _vcname__)
    : Vbsg_async_credit_counter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbsg_async_credit_counter::~Vbsg_async_credit_counter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbsg_async_credit_counter___024root___eval_debug_assertions(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG
void Vbsg_async_credit_counter___024root___eval_static(Vbsg_async_credit_counter___024root* vlSelf);
void Vbsg_async_credit_counter___024root___eval_initial(Vbsg_async_credit_counter___024root* vlSelf);
void Vbsg_async_credit_counter___024root___eval_settle(Vbsg_async_credit_counter___024root* vlSelf);
void Vbsg_async_credit_counter___024root___eval(Vbsg_async_credit_counter___024root* vlSelf);

void Vbsg_async_credit_counter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbsg_async_credit_counter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbsg_async_credit_counter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbsg_async_credit_counter___024root___eval_static(&(vlSymsp->TOP));
        Vbsg_async_credit_counter___024root___eval_initial(&(vlSymsp->TOP));
        Vbsg_async_credit_counter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbsg_async_credit_counter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbsg_async_credit_counter::eventsPending() { return false; }

uint64_t Vbsg_async_credit_counter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbsg_async_credit_counter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbsg_async_credit_counter___024root___eval_final(Vbsg_async_credit_counter___024root* vlSelf);

VL_ATTR_COLD void Vbsg_async_credit_counter::final() {
    Vbsg_async_credit_counter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbsg_async_credit_counter::hierName() const { return vlSymsp->name(); }
const char* Vbsg_async_credit_counter::modelName() const { return "Vbsg_async_credit_counter"; }
unsigned Vbsg_async_credit_counter::threads() const { return 1; }
void Vbsg_async_credit_counter::prepareClone() const { contextp()->prepareClone(); }
void Vbsg_async_credit_counter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbsg_async_credit_counter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbsg_async_credit_counter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbsg_async_credit_counter___024root__trace_init_top(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbsg_async_credit_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_async_credit_counter___024root*>(voidSelf);
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbsg_async_credit_counter___024root__trace_decl_types(tracep);
    Vbsg_async_credit_counter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_register(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbsg_async_credit_counter::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbsg_async_credit_counter::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbsg_async_credit_counter___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
