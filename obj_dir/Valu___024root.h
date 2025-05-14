// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(op_code,2,0);
    VL_OUT8(result,7,0);
    VL_OUT8(zero_flag,0,0);
    VL_OUT8(overflow_flag,0,0);
    CData/*7:0*/ alu__DOT__add_result;
    CData/*7:0*/ alu__DOT__sub_result;
    CData/*7:0*/ alu__DOT__and_result;
    CData/*7:0*/ alu__DOT__or_result;
    CData/*7:0*/ alu__DOT__xor_result;
    CData/*7:0*/ alu__DOT__shl_result;
    CData/*7:0*/ alu__DOT__shr_result;
    CData/*7:0*/ alu__DOT__cmp_result;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
