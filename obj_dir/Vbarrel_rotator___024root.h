// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbarrel_rotator.h for the primary calling header

#ifndef VERILATED_VBARREL_ROTATOR___024ROOT_H_
#define VERILATED_VBARREL_ROTATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vbarrel_rotator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbarrel_rotator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(data_in,7,0);
    VL_IN8(rotate_amount,2,0);
    VL_IN8(direction,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbarrel_rotator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbarrel_rotator___024root(Vbarrel_rotator__Syms* symsp, const char* v__name);
    ~Vbarrel_rotator___024root();
    VL_UNCOPYABLE(Vbarrel_rotator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
