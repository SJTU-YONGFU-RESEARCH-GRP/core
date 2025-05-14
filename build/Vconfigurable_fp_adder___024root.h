// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_fp_adder.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_FP_ADDER___024ROOT_H_
#define VERILATED_VCONFIGURABLE_FP_ADDER___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_fp_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_fp_adder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ configurable_fp_adder__DOT__a_is_nan;
    CData/*0:0*/ configurable_fp_adder__DOT__b_is_nan;
    CData/*0:0*/ configurable_fp_adder__DOT__a_is_inf;
    CData/*0:0*/ configurable_fp_adder__DOT__b_is_inf;
    CData/*0:0*/ configurable_fp_adder__DOT__a_is_zero;
    CData/*0:0*/ configurable_fp_adder__DOT__b_is_zero;
    CData/*0:0*/ configurable_fp_adder__DOT__result_is_nan;
    CData/*0:0*/ configurable_fp_adder__DOT__result_is_inf;
    CData/*0:0*/ configurable_fp_adder__DOT__result_inf_sign;
    CData/*0:0*/ configurable_fp_adder__DOT__result_is_zero;
    CData/*0:0*/ configurable_fp_adder__DOT__result_zero_sign;
    CData/*7:0*/ configurable_fp_adder__DOT__norm_shift;
    CData/*0:0*/ configurable_fp_adder__DOT__round_increment;
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_h9284d053__0;
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_ha4ba1160__0;
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_h47244eb8__0;
    CData/*7:0*/ __Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__Vfuncout;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ configurable_fp_adder__DOT__exp_diff;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_OUT(result,31,0);
    IData/*23:0*/ configurable_fp_adder__DOT__aligned_a_mant;
    IData/*23:0*/ configurable_fp_adder__DOT__aligned_b_mant;
    IData/*31:0*/ configurable_fp_adder__DOT__leading_zero_count__Vstatic__k;
    IData/*23:0*/ configurable_fp_adder__DOT__norm_mant;
    IData/*22:0*/ configurable_fp_adder__DOT__mant_rounded;
    IData/*25:0*/ configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0;
    IData/*31:0*/ configurable_fp_adder__DOT____VdfgTmp_h600b310c__0;
    IData/*23:0*/ __Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__value;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_fp_adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_fp_adder___024root(Vconfigurable_fp_adder__Syms* symsp, const char* v__name);
    ~Vconfigurable_fp_adder___024root();
    VL_UNCOPYABLE(Vconfigurable_fp_adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
