// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparameterized_scrambler.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZED_SCRAMBLER___024ROOT_H_
#define VERILATED_VPARAMETERIZED_SCRAMBLER___024ROOT_H_  // guard

#include "verilated.h"


class Vparameterized_scrambler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vparameterized_scrambler___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(data_in,0,0);
    VL_OUT8(data_out,0,0);
    VL_OUT8(lfsr_state,7,0);
    CData/*7:0*/ parameterized_scrambler__DOT__lfsr_reg;
    CData/*0:0*/ parameterized_scrambler__DOT__feedback;
    CData/*0:0*/ parameterized_scrambler__DOT__next_input;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vparameterized_scrambler__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vparameterized_scrambler___024root(Vparameterized_scrambler__Syms* symsp, const char* v__name);
    ~Vparameterized_scrambler___024root();
    VL_UNCOPYABLE(Vparameterized_scrambler___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
