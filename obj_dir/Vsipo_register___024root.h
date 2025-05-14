// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsipo_register.h for the primary calling header

#ifndef VERILATED_VSIPO_REGISTER___024ROOT_H_
#define VERILATED_VSIPO_REGISTER___024ROOT_H_  // guard

#include "verilated.h"


class Vsipo_register__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsipo_register___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(serial_in,0,0);
    VL_IN8(enable,0,0);
    VL_OUT8(parallel_out,7,0);
    VL_OUT8(parity_out,0,0);
    CData/*7:0*/ sipo_register__DOT__shift_reg;
    CData/*0:0*/ sipo_register__DOT__parity_bit;
    CData/*7:0*/ sipo_register__DOT__unnamedblk1__DOT__next_shift_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ sipo_register__DOT__count_ones__Vstatic__i;
    IData/*31:0*/ sipo_register__DOT__count_ones__Vstatic__count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsipo_register__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsipo_register___024root(Vsipo_register__Syms* symsp, const char* v__name);
    ~Vsipo_register___024root();
    VL_UNCOPYABLE(Vsipo_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
