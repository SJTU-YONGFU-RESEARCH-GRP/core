// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_lfsr.h for the primary calling header

#include "Vconfigurable_lfsr__pch.h"
#include "Vconfigurable_lfsr___024root.h"

VL_INLINE_OPT void Vconfigurable_lfsr___024root___ico_sequent__TOP__0(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits 
        = ((0x80U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                     & (IData)(vlSelf->tap_pattern))) 
           | ((0x40U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                        & (IData)(vlSelf->tap_pattern))) 
              | ((0x20U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                           & (IData)(vlSelf->tap_pattern))) 
                 | ((0x10U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                              & (IData)(vlSelf->tap_pattern))) 
                    | ((8U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                              & (IData)(vlSelf->tap_pattern))) 
                       | ((4U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                                 & (IData)(vlSelf->tap_pattern))) 
                          | ((2U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                                    & (IData)(vlSelf->tap_pattern))) 
                             | ((IData)(vlSelf->serial_out) 
                                & (IData)(vlSelf->tap_pattern)))))))));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & (IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 1U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 2U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 3U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 4U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 5U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 6U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
           ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
              >> 7U));
}

void Vconfigurable_lfsr___024root___eval_ico(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_lfsr___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vconfigurable_lfsr___024root___eval_triggers__ico(Vconfigurable_lfsr___024root* vlSelf);

bool Vconfigurable_lfsr___024root___eval_phase__ico(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_lfsr___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_lfsr___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconfigurable_lfsr___024root___eval_act(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vconfigurable_lfsr___024root___nba_sequent__TOP__0(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__configurable_lfsr__DOT__shift_reg;
    __Vdly__configurable_lfsr__DOT__shift_reg = 0;
    // Body
    __Vdly__configurable_lfsr__DOT__shift_reg = vlSelf->configurable_lfsr__DOT__shift_reg;
    if (vlSelf->rst_n) {
        if (vlSelf->load_seed) {
            __Vdly__configurable_lfsr__DOT__shift_reg 
                = vlSelf->seed;
        } else if (vlSelf->enable) {
            __Vdly__configurable_lfsr__DOT__shift_reg 
                = (((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                                       >> 1U)));
        }
    } else {
        __Vdly__configurable_lfsr__DOT__shift_reg = 0U;
    }
    vlSelf->configurable_lfsr__DOT__shift_reg = __Vdly__configurable_lfsr__DOT__shift_reg;
    vlSelf->parallel_out = vlSelf->configurable_lfsr__DOT__shift_reg;
    vlSelf->serial_out = (1U & (IData)(vlSelf->configurable_lfsr__DOT__shift_reg));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits 
        = ((0x80U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                     & (IData)(vlSelf->tap_pattern))) 
           | ((0x40U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                        & (IData)(vlSelf->tap_pattern))) 
              | ((0x20U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                           & (IData)(vlSelf->tap_pattern))) 
                 | ((0x10U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                              & (IData)(vlSelf->tap_pattern))) 
                    | ((8U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                              & (IData)(vlSelf->tap_pattern))) 
                       | ((4U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                                 & (IData)(vlSelf->tap_pattern))) 
                          | ((2U & ((IData)(vlSelf->configurable_lfsr__DOT__shift_reg) 
                                    & (IData)(vlSelf->tap_pattern))) 
                             | ((IData)(vlSelf->serial_out) 
                                & (IData)(vlSelf->tap_pattern)))))))));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & (IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 1U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 2U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 3U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 4U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 5U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = (1U & ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
                 ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
                    >> 6U)));
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result 
        = ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result) 
           ^ ((IData)(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits) 
              >> 7U));
}

void Vconfigurable_lfsr___024root___eval_nba(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vconfigurable_lfsr___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vconfigurable_lfsr___024root___eval_triggers__act(Vconfigurable_lfsr___024root* vlSelf);

bool Vconfigurable_lfsr___024root___eval_phase__act(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_lfsr___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vconfigurable_lfsr___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_lfsr___024root___eval_phase__nba(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_lfsr___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__ico(Vconfigurable_lfsr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__nba(Vconfigurable_lfsr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__act(Vconfigurable_lfsr___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_lfsr___024root___eval(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval\n"); );
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
            Vconfigurable_lfsr___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("configurable_lfsr.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_lfsr___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_lfsr___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("configurable_lfsr.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vconfigurable_lfsr___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("configurable_lfsr.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vconfigurable_lfsr___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vconfigurable_lfsr___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_lfsr___024root___eval_debug_assertions(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->load_seed & 0xfeU))) {
        Verilated::overWidthError("load_seed");}
}
#endif  // VL_DEBUG
