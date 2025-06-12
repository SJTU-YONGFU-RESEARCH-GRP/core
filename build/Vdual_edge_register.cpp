// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdual_edge_register__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdual_edge_register::Vdual_edge_register(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdual_edge_register__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdual_edge_register::Vdual_edge_register(const char* _vcname__)
    : Vdual_edge_register(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdual_edge_register::~Vdual_edge_register() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdual_edge_register___024root___eval_debug_assertions(Vdual_edge_register___024root* vlSelf);
#endif  // VL_DEBUG
void Vdual_edge_register___024root___eval_static(Vdual_edge_register___024root* vlSelf);
void Vdual_edge_register___024root___eval_initial(Vdual_edge_register___024root* vlSelf);
void Vdual_edge_register___024root___eval_settle(Vdual_edge_register___024root* vlSelf);
void Vdual_edge_register___024root___eval(Vdual_edge_register___024root* vlSelf);

void Vdual_edge_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdual_edge_register::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdual_edge_register___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdual_edge_register___024root___eval_static(&(vlSymsp->TOP));
        Vdual_edge_register___024root___eval_initial(&(vlSymsp->TOP));
        Vdual_edge_register___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdual_edge_register___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdual_edge_register::eventsPending() { return false; }

uint64_t Vdual_edge_register::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdual_edge_register::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdual_edge_register___024root___eval_final(Vdual_edge_register___024root* vlSelf);

VL_ATTR_COLD void Vdual_edge_register::final() {
    Vdual_edge_register___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdual_edge_register::hierName() const { return vlSymsp->name(); }
const char* Vdual_edge_register::modelName() const { return "Vdual_edge_register"; }
unsigned Vdual_edge_register::threads() const { return 1; }
void Vdual_edge_register::prepareClone() const { contextp()->prepareClone(); }
void Vdual_edge_register::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdual_edge_register::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdual_edge_register___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdual_edge_register___024root__trace_init_top(Vdual_edge_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdual_edge_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_edge_register___024root*>(voidSelf);
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdual_edge_register___024root__trace_decl_types(tracep);
    Vdual_edge_register___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdual_edge_register___024root__trace_register(Vdual_edge_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdual_edge_register::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdual_edge_register::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdual_edge_register___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
