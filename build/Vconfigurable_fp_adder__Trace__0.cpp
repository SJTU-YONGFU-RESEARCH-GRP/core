// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_fp_adder__Syms.h"


void Vconfigurable_fp_adder___024root__trace_chg_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfigurable_fp_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_chg_0\n"); );
    // Init
    Vconfigurable_fp_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fp_adder___024root*>(voidSelf);
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfigurable_fp_adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfigurable_fp_adder___024root__trace_chg_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->configurable_fp_adder__DOT__a_is_nan));
        bufp->chgBit(oldp+1,(vlSelf->configurable_fp_adder__DOT__b_is_nan));
        bufp->chgBit(oldp+2,(vlSelf->configurable_fp_adder__DOT__a_is_inf));
        bufp->chgBit(oldp+3,(vlSelf->configurable_fp_adder__DOT__b_is_inf));
        bufp->chgBit(oldp+4,(vlSelf->configurable_fp_adder__DOT__a_is_zero));
        bufp->chgBit(oldp+5,(vlSelf->configurable_fp_adder__DOT__b_is_zero));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h9284d053__0) 
                              | ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_inf) 
                                 | ((IData)(vlSelf->configurable_fp_adder__DOT__b_is_inf) 
                                    | ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_zero) 
                                       | (IData)(vlSelf->configurable_fp_adder__DOT__b_is_zero)))))));
        bufp->chgBit(oldp+7,(vlSelf->configurable_fp_adder__DOT__result_is_nan));
        bufp->chgBit(oldp+8,(vlSelf->configurable_fp_adder__DOT__result_is_inf));
        bufp->chgBit(oldp+9,(vlSelf->configurable_fp_adder__DOT__result_inf_sign));
        bufp->chgBit(oldp+10,(vlSelf->configurable_fp_adder__DOT__result_is_zero));
        bufp->chgBit(oldp+11,(vlSelf->configurable_fp_adder__DOT__result_zero_sign));
        bufp->chgSData(oldp+12,(vlSelf->configurable_fp_adder__DOT__exp_diff),9);
        bufp->chgIData(oldp+13,(vlSelf->configurable_fp_adder__DOT__aligned_a_mant),24);
        bufp->chgIData(oldp+14,(vlSelf->configurable_fp_adder__DOT__aligned_b_mant),24);
        bufp->chgIData(oldp+15,((0x1ffffffU & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)),25);
        bufp->chgBit(oldp+16,((1U & (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0 
                                     >> 0x19U))));
        bufp->chgIData(oldp+17,(vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k),32);
        bufp->chgCData(oldp+18,(vlSelf->configurable_fp_adder__DOT__norm_shift),8);
        bufp->chgIData(oldp+19,(vlSelf->configurable_fp_adder__DOT__norm_mant),24);
        bufp->chgCData(oldp+20,((0xffU & ((0x2000000U 
                                           & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
                                           ? ((IData)(1U) 
                                              + vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0)
                                           : (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0 
                                              - (IData)(vlSelf->configurable_fp_adder__DOT__norm_shift))))),8);
        bufp->chgBit(oldp+21,((1U & vlSelf->configurable_fp_adder__DOT__norm_mant)));
        bufp->chgBit(oldp+22,((1U & (vlSelf->configurable_fp_adder__DOT__norm_mant 
                                     >> 1U))));
        bufp->chgBit(oldp+23,(vlSelf->configurable_fp_adder__DOT__round_increment));
        bufp->chgIData(oldp+24,((0x7fffffU & (vlSelf->configurable_fp_adder__DOT__norm_mant 
                                              >> 1U))),23);
        bufp->chgIData(oldp+25,(vlSelf->configurable_fp_adder__DOT__mant_rounded),23);
        bufp->chgBit(oldp+26,(((0U == vlSelf->configurable_fp_adder__DOT__mant_rounded) 
                               & (IData)(vlSelf->configurable_fp_adder__DOT__round_increment))));
        bufp->chgCData(oldp+27,((0xffU & (((0x2000000U 
                                            & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
                                            ? ((IData)(1U) 
                                               + vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0)
                                            : (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0 
                                               - (IData)(vlSelf->configurable_fp_adder__DOT__norm_shift))) 
                                          + ((0U == vlSelf->configurable_fp_adder__DOT__mant_rounded) 
                                             & (IData)(vlSelf->configurable_fp_adder__DOT__round_increment))))),8);
        bufp->chgCData(oldp+28,(((IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)
                                  ? 0xffU : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                              ? 0xffU
                                              : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
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
                                                      & (IData)(vlSelf->configurable_fp_adder__DOT__round_increment)))))))),8);
        bufp->chgIData(oldp+29,(((IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)
                                  ? 0x400000U : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                                   ? 0U
                                                   : vlSelf->configurable_fp_adder__DOT__mant_rounded)))),23);
    }
    bufp->chgIData(oldp+30,(vlSelf->a),32);
    bufp->chgIData(oldp+31,(vlSelf->b),32);
    bufp->chgIData(oldp+32,(vlSelf->result),32);
    bufp->chgBit(oldp+33,((vlSelf->a >> 0x1fU)));
    bufp->chgBit(oldp+34,((vlSelf->b >> 0x1fU)));
    bufp->chgCData(oldp+35,((0xffU & (vlSelf->a >> 0x17U))),8);
    bufp->chgCData(oldp+36,((0xffU & (vlSelf->b >> 0x17U))),8);
    bufp->chgIData(oldp+37,((0x7fffffU & vlSelf->a)),23);
    bufp->chgIData(oldp+38,((0x7fffffU & vlSelf->b)),23);
    bufp->chgIData(oldp+39,((0x800000U | (0x7fffffU 
                                          & vlSelf->a))),24);
    bufp->chgIData(oldp+40,((0x800000U | (0x7fffffU 
                                          & vlSelf->b))),24);
    bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_ha4ba1160__0)
                                  ? (vlSelf->a >> 0x1fU)
                                  : ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h47244eb8__0)
                                      ? (vlSelf->a 
                                         >> 0x1fU) : 
                                     (vlSelf->b >> 0x1fU))))));
    bufp->chgBit(oldp+42,((1U & ((~ (IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)) 
                                 & ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                     ? (IData)(vlSelf->configurable_fp_adder__DOT__result_inf_sign)
                                     : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                         ? (IData)(vlSelf->configurable_fp_adder__DOT__result_zero_sign)
                                         : ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_ha4ba1160__0)
                                             ? (vlSelf->a 
                                                >> 0x1fU)
                                             : ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h47244eb8__0)
                                                 ? 
                                                (vlSelf->a 
                                                 >> 0x1fU)
                                                 : 
                                                (vlSelf->b 
                                                 >> 0x1fU)))))))));
}

void Vconfigurable_fp_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_cleanup\n"); );
    // Init
    Vconfigurable_fp_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fp_adder___024root*>(voidSelf);
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
