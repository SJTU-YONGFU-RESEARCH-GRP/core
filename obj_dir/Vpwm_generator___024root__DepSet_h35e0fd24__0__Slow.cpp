// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm_generator.h for the primary calling header

#include "Vpwm_generator__pch.h"
#include "Vpwm_generator___024root.h"

VL_ATTR_COLD void Vpwm_generator___024root___eval_static(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vpwm_generator___024root___eval_initial(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vpwm_generator___024root___eval_final(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vpwm_generator___024root___eval_settle(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator___024root___dump_triggers__act(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vpwm_generator___024root___dump_triggers__nba(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpwm_generator___024root___ctor_var_reset(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->duty_cycle = VL_RAND_RESET_I(8);
    vlSelf->period = VL_RAND_RESET_I(8);
    vlSelf->pwm_out = VL_RAND_RESET_I(1);
    vlSelf->pwm_generator__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->pwm_generator__DOT__duty_reg = VL_RAND_RESET_I(8);
    vlSelf->pwm_generator__DOT__period_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
