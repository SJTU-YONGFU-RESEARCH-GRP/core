// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_port_ram.h for the primary calling header

#include "Vdual_port_ram__pch.h"
#include "Vdual_port_ram___024root.h"

VL_ATTR_COLD void Vdual_port_ram___024root___eval_static(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdual_port_ram___024root___eval_initial(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vdual_port_ram___024root___eval_final(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdual_port_ram___024root___eval_settle(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_port_ram___024root___dump_triggers__act(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_port_ram___024root___dump_triggers__nba(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdual_port_ram___024root___ctor_var_reset(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->addr_a = VL_RAND_RESET_I(4);
    vlSelf->data_a = VL_RAND_RESET_I(8);
    vlSelf->we_a = VL_RAND_RESET_I(1);
    vlSelf->q_a = VL_RAND_RESET_I(8);
    vlSelf->addr_b = VL_RAND_RESET_I(4);
    vlSelf->data_b = VL_RAND_RESET_I(8);
    vlSelf->we_b = VL_RAND_RESET_I(1);
    vlSelf->q_b = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dual_port_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
