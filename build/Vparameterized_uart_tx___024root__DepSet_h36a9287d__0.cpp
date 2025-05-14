// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_uart_tx.h for the primary calling header

#include "Vparameterized_uart_tx__pch.h"
#include "Vparameterized_uart_tx___024root.h"

void Vparameterized_uart_tx___024root___eval_act(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vparameterized_uart_tx___024root___nba_sequent__TOP__0(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__parameterized_uart_tx__DOT__state;
    __Vdly__parameterized_uart_tx__DOT__state = 0;
    SData/*8:0*/ __Vdly__parameterized_uart_tx__DOT__bit_timer;
    __Vdly__parameterized_uart_tx__DOT__bit_timer = 0;
    // Body
    __Vdly__parameterized_uart_tx__DOT__bit_timer = vlSelf->parameterized_uart_tx__DOT__bit_timer;
    __Vdly__parameterized_uart_tx__DOT__state = vlSelf->parameterized_uart_tx__DOT__state;
    if (VL_UNLIKELY(vlSelf->rst_n)) {
        VL_WRITEF("[UART TX] time=%0t state=%0# tx=%b bit_counter=%0# bit_timer=%0# stop_bit_counter=%0#\n",
                  64,VL_TIME_UNITED_Q(1),-12,3,(IData)(vlSelf->parameterized_uart_tx__DOT__state),
                  1,vlSelf->tx,3,(IData)(vlSelf->parameterized_uart_tx__DOT__bit_counter),
                  9,vlSelf->parameterized_uart_tx__DOT__bit_timer,
                  1,(IData)(vlSelf->parameterized_uart_tx__DOT__stop_bit_counter));
        if ((4U & (IData)(vlSelf->parameterized_uart_tx__DOT__state))) {
            if ((2U & (IData)(vlSelf->parameterized_uart_tx__DOT__state))) {
                __Vdly__parameterized_uart_tx__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->parameterized_uart_tx__DOT__state))) {
                __Vdly__parameterized_uart_tx__DOT__state = 0U;
            } else {
                vlSelf->tx = 1U;
                if ((0x1b1U > (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer))) {
                    __Vdly__parameterized_uart_tx__DOT__bit_timer 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer)));
                } else {
                    __Vdly__parameterized_uart_tx__DOT__bit_timer = 0U;
                    vlSelf->parameterized_uart_tx__DOT__stop_bit_counter = 0U;
                    __Vdly__parameterized_uart_tx__DOT__state = 0U;
                    vlSelf->tx_busy = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->parameterized_uart_tx__DOT__state))) {
            if ((1U & (IData)(vlSelf->parameterized_uart_tx__DOT__state))) {
                vlSelf->tx = vlSelf->parameterized_uart_tx__DOT__parity_bit;
                if ((0x1b1U > (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer))) {
                    __Vdly__parameterized_uart_tx__DOT__bit_timer 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer)));
                } else {
                    __Vdly__parameterized_uart_tx__DOT__bit_timer = 0U;
                    vlSelf->parameterized_uart_tx__DOT__stop_bit_counter = 0U;
                    __Vdly__parameterized_uart_tx__DOT__state = 4U;
                }
            } else {
                vlSelf->tx = (1U & ((IData)(vlSelf->parameterized_uart_tx__DOT__data_reg) 
                                    >> (IData)(vlSelf->parameterized_uart_tx__DOT__bit_counter)));
                if ((0x1b1U > (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer))) {
                    __Vdly__parameterized_uart_tx__DOT__bit_timer 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer)));
                } else {
                    __Vdly__parameterized_uart_tx__DOT__bit_timer = 0U;
                    if ((7U > (IData)(vlSelf->parameterized_uart_tx__DOT__bit_counter))) {
                        vlSelf->parameterized_uart_tx__DOT__bit_counter 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->parameterized_uart_tx__DOT__bit_counter)));
                    } else {
                        vlSelf->parameterized_uart_tx__DOT__bit_counter = 0U;
                        vlSelf->parameterized_uart_tx__DOT__stop_bit_counter = 0U;
                        __Vdly__parameterized_uart_tx__DOT__state = 4U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->parameterized_uart_tx__DOT__state))) {
            vlSelf->tx = 0U;
            if ((0x1b1U > (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer))) {
                __Vdly__parameterized_uart_tx__DOT__bit_timer 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->parameterized_uart_tx__DOT__bit_timer)));
            } else {
                __Vdly__parameterized_uart_tx__DOT__bit_timer = 0U;
                __Vdly__parameterized_uart_tx__DOT__state = 2U;
            }
        } else {
            __Vdly__parameterized_uart_tx__DOT__bit_timer = 0U;
            vlSelf->parameterized_uart_tx__DOT__bit_counter = 0U;
            vlSelf->tx = 1U;
            vlSelf->parameterized_uart_tx__DOT__stop_bit_counter = 0U;
            if (vlSelf->tx_start) {
                vlSelf->tx_busy = 1U;
                vlSelf->parameterized_uart_tx__DOT__data_reg 
                    = vlSelf->data_in;
                __Vdly__parameterized_uart_tx__DOT__state = 1U;
            }
        }
    } else {
        __Vdly__parameterized_uart_tx__DOT__bit_timer = 0U;
        vlSelf->parameterized_uart_tx__DOT__bit_counter = 0U;
        __Vdly__parameterized_uart_tx__DOT__state = 0U;
        vlSelf->tx = 1U;
        vlSelf->tx_busy = 0U;
        vlSelf->parameterized_uart_tx__DOT__data_reg = 0U;
        vlSelf->parameterized_uart_tx__DOT__parity_bit = 0U;
        vlSelf->parameterized_uart_tx__DOT__stop_bit_counter = 0U;
    }
    vlSelf->parameterized_uart_tx__DOT__state = __Vdly__parameterized_uart_tx__DOT__state;
    vlSelf->parameterized_uart_tx__DOT__bit_timer = __Vdly__parameterized_uart_tx__DOT__bit_timer;
}

void Vparameterized_uart_tx___024root___eval_nba(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vparameterized_uart_tx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vparameterized_uart_tx___024root___eval_triggers__act(Vparameterized_uart_tx___024root* vlSelf);

bool Vparameterized_uart_tx___024root___eval_phase__act(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vparameterized_uart_tx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vparameterized_uart_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vparameterized_uart_tx___024root___eval_phase__nba(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vparameterized_uart_tx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_uart_tx___024root___dump_triggers__nba(Vparameterized_uart_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_uart_tx___024root___dump_triggers__act(Vparameterized_uart_tx___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_uart_tx___024root___eval(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vparameterized_uart_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/comms/parameterized_uart_tx.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vparameterized_uart_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/comms/parameterized_uart_tx.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vparameterized_uart_tx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vparameterized_uart_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vparameterized_uart_tx___024root___eval_debug_assertions(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->tx_start & 0xfeU))) {
        Verilated::overWidthError("tx_start");}
}
#endif  // VL_DEBUG
