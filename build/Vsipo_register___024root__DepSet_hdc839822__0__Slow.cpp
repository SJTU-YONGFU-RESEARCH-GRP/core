// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsipo_register.h for the primary calling header

#include "Vsipo_register__pch.h"
#include "Vsipo_register___024root.h"

VL_ATTR_COLD void Vsipo_register___024root___eval_static(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_static\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vsipo_register___024root___eval_initial(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_initial\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsipo_register___024root___eval_final(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_final\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsipo_register___024root___dump_triggers__stl(Vsipo_register___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsipo_register___024root___eval_phase__stl(Vsipo_register___024root* vlSelf);

VL_ATTR_COLD void Vsipo_register___024root___eval_settle(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_settle\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsipo_register___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/registers/sipo_register.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsipo_register___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsipo_register___024root___dump_triggers__stl(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___dump_triggers__stl\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsipo_register___024root___stl_sequent__TOP__0(Vsipo_register___024root* vlSelf);

VL_ATTR_COLD void Vsipo_register___024root___eval_stl(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_stl\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsipo_register___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsipo_register___024root___stl_sequent__TOP__0(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___stl_sequent__TOP__0\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parallel_out = vlSelfRef.sipo_register__DOT__shift_reg;
    vlSelfRef.parity_out = vlSelfRef.sipo_register__DOT__parity_bit;
}

VL_ATTR_COLD void Vsipo_register___024root___eval_triggers__stl(Vsipo_register___024root* vlSelf);

VL_ATTR_COLD bool Vsipo_register___024root___eval_phase__stl(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_phase__stl\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsipo_register___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsipo_register___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsipo_register___024root___dump_triggers__act(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___dump_triggers__act\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vsipo_register___024root___dump_triggers__nba(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___dump_triggers__nba\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsipo_register___024root___ctor_var_reset(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___ctor_var_reset\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->serial_in = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->parallel_out = VL_RAND_RESET_I(8);
    vlSelf->parity_out = VL_RAND_RESET_I(1);
    vlSelf->sipo_register__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->sipo_register__DOT__parity_bit = VL_RAND_RESET_I(1);
    vlSelf->sipo_register__DOT__next_shift_reg = VL_RAND_RESET_I(8);
    vlSelf->sipo_register__DOT__count_ones__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->sipo_register__DOT__count_ones__Vstatic__count = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
