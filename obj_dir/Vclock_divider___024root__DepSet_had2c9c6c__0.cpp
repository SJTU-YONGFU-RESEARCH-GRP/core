// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_divider.h for the primary calling header

#include "Vclock_divider__pch.h"
#include "Vclock_divider___024root.h"

void Vclock_divider___024root___eval_act(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vclock_divider___024root___nba_sequent__TOP__0(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__clock_divider__DOT__counter;
    __Vdly__clock_divider__DOT__counter = 0;
    // Body
    __Vdly__clock_divider__DOT__counter = vlSelf->clock_divider__DOT__counter;
    if (vlSelf->rst_n) {
        __Vdly__clock_divider__DOT__counter = (((IData)(vlSelf->clock_divider__DOT__counter) 
                                                >= 
                                                ((IData)(vlSelf->div_ratio) 
                                                 - (IData)(1U)))
                                                ? 0U
                                                : (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->clock_divider__DOT__counter))));
        vlSelf->clk_out = (((IData)(vlSelf->clock_divider__DOT__counter) 
                            < (0x1ffU & VL_DIV_III(32, 
                                                   ((IData)(vlSelf->div_ratio) 
                                                    * (IData)(vlSelf->duty_cycle)), (IData)(0xffU)))) 
                           & (0U < (IData)(vlSelf->div_ratio)));
    } else {
        __Vdly__clock_divider__DOT__counter = 0U;
        vlSelf->clk_out = 0U;
    }
    vlSelf->clock_divider__DOT__counter = __Vdly__clock_divider__DOT__counter;
}

void Vclock_divider___024root___eval_nba(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclock_divider___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vclock_divider___024root___eval_triggers__act(Vclock_divider___024root* vlSelf);

bool Vclock_divider___024root___eval_phase__act(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vclock_divider___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vclock_divider___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vclock_divider___024root___eval_phase__nba(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vclock_divider___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_divider___024root___dump_triggers__nba(Vclock_divider___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_divider___024root___dump_triggers__act(Vclock_divider___024root* vlSelf);
#endif  // VL_DEBUG

void Vclock_divider___024root___eval(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vclock_divider___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("clock_divider.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vclock_divider___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("clock_divider.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vclock_divider___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vclock_divider___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vclock_divider___024root___eval_debug_assertions(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_in & 0xfeU))) {
        Verilated::overWidthError("clk_in");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
