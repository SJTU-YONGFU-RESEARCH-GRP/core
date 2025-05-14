// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgray_counter.h for the primary calling header

#ifndef VERILATED_VGRAY_COUNTER___024ROOT_H_
#define VERILATED_VGRAY_COUNTER___024ROOT_H_  // guard

#include "verilated.h"


class Vgray_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgray_counter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(direction,0,0);
    VL_IN8(load,0,0);
    VL_IN8(data_in,3,0);
    VL_OUT8(gray_out,3,0);
    VL_OUT8(binary_out,3,0);
    CData/*3:0*/ gray_counter__DOT__binary_count;
    CData/*3:0*/ gray_counter__DOT__next_binary;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgray_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgray_counter___024root(Vgray_counter__Syms* symsp, const char* v__name);
    ~Vgray_counter___024root();
    VL_UNCOPYABLE(Vgray_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
