// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "Vlfsr__pch.h"
#include "Vlfsr___024root.h"

void Vlfsr___024root___eval_act(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vlfsr___024root___nba_sequent__TOP__0(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__lfsr__DOT__lfsr_reg;
    __Vdly__lfsr__DOT__lfsr_reg = 0;
    // Body
    __Vdly__lfsr__DOT__lfsr_reg = vlSelf->lfsr__DOT__lfsr_reg;
    if (vlSelf->rst_n) {
        if (vlSelf->load) {
            __Vdly__lfsr__DOT__lfsr_reg = vlSelf->seed;
        } else if (vlSelf->enable) {
            __Vdly__lfsr__DOT__lfsr_reg = (((IData)(vlSelf->lfsr__DOT__feedback) 
                                            << 7U) 
                                           | (0x7fU 
                                              & ((IData)(vlSelf->lfsr__DOT__lfsr_reg) 
                                                 >> 1U)));
        }
    } else {
        __Vdly__lfsr__DOT__lfsr_reg = 0U;
    }
    vlSelf->lfsr__DOT__lfsr_reg = __Vdly__lfsr__DOT__lfsr_reg;
    vlSelf->lfsr_out = vlSelf->lfsr__DOT__lfsr_reg;
    vlSelf->bit_out = (1U & (IData)(vlSelf->lfsr__DOT__lfsr_reg));
    vlSelf->lfsr__DOT__feedback = (1U & VL_REDXOR_32(
                                                     (0xb8U 
                                                      & (IData)(vlSelf->lfsr__DOT__lfsr_reg))));
}

void Vlfsr___024root___eval_nba(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlfsr___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vlfsr___024root___eval_triggers__act(Vlfsr___024root* vlSelf);

bool Vlfsr___024root___eval_phase__act(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlfsr___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vlfsr___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlfsr___024root___eval_phase__nba(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlfsr___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr___024root___dump_triggers__nba(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr___024root___dump_triggers__act(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG

void Vlfsr___024root___eval(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vlfsr___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lfsr.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vlfsr___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lfsr.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vlfsr___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vlfsr___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->load & 0xfeU))) {
        Verilated::overWidthError("load");}
}
#endif  // VL_DEBUG
