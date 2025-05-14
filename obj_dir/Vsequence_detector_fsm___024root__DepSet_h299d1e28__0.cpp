// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsequence_detector_fsm.h for the primary calling header

#include "Vsequence_detector_fsm__pch.h"
#include "Vsequence_detector_fsm___024root.h"

void Vsequence_detector_fsm___024root___eval_act(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsequence_detector_fsm___024root___nba_sequent__TOP__0(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__sequence_detector_fsm__DOT__state;
    __Vdly__sequence_detector_fsm__DOT__state = 0;
    CData/*2:0*/ __Vdly__sequence_detector_fsm__DOT__bit_count;
    __Vdly__sequence_detector_fsm__DOT__bit_count = 0;
    CData/*3:0*/ __Vdly__sequence_detector_fsm__DOT__shift_reg;
    __Vdly__sequence_detector_fsm__DOT__shift_reg = 0;
    // Body
    __Vdly__sequence_detector_fsm__DOT__shift_reg = vlSelf->sequence_detector_fsm__DOT__shift_reg;
    __Vdly__sequence_detector_fsm__DOT__bit_count = vlSelf->sequence_detector_fsm__DOT__bit_count;
    __Vdly__sequence_detector_fsm__DOT__state = vlSelf->sequence_detector_fsm__DOT__state;
    if (vlSelf->rst_n) {
        vlSelf->pattern_detected = 0U;
        if (vlSelf->load_pattern) {
            __Vdly__sequence_detector_fsm__DOT__state = 0U;
            __Vdly__sequence_detector_fsm__DOT__bit_count = 0U;
            __Vdly__sequence_detector_fsm__DOT__shift_reg = 0U;
            vlSelf->sequence_detector_fsm__DOT__pattern_reg 
                = vlSelf->config_pattern;
        } else if (vlSelf->enable) {
            if (vlSelf->sequence_detector_fsm__DOT__state) {
                if (vlSelf->sequence_detector_fsm__DOT__state) {
                    __Vdly__sequence_detector_fsm__DOT__shift_reg 
                        = ((0xeU & ((IData)(vlSelf->sequence_detector_fsm__DOT__shift_reg) 
                                    << 1U)) | (IData)(vlSelf->serial_in));
                    if ((4U > (IData)(vlSelf->sequence_detector_fsm__DOT__bit_count))) {
                        __Vdly__sequence_detector_fsm__DOT__bit_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->sequence_detector_fsm__DOT__bit_count)));
                    }
                    if ((3U <= (IData)(vlSelf->sequence_detector_fsm__DOT__bit_count))) {
                        if ((((0xeU & ((IData)(vlSelf->sequence_detector_fsm__DOT__shift_reg) 
                                       << 1U)) | (IData)(vlSelf->serial_in)) 
                             == (IData)(vlSelf->sequence_detector_fsm__DOT__pattern_reg))) {
                            vlSelf->pattern_detected = 1U;
                        }
                    }
                }
            } else {
                __Vdly__sequence_detector_fsm__DOT__shift_reg 
                    = ((0xeU & ((IData)(vlSelf->sequence_detector_fsm__DOT__shift_reg) 
                                << 1U)) | (IData)(vlSelf->serial_in));
                __Vdly__sequence_detector_fsm__DOT__bit_count = 1U;
                __Vdly__sequence_detector_fsm__DOT__state = 1U;
            }
        }
    } else {
        __Vdly__sequence_detector_fsm__DOT__state = 0U;
        __Vdly__sequence_detector_fsm__DOT__shift_reg = 0U;
        __Vdly__sequence_detector_fsm__DOT__bit_count = 0U;
        vlSelf->pattern_detected = 0U;
        vlSelf->sequence_detector_fsm__DOT__pattern_reg = 0xbU;
    }
    vlSelf->sequence_detector_fsm__DOT__state = __Vdly__sequence_detector_fsm__DOT__state;
    vlSelf->sequence_detector_fsm__DOT__bit_count = __Vdly__sequence_detector_fsm__DOT__bit_count;
    vlSelf->sequence_detector_fsm__DOT__shift_reg = __Vdly__sequence_detector_fsm__DOT__shift_reg;
}

void Vsequence_detector_fsm___024root___eval_nba(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsequence_detector_fsm___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsequence_detector_fsm___024root___eval_triggers__act(Vsequence_detector_fsm___024root* vlSelf);

bool Vsequence_detector_fsm___024root___eval_phase__act(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsequence_detector_fsm___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsequence_detector_fsm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsequence_detector_fsm___024root___eval_phase__nba(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsequence_detector_fsm___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsequence_detector_fsm___024root___dump_triggers__nba(Vsequence_detector_fsm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsequence_detector_fsm___024root___dump_triggers__act(Vsequence_detector_fsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vsequence_detector_fsm___024root___eval(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsequence_detector_fsm___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sequence_detector_fsm.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsequence_detector_fsm___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sequence_detector_fsm.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsequence_detector_fsm___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsequence_detector_fsm___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsequence_detector_fsm___024root___eval_debug_assertions(Vsequence_detector_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->serial_in & 0xfeU))) {
        Verilated::overWidthError("serial_in");}
    if (VL_UNLIKELY((vlSelf->config_pattern & 0xf0U))) {
        Verilated::overWidthError("config_pattern");}
    if (VL_UNLIKELY((vlSelf->load_pattern & 0xfeU))) {
        Verilated::overWidthError("load_pattern");}
}
#endif  // VL_DEBUG
