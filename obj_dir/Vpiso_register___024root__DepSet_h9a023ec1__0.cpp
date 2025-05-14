// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpiso_register.h for the primary calling header

#include "Vpiso_register__pch.h"
#include "Vpiso_register___024root.h"

void Vpiso_register___024root___eval_act(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vpiso_register___024root___nba_sequent__TOP__0(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->piso_register__DOT__shift_reg = ((IData)(vlSelf->rst_n)
                                              ? ((IData)(vlSelf->load)
                                                  ? (IData)(vlSelf->parallel_in)
                                                  : 
                                                 (0x7fU 
                                                  & ((IData)(vlSelf->piso_register__DOT__shift_reg) 
                                                     >> 1U)))
                                              : 0U);
    vlSelf->serial_out = (1U & (IData)(vlSelf->piso_register__DOT__shift_reg));
}

void Vpiso_register___024root___eval_nba(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpiso_register___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vpiso_register___024root___eval_triggers__act(Vpiso_register___024root* vlSelf);

bool Vpiso_register___024root___eval_phase__act(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpiso_register___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpiso_register___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpiso_register___024root___eval_phase__nba(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpiso_register___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpiso_register___024root___dump_triggers__nba(Vpiso_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpiso_register___024root___dump_triggers__act(Vpiso_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vpiso_register___024root___eval(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpiso_register___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("piso_register.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpiso_register___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("piso_register.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpiso_register___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpiso_register___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpiso_register___024root___eval_debug_assertions(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->load & 0xfeU))) {
        Verilated::overWidthError("load");}
}
#endif  // VL_DEBUG
