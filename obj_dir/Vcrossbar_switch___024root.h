// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcrossbar_switch.h for the primary calling header

#ifndef VERILATED_VCROSSBAR_SWITCH___024ROOT_H_
#define VERILATED_VCROSSBAR_SWITCH___024ROOT_H_  // guard

#include "verilated.h"


class Vcrossbar_switch__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcrossbar_switch___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(select,7,0);
    CData/*1:0*/ crossbar_switch__DOT__sel_idx;
    CData/*7:0*/ crossbar_switch__DOT__selected_data;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(data_in,31,0);
    VL_OUT(data_out,31,0);
    IData/*31:0*/ crossbar_switch__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcrossbar_switch__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcrossbar_switch___024root(Vcrossbar_switch__Syms* symsp, const char* v__name);
    ~Vcrossbar_switch___024root();
    VL_UNCOPYABLE(Vcrossbar_switch___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
