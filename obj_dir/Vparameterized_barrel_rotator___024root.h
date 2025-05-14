// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparameterized_barrel_rotator.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZED_BARREL_ROTATOR___024ROOT_H_
#define VERILATED_VPARAMETERIZED_BARREL_ROTATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vparameterized_barrel_rotator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vparameterized_barrel_rotator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rotate_amount,4,0);
    VL_IN8(direction,0,0);
    CData/*4:0*/ parameterized_barrel_rotator__DOT__effective_rotate;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(data_in,31,0);
    VL_OUT(data_out,31,0);
    IData/*31:0*/ parameterized_barrel_rotator__DOT__temp_data;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ parameterized_barrel_rotator__DOT__extended_data;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vparameterized_barrel_rotator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vparameterized_barrel_rotator___024root(Vparameterized_barrel_rotator__Syms* symsp, const char* v__name);
    ~Vparameterized_barrel_rotator___024root();
    VL_UNCOPYABLE(Vparameterized_barrel_rotator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
