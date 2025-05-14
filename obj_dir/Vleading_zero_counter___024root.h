// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vleading_zero_counter.h for the primary calling header

#ifndef VERILATED_VLEADING_ZERO_COUNTER___024ROOT_H_
#define VERILATED_VLEADING_ZERO_COUNTER___024ROOT_H_  // guard

#include "verilated.h"


class Vleading_zero_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vleading_zero_counter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(zero_count,5,0);
    VL_OUT8(valid_input,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(data_in,31,0);
    IData/*31:0*/ leading_zero_counter__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vleading_zero_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vleading_zero_counter___024root(Vleading_zero_counter__Syms* symsp, const char* v__name);
    ~Vleading_zero_counter___024root();
    VL_UNCOPYABLE(Vleading_zero_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
