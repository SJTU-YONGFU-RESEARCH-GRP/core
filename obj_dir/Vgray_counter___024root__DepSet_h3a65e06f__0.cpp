// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgray_counter.h for the primary calling header

#include "Vgray_counter__pch.h"
#include "Vgray_counter___024root.h"

void Vgray_counter___024root___eval_act(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vgray_counter___024root___nba_sequent__TOP__0(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__gray_counter__DOT__binary_count;
    __Vdly__gray_counter__DOT__binary_count = 0;
    // Body
    __Vdly__gray_counter__DOT__binary_count = vlSelf->gray_counter__DOT__binary_count;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __Vdly__gray_counter__DOT__binary_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->gray_counter__DOT__binary_count)));
            vlSelf->gray_out = (0xfU & (((IData)(1U) 
                                         + (IData)(vlSelf->gray_counter__DOT__binary_count)) 
                                        ^ VL_SHIFTR_III(4,4,32, 
                                                        (0xfU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->gray_counter__DOT__binary_count))), 1U)));
        }
    } else {
        __Vdly__gray_counter__DOT__binary_count = 0U;
        vlSelf->gray_out = 0U;
    }
    vlSelf->gray_counter__DOT__binary_count = __Vdly__gray_counter__DOT__binary_count;
    vlSelf->binary_out = vlSelf->gray_counter__DOT__binary_count;
}

void Vgray_counter___024root___eval_nba(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vgray_counter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vgray_counter___024root___eval_triggers__act(Vgray_counter___024root* vlSelf);

bool Vgray_counter___024root___eval_phase__act(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgray_counter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vgray_counter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgray_counter___024root___eval_phase__nba(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgray_counter___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgray_counter___024root___dump_triggers__nba(Vgray_counter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgray_counter___024root___dump_triggers__act(Vgray_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vgray_counter___024root___eval(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vgray_counter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("gray_counter.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vgray_counter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("gray_counter.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vgray_counter___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vgray_counter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgray_counter___024root___eval_debug_assertions(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
