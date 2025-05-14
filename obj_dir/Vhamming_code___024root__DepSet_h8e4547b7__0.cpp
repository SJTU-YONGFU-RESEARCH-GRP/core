// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_code.h for the primary calling header

#include "Vhamming_code__pch.h"
#include "Vhamming_code___024root.h"

VL_INLINE_OPT void Vhamming_code___024root___ico_sequent__TOP__0(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0 
        = (1U & VL_REDXOR_4((0xcU & (IData)(vlSelf->data_in))));
    vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0 
        = (1U & VL_REDXOR_8((0x60U & (IData)(vlSelf->received_in))));
    vlSelf->encoded_out = ((0x70U & ((IData)(vlSelf->data_in) 
                                     << 3U)) | ((8U 
                                                 & ((0xfffffff8U 
                                                     & ((IData)(vlSelf->data_in) 
                                                        << 2U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0) 
                                                     << 3U))) 
                                                | ((4U 
                                                    & ((IData)(vlSelf->data_in) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->data_in) 
                                                           ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_4(
                                                                       (0xbU 
                                                                        & (IData)(vlSelf->data_in))))))));
    vlSelf->hamming_code__DOT__syndrome = ((4U & ((
                                                   VL_REDXOR_8(
                                                               (0x18U 
                                                                & (IData)(vlSelf->received_in))) 
                                                   ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((VL_REDXOR_4(
                                                             (6U 
                                                              & (IData)(vlSelf->received_in))) 
                                                 ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0)) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_8(
                                                               (0x55U 
                                                                & (IData)(vlSelf->received_in))))));
    vlSelf->single_bit_error = (0U != (IData)(vlSelf->hamming_code__DOT__syndrome));
    vlSelf->corrected_code = ((IData)(vlSelf->received_in) 
                              ^ ((1U == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                  ? 1U : ((2U == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                           ? 2U : (
                                                   (3U 
                                                    == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                      ? 0x10U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                       ? 0x20U
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                        ? 0x40U
                                                        : 0U))))))));
    vlSelf->data_out = ((0xeU & ((IData)(vlSelf->corrected_code) 
                                 >> 3U)) | (1U & ((IData)(vlSelf->corrected_code) 
                                                  >> 2U)));
}

void Vhamming_code___024root___eval_ico(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vhamming_code___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vhamming_code___024root___eval_triggers__ico(Vhamming_code___024root* vlSelf);

bool Vhamming_code___024root___eval_phase__ico(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vhamming_code___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vhamming_code___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vhamming_code___024root___eval_act(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_act\n"); );
}

void Vhamming_code___024root___eval_nba(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_nba\n"); );
}

void Vhamming_code___024root___eval_triggers__act(Vhamming_code___024root* vlSelf);

bool Vhamming_code___024root___eval_phase__act(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhamming_code___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vhamming_code___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhamming_code___024root___eval_phase__nba(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhamming_code___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__ico(Vhamming_code___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__nba(Vhamming_code___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__act(Vhamming_code___024root* vlSelf);
#endif  // VL_DEBUG

void Vhamming_code___024root___eval(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval\n"); );
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
            Vhamming_code___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("hamming_code.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vhamming_code___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vhamming_code___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hamming_code.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vhamming_code___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hamming_code.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vhamming_code___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vhamming_code___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhamming_code___024root___eval_debug_assertions(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->data_in & 0xf0U))) {
        Verilated::overWidthError("data_in");}
    if (VL_UNLIKELY((vlSelf->received_in & 0x80U))) {
        Verilated::overWidthError("received_in");}
}
#endif  // VL_DEBUG
