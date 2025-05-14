// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register_left.h for the primary calling header

#include "Vshift_register_left__pch.h"
#include "Vshift_register_left___024root.h"

void Vshift_register_left___024root___eval_act(Vshift_register_left___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_left__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_left___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vshift_register_left___024root___nba_sequent__TOP__0(Vshift_register_left___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_left__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_left___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__parallel_out;
    __Vdly__parallel_out = 0;
    // Body
    __Vdly__parallel_out = vlSelf->parallel_out;
    if (vlSelf->rst_n) {
        if (vlSelf->load) {
            __Vdly__parallel_out = vlSelf->parallel_in;
        } else if (vlSelf->en) {
            __Vdly__parallel_out = ((0xfeU & ((IData)(vlSelf->parallel_out) 
                                              << 1U)) 
                                    | (IData)(vlSelf->serial_in));
        }
    } else {
        __Vdly__parallel_out = 0U;
    }
    vlSelf->parallel_out = __Vdly__parallel_out;
    vlSelf->serial_out = (1U & ((IData)(vlSelf->parallel_out) 
                                >> 7U));
}

void Vshift_register_left___024root___eval_nba(Vshift_register_left___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_left__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_left___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vshift_register_left___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vshift_register_left___024root___eval_triggers__act(Vshift_register_left___024root* vlSelf);

bool Vshift_register_left___024root___eval_phase__act(Vshift_register_left___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_left__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_left___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vshift_register_left___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vshift_register_left___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vshift_register_left___024root___eval_phase__nba(Vshift_register_left___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_left__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_left___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vshift_register_left___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_left___024root___dump_triggers__nba(Vshift_register_left___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_left___024root___dump_triggers__act(Vshift_register_left___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_register_left___024root___eval(Vshift_register_left___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_left__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_left___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vshift_register_left___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("shift_register_left.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vshift_register_left___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("shift_register_left.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vshift_register_left___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vshift_register_left___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vshift_register_left___024root___eval_debug_assertions(Vshift_register_left___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_left__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_left___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->load & 0xfeU))) {
        Verilated::overWidthError("load");}
    if (VL_UNLIKELY((vlSelf->serial_in & 0xfeU))) {
        Verilated::overWidthError("serial_in");}
}
#endif  // VL_DEBUG
