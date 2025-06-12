// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_clock_gating.h for the primary calling header

#include "Vparameterized_clock_gating__pch.h"
#include "Vparameterized_clock_gating___024root.h"

VL_ATTR_COLD void Vparameterized_clock_gating___024root___eval_static(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_static\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0 = vlSelfRef.clk_in;
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root___eval_initial(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_initial\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root___eval_final(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_final\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__stl(Vparameterized_clock_gating___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vparameterized_clock_gating___024root___eval_phase__stl(Vparameterized_clock_gating___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_clock_gating___024root___eval_settle(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_settle\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vparameterized_clock_gating___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/power/parameterized_clock_gating.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vparameterized_clock_gating___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__stl(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___dump_triggers__stl\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vparameterized_clock_gating___024root___ico_sequent__TOP__0(Vparameterized_clock_gating___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_clock_gating___024root___eval_stl(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_stl\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vparameterized_clock_gating___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root___eval_triggers__stl(Vparameterized_clock_gating___024root* vlSelf);

VL_ATTR_COLD bool Vparameterized_clock_gating___024root___eval_phase__stl(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_phase__stl\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vparameterized_clock_gating___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vparameterized_clock_gating___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__ico(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___dump_triggers__ico\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__act(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___dump_triggers__act\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_in)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__nba(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___dump_triggers__nba\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_in)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vparameterized_clock_gating___024root___ctor_var_reset(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___ctor_var_reset\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_in = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->test_mode = VL_RAND_RESET_I(1);
    vlSelf->clk_out = VL_RAND_RESET_I(1);
    vlSelf->parameterized_clock_gating__DOT__enable_latch = VL_RAND_RESET_I(1);
    vlSelf->parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk_in__0 = VL_RAND_RESET_I(1);
}
