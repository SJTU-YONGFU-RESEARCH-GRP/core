// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_rotator.h for the primary calling header

#include "Vbarrel_rotator__pch.h"
#include "Vbarrel_rotator___024root.h"

extern const VlUnpacked<CData/*7:0*/, 4096> Vbarrel_rotator__ConstPool__TABLE_ha32e4460_0;

VL_INLINE_OPT void Vbarrel_rotator___024root___ico_sequent__TOP__0(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->rotate_amount) 
                     << 9U) | (((IData)(vlSelf->direction) 
                                << 8U) | (IData)(vlSelf->data_in)));
    vlSelf->data_out = Vbarrel_rotator__ConstPool__TABLE_ha32e4460_0
        [__Vtableidx1];
}

void Vbarrel_rotator___024root___eval_ico(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vbarrel_rotator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vbarrel_rotator___024root___eval_triggers__ico(Vbarrel_rotator___024root* vlSelf);

bool Vbarrel_rotator___024root___eval_phase__ico(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbarrel_rotator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vbarrel_rotator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbarrel_rotator___024root___eval_act(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_act\n"); );
}

void Vbarrel_rotator___024root___eval_nba(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_nba\n"); );
}

void Vbarrel_rotator___024root___eval_triggers__act(Vbarrel_rotator___024root* vlSelf);

bool Vbarrel_rotator___024root___eval_phase__act(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbarrel_rotator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbarrel_rotator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbarrel_rotator___024root___eval_phase__nba(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbarrel_rotator___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_rotator___024root___dump_triggers__ico(Vbarrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_rotator___024root___dump_triggers__nba(Vbarrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_rotator___024root___dump_triggers__act(Vbarrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG

void Vbarrel_rotator___024root___eval(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval\n"); );
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
            Vbarrel_rotator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("barrel_rotator.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbarrel_rotator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbarrel_rotator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("barrel_rotator.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vbarrel_rotator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("barrel_rotator.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbarrel_rotator___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbarrel_rotator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbarrel_rotator___024root___eval_debug_assertions(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rotate_amount & 0xf8U))) {
        Verilated::overWidthError("rotate_amount");}
    if (VL_UNLIKELY((vlSelf->direction & 0xfeU))) {
        Verilated::overWidthError("direction");}
}
#endif  // VL_DEBUG
