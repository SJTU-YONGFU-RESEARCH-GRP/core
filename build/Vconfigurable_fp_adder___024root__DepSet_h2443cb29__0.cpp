// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_fp_adder.h for the primary calling header

#include "Vconfigurable_fp_adder__pch.h"
#include "Vconfigurable_fp_adder___024root.h"

VL_INLINE_OPT void Vconfigurable_fp_adder___024root___ico_sequent__TOP__0(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_h026ab96c__0;
    configurable_fp_adder__DOT____VdfgTmp_h026ab96c__0 = 0;
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_ha49cbc40__0;
    configurable_fp_adder__DOT____VdfgTmp_ha49cbc40__0 = 0;
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_ha5c11a71__0;
    configurable_fp_adder__DOT____VdfgTmp_ha5c11a71__0 = 0;
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_hc8de2c6c__0;
    configurable_fp_adder__DOT____VdfgTmp_hc8de2c6c__0 = 0;
    CData/*0:0*/ configurable_fp_adder__DOT____VdfgTmp_hf24ca935__0;
    configurable_fp_adder__DOT____VdfgTmp_hf24ca935__0 = 0;
    // Body
    vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0 
        = (((0xffU & (vlSelf->a >> 0x17U)) > (0xffU 
                                              & (vlSelf->b 
                                                 >> 0x17U)))
            ? (0xffU & (vlSelf->a >> 0x17U)) : (0xffU 
                                                & (vlSelf->b 
                                                   >> 0x17U)));
    configurable_fp_adder__DOT____VdfgTmp_ha5c11a71__0 
        = ((vlSelf->a & vlSelf->b) >> 0x1fU);
    vlSelf->configurable_fp_adder__DOT__b_is_zero = (IData)(
                                                            (0U 
                                                             == 
                                                             (0x7fffffffU 
                                                              & vlSelf->b)));
    configurable_fp_adder__DOT____VdfgTmp_ha49cbc40__0 
        = ((vlSelf->a >> 0x1fU) != (vlSelf->b >> 0x1fU));
    vlSelf->configurable_fp_adder__DOT__a_is_nan = (IData)(
                                                           ((0x7f800000U 
                                                             == 
                                                             (0x7f800000U 
                                                              & vlSelf->a)) 
                                                            & (0U 
                                                               != 
                                                               (0x7fffffU 
                                                                & vlSelf->a))));
    vlSelf->configurable_fp_adder__DOT__b_is_nan = (IData)(
                                                           ((0x7f800000U 
                                                             == 
                                                             (0x7f800000U 
                                                              & vlSelf->b)) 
                                                            & (0U 
                                                               != 
                                                               (0x7fffffU 
                                                                & vlSelf->b))));
    vlSelf->configurable_fp_adder__DOT__a_is_zero = (IData)(
                                                            (0U 
                                                             == 
                                                             (0x7fffffffU 
                                                              & vlSelf->a)));
    vlSelf->configurable_fp_adder__DOT__b_is_inf = (IData)(
                                                           (0x7f800000U 
                                                            == 
                                                            (0x7fffffffU 
                                                             & vlSelf->b)));
    vlSelf->configurable_fp_adder__DOT__a_is_inf = (IData)(
                                                           (0x7f800000U 
                                                            == 
                                                            (0x7fffffffU 
                                                             & vlSelf->a)));
    vlSelf->configurable_fp_adder__DOT____VdfgTmp_ha4ba1160__0 
        = ((vlSelf->a >> 0x1fU) == (vlSelf->b >> 0x1fU));
    vlSelf->configurable_fp_adder__DOT__exp_diff = 
        (0x1ffU & ((0xffU & (vlSelf->a >> 0x17U)) - 
                   (0xffU & (vlSelf->b >> 0x17U))));
    vlSelf->configurable_fp_adder__DOT____VdfgTmp_h9284d053__0 
        = ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_nan) 
           | (IData)(vlSelf->configurable_fp_adder__DOT__b_is_nan));
    configurable_fp_adder__DOT____VdfgTmp_hc8de2c6c__0 
        = ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_zero) 
           & (IData)(vlSelf->configurable_fp_adder__DOT__b_is_zero));
    configurable_fp_adder__DOT____VdfgTmp_h026ab96c__0 
        = ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_inf) 
           & (IData)(vlSelf->configurable_fp_adder__DOT__b_is_inf));
    configurable_fp_adder__DOT____VdfgTmp_hf24ca935__0 
        = (IData)((((IData)(vlSelf->configurable_fp_adder__DOT__exp_diff) 
                    >> 8U) | (0U == (IData)(vlSelf->configurable_fp_adder__DOT__exp_diff))));
    vlSelf->configurable_fp_adder__DOT__result_zero_sign 
        = (1U & ((IData)(configurable_fp_adder__DOT____VdfgTmp_hc8de2c6c__0)
                  ? (IData)(configurable_fp_adder__DOT____VdfgTmp_ha5c11a71__0)
                  : ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_zero)
                      ? (vlSelf->b >> 0x1fU) : (vlSelf->a 
                                                >> 0x1fU))));
    vlSelf->configurable_fp_adder__DOT__result_is_zero 
        = ((IData)(configurable_fp_adder__DOT____VdfgTmp_hc8de2c6c__0) 
           | ((~ (IData)(vlSelf->configurable_fp_adder__DOT__a_is_nan)) 
              & ((~ (IData)(vlSelf->configurable_fp_adder__DOT__b_is_nan)) 
                 & ((~ (IData)(vlSelf->configurable_fp_adder__DOT__a_is_inf)) 
                    & ((~ (IData)(vlSelf->configurable_fp_adder__DOT__b_is_inf)) 
                       & (((0xffU & (vlSelf->a >> 0x17U)) 
                           == (0xffU & (vlSelf->b >> 0x17U))) 
                          & (((0x7fffffU & vlSelf->a) 
                              == (0x7fffffU & vlSelf->b)) 
                             & (IData)(configurable_fp_adder__DOT____VdfgTmp_ha49cbc40__0))))))));
    vlSelf->configurable_fp_adder__DOT__result_inf_sign 
        = (1U & ((IData)(configurable_fp_adder__DOT____VdfgTmp_h026ab96c__0)
                  ? (IData)(configurable_fp_adder__DOT____VdfgTmp_ha5c11a71__0)
                  : ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_inf)
                      ? (vlSelf->a >> 0x1fU) : (vlSelf->b 
                                                >> 0x1fU))));
    vlSelf->configurable_fp_adder__DOT__result_is_nan 
        = ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h9284d053__0) 
           | ((IData)(configurable_fp_adder__DOT____VdfgTmp_h026ab96c__0) 
              & (IData)(configurable_fp_adder__DOT____VdfgTmp_ha49cbc40__0)));
    if (configurable_fp_adder__DOT____VdfgTmp_hf24ca935__0) {
        vlSelf->configurable_fp_adder__DOT__aligned_a_mant 
            = (0xffffffU & (0x800000U | (0x7fffffU 
                                         & vlSelf->a)));
        vlSelf->configurable_fp_adder__DOT__aligned_b_mant 
            = (0xffffffU & VL_SHIFTR_III(24,24,9, (0x800000U 
                                                   | (0x7fffffU 
                                                      & vlSelf->b)), (IData)(vlSelf->configurable_fp_adder__DOT__exp_diff)));
    } else {
        vlSelf->configurable_fp_adder__DOT__aligned_a_mant 
            = (0xffffffU & VL_SHIFTR_III(24,24,9, (0x800000U 
                                                   | (0x7fffffU 
                                                      & vlSelf->a)), 
                                         (0x1ffU & 
                                          (- (IData)(vlSelf->configurable_fp_adder__DOT__exp_diff)))));
        vlSelf->configurable_fp_adder__DOT__aligned_b_mant 
            = (0xffffffU & (0x800000U | (0x7fffffU 
                                         & vlSelf->b)));
    }
    vlSelf->configurable_fp_adder__DOT__result_is_inf 
        = ((~ (IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)) 
           & ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_inf) 
              | (IData)(vlSelf->configurable_fp_adder__DOT__b_is_inf)));
    vlSelf->configurable_fp_adder__DOT____VdfgTmp_h47244eb8__0 
        = (vlSelf->configurable_fp_adder__DOT__aligned_a_mant 
           >= vlSelf->configurable_fp_adder__DOT__aligned_b_mant);
    vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0 
        = (0x3ffffffU & ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_ha4ba1160__0)
                          ? (vlSelf->configurable_fp_adder__DOT__aligned_a_mant 
                             + vlSelf->configurable_fp_adder__DOT__aligned_b_mant)
                          : ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h47244eb8__0)
                              ? (0xffffffU & (vlSelf->configurable_fp_adder__DOT__aligned_a_mant 
                                              - vlSelf->configurable_fp_adder__DOT__aligned_b_mant))
                              : (0xffffffU & (vlSelf->configurable_fp_adder__DOT__aligned_b_mant 
                                              - vlSelf->configurable_fp_adder__DOT__aligned_a_mant)))));
    vlSelf->configurable_fp_adder__DOT__norm_shift 
        = ((0x2000000U & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
            ? 0U : (0xffU & VL_EXTEND_II(32,8, ([&]() {
                        vlSelf->__Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__value 
                            = (0xffffffU & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0);
                        vlSelf->__Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__Vfuncout = 0U;
                        vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k = 0x17U;
                        while (VL_LTES_III(32, 0U, vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k)) {
                            if (((0x17U >= (0x1fU & vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k)) 
                                 && (1U & (vlSelf->__Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__value 
                                           >> (0x1fU 
                                               & vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k))))) {
                                vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k = 0xffffffffU;
                            } else {
                                vlSelf->__Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__Vfuncout 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->__Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__Vfuncout)));
                            }
                            vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k 
                                = (vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k 
                                   - (IData)(1U));
                        }
                    }(), (IData)(vlSelf->__Vfunc_configurable_fp_adder__DOT__leading_zero_count__0__Vfuncout)))));
    vlSelf->configurable_fp_adder__DOT__norm_mant = 
        (0xffffffU & ((0x2000000U & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
                       ? (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0 
                          >> 1U) : VL_SHIFTL_III(24,24,8, vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0, (IData)(vlSelf->configurable_fp_adder__DOT__norm_shift))));
    vlSelf->configurable_fp_adder__DOT__round_increment 
        = (1U & (vlSelf->configurable_fp_adder__DOT__norm_mant 
                 & ((vlSelf->configurable_fp_adder__DOT__norm_mant 
                     >> 1U) | vlSelf->configurable_fp_adder__DOT__norm_mant)));
    vlSelf->configurable_fp_adder__DOT__mant_rounded 
        = (0x7fffffU & ((vlSelf->configurable_fp_adder__DOT__norm_mant 
                         >> 1U) + (IData)(vlSelf->configurable_fp_adder__DOT__round_increment)));
    vlSelf->result = (((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h9284d053__0) 
                       | ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_inf) 
                          | ((IData)(vlSelf->configurable_fp_adder__DOT__b_is_inf) 
                             | ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_zero) 
                                | (IData)(vlSelf->configurable_fp_adder__DOT__b_is_zero)))))
                       ? ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)
                           ? 0x7fc00000U : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                             ? ((IData)(vlSelf->configurable_fp_adder__DOT__result_inf_sign)
                                                 ? 0xff800000U
                                                 : 0x7f800000U)
                                             : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                                 ? 
                                                ((IData)(vlSelf->configurable_fp_adder__DOT__result_zero_sign)
                                                  ? 0x80000000U
                                                  : 0U)
                                                 : 0x7fc00000U)))
                       : ((((~ (IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)) 
                            & ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                ? (IData)(vlSelf->configurable_fp_adder__DOT__result_inf_sign)
                                : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                    ? (IData)(vlSelf->configurable_fp_adder__DOT__result_zero_sign)
                                    : ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_ha4ba1160__0)
                                        ? (vlSelf->a 
                                           >> 0x1fU)
                                        : ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h47244eb8__0)
                                            ? (vlSelf->a 
                                               >> 0x1fU)
                                            : (vlSelf->b 
                                               >> 0x1fU)))))) 
                           << 0x1fU) | ((((IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)
                                           ? 0xffU : 
                                          ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                            ? 0xffU
                                            : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                                ? 0U
                                                : (0xffU 
                                                   & (((0x2000000U 
                                                        & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0)
                                                        : 
                                                       (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0 
                                                        - (IData)(vlSelf->configurable_fp_adder__DOT__norm_shift))) 
                                                      + 
                                                      ((0U 
                                                        == vlSelf->configurable_fp_adder__DOT__mant_rounded) 
                                                       & (IData)(vlSelf->configurable_fp_adder__DOT__round_increment))))))) 
                                         << 0x17U) 
                                        | ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)
                                            ? 0x400000U
                                            : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                                ? 0U
                                                : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                                    ? 0U
                                                    : vlSelf->configurable_fp_adder__DOT__mant_rounded))))));
}

