// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_clz_clo.h for the primary calling header

#include "Vconfigurable_clz_clo__pch.h"
#include "Vconfigurable_clz_clo___024root.h"

VL_INLINE_OPT void Vconfigurable_clz_clo___024root___ico_sequent__TOP__0(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->count_out = 0x20U;
    vlSelf->all_zeros = (0U == vlSelf->data_in);
    vlSelf->all_ones = (0xffffffffU == vlSelf->data_in);
    if (vlSelf->count_ones) {
        vlSelf->configurable_clz_clo__DOT__i = 0x1fU;
        {
            while (VL_LTES_III(32, 0U, vlSelf->configurable_clz_clo__DOT__i)) {
                if ((1U & (~ (vlSelf->data_in >> (0x1fU 
                                                  & vlSelf->configurable_clz_clo__DOT__i))))) {
                    vlSelf->count_out = (0x3fU & ((IData)(0x1fU) 
                                                  - vlSelf->configurable_clz_clo__DOT__i));
                    goto __Vlabel1;
                }
                vlSelf->configurable_clz_clo__DOT__i 
                    = (vlSelf->configurable_clz_clo__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
    } else {
        vlSelf->configurable_clz_clo__DOT__i = 0x1fU;
        {
            while (VL_LTES_III(32, 0U, vlSelf->configurable_clz_clo__DOT__i)) {
                if ((1U & (vlSelf->data_in >> (0x1fU 
                                               & vlSelf->configurable_clz_clo__DOT__i)))) {
                    vlSelf->count_out = (0x3fU & ((IData)(0x1fU) 
                                                  - vlSelf->configurable_clz_clo__DOT__i));
                    goto __Vlabel2;
                }
                vlSelf->configurable_clz_clo__DOT__i 
                    = (vlSelf->configurable_clz_clo__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
    }
}

void Vconfigurable_clz_clo___024root___eval_ico(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_clz_clo___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vconfigurable_clz_clo___024root___eval_triggers__ico(Vconfigurable_clz_clo___024root* vlSelf);

bool Vconfigurable_clz_clo___024root___eval_phase__ico(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_clz_clo___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_clz_clo___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconfigurable_clz_clo___024root___eval_act(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_act\n"); );
}

void Vconfigurable_clz_clo___024root___eval_nba(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_nba\n"); );
}

void Vconfigurable_clz_clo___024root___eval_triggers__act(Vconfigurable_clz_clo___024root* vlSelf);

bool Vconfigurable_clz_clo___024root___eval_phase__act(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_clz_clo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vconfigurable_clz_clo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_clz_clo___024root___eval_phase__nba(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_clz_clo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__ico(Vconfigurable_clz_clo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__nba(Vconfigurable_clz_clo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__act(Vconfigurable_clz_clo___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_clz_clo___024root___eval(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval\n"); );
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
            Vconfigurable_clz_clo___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("configurable_clz_clo.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_clz_clo___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_clz_clo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("configurable_clz_clo.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vconfigurable_clz_clo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("configurable_clz_clo.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vconfigurable_clz_clo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vconfigurable_clz_clo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_clz_clo___024root___eval_debug_assertions(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->count_ones & 0xfeU))) {
        Verilated::overWidthError("count_ones");}
}
#endif  // VL_DEBUG
