// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_uart_tx.h for the primary calling header

#include "Vparameterized_uart_tx__pch.h"
#include "Vparameterized_uart_tx___024root.h"

VL_ATTR_COLD void Vparameterized_uart_tx___024root___eval_static(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root___eval_initial(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root___eval_final(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root___eval_settle(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_uart_tx___024root___dump_triggers__act(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vparameterized_uart_tx___024root___dump_triggers__nba(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vparameterized_uart_tx___024root___ctor_var_reset(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->tx_start = VL_RAND_RESET_I(1);
    vlSelf->tx = VL_RAND_RESET_I(1);
    vlSelf->tx_busy = VL_RAND_RESET_I(1);
    vlSelf->parameterized_uart_tx__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->parameterized_uart_tx__DOT__bit_timer = VL_RAND_RESET_I(9);
    vlSelf->parameterized_uart_tx__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->parameterized_uart_tx__DOT__data_reg = VL_RAND_RESET_I(8);
    vlSelf->parameterized_uart_tx__DOT__parity_bit = VL_RAND_RESET_I(1);
    vlSelf->parameterized_uart_tx__DOT__stop_bit_counter = VL_RAND_RESET_I(1);
    vlSelf->parameterized_uart_tx__DOT__reverse_bits__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->parameterized_uart_tx__DOT__parity_calc__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
