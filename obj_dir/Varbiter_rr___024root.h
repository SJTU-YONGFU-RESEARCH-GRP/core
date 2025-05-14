// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varbiter_rr.h for the primary calling header

#ifndef VERILATED_VARBITER_RR___024ROOT_H_
#define VERILATED_VARBITER_RR___024ROOT_H_  // guard

#include "verilated.h"


class Varbiter_rr__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varbiter_rr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(request,3,0);
    VL_OUT8(grant,3,0);
    VL_OUT8(active,0,0);
    CData/*1:0*/ arbiter_rr__DOT__priority_ptr;
    CData/*0:0*/ arbiter_rr__DOT__unnamedblk2__DOT__granted;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ arbiter_rr__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ arbiter_rr__DOT__unnamedblk2__DOT__check_idx;
    IData/*31:0*/ arbiter_rr__DOT__unnamedblk2__DOT__ptr;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Varbiter_rr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varbiter_rr___024root(Varbiter_rr__Syms* symsp, const char* v__name);
    ~Varbiter_rr___024root();
    VL_UNCOPYABLE(Varbiter_rr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
