// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varbiter_rr.h for the primary calling header

#include "Varbiter_rr__pch.h"
#include "Varbiter_rr___024root.h"

void Varbiter_rr___024root___eval_act(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___eval_act\n"); );
}

VL_INLINE_OPT void Varbiter_rr___024root___nba_sequent__TOP__0(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->grant = 0U;
        if ((0U != (IData)(vlSelf->request))) {
            vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__i = 4U;
            vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted = 0U;
            vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__ptr 
                = vlSelf->arbiter_rr__DOT__priority_ptr;
            vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx 
                = VL_MODDIVS_III(32, vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__ptr, (IData)(4U));
            if ((1U & ((IData)(vlSelf->request) >> 
                       (3U & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx)))) {
                vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted = 1U;
                vlSelf->grant = ((IData)(vlSelf->grant) 
                                 | (0xfU & ((IData)(1U) 
                                            << (3U 
                                                & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx))));
                vlSelf->arbiter_rr__DOT__priority_ptr 
                    = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                                + vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx), (IData)(4U)));
            }
            vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx 
                = VL_MODDIVS_III(32, ((IData)(1U) + vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__ptr), (IData)(4U));
            if ((1U & (((IData)(vlSelf->request) >> 
                        (3U & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx)) 
                       & (~ (IData)(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted))))) {
                vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted = 1U;
                vlSelf->grant = ((IData)(vlSelf->grant) 
                                 | (0xfU & ((IData)(1U) 
                                            << (3U 
                                                & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx))));
                vlSelf->arbiter_rr__DOT__priority_ptr 
                    = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                                + vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx), (IData)(4U)));
            }
            vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx 
                = VL_MODDIVS_III(32, ((IData)(2U) + vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__ptr), (IData)(4U));
            if ((1U & (((IData)(vlSelf->request) >> 
                        (3U & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx)) 
                       & (~ (IData)(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted))))) {
                vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted = 1U;
                vlSelf->grant = ((IData)(vlSelf->grant) 
                                 | (0xfU & ((IData)(1U) 
                                            << (3U 
                                                & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx))));
                vlSelf->arbiter_rr__DOT__priority_ptr 
                    = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                                + vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx), (IData)(4U)));
            }
            vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx 
                = VL_MODDIVS_III(32, ((IData)(3U) + vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__ptr), (IData)(4U));
            if ((1U & (((IData)(vlSelf->request) >> 
                        (3U & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx)) 
                       & (~ (IData)(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted))))) {
                vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted = 1U;
                vlSelf->grant = ((IData)(vlSelf->grant) 
                                 | (0xfU & ((IData)(1U) 
                                            << (3U 
                                                & vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx))));
                vlSelf->arbiter_rr__DOT__priority_ptr 
                    = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                                + vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx), (IData)(4U)));
            }
        }
    } else {
        vlSelf->grant = 0U;
        vlSelf->arbiter_rr__DOT__priority_ptr = 0U;
    }
    vlSelf->active = (0U != (IData)(vlSelf->grant));
}

void Varbiter_rr___024root___eval_nba(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Varbiter_rr___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Varbiter_rr___024root___eval_triggers__act(Varbiter_rr___024root* vlSelf);

bool Varbiter_rr___024root___eval_phase__act(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Varbiter_rr___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Varbiter_rr___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Varbiter_rr___024root___eval_phase__nba(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Varbiter_rr___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varbiter_rr___024root___dump_triggers__nba(Varbiter_rr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Varbiter_rr___024root___dump_triggers__act(Varbiter_rr___024root* vlSelf);
#endif  // VL_DEBUG

void Varbiter_rr___024root___eval(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Varbiter_rr___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("arbiter_rr.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Varbiter_rr___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("arbiter_rr.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Varbiter_rr___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Varbiter_rr___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Varbiter_rr___024root___eval_debug_assertions(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->request & 0xf0U))) {
        Verilated::overWidthError("request");}
}
#endif  // VL_DEBUG
