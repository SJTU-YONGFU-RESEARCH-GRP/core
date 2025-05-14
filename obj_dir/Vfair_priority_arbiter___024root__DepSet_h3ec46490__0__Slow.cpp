// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfair_priority_arbiter.h for the primary calling header

#include "Vfair_priority_arbiter__pch.h"
#include "Vfair_priority_arbiter___024root.h"

VL_ATTR_COLD void Vfair_priority_arbiter___024root___eval_static(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root___eval_initial(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root___eval_final(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__stl(Vfair_priority_arbiter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfair_priority_arbiter___024root___eval_phase__stl(Vfair_priority_arbiter___024root* vlSelf);

VL_ATTR_COLD void Vfair_priority_arbiter___024root___eval_settle(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_settle\n"); );
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
            Vfair_priority_arbiter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fair_priority_arbiter.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfair_priority_arbiter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__stl(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vfair_priority_arbiter___024root___ico_sequent__TOP__0(Vfair_priority_arbiter___024root* vlSelf);

VL_ATTR_COLD void Vfair_priority_arbiter___024root___eval_stl(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfair_priority_arbiter___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root___eval_triggers__stl(Vfair_priority_arbiter___024root* vlSelf);

VL_ATTR_COLD bool Vfair_priority_arbiter___024root___eval_phase__stl(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfair_priority_arbiter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vfair_priority_arbiter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__ico(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__act(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__nba(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfair_priority_arbiter___024root___ctor_var_reset(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->request = VL_RAND_RESET_I(4);
    vlSelf->priorities = VL_RAND_RESET_I(8);
    vlSelf->grant = VL_RAND_RESET_I(4);
    vlSelf->grant_idx = VL_RAND_RESET_I(2);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->fair_priority_arbiter__DOT__last_grant_idx = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fair_priority_arbiter__DOT__priority_values[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority = VL_RAND_RESET_I(2);
    vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx = VL_RAND_RESET_I(2);
    vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found = VL_RAND_RESET_I(1);
    vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx = VL_RAND_RESET_I(2);
    vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__unnamedblk3__DOT__loop_j = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
