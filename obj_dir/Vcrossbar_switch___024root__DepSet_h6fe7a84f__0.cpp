// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrossbar_switch.h for the primary calling header

#include "Vcrossbar_switch__pch.h"
#include "Vcrossbar_switch___024root.h"

void Vcrossbar_switch___024root___eval_act(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcrossbar_switch___024root___nba_sequent__TOP__0(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->crossbar_switch__DOT__i = 4U;
    if (vlSelf->rst_n) {
        vlSelf->crossbar_switch__DOT__sel_idx = (3U 
                                                 & (IData)(vlSelf->select));
        vlSelf->crossbar_switch__DOT__selected_data 
            = (0xffU & (vlSelf->data_in >> (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(vlSelf->crossbar_switch__DOT__sel_idx), 3U))));
        vlSelf->data_out = ((0xffffff00U & vlSelf->data_out) 
                            | (IData)(vlSelf->crossbar_switch__DOT__selected_data));
        vlSelf->crossbar_switch__DOT__sel_idx = (3U 
                                                 & ((IData)(vlSelf->select) 
                                                    >> 2U));
        vlSelf->crossbar_switch__DOT__selected_data 
            = (0xffU & (vlSelf->data_in >> (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(vlSelf->crossbar_switch__DOT__sel_idx), 3U))));
        vlSelf->data_out = ((0xffff00ffU & vlSelf->data_out) 
                            | ((IData)(vlSelf->crossbar_switch__DOT__selected_data) 
                               << 8U));
        vlSelf->crossbar_switch__DOT__sel_idx = (3U 
                                                 & ((IData)(vlSelf->select) 
                                                    >> 4U));
        vlSelf->crossbar_switch__DOT__selected_data 
            = (0xffU & (vlSelf->data_in >> (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(vlSelf->crossbar_switch__DOT__sel_idx), 3U))));
        vlSelf->data_out = ((0xff00ffffU & vlSelf->data_out) 
                            | ((IData)(vlSelf->crossbar_switch__DOT__selected_data) 
                               << 0x10U));
        vlSelf->crossbar_switch__DOT__sel_idx = (3U 
                                                 & ((IData)(vlSelf->select) 
                                                    >> 6U));
        vlSelf->crossbar_switch__DOT__selected_data 
            = (0xffU & (vlSelf->data_in >> (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(vlSelf->crossbar_switch__DOT__sel_idx), 3U))));
        vlSelf->data_out = ((0xffffffU & vlSelf->data_out) 
                            | ((IData)(vlSelf->crossbar_switch__DOT__selected_data) 
                               << 0x18U));
    } else {
        vlSelf->data_out = 0U;
    }
}

void Vcrossbar_switch___024root___eval_nba(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrossbar_switch___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcrossbar_switch___024root___eval_triggers__act(Vcrossbar_switch___024root* vlSelf);

bool Vcrossbar_switch___024root___eval_phase__act(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcrossbar_switch___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcrossbar_switch___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcrossbar_switch___024root___eval_phase__nba(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcrossbar_switch___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrossbar_switch___024root___dump_triggers__nba(Vcrossbar_switch___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrossbar_switch___024root___dump_triggers__act(Vcrossbar_switch___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrossbar_switch___024root___eval(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcrossbar_switch___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("crossbar_switch.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcrossbar_switch___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("crossbar_switch.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcrossbar_switch___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcrossbar_switch___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcrossbar_switch___024root___eval_debug_assertions(Vcrossbar_switch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
