// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varbiter.h for the primary calling header

#ifndef VERILATED_VARBITER___024ROOT_H_
#define VERILATED_VARBITER___024ROOT_H_  // guard

#include "verilated.h"


class Varbiter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varbiter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(request,3,0);
    VL_OUT8(grant,3,0);
    VL_OUT8(active,0,0);
    CData/*1:0*/ arbiter__DOT__priority_ptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ arbiter__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Varbiter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varbiter___024root(Varbiter__Syms* symsp, const char* v__name);
    ~Varbiter___024root();
    VL_UNCOPYABLE(Varbiter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
