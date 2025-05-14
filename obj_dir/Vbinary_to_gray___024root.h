// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbinary_to_gray.h for the primary calling header

#ifndef VERILATED_VBINARY_TO_GRAY___024ROOT_H_
#define VERILATED_VBINARY_TO_GRAY___024ROOT_H_  // guard

#include "verilated.h"


class Vbinary_to_gray__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbinary_to_gray___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(binary_in,3,0);
    VL_OUT8(gray_out,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbinary_to_gray__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbinary_to_gray___024root(Vbinary_to_gray__Syms* symsp, const char* v__name);
    ~Vbinary_to_gray___024root();
    VL_UNCOPYABLE(Vbinary_to_gray___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
