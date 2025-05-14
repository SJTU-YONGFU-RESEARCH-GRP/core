// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlfsr.h for the primary calling header

#ifndef VERILATED_VLFSR___024ROOT_H_
#define VERILATED_VLFSR___024ROOT_H_  // guard

#include "verilated.h"


class Vlfsr__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlfsr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(load,0,0);
    VL_IN8(seed,7,0);
    VL_OUT8(lfsr_out,7,0);
    VL_OUT8(bit_out,0,0);
    CData/*7:0*/ lfsr__DOT__lfsr_reg;
    CData/*0:0*/ lfsr__DOT__feedback;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlfsr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlfsr___024root(Vlfsr__Syms* symsp, const char* v__name);
    ~Vlfsr___024root();
    VL_UNCOPYABLE(Vlfsr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
