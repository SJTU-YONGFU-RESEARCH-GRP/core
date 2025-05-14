// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_lfsr.h for the primary calling header

#include "Vconfigurable_lfsr__pch.h"
#include "Vconfigurable_lfsr___024root.h"

VL_ATTR_COLD void Vconfigurable_lfsr___024root___eval_static(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vconfigurable_lfsr___024root___eval_initial(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vconfigurable_lfsr___024root___eval_final(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__stl(Vconfigurable_lfsr___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfigurable_lfsr___024root___eval_phase__stl(Vconfigurable_lfsr___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_lfsr___024root___eval_settle(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_lfsr___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("configurable_lfsr.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfigurable_lfsr___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__stl(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_lfsr___024root___stl_sequent__TOP__0(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vconfigurable_lfsr___024root___eval_stl(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vconfigurable_lfsr___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vconfigurable_lfsr___024root___eval_triggers__stl(Vconfigurable_lfsr___024root* vlSelf);

VL_ATTR_COLD bool Vconfigurable_lfsr___024root___eval_phase__stl(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfigurable_lfsr___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfigurable_lfsr___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__ico(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__act(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__nba(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_lfsr___024root___ctor_var_reset(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->seed = VL_RAND_RESET_I(8);
    vlSelf->tap_pattern = VL_RAND_RESET_I(8);
    vlSelf->load_seed = VL_RAND_RESET_I(1);
    vlSelf->serial_out = VL_RAND_RESET_I(1);
    vlSelf->parallel_out = VL_RAND_RESET_I(8);
    vlSelf->configurable_lfsr__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits = VL_RAND_RESET_I(8);
    vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
