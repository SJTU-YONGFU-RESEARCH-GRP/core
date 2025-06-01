// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparameterized_dds.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZED_DDS___024ROOT_H_
#define VERILATED_VPARAMETERIZED_DDS___024ROOT_H_  // guard

#include "verilated.h"


class Vparameterized_dds__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vparameterized_dds___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_OUT8(lut_initialized,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(sine_out,11,0);
    VL_OUT16(cosine_out,11,0);
    SData/*9:0*/ parameterized_dds__DOT__lut_addr;
    SData/*11:0*/ parameterized_dds__DOT__sine_value;
    SData/*9:0*/ parameterized_dds__DOT__init_counter;
    SData/*11:0*/ parameterized_dds__DOT__center_val;
    SData/*11:0*/ parameterized_dds__DOT__scale_val;
    VL_IN(fcw,23,0);
    VL_IN(phase_offset,23,0);
    IData/*23:0*/ parameterized_dds__DOT__phase_acc;
    IData/*23:0*/ parameterized_dds__DOT__phase_with_offset;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 1024> parameterized_dds__DOT__sine_lut;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vparameterized_dds__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vparameterized_dds___024root(Vparameterized_dds__Syms* symsp, const char* v__name);
    ~Vparameterized_dds___024root();
    VL_UNCOPYABLE(Vparameterized_dds___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
