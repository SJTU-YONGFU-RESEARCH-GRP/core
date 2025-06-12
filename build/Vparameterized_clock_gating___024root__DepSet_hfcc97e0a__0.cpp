// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_clock_gating.h for the primary calling header

#include "Vparameterized_clock_gating__pch.h"
#include "Vparameterized_clock_gating___024root.h"

void Vparameterized_clock_gating___024root___ico_sequent__TOP__0(Vparameterized_clock_gating___024root* vlSelf);

void Vparameterized_clock_gating___024root___eval_ico(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_ico\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vparameterized_clock_gating___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vparameterized_clock_gating___024root___ico_sequent__TOP__0(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___ico_sequent__TOP__0\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.clk_in)))) {
        vlSelfRef.parameterized_clock_gating__DOT__enable_latch 
            = (IData)((((IData)(vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg) 
                        >> 1U) | (IData)(vlSelfRef.test_mode)));
    }
    vlSelfRef.clk_out = ((IData)(vlSelfRef.clk_in) 
                         & (IData)(vlSelfRef.parameterized_clock_gating__DOT__enable_latch));
}

void Vparameterized_clock_gating___024root___eval_triggers__ico(Vparameterized_clock_gating___024root* vlSelf);

bool Vparameterized_clock_gating___024root___eval_phase__ico(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_phase__ico\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vparameterized_clock_gating___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vparameterized_clock_gating___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vparameterized_clock_gating___024root___eval_act(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_act\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vparameterized_clock_gating___024root___nba_sequent__TOP__0(Vparameterized_clock_gating___024root* vlSelf);

void Vparameterized_clock_gating___024root___eval_nba(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_nba\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vparameterized_clock_gating___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vparameterized_clock_gating___024root___nba_sequent__TOP__0(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___nba_sequent__TOP__0\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg 
        = ((2U & ((IData)(vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg) 
                  << 1U)) | (IData)(vlSelfRef.enable));
    if ((1U & (~ (IData)(vlSelfRef.clk_in)))) {
        vlSelfRef.parameterized_clock_gating__DOT__enable_latch 
            = (IData)((((IData)(vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg) 
                        >> 1U) | (IData)(vlSelfRef.test_mode)));
    }
    vlSelfRef.clk_out = ((IData)(vlSelfRef.clk_in) 
                         & (IData)(vlSelfRef.parameterized_clock_gating__DOT__enable_latch));
}

void Vparameterized_clock_gating___024root___eval_triggers__act(Vparameterized_clock_gating___024root* vlSelf);

bool Vparameterized_clock_gating___024root___eval_phase__act(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_phase__act\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vparameterized_clock_gating___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vparameterized_clock_gating___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vparameterized_clock_gating___024root___eval_phase__nba(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_phase__nba\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vparameterized_clock_gating___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__ico(Vparameterized_clock_gating___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__nba(Vparameterized_clock_gating___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__act(Vparameterized_clock_gating___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_clock_gating___024root___eval(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vparameterized_clock_gating___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/power/parameterized_clock_gating.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vparameterized_clock_gating___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vparameterized_clock_gating___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/power/parameterized_clock_gating.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vparameterized_clock_gating___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/power/parameterized_clock_gating.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vparameterized_clock_gating___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vparameterized_clock_gating___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vparameterized_clock_gating___024root___eval_debug_assertions(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_debug_assertions\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_in & 0xfeU)))) {
        Verilated::overWidthError("clk_in");}
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY(((vlSelfRef.test_mode & 0xfeU)))) {
        Verilated::overWidthError("test_mode");}
}
#endif  // VL_DEBUG
