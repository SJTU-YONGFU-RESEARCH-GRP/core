// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriority_encoder.h for the primary calling header

#include "Vpriority_encoder__pch.h"
#include "Vpriority_encoder___024root.h"

VL_ATTR_COLD void Vpriority_encoder___024root___eval_static(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vpriority_encoder___024root___eval_initial(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vpriority_encoder___024root___eval_final(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpriority_encoder___024root___dump_triggers__stl(Vpriority_encoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpriority_encoder___024root___eval_phase__stl(Vpriority_encoder___024root* vlSelf);

VL_ATTR_COLD void Vpriority_encoder___024root___eval_settle(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_settle\n"); );
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
            Vpriority_encoder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("priority_encoder.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpriority_encoder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpriority_encoder___024root___dump_triggers__stl(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vpriority_encoder___024root___ico_sequent__TOP__0(Vpriority_encoder___024root* vlSelf);

VL_ATTR_COLD void Vpriority_encoder___024root___eval_stl(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpriority_encoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpriority_encoder___024root___eval_triggers__stl(Vpriority_encoder___024root* vlSelf);

VL_ATTR_COLD bool Vpriority_encoder___024root___eval_phase__stl(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpriority_encoder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpriority_encoder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpriority_encoder___024root___dump_triggers__ico(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vpriority_encoder___024root___dump_triggers__act(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpriority_encoder___024root___dump_triggers__nba(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpriority_encoder___024root___ctor_var_reset(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->in = VL_RAND_RESET_I(8);
    vlSelf->out = VL_RAND_RESET_I(3);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->priority_encoder__DOT__i = VL_RAND_RESET_I(32);
}
