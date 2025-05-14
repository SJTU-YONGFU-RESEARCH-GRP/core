// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpiso_register.h for the primary calling header

#ifndef VERILATED_VPISO_REGISTER___024ROOT_H_
#define VERILATED_VPISO_REGISTER___024ROOT_H_  // guard

#include "verilated.h"


class Vpiso_register__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpiso_register___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(load,0,0);
    VL_IN8(parallel_in,7,0);
    VL_OUT8(serial_out,0,0);
    CData/*7:0*/ piso_register__DOT__shift_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpiso_register__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpiso_register___024root(Vpiso_register__Syms* symsp, const char* v__name);
    ~Vpiso_register___024root();
    VL_UNCOPYABLE(Vpiso_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
