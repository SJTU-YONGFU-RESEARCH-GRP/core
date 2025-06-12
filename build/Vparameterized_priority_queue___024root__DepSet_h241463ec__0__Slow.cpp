// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_priority_queue.h for the primary calling header

#include "Vparameterized_priority_queue__pch.h"
#include "Vparameterized_priority_queue___024root.h"

VL_ATTR_COLD void Vparameterized_priority_queue___024root___eval_static(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_static\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root___eval_initial(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_initial\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root___eval_final(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_final\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_priority_queue___024root___dump_triggers__stl(Vparameterized_priority_queue___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vparameterized_priority_queue___024root___eval_phase__stl(Vparameterized_priority_queue___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_priority_queue___024root___eval_settle(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_settle\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vparameterized_priority_queue___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/parameterized_priority_queue.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vparameterized_priority_queue___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_priority_queue___024root___dump_triggers__stl(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___dump_triggers__stl\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vparameterized_priority_queue___024root___stl_sequent__TOP__0(Vparameterized_priority_queue___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_priority_queue___024root___eval_stl(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_stl\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vparameterized_priority_queue___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root___stl_sequent__TOP__0(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___stl_sequent__TOP__0\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_full = (0x10U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__count));
    vlSelfRef.o_empty = (0U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__count));
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root___eval_triggers__stl(Vparameterized_priority_queue___024root* vlSelf);

VL_ATTR_COLD bool Vparameterized_priority_queue___024root___eval_phase__stl(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_phase__stl\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vparameterized_priority_queue___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vparameterized_priority_queue___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_priority_queue___024root___dump_triggers__act(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___dump_triggers__act\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vparameterized_priority_queue___024root___dump_triggers__nba(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___dump_triggers__nba\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vparameterized_priority_queue___024root___ctor_var_reset(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___ctor_var_reset\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->i_data = VL_RAND_RESET_I(8);
    vlSelf->i_priority = VL_RAND_RESET_I(3);
    vlSelf->i_enqueue = VL_RAND_RESET_I(1);
    vlSelf->o_full = VL_RAND_RESET_I(1);
    vlSelf->o_data = VL_RAND_RESET_I(8);
    vlSelf->o_priority = VL_RAND_RESET_I(3);
    vlSelf->i_dequeue = VL_RAND_RESET_I(1);
    vlSelf->o_empty = VL_RAND_RESET_I(1);
    vlSelf->o_count = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->parameterized_priority_queue__DOT__queue_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->parameterized_priority_queue__DOT__queue_priority[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->parameterized_priority_queue__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->parameterized_priority_queue__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->parameterized_priority_queue__DOT__insert_idx = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->parameterized_priority_queue__DOT__temp_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->parameterized_priority_queue__DOT__temp_priority[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
