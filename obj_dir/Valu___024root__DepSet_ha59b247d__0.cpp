// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"
#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu__DOT__add_result = (0xffU & ((IData)(vlSelf->a) 
                                             + (IData)(vlSelf->b)));
    vlSelf->alu__DOT__sub_result = (0xffU & ((IData)(vlSelf->a) 
                                             - (IData)(vlSelf->b)));
    vlSelf->alu__DOT__and_result = ((IData)(vlSelf->a) 
                                    & (IData)(vlSelf->b));
    vlSelf->alu__DOT__or_result = ((IData)(vlSelf->a) 
                                   | (IData)(vlSelf->b));
    vlSelf->alu__DOT__xor_result = ((IData)(vlSelf->a) 
                                    ^ (IData)(vlSelf->b));
    vlSelf->alu__DOT__shl_result = (0xffU & ((IData)(vlSelf->a) 
                                             << (7U 
                                                 & (IData)(vlSelf->b))));
    vlSelf->alu__DOT__shr_result = (0xffU & ((IData)(vlSelf->a) 
                                             >> (7U 
                                                 & (IData)(vlSelf->b))));
    vlSelf->alu__DOT__cmp_result = (((IData)(vlSelf->a) 
                                     == (IData)(vlSelf->b))
                                     ? 1U : 0U);
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Valu___024root___nba_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->overflow_flag = ((IData)(vlSelf->rst_n) 
                             && ((1U & (~ ((IData)(vlSelf->op_code) 
                                           >> 2U))) 
                                 && ((1U & (~ ((IData)(vlSelf->op_code) 
                                               >> 1U))) 
                                     && (1U & ((1U 
                                                & (IData)(vlSelf->op_code))
                                                ? (
                                                   ((1U 
                                                     & ((IData)(vlSelf->a) 
                                                        >> 7U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 7U))) 
                                                   & ((1U 
                                                       & ((IData)(vlSelf->alu__DOT__sub_result) 
                                                          >> 7U)) 
                                                      != 
                                                      (1U 
                                                       & ((IData)(vlSelf->a) 
                                                          >> 7U))))
                                                : (1U 
                                                   & (((IData)(vlSelf->a) 
                                                       + (IData)(vlSelf->b)) 
                                                      >> 8U)))))));
    vlSelf->zero_flag = ((IData)(vlSelf->rst_n) && 
                         (((((((((0U == (IData)(vlSelf->op_code)) 
                                 & (0U == (IData)(vlSelf->alu__DOT__add_result))) 
                                | ((1U == (IData)(vlSelf->op_code)) 
                                   & (0U == (IData)(vlSelf->alu__DOT__sub_result)))) 
                               | ((2U == (IData)(vlSelf->op_code)) 
                                  & (0U == (IData)(vlSelf->alu__DOT__and_result)))) 
                              | ((3U == (IData)(vlSelf->op_code)) 
                                 & (0U == (IData)(vlSelf->alu__DOT__or_result)))) 
                             | ((4U == (IData)(vlSelf->op_code)) 
                                & (0U == (IData)(vlSelf->alu__DOT__xor_result)))) 
                            | ((5U == (IData)(vlSelf->op_code)) 
                               & (0U == (IData)(vlSelf->alu__DOT__shl_result)))) 
                           | ((6U == (IData)(vlSelf->op_code)) 
                              & (0U == (IData)(vlSelf->alu__DOT__shr_result)))) 
                          | ((7U == (IData)(vlSelf->op_code)) 
                             & (0U == (IData)(vlSelf->alu__DOT__cmp_result)))));
    vlSelf->result = ((IData)(vlSelf->rst_n) ? ((4U 
                                                 & (IData)(vlSelf->op_code))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->op_code))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->op_code))
                                                   ? (IData)(vlSelf->alu__DOT__cmp_result)
                                                   : (IData)(vlSelf->alu__DOT__shr_result))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->op_code))
                                                   ? (IData)(vlSelf->alu__DOT__shl_result)
                                                   : (IData)(vlSelf->alu__DOT__xor_result)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->op_code))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->op_code))
                                                   ? (IData)(vlSelf->alu__DOT__or_result)
                                                   : (IData)(vlSelf->alu__DOT__and_result))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->op_code))
                                                   ? (IData)(vlSelf->alu__DOT__sub_result)
                                                   : (IData)(vlSelf->alu__DOT__add_result))))
                       : 0U);
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu___024root___eval_phase__nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
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
            Valu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("alu.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->op_code & 0xf8U))) {
        Verilated::overWidthError("op_code");}
}
#endif  // VL_DEBUG
