// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_fp_adder__Syms.h"


VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_init_sub__TOP__0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+31,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("configurable_fp_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"EXP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"MANT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"a_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"b_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"a_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"b_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"a_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+39,0,"b_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1,0,"a_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"a_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"b_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"a_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"b_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"special_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"result_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"result_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"result_inf_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"result_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"result_zero_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"a_mant_with_hidden",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+41,0,"b_mant_with_hidden",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+13,0,"exp_diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+14,0,"aligned_a_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+15,0,"aligned_b_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+16,0,"sum_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+42,0,"sum_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"sum_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"leading_zero_count__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+19,0,"norm_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"norm_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+21,0,"norm_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"guard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"sticky",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"round_increment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"mant_pre_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+26,0,"mant_rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+27,0,"mant_round_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"exp_rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"final_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+28,0,"final_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+42,0,"final_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"pos_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"neg_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"pos_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"neg_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"result_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"result_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+43,0,"result_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_init_top(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_init_top\n"); );
    // Body
    Vconfigurable_fp_adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_fp_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_fp_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_register(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vconfigurable_fp_adder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconfigurable_fp_adder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconfigurable_fp_adder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconfigurable_fp_adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_const_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_const_0\n"); );
    // Init
    Vconfigurable_fp_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fp_adder___024root*>(voidSelf);
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_fp_adder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_const_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+44,(8U),32);
    bufp->fullIData(oldp+45,(0x17U),32);
    bufp->fullIData(oldp+46,(0x7fc00000U),32);
    bufp->fullIData(oldp+47,(0x7f800000U),32);
    bufp->fullIData(oldp+48,(0xff800000U),32);
    bufp->fullIData(oldp+49,(0U),32);
    bufp->fullIData(oldp+50,(0x80000000U),32);
}

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_full_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_full_0\n"); );
    // Init
    Vconfigurable_fp_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fp_adder___024root*>(voidSelf);
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_fp_adder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_fp_adder___024root__trace_full_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->configurable_fp_adder__DOT__a_is_nan));
    bufp->fullBit(oldp+2,(vlSelf->configurable_fp_adder__DOT__b_is_nan));
    bufp->fullBit(oldp+3,(vlSelf->configurable_fp_adder__DOT__a_is_inf));
    bufp->fullBit(oldp+4,(vlSelf->configurable_fp_adder__DOT__b_is_inf));
    bufp->fullBit(oldp+5,(vlSelf->configurable_fp_adder__DOT__a_is_zero));
    bufp->fullBit(oldp+6,(vlSelf->configurable_fp_adder__DOT__b_is_zero));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h9284d053__0) 
                           | ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_inf) 
                              | ((IData)(vlSelf->configurable_fp_adder__DOT__b_is_inf) 
                                 | ((IData)(vlSelf->configurable_fp_adder__DOT__a_is_zero) 
                                    | (IData)(vlSelf->configurable_fp_adder__DOT__b_is_zero)))))));
    bufp->fullBit(oldp+8,(vlSelf->configurable_fp_adder__DOT__result_is_nan));
    bufp->fullBit(oldp+9,(vlSelf->configurable_fp_adder__DOT__result_is_inf));
    bufp->fullBit(oldp+10,(vlSelf->configurable_fp_adder__DOT__result_inf_sign));
    bufp->fullBit(oldp+11,(vlSelf->configurable_fp_adder__DOT__result_is_zero));
    bufp->fullBit(oldp+12,(vlSelf->configurable_fp_adder__DOT__result_zero_sign));
    bufp->fullSData(oldp+13,(vlSelf->configurable_fp_adder__DOT__exp_diff),9);
    bufp->fullIData(oldp+14,(vlSelf->configurable_fp_adder__DOT__aligned_a_mant),24);
    bufp->fullIData(oldp+15,(vlSelf->configurable_fp_adder__DOT__aligned_b_mant),24);
    bufp->fullIData(oldp+16,((0x1ffffffU & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)),25);
    bufp->fullBit(oldp+17,((1U & (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0 
                                  >> 0x19U))));
    bufp->fullIData(oldp+18,(vlSelf->configurable_fp_adder__DOT__leading_zero_count__Vstatic__k),32);
    bufp->fullCData(oldp+19,(vlSelf->configurable_fp_adder__DOT__norm_shift),8);
    bufp->fullIData(oldp+20,(vlSelf->configurable_fp_adder__DOT__norm_mant),24);
    bufp->fullCData(oldp+21,((0xffU & ((0x2000000U 
                                        & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
                                        ? ((IData)(1U) 
                                           + vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0)
                                        : (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0 
                                           - (IData)(vlSelf->configurable_fp_adder__DOT__norm_shift))))),8);
    bufp->fullBit(oldp+22,((1U & vlSelf->configurable_fp_adder__DOT__norm_mant)));
    bufp->fullBit(oldp+23,((1U & (vlSelf->configurable_fp_adder__DOT__norm_mant 
                                  >> 1U))));
    bufp->fullBit(oldp+24,(vlSelf->configurable_fp_adder__DOT__round_increment));
    bufp->fullIData(oldp+25,((0x7fffffU & (vlSelf->configurable_fp_adder__DOT__norm_mant 
                                           >> 1U))),23);
    bufp->fullIData(oldp+26,(vlSelf->configurable_fp_adder__DOT__mant_rounded),23);
    bufp->fullBit(oldp+27,(((0U == vlSelf->configurable_fp_adder__DOT__mant_rounded) 
                            & (IData)(vlSelf->configurable_fp_adder__DOT__round_increment))));
    bufp->fullCData(oldp+28,((0xffU & (((0x2000000U 
                                         & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
                                         ? ((IData)(1U) 
                                            + vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0)
                                         : (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0 
                                            - (IData)(vlSelf->configurable_fp_adder__DOT__norm_shift))) 
                                       + ((0U == vlSelf->configurable_fp_adder__DOT__mant_rounded) 
                                          & (IData)(vlSelf->configurable_fp_adder__DOT__round_increment))))),8);
    bufp->fullCData(oldp+29,(((IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)
                               ? 0xffU : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                           ? 0xffU : 
                                          ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                            ? 0U : 
                                           (0xffU & 
                                            (((0x2000000U 
                                               & vlSelf->configurable_fp_adder__DOT____VdfgTmp_h95ebfc61__0)
                                               ? ((IData)(1U) 
                                                  + vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0)
                                               : (vlSelf->configurable_fp_adder__DOT____VdfgTmp_h600b310c__0 
                                                  - (IData)(vlSelf->configurable_fp_adder__DOT__norm_shift))) 
                                             + ((0U 
                                                 == vlSelf->configurable_fp_adder__DOT__mant_rounded) 
                                                & (IData)(vlSelf->configurable_fp_adder__DOT__round_increment)))))))),8);
    bufp->fullIData(oldp+30,(((IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)
                               ? 0x400000U : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_inf)
                                               ? 0U
                                               : ((IData)(vlSelf->configurable_fp_adder__DOT__result_is_zero)
                                                   ? 0U
                                                   : vlSelf->configurable_fp_adder__DOT__mant_rounded)))),23);
    bufp->fullIData(oldp+31,(vlSelf->a),32);
    bufp->fullIData(oldp+32,(vlSelf->b),32);
    bufp->fullIData(oldp+33,(vlSelf->result),32);
    bufp->fullBit(oldp+34,((vlSelf->a >> 0x1fU)));
    bufp->fullBit(oldp+35,((vlSelf->b >> 0x1fU)));
    bufp->fullCData(oldp+36,((0xffU & (vlSelf->a >> 0x17U))),8);
    bufp->fullCData(oldp+37,((0xffU & (vlSelf->b >> 0x17U))),8);
    bufp->fullIData(oldp+38,((0x7fffffU & vlSelf->a)),23);
    bufp->fullIData(oldp+39,((0x7fffffU & vlSelf->b)),23);
    bufp->fullIData(oldp+40,((0x800000U | (0x7fffffU 
                                           & vlSelf->a))),24);
    bufp->fullIData(oldp+41,((0x800000U | (0x7fffffU 
                                           & vlSelf->b))),24);
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_ha4ba1160__0)
                                   ? (vlSelf->a >> 0x1fU)
                                   : ((IData)(vlSelf->configurable_fp_adder__DOT____VdfgTmp_h47244eb8__0)
                                       ? (vlSelf->a 
                                          >> 0x1fU)
                                       : (vlSelf->b 
                                          >> 0x1fU))))));
    bufp->fullBit(oldp+43,((1U & ((~ (IData)(vlSelf->configurable_fp_adder__DOT__result_is_nan)) 
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
