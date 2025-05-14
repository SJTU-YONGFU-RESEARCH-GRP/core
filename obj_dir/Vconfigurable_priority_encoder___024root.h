// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_priority_encoder.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_PRIORITY_ENCODER___024ROOT_H_
#define VERILATED_VCONFIGURABLE_PRIORITY_ENCODER___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_priority_encoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_priority_encoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(request,7,0);
    VL_OUT8(grant_index,2,0);
    VL_OUT8(valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ configurable_priority_encoder__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_priority_encoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_priority_encoder___024root(Vconfigurable_priority_encoder__Syms* symsp, const char* v__name);
    ~Vconfigurable_priority_encoder___024root();
    VL_UNCOPYABLE(Vconfigurable_priority_encoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
