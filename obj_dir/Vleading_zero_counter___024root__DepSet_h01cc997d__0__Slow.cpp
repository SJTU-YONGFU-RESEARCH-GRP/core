// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleading_zero_counter.h for the primary calling header

#include "Vleading_zero_counter__pch.h"
#include "Vleading_zero_counter___024root.h"

VL_ATTR_COLD void Vleading_zero_counter___024root___eval_static(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vleading_zero_counter___024root___eval_initial(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vleading_zero_counter___024root___eval_final(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__stl(Vleading_zero_counter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vleading_zero_counter___024root___eval_phase__stl(Vleading_zero_counter___024root* vlSelf);

VL_ATTR_COLD void Vleading_zero_counter___024root___eval_settle(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_settle\n"); );
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
            Vleading_zero_counter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("leading_zero_counter.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vleading_zero_counter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__stl(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vleading_zero_counter___024root___ico_sequent__TOP__0(Vleading_zero_counter___024root* vlSelf);

VL_ATTR_COLD void Vleading_zero_counter___024root___eval_stl(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vleading_zero_counter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vleading_zero_counter___024root___eval_triggers__stl(Vleading_zero_counter___024root* vlSelf);

VL_ATTR_COLD bool Vleading_zero_counter___024root___eval_phase__stl(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vleading_zero_counter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vleading_zero_counter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__ico(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__act(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__nba(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vleading_zero_counter___024root___ctor_var_reset(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(32);
    vlSelf->zero_count = VL_RAND_RESET_I(6);
    vlSelf->valid_input = VL_RAND_RESET_I(1);
    vlSelf->leading_zero_counter__DOT__i = VL_RAND_RESET_I(32);
}
