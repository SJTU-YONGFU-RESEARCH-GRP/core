// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparameterized_clock_gating.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZED_CLOCK_GATING___024ROOT_H_
#define VERILATED_VPARAMETERIZED_CLOCK_GATING___024ROOT_H_  // guard

#include "verilated.h"


class Vparameterized_clock_gating__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vparameterized_clock_gating___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_in,0,0);
    VL_IN8(test_mode,0,0);
    VL_IN8(enable,0,0);
    VL_OUT8(clk_out,0,0);
    CData/*0:0*/ parameterized_clock_gating__DOT__enable_latch;
    CData/*1:0*/ parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_in__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vparameterized_clock_gating__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vparameterized_clock_gating___024root(Vparameterized_clock_gating__Syms* symsp, const char* v__name);
    ~Vparameterized_clock_gating___024root();
    VL_UNCOPYABLE(Vparameterized_clock_gating___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
