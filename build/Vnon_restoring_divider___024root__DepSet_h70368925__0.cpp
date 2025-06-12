// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnon_restoring_divider.h for the primary calling header

#include "Vnon_restoring_divider__pch.h"
#include "Vnon_restoring_divider___024root.h"

void Vnon_restoring_divider___024root___eval_act(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_act\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vnon_restoring_divider___024root___nba_sequent__TOP__0(Vnon_restoring_divider___024root* vlSelf);

void Vnon_restoring_divider___024root___eval_nba(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_nba\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vnon_restoring_divider___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vnon_restoring_divider___024root___nba_sequent__TOP__0(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___nba_sequent__TOP__0\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__non_restoring_divider__DOT__div_reg;
    __Vdly__non_restoring_divider__DOT__div_reg = 0;
    CData/*7:0*/ __Vdly__non_restoring_divider__DOT__quot;
    __Vdly__non_restoring_divider__DOT__quot = 0;
    CData/*7:0*/ __Vdly__non_restoring_divider__DOT__rem;
    __Vdly__non_restoring_divider__DOT__rem = 0;
    CData/*3:0*/ __Vdly__non_restoring_divider__DOT__iter;
    __Vdly__non_restoring_divider__DOT__iter = 0;
    CData/*1:0*/ __Vdly__non_restoring_divider__DOT__state;
    __Vdly__non_restoring_divider__DOT__state = 0;
    // Body
    __Vdly__non_restoring_divider__DOT__div_reg = vlSelfRef.non_restoring_divider__DOT__div_reg;
    __Vdly__non_restoring_divider__DOT__quot = vlSelfRef.non_restoring_divider__DOT__quot;
    __Vdly__non_restoring_divider__DOT__rem = vlSelfRef.non_restoring_divider__DOT__rem;
    __Vdly__non_restoring_divider__DOT__iter = vlSelfRef.non_restoring_divider__DOT__iter;
    __Vdly__non_restoring_divider__DOT__state = vlSelfRef.non_restoring_divider__DOT__state;
    if (vlSelfRef.rst_n) {
        if ((0U == (IData)(vlSelfRef.non_restoring_divider__DOT__state))) {
            vlSelfRef.valid = 0U;
            vlSelfRef.error = 0U;
            vlSelfRef.busy = 0U;
            if (vlSelfRef.start) {
                if ((0U == (IData)(vlSelfRef.divisor))) {
                    vlSelfRef.error = 1U;
                } else {
                    vlSelfRef.busy = 1U;
                    __Vdly__non_restoring_divider__DOT__div_reg 
                        = vlSelfRef.divisor;
                    __Vdly__non_restoring_divider__DOT__quot = 0U;
                    __Vdly__non_restoring_divider__DOT__rem = 0U;
                    __Vdly__non_restoring_divider__DOT__iter = 8U;
                    __Vdly__non_restoring_divider__DOT__state = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.non_restoring_divider__DOT__state))) {
            if ((0U < (IData)(vlSelfRef.non_restoring_divider__DOT__iter))) {
                __Vdly__non_restoring_divider__DOT__rem 
                    = ((0xfeU & ((IData)(vlSelfRef.non_restoring_divider__DOT__rem) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.dividend) 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.non_restoring_divider__DOT__iter) 
                                                      - (IData)(1U))))));
                if ((((0xfeU & ((IData)(vlSelfRef.non_restoring_divider__DOT__rem) 
                                << 1U)) | (1U & ((IData)(vlSelfRef.dividend) 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.non_restoring_divider__DOT__iter) 
                                                     - (IData)(1U)))))) 
                     >= (IData)(vlSelfRef.non_restoring_divider__DOT__div_reg))) {
                    __Vdly__non_restoring_divider__DOT__rem 
                        = (0xffU & (((0xfeU & ((IData)(vlSelfRef.non_restoring_divider__DOT__rem) 
                                               << 1U)) 
                                     | (1U & ((IData)(vlSelfRef.dividend) 
                                              >> (7U 
                                                  & ((IData)(vlSelfRef.non_restoring_divider__DOT__iter) 
                                                     - (IData)(1U)))))) 
                                    - (IData)(vlSelfRef.non_restoring_divider__DOT__div_reg)));
                    __Vdly__non_restoring_divider__DOT__quot 
                        = (1U | (0xfeU & ((IData)(vlSelfRef.non_restoring_divider__DOT__quot) 
                                          << 1U)));
                } else {
                    __Vdly__non_restoring_divider__DOT__quot 
                        = (0xfeU & ((IData)(vlSelfRef.non_restoring_divider__DOT__quot) 
                                    << 1U));
                }
                __Vdly__non_restoring_divider__DOT__iter 
                    = (0xfU & ((IData)(vlSelfRef.non_restoring_divider__DOT__iter) 
                               - (IData)(1U)));
            } else {
                vlSelfRef.quotient = vlSelfRef.non_restoring_divider__DOT__quot;
                vlSelfRef.remainder = vlSelfRef.non_restoring_divider__DOT__rem;
                vlSelfRef.valid = 1U;
                vlSelfRef.busy = 0U;
                __Vdly__non_restoring_divider__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.non_restoring_divider__DOT__state))) {
            if (vlSelfRef.start) {
                vlSelfRef.valid = 0U;
                __Vdly__non_restoring_divider__DOT__state = 0U;
            }
        } else {
            __Vdly__non_restoring_divider__DOT__state = 0U;
        }
    } else {
        __Vdly__non_restoring_divider__DOT__state = 0U;
        vlSelfRef.busy = 0U;
        vlSelfRef.valid = 0U;
        vlSelfRef.error = 0U;
        vlSelfRef.quotient = 0U;
        vlSelfRef.remainder = 0U;
        __Vdly__non_restoring_divider__DOT__div_reg = 0U;
        __Vdly__non_restoring_divider__DOT__quot = 0U;
        __Vdly__non_restoring_divider__DOT__rem = 0U;
        __Vdly__non_restoring_divider__DOT__iter = 0U;
    }
    vlSelfRef.non_restoring_divider__DOT__div_reg = __Vdly__non_restoring_divider__DOT__div_reg;
    vlSelfRef.non_restoring_divider__DOT__quot = __Vdly__non_restoring_divider__DOT__quot;
    vlSelfRef.non_restoring_divider__DOT__rem = __Vdly__non_restoring_divider__DOT__rem;
    vlSelfRef.non_restoring_divider__DOT__iter = __Vdly__non_restoring_divider__DOT__iter;
    vlSelfRef.non_restoring_divider__DOT__state = __Vdly__non_restoring_divider__DOT__state;
}

void Vnon_restoring_divider___024root___eval_triggers__act(Vnon_restoring_divider___024root* vlSelf);

bool Vnon_restoring_divider___024root___eval_phase__act(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_phase__act\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vnon_restoring_divider___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vnon_restoring_divider___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vnon_restoring_divider___024root___eval_phase__nba(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_phase__nba\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vnon_restoring_divider___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnon_restoring_divider___024root___dump_triggers__nba(Vnon_restoring_divider___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnon_restoring_divider___024root___dump_triggers__act(Vnon_restoring_divider___024root* vlSelf);
#endif  // VL_DEBUG

void Vnon_restoring_divider___024root___eval(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vnon_restoring_divider___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/math/non_restoring_divider.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vnon_restoring_divider___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/math/non_restoring_divider.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vnon_restoring_divider___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vnon_restoring_divider___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vnon_restoring_divider___024root___eval_debug_assertions(Vnon_restoring_divider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root___eval_debug_assertions\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
