// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpriority_encoder.h for the primary calling header

#ifndef VERILATED_VPRIORITY_ENCODER___024ROOT_H_
#define VERILATED_VPRIORITY_ENCODER___024ROOT_H_  // guard

#include "verilated.h"


class Vpriority_encoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpriority_encoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in,7,0);
    VL_OUT8(out,2,0);
    VL_OUT8(valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ priority_encoder__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpriority_encoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpriority_encoder___024root(Vpriority_encoder__Syms* symsp, const char* v__name);
    ~Vpriority_encoder___024root();
    VL_UNCOPYABLE(Vpriority_encoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