void Vconfigurable_fp_adder___024root___eval_ico(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_fp_adder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vconfigurable_fp_adder___024root___eval_triggers__ico(Vconfigurable_fp_adder___024root* vlSelf);

bool Vconfigurable_fp_adder___024root___eval_phase__ico(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_fp_adder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_fp_adder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconfigurable_fp_adder___024root___eval_act(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_act\n"); );
}

void Vconfigurable_fp_adder___024root___eval_nba(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_nba\n"); );
}

void Vconfigurable_fp_adder___024root___eval_triggers__act(Vconfigurable_fp_adder___024root* vlSelf);

bool Vconfigurable_fp_adder___024root___eval_phase__act(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_fp_adder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vconfigurable_fp_adder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_fp_adder___024root___eval_phase__nba(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_fp_adder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fp_adder___024root___dump_triggers__ico(Vconfigurable_fp_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fp_adder___024root___dump_triggers__nba(Vconfigurable_fp_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fp_adder___024root___dump_triggers__act(Vconfigurable_fp_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_fp_adder___024root___eval(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_fp_adder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/adders/configurable_fp_adder.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_fp_adder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_fp_adder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/adders/configurable_fp_adder.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vconfigurable_fp_adder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/adders/configurable_fp_adder.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vconfigurable_fp_adder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vconfigurable_fp_adder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_fp_adder___024root___eval_debug_assertions(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
