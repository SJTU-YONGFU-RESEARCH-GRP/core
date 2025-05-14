// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsequence_detector_fsm.h for the primary calling header

#include "Vsequence_detector_fsm__pch.h"
#include "Vsequence_detector_fsm___024root.h"

VL_ATTR_COLD void Vsequence_detector_fsm___024root___eval_static(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsequence_detector_fsm___024root___eval_initial(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vsequence_detector_fsm___024root___eval_final(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsequence_detector_fsm___024root___eval_settle(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsequence_detector_fsm___024root___dump_triggers__act(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vsequence_detector_fsm___024root___dump_triggers__nba(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsequence_detector_fsm___024root___ctor_var_reset(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->serial_in = VL_RAND_RESET_I(1);
    vlSelf->config_pattern = VL_RAND_RESET_I(4);
    vlSelf->load_pattern = VL_RAND_RESET_I(1);
    vlSelf->pattern_detected = VL_RAND_RESET_I(1);
    vlSelf->sequence_detector_fsm__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->sequence_detector_fsm__DOT__pattern_reg = VL_RAND_RESET_I(4);
    vlSelf->sequence_detector_fsm__DOT__shift_reg = VL_RAND_RESET_I(4);
    vlSelf->sequence_detector_fsm__DOT__bit_count = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
