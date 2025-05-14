// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_priority_encoder.h for the primary calling header

#include "Vconfigurable_priority_encoder__pch.h"
#include "Vconfigurable_priority_encoder___024root.h"

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___eval_static(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___eval_initial(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___eval_final(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__stl(Vconfigurable_priority_encoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfigurable_priority_encoder___024root___eval_phase__stl(Vconfigurable_priority_encoder___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___eval_settle(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_settle\n"); );
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
            Vconfigurable_priority_encoder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("configurable_priority_encoder.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfigurable_priority_encoder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__stl(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vconfigurable_priority_encoder___024root___ico_sequent__TOP__0(Vconfigurable_priority_encoder___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___eval_stl(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vconfigurable_priority_encoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___eval_triggers__stl(Vconfigurable_priority_encoder___024root* vlSelf);

VL_ATTR_COLD bool Vconfigurable_priority_encoder___024root___eval_phase__stl(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfigurable_priority_encoder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfigurable_priority_encoder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__ico(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__act(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__nba(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___ctor_var_reset(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->request = VL_RAND_RESET_I(8);
    vlSelf->grant_index = VL_RAND_RESET_I(3);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->configurable_priority_encoder__DOT__i = VL_RAND_RESET_I(32);
}
