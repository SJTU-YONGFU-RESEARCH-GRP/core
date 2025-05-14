// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_code.h for the primary calling header

#include "Vhamming_code__pch.h"
#include "Vhamming_code___024root.h"

VL_ATTR_COLD void Vhamming_code___024root___eval_static(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vhamming_code___024root___eval_initial(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vhamming_code___024root___eval_final(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__stl(Vhamming_code___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhamming_code___024root___eval_phase__stl(Vhamming_code___024root* vlSelf);

VL_ATTR_COLD void Vhamming_code___024root___eval_settle(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vhamming_code___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hamming_code.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vhamming_code___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__stl(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vhamming_code___024root___ico_sequent__TOP__0(Vhamming_code___024root* vlSelf);

VL_ATTR_COLD void Vhamming_code___024root___eval_stl(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vhamming_code___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vhamming_code___024root___eval_triggers__stl(Vhamming_code___024root* vlSelf);

VL_ATTR_COLD bool Vhamming_code___024root___eval_phase__stl(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhamming_code___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vhamming_code___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__ico(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__act(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__nba(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhamming_code___024root___ctor_var_reset(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(4);
    vlSelf->encoded_out = VL_RAND_RESET_I(7);
    vlSelf->received_in = VL_RAND_RESET_I(7);
    vlSelf->data_out = VL_RAND_RESET_I(4);
    vlSelf->single_bit_error = VL_RAND_RESET_I(1);
    vlSelf->corrected_code = VL_RAND_RESET_I(7);
    vlSelf->hamming_code__DOT__syndrome = VL_RAND_RESET_I(3);
    vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0 = 0;
    vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0 = 0;
}
