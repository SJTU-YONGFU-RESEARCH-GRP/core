// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_clz_clo.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_CLZ_CLO___024ROOT_H_
#define VERILATED_VCONFIGURABLE_CLZ_CLO___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_clz_clo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_clz_clo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(count_ones,0,0);
    VL_OUT8(count_out,5,0);
    VL_OUT8(all_zeros,0,0);
    VL_OUT8(all_ones,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(data_in,31,0);
    IData/*31:0*/ configurable_clz_clo__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_clz_clo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_clz_clo___024root(Vconfigurable_clz_clo__Syms* symsp, const char* v__name);
    ~Vconfigurable_clz_clo___024root();
    VL_UNCOPYABLE(Vconfigurable_clz_clo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
