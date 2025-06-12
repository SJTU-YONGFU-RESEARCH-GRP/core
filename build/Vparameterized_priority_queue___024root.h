// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparameterized_priority_queue.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZED_PRIORITY_QUEUE___024ROOT_H_
#define VERILATED_VPARAMETERIZED_PRIORITY_QUEUE___024ROOT_H_  // guard

#include "verilated.h"


class Vparameterized_priority_queue__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vparameterized_priority_queue___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(i_data,7,0);
    VL_IN8(i_priority,2,0);
    VL_IN8(i_enqueue,0,0);
    VL_OUT8(o_full,0,0);
    VL_OUT8(o_data,7,0);
    VL_OUT8(o_priority,2,0);
    VL_IN8(i_dequeue,0,0);
    VL_OUT8(o_empty,0,0);
    VL_OUT8(o_count,4,0);
    CData/*4:0*/ parameterized_priority_queue__DOT__count;
    CData/*4:0*/ parameterized_priority_queue__DOT__insert_idx;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ parameterized_priority_queue__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> parameterized_priority_queue__DOT__queue_data;
    VlUnpacked<CData/*2:0*/, 16> parameterized_priority_queue__DOT__queue_priority;
    VlUnpacked<CData/*7:0*/, 16> parameterized_priority_queue__DOT__temp_data;
    VlUnpacked<CData/*2:0*/, 16> parameterized_priority_queue__DOT__temp_priority;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vparameterized_priority_queue__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vparameterized_priority_queue___024root(Vparameterized_priority_queue__Syms* symsp, const char* v__name);
    ~Vparameterized_priority_queue___024root();
    VL_UNCOPYABLE(Vparameterized_priority_queue___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
