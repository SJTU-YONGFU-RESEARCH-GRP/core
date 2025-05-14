// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_barrel_rotator.h for the primary calling header

#include "Vparameterized_barrel_rotator__pch.h"
#include "Vparameterized_barrel_rotator___024root.h"

VL_INLINE_OPT void Vparameterized_barrel_rotator___024root___ico_sequent__TOP__0(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->parameterized_barrel_rotator__DOT__extended_data 
        = (((QData)((IData)(vlSelf->data_in)) << 0x20U) 
           | (QData)((IData)(vlSelf->data_in)));
    vlSelf->parameterized_barrel_rotator__DOT__effective_rotate 
        = vlSelf->rotate_amount;
    vlSelf->parameterized_barrel_rotator__DOT__temp_data 
        = ((IData)(vlSelf->direction) ? (IData)((vlSelf->parameterized_barrel_rotator__DOT__extended_data 
                                                 >> 
                                                 (0x3fU 
                                                  & (((IData)(0x3fU) 
                                                      - (IData)(vlSelf->parameterized_barrel_rotator__DOT__effective_rotate)) 
                                                     - (IData)(0x1fU)))))
            : (IData)((vlSelf->parameterized_barrel_rotator__DOT__extended_data 
                       >> (0x3fU & (IData)(vlSelf->parameterized_barrel_rotator__DOT__effective_rotate)))));
    vlSelf->data_out = vlSelf->parameterized_barrel_rotator__DOT__temp_data;
}

void Vparameterized_barrel_rotator___024root___eval_ico(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vparameterized_barrel_rotator___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vparameterized_barrel_rotator___024root___eval_triggers__ico(Vparameterized_barrel_rotator___024root* vlSelf);

bool Vparameterized_barrel_rotator___024root___eval_phase__ico(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vparameterized_barrel_rotator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vparameterized_barrel_rotator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vparameterized_barrel_rotator___024root___eval_act(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_act\n"); );
}

void Vparameterized_barrel_rotator___024root___eval_nba(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_nba\n"); );
}

void Vparameterized_barrel_rotator___024root___eval_triggers__act(Vparameterized_barrel_rotator___024root* vlSelf);

bool Vparameterized_barrel_rotator___024root___eval_phase__act(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vparameterized_barrel_rotator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vparameterized_barrel_rotator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vparameterized_barrel_rotator___024root___eval_phase__nba(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vparameterized_barrel_rotator___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__ico(Vparameterized_barrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__nba(Vparameterized_barrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__act(Vparameterized_barrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_barrel_rotator___024root___eval(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval\n"); );
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
            Vparameterized_barrel_rotator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("parameterized_barrel_rotator.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vparameterized_barrel_rotator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vparameterized_barrel_rotator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("parameterized_barrel_rotator.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vparameterized_barrel_rotator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("parameterized_barrel_rotator.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vparameterized_barrel_rotator___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vparameterized_barrel_rotator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vparameterized_barrel_rotator___024root___eval_debug_assertions(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rotate_amount & 0xe0U))) {
        Verilated::overWidthError("rotate_amount");}
    if (VL_UNLIKELY((vlSelf->direction & 0xfeU))) {
        Verilated::overWidthError("direction");}
}
#endif  // VL_DEBUG
