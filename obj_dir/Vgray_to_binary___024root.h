// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgray_to_binary.h for the primary calling header

#ifndef VERILATED_VGRAY_TO_BINARY___024ROOT_H_
#define VERILATED_VGRAY_TO_BINARY___024ROOT_H_  // guard

#include "verilated.h"


class Vgray_to_binary__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgray_to_binary___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(gray_in,3,0);
    VL_OUT8(binary_out,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgray_to_binary__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgray_to_binary___024root(Vgray_to_binary__Syms* symsp, const char* v__name);
    ~Vgray_to_binary___024root();
    VL_UNCOPYABLE(Vgray_to_binary___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
