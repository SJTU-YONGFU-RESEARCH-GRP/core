// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleading_zero_counter.h for the primary calling header

#include "Vleading_zero_counter__pch.h"
#include "Vleading_zero_counter___024root.h"

VL_INLINE_OPT void Vleading_zero_counter___024root___ico_sequent__TOP__0(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->valid_input = 0U;
    if ((0U != vlSelf->data_in)) {
        vlSelf->valid_input = 1U;
        vlSelf->zero_count = 0U;
        vlSelf->leading_zero_counter__DOT__i = 0x1fU;
        while (VL_LTES_III(32, 0U, vlSelf->leading_zero_counter__DOT__i)) {
            if ((1U & (vlSelf->data_in >> (0x1fU & vlSelf->leading_zero_counter__DOT__i)))) {
                vlSelf->zero_count = (0x3fU & ((IData)(0x1fU) 
                                               - vlSelf->leading_zero_counter__DOT__i));
                vlSelf->leading_zero_counter__DOT__i = 0xffffffffU;
            }
            vlSelf->leading_zero_counter__DOT__i = 
                (vlSelf->leading_zero_counter__DOT__i 
                 - (IData)(1U));
        }
    } else {
        vlSelf->valid_input = 0U;
        vlSelf->zero_count = 0U;
        vlSelf->zero_count = 0x20U;
    }
}

void Vleading_zero_counter___024root___eval_ico(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vleading_zero_counter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vleading_zero_counter___024root___eval_triggers__ico(Vleading_zero_counter___024root* vlSelf);

bool Vleading_zero_counter___024root___eval_phase__ico(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vleading_zero_counter___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vleading_zero_counter___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vleading_zero_counter___024root___eval_act(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_act\n"); );
}

void Vleading_zero_counter___024root___eval_nba(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_nba\n"); );
}

void Vleading_zero_counter___024root___eval_triggers__act(Vleading_zero_counter___024root* vlSelf);

bool Vleading_zero_counter___024root___eval_phase__act(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vleading_zero_counter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vleading_zero_counter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vleading_zero_counter___024root___eval_phase__nba(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vleading_zero_counter___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__ico(Vleading_zero_counter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__nba(Vleading_zero_counter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__act(Vleading_zero_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vleading_zero_counter___024root___eval(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vleading_zero_counter___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("leading_zero_counter.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vleading_zero_counter___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vleading_zero_counter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("leading_zero_counter.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vleading_zero_counter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("leading_zero_counter.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vleading_zero_counter___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vleading_zero_counter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vleading_zero_counter___024root___eval_debug_assertions(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
