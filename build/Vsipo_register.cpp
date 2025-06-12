// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsipo_register__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsipo_register::Vsipo_register(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsipo_register__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , serial_in{vlSymsp->TOP.serial_in}
    , enable{vlSymsp->TOP.enable}
    , parallel_out{vlSymsp->TOP.parallel_out}
    , parity_out{vlSymsp->TOP.parity_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsipo_register::Vsipo_register(const char* _vcname__)
    : Vsipo_register(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsipo_register::~Vsipo_register() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsipo_register___024root___eval_debug_assertions(Vsipo_register___024root* vlSelf);
#endif  // VL_DEBUG
void Vsipo_register___024root___eval_static(Vsipo_register___024root* vlSelf);
void Vsipo_register___024root___eval_initial(Vsipo_register___024root* vlSelf);
void Vsipo_register___024root___eval_settle(Vsipo_register___024root* vlSelf);
void Vsipo_register___024root___eval(Vsipo_register___024root* vlSelf);

void Vsipo_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsipo_register::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsipo_register___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsipo_register___024root___eval_static(&(vlSymsp->TOP));
        Vsipo_register___024root___eval_initial(&(vlSymsp->TOP));
        Vsipo_register___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsipo_register___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsipo_register::eventsPending() { return false; }

uint64_t Vsipo_register::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsipo_register::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsipo_register___024root___eval_final(Vsipo_register___024root* vlSelf);

VL_ATTR_COLD void Vsipo_register::final() {
    Vsipo_register___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsipo_register::hierName() const { return vlSymsp->name(); }
const char* Vsipo_register::modelName() const { return "Vsipo_register"; }
unsigned Vsipo_register::threads() const { return 1; }
void Vsipo_register::prepareClone() const { contextp()->prepareClone(); }
void Vsipo_register::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsipo_register::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsipo_register___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsipo_register___024root__trace_init_top(Vsipo_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsipo_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsipo_register___024root*>(voidSelf);
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsipo_register___024root__trace_decl_types(tracep);
    Vsipo_register___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsipo_register___024root__trace_register(Vsipo_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsipo_register::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsipo_register::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsipo_register___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
