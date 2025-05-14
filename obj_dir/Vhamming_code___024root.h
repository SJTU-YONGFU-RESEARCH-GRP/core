// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhamming_code.h for the primary calling header

#ifndef VERILATED_VHAMMING_CODE___024ROOT_H_
#define VERILATED_VHAMMING_CODE___024ROOT_H_  // guard

#include "verilated.h"


class Vhamming_code__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhamming_code___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(data_in,3,0);
    VL_OUT8(encoded_out,6,0);
    VL_IN8(received_in,6,0);
    VL_OUT8(data_out,3,0);
    VL_OUT8(single_bit_error,0,0);
    VL_OUT8(corrected_code,6,0);
    CData/*2:0*/ hamming_code__DOT__syndrome;
    CData/*0:0*/ hamming_code__DOT____VdfgTmp_ha636b47d__0;
    CData/*0:0*/ hamming_code__DOT____VdfgTmp_h3624b32f__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhamming_code__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhamming_code___024root(Vhamming_code__Syms* symsp, const char* v__name);
    ~Vhamming_code___024root();
    VL_UNCOPYABLE(Vhamming_code___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
