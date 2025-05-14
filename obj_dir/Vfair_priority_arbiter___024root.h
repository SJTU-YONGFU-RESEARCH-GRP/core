// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfair_priority_arbiter.h for the primary calling header

#ifndef VERILATED_VFAIR_PRIORITY_ARBITER___024ROOT_H_
#define VERILATED_VFAIR_PRIORITY_ARBITER___024ROOT_H_  // guard

#include "verilated.h"


class Vfair_priority_arbiter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfair_priority_arbiter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(request,3,0);
    VL_IN8(priorities,7,0);
    VL_OUT8(grant,3,0);
    VL_OUT8(grant_idx,1,0);
    VL_OUT8(valid,0,0);
    CData/*1:0*/ fair_priority_arbiter__DOT__last_grant_idx;
    CData/*1:0*/ fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority;
    CData/*1:0*/ fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx;
    CData/*0:0*/ fair_priority_arbiter__DOT__unnamedblk2__DOT__found;
    CData/*1:0*/ fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ fair_priority_arbiter__DOT__unnamedblk2__DOT__unnamedblk3__DOT__loop_j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 4> fair_priority_arbiter__DOT__priority_values;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfair_priority_arbiter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfair_priority_arbiter___024root(Vfair_priority_arbiter__Syms* symsp, const char* v__name);
    ~Vfair_priority_arbiter___024root();
    VL_UNCOPYABLE(Vfair_priority_arbiter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
