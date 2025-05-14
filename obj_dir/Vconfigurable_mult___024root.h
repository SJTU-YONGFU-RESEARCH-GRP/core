// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_mult.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_MULT___024ROOT_H_
#define VERILATED_VCONFIGURABLE_MULT___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_mult__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_mult___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(sign_mode,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(product,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_mult__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_mult___024root(Vconfigurable_mult__Syms* symsp, const char* v__name);
    ~Vconfigurable_mult___024root();
    VL_UNCOPYABLE(Vconfigurable_mult___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
