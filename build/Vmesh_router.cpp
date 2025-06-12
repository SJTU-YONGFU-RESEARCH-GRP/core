// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmesh_router__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmesh_router::Vmesh_router(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmesh_router__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , north_in_valid{vlSymsp->TOP.north_in_valid}
    , north_in_ready{vlSymsp->TOP.north_in_ready}
    , north_out_valid{vlSymsp->TOP.north_out_valid}
    , north_out_ready{vlSymsp->TOP.north_out_ready}
    , east_in_valid{vlSymsp->TOP.east_in_valid}
    , east_in_ready{vlSymsp->TOP.east_in_ready}
    , east_out_valid{vlSymsp->TOP.east_out_valid}
    , east_out_ready{vlSymsp->TOP.east_out_ready}
    , south_in_valid{vlSymsp->TOP.south_in_valid}
    , south_in_ready{vlSymsp->TOP.south_in_ready}
    , south_out_valid{vlSymsp->TOP.south_out_valid}
    , south_out_ready{vlSymsp->TOP.south_out_ready}
    , west_in_valid{vlSymsp->TOP.west_in_valid}
    , west_in_ready{vlSymsp->TOP.west_in_ready}
    , west_out_valid{vlSymsp->TOP.west_out_valid}
    , west_out_ready{vlSymsp->TOP.west_out_ready}
    , local_in_valid{vlSymsp->TOP.local_in_valid}
    , local_in_ready{vlSymsp->TOP.local_in_ready}
    , local_out_valid{vlSymsp->TOP.local_out_valid}
    , local_out_ready{vlSymsp->TOP.local_out_ready}
    , north_in_data{vlSymsp->TOP.north_in_data}
    , north_out_data{vlSymsp->TOP.north_out_data}
    , east_in_data{vlSymsp->TOP.east_in_data}
    , east_out_data{vlSymsp->TOP.east_out_data}
    , south_in_data{vlSymsp->TOP.south_in_data}
    , south_out_data{vlSymsp->TOP.south_out_data}
    , west_in_data{vlSymsp->TOP.west_in_data}
    , west_out_data{vlSymsp->TOP.west_out_data}
    , local_in_data{vlSymsp->TOP.local_in_data}
    , local_out_data{vlSymsp->TOP.local_out_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmesh_router::Vmesh_router(const char* _vcname__)
    : Vmesh_router(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmesh_router::~Vmesh_router() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmesh_router___024root___eval_debug_assertions(Vmesh_router___024root* vlSelf);
#endif  // VL_DEBUG
void Vmesh_router___024root___eval_static(Vmesh_router___024root* vlSelf);
void Vmesh_router___024root___eval_initial(Vmesh_router___024root* vlSelf);
void Vmesh_router___024root___eval_settle(Vmesh_router___024root* vlSelf);
void Vmesh_router___024root___eval(Vmesh_router___024root* vlSelf);

void Vmesh_router::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmesh_router::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmesh_router___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmesh_router___024root___eval_static(&(vlSymsp->TOP));
        Vmesh_router___024root___eval_initial(&(vlSymsp->TOP));
        Vmesh_router___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmesh_router___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmesh_router::eventsPending() { return false; }

uint64_t Vmesh_router::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmesh_router::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmesh_router___024root___eval_final(Vmesh_router___024root* vlSelf);

VL_ATTR_COLD void Vmesh_router::final() {
    Vmesh_router___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmesh_router::hierName() const { return vlSymsp->name(); }
const char* Vmesh_router::modelName() const { return "Vmesh_router"; }
unsigned Vmesh_router::threads() const { return 1; }
void Vmesh_router::prepareClone() const { contextp()->prepareClone(); }
void Vmesh_router::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmesh_router::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmesh_router___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmesh_router___024root__trace_init_top(Vmesh_router___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmesh_router___024root*>(voidSelf);
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmesh_router___024root__trace_decl_types(tracep);
    Vmesh_router___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmesh_router___024root__trace_register(Vmesh_router___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmesh_router::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmesh_router::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmesh_router___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
