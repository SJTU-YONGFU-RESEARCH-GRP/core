// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclock_divider.h for the primary calling header

#ifndef VERILATED_VCLOCK_DIVIDER___024ROOT_H_
#define VERILATED_VCLOCK_DIVIDER___024ROOT_H_  // guard

#include "verilated.h"


class Vclock_divider__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclock_divider___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_in,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(div_ratio,7,0);
    VL_IN8(duty_cycle,7,0);
    VL_OUT8(clk_out,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ clock_divider__DOT__counter;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vclock_divider__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclock_divider___024root(Vclock_divider__Syms* symsp, const char* v__name);
    ~Vclock_divider___024root();
    VL_UNCOPYABLE(Vclock_divider___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
