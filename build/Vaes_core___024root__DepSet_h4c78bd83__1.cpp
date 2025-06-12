// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_core.h for the primary calling header

#include "Vaes_core__pch.h"
#include "Vaes_core___024root.h"

void Vaes_core___024root___eval_triggers__act(Vaes_core___024root* vlSelf);
void Vaes_core___024root___eval_act(Vaes_core___024root* vlSelf);

bool Vaes_core___024root___eval_phase__act(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_phase__act\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaes_core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaes_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vaes_core___024root___eval_nba(Vaes_core___024root* vlSelf);

bool Vaes_core___024root___eval_phase__nba(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_phase__nba\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaes_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__ico(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG
bool Vaes_core___024root___eval_phase__ico(Vaes_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__nba(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__act(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_core___024root___eval(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vaes_core___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/encryption/aes_core.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vaes_core___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaes_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/encryption/aes_core.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaes_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/encryption/aes_core.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaes_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaes_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaes_core___024root___eval_debug_assertions(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_debug_assertions\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.encrypt & 0xfeU)))) {
        Verilated::overWidthError("encrypt");}
}
#endif  // VL_DEBUG
