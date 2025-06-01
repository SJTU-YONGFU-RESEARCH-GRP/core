// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconfigurable_mesh_router__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconfigurable_mesh_router::Vconfigurable_mesh_router(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconfigurable_mesh_router__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , local_x_addr{vlSymsp->TOP.local_x_addr}
    , local_y_addr{vlSymsp->TOP.local_y_addr}
    , north_valid_i{vlSymsp->TOP.north_valid_i}
    , north_addr_i{vlSymsp->TOP.north_addr_i}
    , north_ready_o{vlSymsp->TOP.north_ready_o}
    , north_valid_o{vlSymsp->TOP.north_valid_o}
    , north_addr_o{vlSymsp->TOP.north_addr_o}
    , north_ready_i{vlSymsp->TOP.north_ready_i}
    , east_valid_i{vlSymsp->TOP.east_valid_i}
    , east_addr_i{vlSymsp->TOP.east_addr_i}
    , east_ready_o{vlSymsp->TOP.east_ready_o}
    , east_valid_o{vlSymsp->TOP.east_valid_o}
    , east_addr_o{vlSymsp->TOP.east_addr_o}
    , east_ready_i{vlSymsp->TOP.east_ready_i}
    , south_valid_i{vlSymsp->TOP.south_valid_i}
    , south_addr_i{vlSymsp->TOP.south_addr_i}
    , south_ready_o{vlSymsp->TOP.south_ready_o}
    , south_valid_o{vlSymsp->TOP.south_valid_o}
    , south_addr_o{vlSymsp->TOP.south_addr_o}
    , south_ready_i{vlSymsp->TOP.south_ready_i}
    , west_valid_i{vlSymsp->TOP.west_valid_i}
    , west_addr_i{vlSymsp->TOP.west_addr_i}
    , west_ready_o{vlSymsp->TOP.west_ready_o}
    , west_valid_o{vlSymsp->TOP.west_valid_o}
    , west_addr_o{vlSymsp->TOP.west_addr_o}
    , west_ready_i{vlSymsp->TOP.west_ready_i}
    , local_valid_i{vlSymsp->TOP.local_valid_i}
    , local_addr_i{vlSymsp->TOP.local_addr_i}
    , local_ready_o{vlSymsp->TOP.local_ready_o}
    , local_valid_o{vlSymsp->TOP.local_valid_o}
    , local_addr_o{vlSymsp->TOP.local_addr_o}
    , local_ready_i{vlSymsp->TOP.local_ready_i}
    , north_data_i{vlSymsp->TOP.north_data_i}
    , north_data_o{vlSymsp->TOP.north_data_o}
    , east_data_i{vlSymsp->TOP.east_data_i}
    , east_data_o{vlSymsp->TOP.east_data_o}
    , south_data_i{vlSymsp->TOP.south_data_i}
    , south_data_o{vlSymsp->TOP.south_data_o}
    , west_data_i{vlSymsp->TOP.west_data_i}
    , west_data_o{vlSymsp->TOP.west_data_o}
    , local_data_i{vlSymsp->TOP.local_data_i}
    , local_data_o{vlSymsp->TOP.local_data_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconfigurable_mesh_router::Vconfigurable_mesh_router(const char* _vcname__)
    : Vconfigurable_mesh_router(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconfigurable_mesh_router::~Vconfigurable_mesh_router() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconfigurable_mesh_router___024root___eval_debug_assertions(Vconfigurable_mesh_router___024root* vlSelf);
#endif  // VL_DEBUG
void Vconfigurable_mesh_router___024root___eval_static(Vconfigurable_mesh_router___024root* vlSelf);
void Vconfigurable_mesh_router___024root___eval_initial(Vconfigurable_mesh_router___024root* vlSelf);
void Vconfigurable_mesh_router___024root___eval_settle(Vconfigurable_mesh_router___024root* vlSelf);
void Vconfigurable_mesh_router___024root___eval(Vconfigurable_mesh_router___024root* vlSelf);

void Vconfigurable_mesh_router::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconfigurable_mesh_router::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconfigurable_mesh_router___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconfigurable_mesh_router___024root___eval_static(&(vlSymsp->TOP));
        Vconfigurable_mesh_router___024root___eval_initial(&(vlSymsp->TOP));
        Vconfigurable_mesh_router___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconfigurable_mesh_router___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconfigurable_mesh_router::eventsPending() { return false; }

uint64_t Vconfigurable_mesh_router::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconfigurable_mesh_router::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconfigurable_mesh_router___024root___eval_final(Vconfigurable_mesh_router___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_mesh_router::final() {
    Vconfigurable_mesh_router___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconfigurable_mesh_router::hierName() const { return vlSymsp->name(); }
const char* Vconfigurable_mesh_router::modelName() const { return "Vconfigurable_mesh_router"; }
unsigned Vconfigurable_mesh_router::threads() const { return 1; }
void Vconfigurable_mesh_router::prepareClone() const { contextp()->prepareClone(); }
void Vconfigurable_mesh_router::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconfigurable_mesh_router::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconfigurable_mesh_router___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconfigurable_mesh_router___024root__trace_init_top(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconfigurable_mesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_mesh_router___024root*>(voidSelf);
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_mesh_router___024root__trace_decl_types(tracep);
    Vconfigurable_mesh_router___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_register(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconfigurable_mesh_router::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconfigurable_mesh_router::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconfigurable_mesh_router___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
