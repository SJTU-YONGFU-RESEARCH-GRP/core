// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_async_credit_counter.h for the primary calling header

#include "Vbsg_async_credit_counter__pch.h"
#include "Vbsg_async_credit_counter___024root.h"

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___eval_static(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_static\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__r_clk_i__0 = vlSelfRef.r_clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__w_clk_i__0 = vlSelfRef.w_clk_i;
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___eval_initial(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_initial\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___eval_final(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_final\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__stl(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbsg_async_credit_counter___024root___eval_phase__stl(Vbsg_async_credit_counter___024root* vlSelf);

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___eval_settle(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_settle\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbsg_async_credit_counter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/cdc/bsg_async_credit_counter.v", 71, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbsg_async_credit_counter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__stl(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___dump_triggers__stl\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vbsg_async_credit_counter___024root___ico_sequent__TOP__0(Vbsg_async_credit_counter___024root* vlSelf);

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___eval_stl(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_stl\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbsg_async_credit_counter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___eval_triggers__stl(Vbsg_async_credit_counter___024root* vlSelf);

VL_ATTR_COLD bool Vbsg_async_credit_counter___024root___eval_phase__stl(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_phase__stl\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbsg_async_credit_counter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbsg_async_credit_counter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__ico(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___dump_triggers__ico\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__act(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___dump_triggers__act\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge r_clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge w_clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__nba(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___dump_triggers__nba\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge r_clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge w_clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___ctor_var_reset(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___ctor_var_reset\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->gray_i = VL_RAND_RESET_I(4);
    vlSelf->binary_o = VL_RAND_RESET_I(4);
    vlSelf->w_clk_i = VL_RAND_RESET_I(1);
    vlSelf->w_inc_token_i = VL_RAND_RESET_I(1);
    vlSelf->w_reset_i = VL_RAND_RESET_I(1);
    vlSelf->r_clk_i = VL_RAND_RESET_I(1);
    vlSelf->r_reset_i = VL_RAND_RESET_I(1);
    vlSelf->r_dec_credit_i = VL_RAND_RESET_I(1);
    vlSelf->r_infinite_credits_i = VL_RAND_RESET_I(1);
    vlSelf->r_credits_avail_o = VL_RAND_RESET_I(1);
    vlSelf->bsg_async_credit_counter__DOT__r_counter_r = VL_RAND_RESET_I(3);
    vlSelf->bsg_async_credit_counter__DOT__w_counter_binary_r_rsync = VL_RAND_RESET_I(3);
    vlSelf->bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n = VL_RAND_RESET_I(3);
    vlSelf->bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 44; ++__Vi0) {
        vlSelf->bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->bsg_async_credit_counter__DOT__bapg__DOT__sync_i = VL_RAND_RESET_I(32);
    vlSelf->bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__r_clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__w_clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
