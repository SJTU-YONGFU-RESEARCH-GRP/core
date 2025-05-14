// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_divider.h for the primary calling header

#include "Vclock_divider__pch.h"
#include "Vclock_divider___024root.h"

VL_ATTR_COLD void Vclock_divider___024root___eval_static(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vclock_divider___024root___eval_initial(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk_in__0 = vlSelf->clk_in;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vclock_divider___024root___eval_final(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vclock_divider___024root___eval_settle(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_divider___024root___dump_triggers__act(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_in or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_divider___024root___dump_triggers__nba(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_in or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclock_divider___024root___ctor_var_reset(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_in = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->div_ratio = VL_RAND_RESET_I(8);
    vlSelf->duty_cycle = VL_RAND_RESET_I(8);
    vlSelf->clk_out = VL_RAND_RESET_I(1);
    vlSelf->clock_divider__DOT__counter = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__clk_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
