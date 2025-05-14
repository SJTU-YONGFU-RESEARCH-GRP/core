// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_fp_adder.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_FP_ADDER___024ROOT_H_
#define VERILATED_VCONFIGURABLE_FP_ADDER___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_fp_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_fp_adder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_OUT(result,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_fp_adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_fp_adder___024root(Vconfigurable_fp_adder__Syms* symsp, const char* v__name);
    ~Vconfigurable_fp_adder___024root();
    VL_UNCOPYABLE(Vconfigurable_fp_adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
