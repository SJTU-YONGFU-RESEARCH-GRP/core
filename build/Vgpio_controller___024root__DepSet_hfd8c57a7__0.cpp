// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller.h for the primary calling header

#include "Vgpio_controller__pch.h"
#include "Vgpio_controller___024root.h"

void Vgpio_controller___024root___ico_sequent__TOP__0(Vgpio_controller___024root* vlSelf);

void Vgpio_controller___024root___eval_ico(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_ico\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vgpio_controller___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vgpio_controller___024root___ico_sequent__TOP__0(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___ico_sequent__TOP__0\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ gpio_pins__en0;
    gpio_pins__en0 = 0;
    IData/*31:0*/ gpio_pins__strong__out1;
    gpio_pins__strong__out1 = 0;
    // Body
    gpio_pins__en0 = vlSelfRef.gpio_dir;
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out16 
        = ((0xfffffffeU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out16) 
           | (1U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out31 
        = ((0xfffffffdU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out31) 
           | (2U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out30 
        = ((0xfffffffbU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out30) 
           | (4U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out29 
        = ((0xfffffff7U & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out29) 
           | (8U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out28 
        = ((0xffffffefU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out28) 
           | (0x10U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out27 
        = ((0xffffffdfU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out27) 
           | (0x20U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out26 
        = ((0xffffffbfU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out26) 
           | (0x40U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out25 
        = ((0xffffff7fU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out25) 
           | (0x80U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out24 
        = ((0xfffffeffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out24) 
           | (0x100U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out23 
        = ((0xfffffdffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out23) 
           | (0x200U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out22 
        = ((0xfffffbffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out22) 
           | (0x400U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out21 
        = ((0xfffff7ffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out21) 
           | (0x800U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out20 
        = ((0xffffefffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out20) 
           | (0x1000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out19 
        = ((0xffffdfffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out19) 
           | (0x2000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out18 
        = ((0xffffbfffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out18) 
           | (0x4000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out17 
        = ((0xffff7fffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out17) 
           | (0x8000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out0 
        = ((0xfffeffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out0) 
           | (0x10000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out15 
        = ((0xfffdffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out15) 
           | (0x20000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out14 
        = ((0xfffbffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out14) 
           | (0x40000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out13 
        = ((0xfff7ffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out13) 
           | (0x80000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out12 
        = ((0xffefffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out12) 
           | (0x100000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out11 
        = ((0xffdfffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out11) 
           | (0x200000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out10 
        = ((0xffbfffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out10) 
           | (0x400000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out9 
        = ((0xff7fffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out9) 
           | (0x800000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out8 
        = ((0xfeffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out8) 
           | (0x1000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out7 
        = ((0xfdffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out7) 
           | (0x2000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out6 
        = ((0xfbffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out6) 
           | (0x4000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out5 
        = ((0xf7ffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out5) 
           | (0x8000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out4 
        = ((0xefffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out4) 
           | (0x10000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out3 
        = ((0xdfffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out3) 
           | (0x20000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out2 
        = ((0xbfffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out2) 
           | (0x40000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out1 
        = ((0x7fffffffU & vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out1) 
           | (0x80000000U & (vlSelfRef.gpio_dir & vlSelfRef.gpio_out)));
    gpio_pins__strong__out1 = ((0x10000U & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out0 
                                            & vlSelfRef.gpio_dir)) 
                               | ((0x80000000U & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out1 
                                                  & vlSelfRef.gpio_dir)) 
                                  | ((0x40000000U & 
                                      (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out2 
                                       & vlSelfRef.gpio_dir)) 
                                     | ((0x20000000U 
                                         & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out3 
                                            & vlSelfRef.gpio_dir)) 
                                        | ((0x10000000U 
                                            & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out4 
                                               & vlSelfRef.gpio_dir)) 
                                           | ((0x8000000U 
                                               & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out5 
                                                  & vlSelfRef.gpio_dir)) 
                                              | ((0x4000000U 
                                                  & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out6 
                                                     & vlSelfRef.gpio_dir)) 
                                                 | ((0x2000000U 
                                                     & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out7 
                                                        & vlSelfRef.gpio_dir)) 
                                                    | ((0x1000000U 
                                                        & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out8 
                                                           & vlSelfRef.gpio_dir)) 
                                                       | ((0x800000U 
                                                           & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out9 
                                                              & vlSelfRef.gpio_dir)) 
                                                          | ((0x400000U 
                                                              & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out10 
                                                                 & vlSelfRef.gpio_dir)) 
                                                             | ((0x200000U 
                                                                 & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out11 
                                                                    & vlSelfRef.gpio_dir)) 
                                                                | ((0x100000U 
                                                                    & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out12 
                                                                       & vlSelfRef.gpio_dir)) 
                                                                   | ((0x80000U 
                                                                       & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out13 
                                                                          & vlSelfRef.gpio_dir)) 
                                                                      | ((0x40000U 
                                                                          & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out14 
                                                                             & vlSelfRef.gpio_dir)) 
                                                                         | ((0x20000U 
                                                                             & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out15 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                            | ((1U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out16 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                               | ((0x8000U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out17 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out18 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out19 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out20 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out21 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out22 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out23 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out24 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out25 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out26 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out27 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out28 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out29 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out30 
                                                                                & vlSelfRef.gpio_dir)) 
                                                                                | (2U 
                                                                                & (vlSelfRef.gpio_controller__DOT__gpio_pins__out__strong__out31 
                                                                                & vlSelfRef.gpio_dir)))))))))))))))))))))))))))))))));
    vlSelfRef.gpio_pins = (gpio_pins__en0 & gpio_pins__strong__out1);
    vlSelfRef.gpio_in = vlSelfRef.gpio_pins;
}

void Vgpio_controller___024root___eval_triggers__ico(Vgpio_controller___024root* vlSelf);

bool Vgpio_controller___024root___eval_phase__ico(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_phase__ico\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vgpio_controller___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vgpio_controller___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vgpio_controller___024root___eval_act(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_act\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vgpio_controller___024root___nba_sequent__TOP__0(Vgpio_controller___024root* vlSelf);

void Vgpio_controller___024root___eval_nba(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_nba\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpio_controller___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vgpio_controller___024root___nba_sequent__TOP__0(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___nba_sequent__TOP__0\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.gpio_controller__DOT__j = 0x20U;
        vlSelfRef.gpio_controller__DOT__gpio_in_prev 
            = vlSelfRef.gpio_controller__DOT__gpio_in_sync2;
        if ((1U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffffffeU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((1U & vlSelfRef.int_enable)) {
            if ((1U & vlSelfRef.int_type)) {
                if ((1U & ((vlSelfRef.int_polarity 
                            & vlSelfRef.gpio_controller__DOT__rising_edge) 
                           | ((~ vlSelfRef.int_polarity) 
                              & vlSelfRef.gpio_controller__DOT__falling_edge)))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (1U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & ((vlSelfRef.int_polarity 
                               & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                              | ((~ vlSelfRef.int_polarity) 
                                 & (~ vlSelfRef.gpio_controller__DOT__gpio_in_sync2))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (1U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((2U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffffffdU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((2U & vlSelfRef.int_enable)) {
            if ((2U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 1U) | ((~ (vlSelfRef.int_polarity 
                                          >> 1U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 1U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (2U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 1U) | ((~ (vlSelfRef.int_polarity 
                                             >> 1U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 1U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (2U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((4U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffffffbU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((4U & vlSelfRef.int_enable)) {
            if ((4U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 2U) | ((~ (vlSelfRef.int_polarity 
                                          >> 2U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 2U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (4U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 2U) | ((~ (vlSelfRef.int_polarity 
                                             >> 2U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 2U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (4U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((8U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffffff7U & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((8U & vlSelfRef.int_enable)) {
            if ((8U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 3U) | ((~ (vlSelfRef.int_polarity 
                                          >> 3U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 3U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (8U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 3U) | ((~ (vlSelfRef.int_polarity 
                                             >> 3U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 3U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (8U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x10U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffffffefU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x10U & vlSelfRef.int_enable)) {
            if ((0x10U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 4U) | ((~ (vlSelfRef.int_polarity 
                                          >> 4U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 4U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x10U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 4U) | ((~ (vlSelfRef.int_polarity 
                                             >> 4U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 4U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x10U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x20U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffffffdfU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x20U & vlSelfRef.int_enable)) {
            if ((0x20U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 5U) | ((~ (vlSelfRef.int_polarity 
                                          >> 5U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 5U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x20U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 5U) | ((~ (vlSelfRef.int_polarity 
                                             >> 5U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 5U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x20U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x40U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffffffbfU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x40U & vlSelfRef.int_enable)) {
            if ((0x40U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 6U) | ((~ (vlSelfRef.int_polarity 
                                          >> 6U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 6U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x40U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 6U) | ((~ (vlSelfRef.int_polarity 
                                             >> 6U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 6U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x40U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x80U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffffff7fU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x80U & vlSelfRef.int_enable)) {
            if ((0x80U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 7U) | ((~ (vlSelfRef.int_polarity 
                                          >> 7U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 7U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x80U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 7U) | ((~ (vlSelfRef.int_polarity 
                                             >> 7U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 7U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x80U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x100U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffffeffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x100U & vlSelfRef.int_enable)) {
            if ((0x100U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 8U) | ((~ (vlSelfRef.int_polarity 
                                          >> 8U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 8U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x100U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 8U) | ((~ (vlSelfRef.int_polarity 
                                             >> 8U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 8U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x100U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x200U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffffdffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x200U & vlSelfRef.int_enable)) {
            if ((0x200U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 9U) | ((~ (vlSelfRef.int_polarity 
                                          >> 9U)) & 
                                      (vlSelfRef.gpio_controller__DOT__falling_edge 
                                       >> 9U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x200U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 9U) | ((~ (vlSelfRef.int_polarity 
                                             >> 9U)) 
                                         & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                               >> 9U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x200U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x400U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffffbffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x400U & vlSelfRef.int_enable)) {
            if ((0x400U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0xaU) | ((~ (vlSelfRef.int_polarity 
                                            >> 0xaU)) 
                                        & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                           >> 0xaU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x400U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0xaU) | ((~ (vlSelfRef.int_polarity 
                                               >> 0xaU)) 
                                           & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                 >> 0xaU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x400U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x800U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffff7ffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x800U & vlSelfRef.int_enable)) {
            if ((0x800U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0xbU) | ((~ (vlSelfRef.int_polarity 
                                            >> 0xbU)) 
                                        & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                           >> 0xbU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x800U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0xbU) | ((~ (vlSelfRef.int_polarity 
                                               >> 0xbU)) 
                                           & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                 >> 0xbU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x800U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x1000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffffefffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x1000U & vlSelfRef.int_enable)) {
            if ((0x1000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0xcU) | ((~ (vlSelfRef.int_polarity 
                                            >> 0xcU)) 
                                        & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                           >> 0xcU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x1000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0xcU) | ((~ (vlSelfRef.int_polarity 
                                               >> 0xcU)) 
                                           & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                 >> 0xcU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x1000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x2000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffffdfffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x2000U & vlSelfRef.int_enable)) {
            if ((0x2000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0xdU) | ((~ (vlSelfRef.int_polarity 
                                            >> 0xdU)) 
                                        & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                           >> 0xdU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x2000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0xdU) | ((~ (vlSelfRef.int_polarity 
                                               >> 0xdU)) 
                                           & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                 >> 0xdU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x2000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x4000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffffbfffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x4000U & vlSelfRef.int_enable)) {
            if ((0x4000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0xeU) | ((~ (vlSelfRef.int_polarity 
                                            >> 0xeU)) 
                                        & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                           >> 0xeU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x4000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0xeU) | ((~ (vlSelfRef.int_polarity 
                                               >> 0xeU)) 
                                           & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                 >> 0xeU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x4000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x8000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffff7fffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x8000U & vlSelfRef.int_enable)) {
            if ((0x8000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0xfU) | ((~ (vlSelfRef.int_polarity 
                                            >> 0xfU)) 
                                        & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                           >> 0xfU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x8000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0xfU) | ((~ (vlSelfRef.int_polarity 
                                               >> 0xfU)) 
                                           & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                 >> 0xfU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x8000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x10000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffeffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x10000U & vlSelfRef.int_enable)) {
            if ((0x10000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x10U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x10U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x10U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x10000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x10U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x10U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x10U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x10000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x20000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffdffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x20000U & vlSelfRef.int_enable)) {
            if ((0x20000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x11U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x11U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x11U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x20000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x11U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x11U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x11U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x20000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x40000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfffbffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x40000U & vlSelfRef.int_enable)) {
            if ((0x40000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x12U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x12U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x12U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x40000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x12U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x12U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x12U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x40000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x80000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfff7ffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x80000U & vlSelfRef.int_enable)) {
            if ((0x80000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x13U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x13U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x13U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x80000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x13U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x13U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x13U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x80000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x100000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffefffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x100000U & vlSelfRef.int_enable)) {
            if ((0x100000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x14U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x14U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x14U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x100000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x14U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x14U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x14U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x100000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x200000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffdfffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x200000U & vlSelfRef.int_enable)) {
            if ((0x200000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x15U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x15U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x15U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x200000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x15U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x15U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x15U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x200000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x400000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xffbfffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x400000U & vlSelfRef.int_enable)) {
            if ((0x400000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x16U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x16U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x16U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x400000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x16U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x16U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x16U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x400000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x800000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xff7fffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x800000U & vlSelfRef.int_enable)) {
            if ((0x800000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x17U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x17U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x17U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x800000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x17U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x17U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x17U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x800000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x1000000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfeffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x1000000U & vlSelfRef.int_enable)) {
            if ((0x1000000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x18U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x18U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x18U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x1000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x18U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x18U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x18U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x1000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x2000000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfdffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x2000000U & vlSelfRef.int_enable)) {
            if ((0x2000000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x19U) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x19U)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x19U))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x2000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x19U) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x19U)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x19U)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x2000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x4000000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xfbffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x4000000U & vlSelfRef.int_enable)) {
            if ((0x4000000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x1aU) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x1aU)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x1aU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x4000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x1aU) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x1aU)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x1aU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x4000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x8000000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xf7ffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x8000000U & vlSelfRef.int_enable)) {
            if ((0x8000000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x1bU) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x1bU)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x1bU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x8000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x1bU) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x1bU)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x1bU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x8000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x10000000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xefffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x10000000U & vlSelfRef.int_enable)) {
            if ((0x10000000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x1cU) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x1cU)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x1cU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x10000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x1cU) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x1cU)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x1cU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x10000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x20000000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xdfffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x20000000U & vlSelfRef.int_enable)) {
            if ((0x20000000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x1dU) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x1dU)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x1dU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x20000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x1dU) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x1dU)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x1dU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x20000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((0x40000000U & vlSelfRef.int_clear)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0xbfffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((0x40000000U & vlSelfRef.int_enable)) {
            if ((0x40000000U & vlSelfRef.int_type)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x1eU) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x1eU)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x1eU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x40000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x1eU) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x1eU)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x1eU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x40000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        if ((vlSelfRef.int_clear >> 0x1fU)) {
            vlSelfRef.gpio_controller__DOT__int_status_reg 
                = (0x7fffffffU & vlSelfRef.gpio_controller__DOT__int_status_reg);
        } else if ((vlSelfRef.int_enable >> 0x1fU)) {
            if ((vlSelfRef.int_type >> 0x1fU)) {
                if ((1U & (((vlSelfRef.int_polarity 
                             & vlSelfRef.gpio_controller__DOT__rising_edge) 
                            >> 0x1fU) | ((~ (vlSelfRef.int_polarity 
                                             >> 0x1fU)) 
                                         & (vlSelfRef.gpio_controller__DOT__falling_edge 
                                            >> 0x1fU))))) {
                    vlSelfRef.gpio_controller__DOT__int_status_reg 
                        = (0x80000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
                }
            } else if ((1U & (((vlSelfRef.int_polarity 
                                & vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
                               >> 0x1fU) | ((~ (vlSelfRef.int_polarity 
                                                >> 0x1fU)) 
                                            & (~ (vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
                                                  >> 0x1fU)))))) {
                vlSelfRef.gpio_controller__DOT__int_status_reg 
                    = (0x80000000U | vlSelfRef.gpio_controller__DOT__int_status_reg);
            }
        }
        vlSelfRef.gpio_controller__DOT__gpio_in_sync2 
            = vlSelfRef.gpio_controller__DOT__gpio_in_sync1;
        vlSelfRef.gpio_controller__DOT__gpio_in_sync1 
            = vlSelfRef.gpio_pins;
    } else {
        vlSelfRef.gpio_controller__DOT__gpio_in_prev = 0U;
        vlSelfRef.gpio_controller__DOT__int_status_reg = 0U;
        vlSelfRef.gpio_controller__DOT__gpio_in_sync2 = 0U;
        vlSelfRef.gpio_controller__DOT__gpio_in_sync1 = 0U;
    }
    vlSelfRef.int_status = vlSelfRef.gpio_controller__DOT__int_status_reg;
    vlSelfRef.int_out = (0U != vlSelfRef.gpio_controller__DOT__int_status_reg);
    vlSelfRef.gpio_controller__DOT__rising_edge = (
                                                   (~ vlSelfRef.gpio_controller__DOT__gpio_in_prev) 
                                                   & vlSelfRef.gpio_controller__DOT__gpio_in_sync2);
    vlSelfRef.gpio_controller__DOT__falling_edge = 
        ((~ vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
         & vlSelfRef.gpio_controller__DOT__gpio_in_prev);
}

void Vgpio_controller___024root___eval_triggers__act(Vgpio_controller___024root* vlSelf);

bool Vgpio_controller___024root___eval_phase__act(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_phase__act\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgpio_controller___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vgpio_controller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgpio_controller___024root___eval_phase__nba(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_phase__nba\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgpio_controller___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__ico(Vgpio_controller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__nba(Vgpio_controller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__act(Vgpio_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpio_controller___024root___eval(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vgpio_controller___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/io/gpio_controller.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vgpio_controller___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vgpio_controller___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/io/gpio_controller.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vgpio_controller___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/io/gpio_controller.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vgpio_controller___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vgpio_controller___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgpio_controller___024root___eval_debug_assertions(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_debug_assertions\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
