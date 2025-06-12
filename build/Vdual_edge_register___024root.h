// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdual_edge_register.h for the primary calling header

#ifndef VERILATED_VDUAL_EDGE_REGISTER___024ROOT_H_
#define VERILATED_VDUAL_EDGE_REGISTER___024ROOT_H_  // guard

#include "verilated.h"


class Vdual_edge_register__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdual_edge_register___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(data_in,7,0);
    VL_OUT8(data_out,7,0);
    CData/*7:0*/ dual_edge_register__DOT__posedge_reg;
    CData/*7:0*/ dual_edge_register__DOT__negedge_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdual_edge_register__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdual_edge_register___024root(Vdual_edge_register__Syms* symsp, const char* v__name);
    ~Vdual_edge_register___024root();
    VL_UNCOPYABLE(Vdual_edge_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
