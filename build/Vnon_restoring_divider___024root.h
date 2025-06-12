// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnon_restoring_divider.h for the primary calling header

#ifndef VERILATED_VNON_RESTORING_DIVIDER___024ROOT_H_
#define VERILATED_VNON_RESTORING_DIVIDER___024ROOT_H_  // guard

#include "verilated.h"


class Vnon_restoring_divider__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnon_restoring_divider___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(start,0,0);
    VL_IN8(dividend,7,0);
    VL_IN8(divisor,7,0);
    VL_OUT8(quotient,7,0);
    VL_OUT8(remainder,7,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(busy,0,0);
    VL_OUT8(error,0,0);
    CData/*1:0*/ non_restoring_divider__DOT__state;
    CData/*7:0*/ non_restoring_divider__DOT__div_reg;
    CData/*7:0*/ non_restoring_divider__DOT__quot;
    CData/*7:0*/ non_restoring_divider__DOT__rem;
    CData/*3:0*/ non_restoring_divider__DOT__iter;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnon_restoring_divider__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnon_restoring_divider___024root(Vnon_restoring_divider__Syms* symsp, const char* v__name);
    ~Vnon_restoring_divider___024root();
    VL_UNCOPYABLE(Vnon_restoring_divider___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
