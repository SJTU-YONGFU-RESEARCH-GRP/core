// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varbiter.h for the primary calling header

#include "Varbiter__pch.h"
#include "Varbiter___024root.h"

void Varbiter___024root___eval_act(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_act\n"); );
}

VL_INLINE_OPT void Varbiter___024root___nba_sequent__TOP__0(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->arbiter__DOT__priority_ptr = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->grant = 0U;
        if ((0U != (IData)(vlSelf->request))) {
            vlSelf->arbiter__DOT__unnamedblk1__DOT__i = 3U;
            while (VL_LTES_III(32, 0U, vlSelf->arbiter__DOT__unnamedblk1__DOT__i)) {
                if ((1U & ((IData)(vlSelf->request) 
                           >> (3U & vlSelf->arbiter__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->grant = ((IData)(vlSelf->grant) 
                                     | (0xfU & ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelf->arbiter__DOT__unnamedblk1__DOT__i))));
                    vlSelf->arbiter__DOT__unnamedblk1__DOT__i = 0xffffffffU;
                }
                vlSelf->arbiter__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->arbiter__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
        }
    } else {
        vlSelf->grant = 0U;
    }
    vlSelf->active = (0U != (IData)(vlSelf->grant));
}

void Varbiter___024root___eval_nba(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Varbiter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Varbiter___024root___eval_triggers__act(Varbiter___024root* vlSelf);

bool Varbiter___024root___eval_phase__act(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Varbiter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Varbiter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Varbiter___024root___eval_phase__nba(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Varbiter___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varbiter___024root___dump_triggers__nba(Varbiter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Varbiter___024root___dump_triggers__act(Varbiter___024root* vlSelf);
#endif  // VL_DEBUG

void Varbiter___024root___eval(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Varbiter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("arbiter.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Varbiter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("arbiter.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Varbiter___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Varbiter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Varbiter___024root___eval_debug_assertions(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->request & 0xf0U))) {
        Verilated::overWidthError("request");}
}
#endif  // VL_DEBUG
