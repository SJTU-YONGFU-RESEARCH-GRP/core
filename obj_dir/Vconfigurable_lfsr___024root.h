// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_lfsr.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_LFSR___024ROOT_H_
#define VERILATED_VCONFIGURABLE_LFSR___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_lfsr__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_lfsr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(seed,7,0);
    VL_IN8(tap_pattern,7,0);
    VL_IN8(load_seed,0,0);
    VL_OUT8(serial_out,0,0);
    VL_OUT8(parallel_out,7,0);
    CData/*7:0*/ configurable_lfsr__DOT__shift_reg;
    CData/*7:0*/ configurable_lfsr__DOT__multi_bit__DOT__tapped_bits;
    CData/*0:0*/ configurable_lfsr__DOT__multi_bit__DOT__xor_result;
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
    Vconfigurable_lfsr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_lfsr___024root(Vconfigurable_lfsr__Syms* symsp, const char* v__name);
    ~Vconfigurable_lfsr___024root();
    VL_UNCOPYABLE(Vconfigurable_lfsr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
