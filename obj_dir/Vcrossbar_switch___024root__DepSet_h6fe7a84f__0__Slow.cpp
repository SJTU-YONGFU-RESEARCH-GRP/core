// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrossbar_switch.h for the primary calling header

#include "Vcrossbar_switch__pch.h"
#include "Vcrossbar_switch___024root.h"

VL_ATTR_COLD void Vcrossbar_switch___024root___eval_static(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcrossbar_switch___024root___eval_initial(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vcrossbar_switch___024root___eval_final(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcrossbar_switch___024root___eval_settle(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrossbar_switch___024root___dump_triggers__act(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vcrossbar_switch___024root___dump_triggers__nba(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcrossbar_switch___024root___ctor_var_reset(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(32);
    vlSelf->select = VL_RAND_RESET_I(8);
    vlSelf->data_out = VL_RAND_RESET_I(32);
    vlSelf->crossbar_switch__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->crossbar_switch__DOT__sel_idx = VL_RAND_RESET_I(2);
    vlSelf->crossbar_switch__DOT__selected_data = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
