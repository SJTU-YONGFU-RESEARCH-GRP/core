// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_edge_register.h for the primary calling header

#include "Vdual_edge_register__pch.h"
#include "Vdual_edge_register___024root.h"

VL_ATTR_COLD void Vdual_edge_register___024root___eval_static(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_static\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vdual_edge_register___024root___eval_initial(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_initial\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdual_edge_register___024root___eval_final(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_final\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__stl(Vdual_edge_register___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdual_edge_register___024root___eval_phase__stl(Vdual_edge_register___024root* vlSelf);

VL_ATTR_COLD void Vdual_edge_register___024root___eval_settle(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_settle\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdual_edge_register___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/registers/dual_edge_register.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdual_edge_register___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__stl(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___dump_triggers__stl\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vdual_edge_register___024root___ico_sequent__TOP__0(Vdual_edge_register___024root* vlSelf);

VL_ATTR_COLD void Vdual_edge_register___024root___eval_stl(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_stl\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdual_edge_register___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdual_edge_register___024root___eval_triggers__stl(Vdual_edge_register___024root* vlSelf);

VL_ATTR_COLD bool Vdual_edge_register___024root___eval_phase__stl(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_phase__stl\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdual_edge_register___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdual_edge_register___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__ico(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___dump_triggers__ico\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__act(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___dump_triggers__act\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__nba(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___dump_triggers__nba\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdual_edge_register___024root___ctor_var_reset(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___ctor_var_reset\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->dual_edge_register__DOT__posedge_reg = VL_RAND_RESET_I(8);
    vlSelf->dual_edge_register__DOT__negedge_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
