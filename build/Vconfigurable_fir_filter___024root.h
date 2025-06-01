// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_fir_filter.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_FIR_FILTER___024ROOT_H_
#define VERILATED_VCONFIGURABLE_FIR_FILTER___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_fir_filter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_fir_filter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(data_valid,0,0);
    VL_OUT8(data_out_valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(data_in,15,0);
    VL_OUT16(data_out,15,0);
    SData/*15:0*/ configurable_fir_filter__DOT__output_value;
    IData/*31:0*/ configurable_fir_filter__DOT__sum_temp;
    IData/*31:0*/ configurable_fir_filter__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 8> configurable_fir_filter__DOT__delay_line;
    VlUnpacked<IData/*31:0*/, 8> configurable_fir_filter__DOT__products;
    VlUnpacked<SData/*15:0*/, 8> configurable_fir_filter__DOT__coeff_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_fir_filter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_fir_filter___024root(Vconfigurable_fir_filter__Syms* symsp, const char* v__name);
    ~Vconfigurable_fir_filter___024root();
    VL_UNCOPYABLE(Vconfigurable_fir_filter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
