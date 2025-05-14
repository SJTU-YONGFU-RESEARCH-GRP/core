// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_port_ram.h for the primary calling header

#include "Vdual_port_ram__pch.h"
#include "Vdual_port_ram___024root.h"

void Vdual_port_ram___024root___eval_act(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vdual_port_ram___024root___nba_sequent__TOP__0(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dual_port_ram__DOT__ram__v0;
    __Vdlyvdim0__dual_port_ram__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dual_port_ram__DOT__ram__v0;
    __Vdlyvval__dual_port_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dual_port_ram__DOT__ram__v0;
    __Vdlyvset__dual_port_ram__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__dual_port_ram__DOT__ram__v1;
    __Vdlyvdim0__dual_port_ram__DOT__ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dual_port_ram__DOT__ram__v1;
    __Vdlyvval__dual_port_ram__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dual_port_ram__DOT__ram__v1;
    __Vdlyvset__dual_port_ram__DOT__ram__v1 = 0;
    // Body
    __Vdlyvset__dual_port_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__dual_port_ram__DOT__ram__v1 = 0U;
    if (vlSelf->we_a) {
        __Vdlyvval__dual_port_ram__DOT__ram__v0 = vlSelf->data_a;
        __Vdlyvset__dual_port_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__dual_port_ram__DOT__ram__v0 = vlSelf->addr_a;
    }
    if (vlSelf->we_b) {
        __Vdlyvval__dual_port_ram__DOT__ram__v1 = vlSelf->data_b;
        __Vdlyvset__dual_port_ram__DOT__ram__v1 = 1U;
        __Vdlyvdim0__dual_port_ram__DOT__ram__v1 = vlSelf->addr_b;
    }
    vlSelf->q_b = vlSelf->dual_port_ram__DOT__ram[vlSelf->addr_b];
    vlSelf->q_a = vlSelf->dual_port_ram__DOT__ram[vlSelf->addr_a];
    if (__Vdlyvset__dual_port_ram__DOT__ram__v0) {
        vlSelf->dual_port_ram__DOT__ram[__Vdlyvdim0__dual_port_ram__DOT__ram__v0] 
            = __Vdlyvval__dual_port_ram__DOT__ram__v0;
    }
    if (__Vdlyvset__dual_port_ram__DOT__ram__v1) {
        vlSelf->dual_port_ram__DOT__ram[__Vdlyvdim0__dual_port_ram__DOT__ram__v1] 
            = __Vdlyvval__dual_port_ram__DOT__ram__v1;
    }
}

void Vdual_port_ram___024root___eval_nba(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_port_ram___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vdual_port_ram___024root___eval_triggers__act(Vdual_port_ram___024root* vlSelf);

bool Vdual_port_ram___024root___eval_phase__act(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdual_port_ram___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdual_port_ram___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdual_port_ram___024root___eval_phase__nba(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdual_port_ram___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_port_ram___024root___dump_triggers__nba(Vdual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_port_ram___024root___dump_triggers__act(Vdual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vdual_port_ram___024root___eval(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdual_port_ram___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dual_port_ram.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdual_port_ram___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dual_port_ram.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdual_port_ram___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdual_port_ram___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdual_port_ram___024root___eval_debug_assertions(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->addr_a & 0xf0U))) {
        Verilated::overWidthError("addr_a");}
    if (VL_UNLIKELY((vlSelf->we_a & 0xfeU))) {
        Verilated::overWidthError("we_a");}
    if (VL_UNLIKELY((vlSelf->addr_b & 0xf0U))) {
        Verilated::overWidthError("addr_b");}
    if (VL_UNLIKELY((vlSelf->we_b & 0xfeU))) {
        Verilated::overWidthError("we_b");}
}
#endif  // VL_DEBUG
