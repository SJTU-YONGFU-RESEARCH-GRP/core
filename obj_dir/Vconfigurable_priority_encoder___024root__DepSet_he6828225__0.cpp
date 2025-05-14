// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_priority_encoder.h for the primary calling header

#include "Vconfigurable_priority_encoder__pch.h"
#include "Vconfigurable_priority_encoder___024root.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vconfigurable_priority_encoder__ConstPool__TABLE_hf049cce3_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vconfigurable_priority_encoder__ConstPool__TABLE_h571c794b_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vconfigurable_priority_encoder__ConstPool__TABLE_h159da5ed_0;

VL_INLINE_OPT void Vconfigurable_priority_encoder___024root___ico_sequent__TOP__0(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->request;
    vlSelf->valid = Vconfigurable_priority_encoder__ConstPool__TABLE_hf049cce3_0
        [__Vtableidx1];
    vlSelf->grant_index = Vconfigurable_priority_encoder__ConstPool__TABLE_h571c794b_0
        [__Vtableidx1];
    vlSelf->configurable_priority_encoder__DOT__i = 
        Vconfigurable_priority_encoder__ConstPool__TABLE_h159da5ed_0
        [__Vtableidx1];
}

void Vconfigurable_priority_encoder___024root___eval_ico(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_priority_encoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vconfigurable_priority_encoder___024root___eval_triggers__ico(Vconfigurable_priority_encoder___024root* vlSelf);

bool Vconfigurable_priority_encoder___024root___eval_phase__ico(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_priority_encoder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_priority_encoder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconfigurable_priority_encoder___024root___eval_act(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_act\n"); );
}

void Vconfigurable_priority_encoder___024root___eval_nba(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_nba\n"); );
}

void Vconfigurable_priority_encoder___024root___eval_triggers__act(Vconfigurable_priority_encoder___024root* vlSelf);

bool Vconfigurable_priority_encoder___024root___eval_phase__act(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_priority_encoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vconfigurable_priority_encoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_priority_encoder___024root___eval_phase__nba(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_priority_encoder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__ico(Vconfigurable_priority_encoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__nba(Vconfigurable_priority_encoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__act(Vconfigurable_priority_encoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_priority_encoder___024root___eval(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval\n"); );
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
            Vconfigurable_priority_encoder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("configurable_priority_encoder.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_priority_encoder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_priority_encoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("configurable_priority_encoder.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vconfigurable_priority_encoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("configurable_priority_encoder.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vconfigurable_priority_encoder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vconfigurable_priority_encoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_priority_encoder___024root___eval_debug_assertions(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
