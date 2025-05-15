// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparameterized_i2c_master.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZED_I2C_MASTER___024ROOT_H_
#define VERILATED_VPARAMETERIZED_I2C_MASTER___024ROOT_H_  // guard

#include "verilated.h"


class Vparameterized_i2c_master__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vparameterized_i2c_master___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(start,0,0);
    VL_IN8(stop,0,0);
    VL_IN8(read,0,0);
    VL_IN8(write,0,0);
    VL_IN8(data_in,7,0);
    VL_IN8(addr,6,0);
    VL_OUT8(busy,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(ack_error,0,0);
    VL_OUT8(data_out,7,0);
    VL_OUT8(scl,0,0);
    VL_INOUT8(sda,0,0);
    VL_OUT8(state,3,0);
    VL_OUT8(phase,1,0);
    VL_OUT8(scl_internal_debug,0,0);
    VL_OUT8(sda_internal_debug,0,0);
    VL_OUT8(shift_reg_debug,7,0);
    VL_OUT8(bit_counter_debug,2,0);
    CData/*6:0*/ parameterized_i2c_master__DOT__divider_counter;
    CData/*0:0*/ parameterized_i2c_master__DOT__scl_internal;
    CData/*0:0*/ parameterized_i2c_master__DOT__sda_internal;
    CData/*0:0*/ parameterized_i2c_master__DOT__cmd_read;
    CData/*0:0*/ parameterized_i2c_master__DOT__cmd_write;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vparameterized_i2c_master__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vparameterized_i2c_master___024root(Vparameterized_i2c_master__Syms* symsp, const char* v__name);
    ~Vparameterized_i2c_master___024root();
    VL_UNCOPYABLE(Vparameterized_i2c_master___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
