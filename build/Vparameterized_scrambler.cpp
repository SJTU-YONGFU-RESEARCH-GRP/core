// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vparameterized_scrambler__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vparameterized_scrambler::Vparameterized_scrambler(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vparameterized_scrambler__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , lfsr_state{vlSymsp->TOP.lfsr_state}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vparameterized_scrambler::Vparameterized_scrambler(const char* _vcname__)
    : Vparameterized_scrambler(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vparameterized_scrambler::~Vparameterized_scrambler() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vparameterized_scrambler___024root___eval_debug_assertions(Vparameterized_scrambler___024root* vlSelf);
#endif  // VL_DEBUG
void Vparameterized_scrambler___024root___eval_static(Vparameterized_scrambler___024root* vlSelf);
void Vparameterized_scrambler___024root___eval_initial(Vparameterized_scrambler___024root* vlSelf);
void Vparameterized_scrambler___024root___eval_settle(Vparameterized_scrambler___024root* vlSelf);
void Vparameterized_scrambler___024root___eval(Vparameterized_scrambler___024root* vlSelf);

void Vparameterized_scrambler::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vparameterized_scrambler::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vparameterized_scrambler___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vparameterized_scrambler___024root___eval_static(&(vlSymsp->TOP));
        Vparameterized_scrambler___024root___eval_initial(&(vlSymsp->TOP));
        Vparameterized_scrambler___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vparameterized_scrambler___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vparameterized_scrambler::eventsPending() { return false; }

uint64_t Vparameterized_scrambler::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vparameterized_scrambler::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vparameterized_scrambler___024root___eval_final(Vparameterized_scrambler___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_scrambler::final() {
    Vparameterized_scrambler___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vparameterized_scrambler::hierName() const { return vlSymsp->name(); }
const char* Vparameterized_scrambler::modelName() const { return "Vparameterized_scrambler"; }
unsigned Vparameterized_scrambler::threads() const { return 1; }
void Vparameterized_scrambler::prepareClone() const { contextp()->prepareClone(); }
void Vparameterized_scrambler::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vparameterized_scrambler::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vparameterized_scrambler___024root__trace_decl_types(VerilatedVcd* tracep);

void Vparameterized_scrambler___024root__trace_init_top(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vparameterized_scrambler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_scrambler___024root*>(voidSelf);
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vparameterized_scrambler___024root__trace_decl_types(tracep);
    Vparameterized_scrambler___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_register(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vparameterized_scrambler::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vparameterized_scrambler::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vparameterized_scrambler___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
