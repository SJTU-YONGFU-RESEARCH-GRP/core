// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_register_right.h for the primary calling header

#ifndef VERILATED_VSHIFT_REGISTER_RIGHT___024ROOT_H_
#define VERILATED_VSHIFT_REGISTER_RIGHT___024ROOT_H_  // guard

#include "verilated.h"


class Vshift_register_right__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vshift_register_right___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(en,0,0);
    VL_IN8(load,0,0);
    VL_IN8(serial_in,0,0);
    VL_IN8(parallel_in,7,0);
    VL_OUT8(serial_out,0,0);
    VL_OUT8(parallel_out,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshift_register_right__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshift_register_right___024root(Vshift_register_right__Syms* symsp, const char* v__name);
    ~Vshift_register_right___024root();
    VL_UNCOPYABLE(Vshift_register_right___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
