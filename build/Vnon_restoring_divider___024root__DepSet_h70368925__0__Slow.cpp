// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnon_restoring_divider.h for the primary calling header

#include "Vnon_restoring_divider__pch.h"
#include "Vnon_restoring_divider___024root.h"

VL_ATTR_COLD void Vnon_restoring_divider___024root___eval_static(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_static\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vnon_restoring_divider___024root___eval_initial(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_initial\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vnon_restoring_divider___024root___eval_final(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_final\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vnon_restoring_divider___024root___eval_settle(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_settle\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnon_restoring_divider___024root___dump_triggers__act(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___dump_triggers__act\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnon_restoring_divider___024root___dump_triggers__nba(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___dump_triggers__nba\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnon_restoring_divider___024root___ctor_var_reset(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___ctor_var_reset\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->dividend = VL_RAND_RESET_I(8);
    vlSelf->divisor = VL_RAND_RESET_I(8);
    vlSelf->quotient = VL_RAND_RESET_I(8);
    vlSelf->remainder = VL_RAND_RESET_I(8);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->busy = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    vlSelf->non_restoring_divider__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->non_restoring_divider__DOT__div_reg = VL_RAND_RESET_I(8);
    vlSelf->non_restoring_divider__DOT__quot = VL_RAND_RESET_I(8);
    vlSelf->non_restoring_divider__DOT__rem = VL_RAND_RESET_I(8);
    vlSelf->non_restoring_divider__DOT__iter = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
