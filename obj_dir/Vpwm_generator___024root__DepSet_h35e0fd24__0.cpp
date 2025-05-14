// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm_generator.h for the primary calling header

#include "Vpwm_generator__pch.h"
#include "Vpwm_generator___024root.h"

void Vpwm_generator___024root___eval_act(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vpwm_generator___024root___nba_sequent__TOP__0(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__pwm_generator__DOT__counter;
    __Vdly__pwm_generator__DOT__counter = 0;
    // Body
    __Vdly__pwm_generator__DOT__counter = vlSelf->pwm_generator__DOT__counter;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __Vdly__pwm_generator__DOT__counter = (
                                                   ((IData)(vlSelf->pwm_generator__DOT__counter) 
                                                    >= (IData)(vlSelf->pwm_generator__DOT__period_reg))
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->pwm_generator__DOT__counter))));
            vlSelf->pwm_out = ((IData)(vlSelf->pwm_generator__DOT__counter) 
                               < (IData)(vlSelf->pwm_generator__DOT__duty_reg));
        }
        if (((IData)(vlSelf->pwm_generator__DOT__counter) 
             == (IData)(vlSelf->pwm_generator__DOT__period_reg))) {
            vlSelf->pwm_generator__DOT__duty_reg = vlSelf->duty_cycle;
            vlSelf->pwm_generator__DOT__period_reg 
                = vlSelf->period;
        }
    } else {
        __Vdly__pwm_generator__DOT__counter = 0U;
        vlSelf->pwm_out = 0U;
        vlSelf->pwm_generator__DOT__duty_reg = 0x80U;
        vlSelf->pwm_generator__DOT__period_reg = 0xffU;
    }
    vlSelf->pwm_generator__DOT__counter = __Vdly__pwm_generator__DOT__counter;
}

void Vpwm_generator___024root___eval_nba(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpwm_generator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vpwm_generator___024root___eval_triggers__act(Vpwm_generator___024root* vlSelf);

bool Vpwm_generator___024root___eval_phase__act(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpwm_generator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpwm_generator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpwm_generator___024root___eval_phase__nba(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpwm_generator___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator___024root___dump_triggers__nba(Vpwm_generator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator___024root___dump_triggers__act(Vpwm_generator___024root* vlSelf);
#endif  // VL_DEBUG

void Vpwm_generator___024root___eval(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpwm_generator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pwm_generator.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpwm_generator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pwm_generator.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpwm_generator___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpwm_generator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpwm_generator___024root___eval_debug_assertions(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
