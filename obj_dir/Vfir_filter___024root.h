// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfir_filter.h for the primary calling header

#ifndef VERILATED_VFIR_FILTER___024ROOT_H_
#define VERILATED_VFIR_FILTER___024ROOT_H_  // guard

#include "verilated.h"


class Vfir_filter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfir_filter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(data_in,7,0);
    VL_IN8(data_valid,0,0);
    VL_OUT8(data_out_valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(data_out,18,0);
    IData/*18:0*/ fir_filter__DOT__result;
    IData/*31:0*/ fir_filter__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> fir_filter__DOT__coeffs;
    VlUnpacked<CData/*7:0*/, 4> fir_filter__DOT__delay_line;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfir_filter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfir_filter___024root(Vfir_filter__Syms* symsp, const char* v__name);
    ~Vfir_filter___024root();
    VL_UNCOPYABLE(Vfir_filter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
