// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vparameterized_i2c_master__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vparameterized_i2c_master::Vparameterized_i2c_master(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vparameterized_i2c_master__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , start{vlSymsp->TOP.start}
    , stop{vlSymsp->TOP.stop}
    , read{vlSymsp->TOP.read}
    , write{vlSymsp->TOP.write}
    , data_in{vlSymsp->TOP.data_in}
    , addr{vlSymsp->TOP.addr}
    , busy{vlSymsp->TOP.busy}
    , done{vlSymsp->TOP.done}
    , ack_error{vlSymsp->TOP.ack_error}
    , data_out{vlSymsp->TOP.data_out}
    , scl{vlSymsp->TOP.scl}
    , sda{vlSymsp->TOP.sda}
    , state{vlSymsp->TOP.state}
    , phase{vlSymsp->TOP.phase}
    , scl_internal_debug{vlSymsp->TOP.scl_internal_debug}
    , sda_internal_debug{vlSymsp->TOP.sda_internal_debug}
    , shift_reg_debug{vlSymsp->TOP.shift_reg_debug}
    , bit_counter_debug{vlSymsp->TOP.bit_counter_debug}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vparameterized_i2c_master::Vparameterized_i2c_master(const char* _vcname__)
    : Vparameterized_i2c_master(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vparameterized_i2c_master::~Vparameterized_i2c_master() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vparameterized_i2c_master___024root___eval_debug_assertions(Vparameterized_i2c_master___024root* vlSelf);
#endif  // VL_DEBUG
void Vparameterized_i2c_master___024root___eval_static(Vparameterized_i2c_master___024root* vlSelf);
void Vparameterized_i2c_master___024root___eval_initial(Vparameterized_i2c_master___024root* vlSelf);
void Vparameterized_i2c_master___024root___eval_settle(Vparameterized_i2c_master___024root* vlSelf);
void Vparameterized_i2c_master___024root___eval(Vparameterized_i2c_master___024root* vlSelf);

void Vparameterized_i2c_master::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vparameterized_i2c_master::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vparameterized_i2c_master___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vparameterized_i2c_master___024root___eval_static(&(vlSymsp->TOP));
        Vparameterized_i2c_master___024root___eval_initial(&(vlSymsp->TOP));
        Vparameterized_i2c_master___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vparameterized_i2c_master___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vparameterized_i2c_master::eventsPending() { return false; }

uint64_t Vparameterized_i2c_master::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vparameterized_i2c_master::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vparameterized_i2c_master___024root___eval_final(Vparameterized_i2c_master___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_i2c_master::final() {
    Vparameterized_i2c_master___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vparameterized_i2c_master::hierName() const { return vlSymsp->name(); }
const char* Vparameterized_i2c_master::modelName() const { return "Vparameterized_i2c_master"; }
unsigned Vparameterized_i2c_master::threads() const { return 1; }
void Vparameterized_i2c_master::prepareClone() const { contextp()->prepareClone(); }
void Vparameterized_i2c_master::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vparameterized_i2c_master::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vparameterized_i2c_master___024root__trace_decl_types(VerilatedVcd* tracep);

void Vparameterized_i2c_master___024root__trace_init_top(Vparameterized_i2c_master___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vparameterized_i2c_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_i2c_master___024root*>(voidSelf);
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vparameterized_i2c_master___024root__trace_decl_types(tracep);
    Vparameterized_i2c_master___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_i2c_master___024root__trace_register(Vparameterized_i2c_master___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vparameterized_i2c_master::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vparameterized_i2c_master::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vparameterized_i2c_master___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
