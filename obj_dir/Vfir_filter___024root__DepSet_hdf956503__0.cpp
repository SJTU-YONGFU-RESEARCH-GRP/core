// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir_filter.h for the primary calling header

#include "Vfir_filter__pch.h"
#include "Vfir_filter___024root.h"

void Vfir_filter___024root___eval_act(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vfir_filter___024root___nba_sequent__TOP__0(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__fir_filter__DOT__delay_line__v0;
    __Vdlyvval__fir_filter__DOT__delay_line__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fir_filter__DOT__delay_line__v0;
    __Vdlyvset__fir_filter__DOT__delay_line__v0 = 0;
    CData/*7:0*/ __Vdlyvval__fir_filter__DOT__delay_line__v1;
    __Vdlyvval__fir_filter__DOT__delay_line__v1 = 0;
    CData/*7:0*/ __Vdlyvval__fir_filter__DOT__delay_line__v2;
    __Vdlyvval__fir_filter__DOT__delay_line__v2 = 0;
    CData/*7:0*/ __Vdlyvval__fir_filter__DOT__delay_line__v3;
    __Vdlyvval__fir_filter__DOT__delay_line__v3 = 0;
    CData/*0:0*/ __Vdlyvset__fir_filter__DOT__delay_line__v4;
    __Vdlyvset__fir_filter__DOT__delay_line__v4 = 0;
    // Body
    __Vdlyvset__fir_filter__DOT__delay_line__v0 = 0U;
    __Vdlyvset__fir_filter__DOT__delay_line__v4 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->data_valid) {
            vlSelf->fir_filter__DOT__i = 0U;
            __Vdlyvval__fir_filter__DOT__delay_line__v0 
                = vlSelf->fir_filter__DOT__delay_line
                [2U];
            __Vdlyvset__fir_filter__DOT__delay_line__v0 = 1U;
            __Vdlyvval__fir_filter__DOT__delay_line__v1 
                = vlSelf->fir_filter__DOT__delay_line
                [1U];
            __Vdlyvval__fir_filter__DOT__delay_line__v2 
                = vlSelf->fir_filter__DOT__delay_line
                [0U];
            __Vdlyvval__fir_filter__DOT__delay_line__v3 
                = vlSelf->data_in;
            vlSelf->fir_filter__DOT__result = (0x7ffffU 
                                               & (VL_MULS_III(19, 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__delay_line
                                                                               [0U])), 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__coeffs
                                                                               [0U]))) 
                                                  + 
                                                  (VL_MULS_III(19, 
                                                               (0x7ffffU 
                                                                & VL_EXTENDS_II(19,8, 
                                                                                vlSelf->fir_filter__DOT__delay_line
                                                                                [1U])), 
                                                               (0x7ffffU 
                                                                & VL_EXTENDS_II(19,8, 
                                                                                vlSelf->fir_filter__DOT__coeffs
                                                                                [1U]))) 
                                                   + 
                                                   (VL_MULS_III(19, 
                                                                (0x7ffffU 
                                                                 & VL_EXTENDS_II(19,8, 
                                                                                vlSelf->fir_filter__DOT__delay_line
                                                                                [2U])), 
                                                                (0x7ffffU 
                                                                 & VL_EXTENDS_II(19,8, 
                                                                                vlSelf->fir_filter__DOT__coeffs
                                                                                [2U]))) 
                                                    + 
                                                    VL_MULS_III(19, 
                                                                (0x7ffffU 
                                                                 & VL_EXTENDS_II(19,8, 
                                                                                vlSelf->fir_filter__DOT__delay_line
                                                                                [3U])), 
                                                                (0x7ffffU 
                                                                 & VL_EXTENDS_II(19,8, 
                                                                                vlSelf->fir_filter__DOT__coeffs
                                                                                [3U])))))));
        }
    } else {
        vlSelf->fir_filter__DOT__i = 4U;
        __Vdlyvset__fir_filter__DOT__delay_line__v4 = 1U;
        vlSelf->fir_filter__DOT__result = 0U;
    }
    vlSelf->data_out_valid = ((IData)(vlSelf->rst_n) 
                              && (IData)(vlSelf->data_valid));
    if (__Vdlyvset__fir_filter__DOT__delay_line__v0) {
        vlSelf->fir_filter__DOT__delay_line[3U] = __Vdlyvval__fir_filter__DOT__delay_line__v0;
        vlSelf->fir_filter__DOT__delay_line[2U] = __Vdlyvval__fir_filter__DOT__delay_line__v1;
        vlSelf->fir_filter__DOT__delay_line[1U] = __Vdlyvval__fir_filter__DOT__delay_line__v2;
        vlSelf->fir_filter__DOT__delay_line[0U] = __Vdlyvval__fir_filter__DOT__delay_line__v3;
    }
    if (__Vdlyvset__fir_filter__DOT__delay_line__v4) {
        vlSelf->fir_filter__DOT__delay_line[0U] = 0U;
        vlSelf->fir_filter__DOT__delay_line[1U] = 0U;
        vlSelf->fir_filter__DOT__delay_line[2U] = 0U;
        vlSelf->fir_filter__DOT__delay_line[3U] = 0U;
    }
    vlSelf->data_out = vlSelf->fir_filter__DOT__result;
}

void Vfir_filter___024root___eval_nba(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfir_filter___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vfir_filter___024root___eval_triggers__act(Vfir_filter___024root* vlSelf);

bool Vfir_filter___024root___eval_phase__act(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfir_filter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vfir_filter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfir_filter___024root___eval_phase__nba(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfir_filter___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir_filter___024root___dump_triggers__nba(Vfir_filter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir_filter___024root___dump_triggers__act(Vfir_filter___024root* vlSelf);
#endif  // VL_DEBUG

void Vfir_filter___024root___eval(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfir_filter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fir_filter.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vfir_filter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fir_filter.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vfir_filter___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vfir_filter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfir_filter___024root___eval_debug_assertions(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->data_valid & 0xfeU))) {
        Verilated::overWidthError("data_valid");}
}
#endif  // VL_DEBUG
