// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller.h for the primary calling header

#include "Vgpio_controller__pch.h"
#include "Vgpio_controller___024root.h"

VL_ATTR_COLD void Vgpio_controller___024root___eval_static(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_static\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vgpio_controller___024root___eval_initial(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_initial\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vgpio_controller___024root___eval_final(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_final\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__stl(Vgpio_controller___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vgpio_controller___024root___eval_phase__stl(Vgpio_controller___024root* vlSelf);

VL_ATTR_COLD void Vgpio_controller___024root___eval_settle(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_settle\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vgpio_controller___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/io/gpio_controller.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vgpio_controller___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__stl(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___dump_triggers__stl\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpio_controller___024root___stl_sequent__TOP__0(Vgpio_controller___024root* vlSelf);
VL_ATTR_COLD void Vgpio_controller___024root____Vm_traceActivitySetAll(Vgpio_controller___024root* vlSelf);

VL_ATTR_COLD void Vgpio_controller___024root___eval_stl(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_stl\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vgpio_controller___024root___stl_sequent__TOP__0(vlSelf);
        Vgpio_controller___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vgpio_controller___024root___stl_sequent__TOP__0(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___stl_sequent__TOP__0\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ gpio_pins__en0;
    gpio_pins__en0 = 0;
    IData/*31:0*/ gpio_pins__strong__out1;
    gpio_pins__strong__out1 = 0;
    // Body
    vlSelfRef.int_status = vlSelfRef.gpio_controller__DOT__int_status_reg;
    vlSelfRef.int_out = (0U != vlSelfRef.gpio_controller__DOT__int_status_reg);
    vlSelfRef.gpio_controller__DOT__rising_edge = (
                                                   (~ vlSelfRef.gpio_controller__DOT__gpio_in_prev) 
                                                   & vlSelfRef.gpio_controller__DOT__gpio_in_sync2);
    vlSelfRef.gpio_controller__DOT__falling_edge = 
        ((~ vlSelfRef.gpio_controller__DOT__gpio_in_sync2) 
         & vlSelfRef.gpio_controller__DOT__gpio_in_prev);
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

VL_ATTR_COLD void Vgpio_controller___024root___eval_triggers__stl(Vgpio_controller___024root* vlSelf);

VL_ATTR_COLD bool Vgpio_controller___024root___eval_phase__stl(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_phase__stl\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vgpio_controller___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vgpio_controller___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__ico(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___dump_triggers__ico\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__act(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___dump_triggers__act\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__nba(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___dump_triggers__nba\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpio_controller___024root____Vm_traceActivitySetAll(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root____Vm_traceActivitySetAll\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vgpio_controller___024root___ctor_var_reset(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___ctor_var_reset\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->gpio_pins = VL_RAND_RESET_I(32);
    vlSelf->gpio_dir = VL_RAND_RESET_I(32);
    vlSelf->gpio_out = VL_RAND_RESET_I(32);
    vlSelf->gpio_in = VL_RAND_RESET_I(32);
    vlSelf->int_enable = VL_RAND_RESET_I(32);
    vlSelf->int_type = VL_RAND_RESET_I(32);
    vlSelf->int_polarity = VL_RAND_RESET_I(32);
    vlSelf->int_status = VL_RAND_RESET_I(32);
    vlSelf->int_clear = VL_RAND_RESET_I(32);
    vlSelf->int_out = VL_RAND_RESET_I(1);
    vlSelf->gpio_controller__DOT__gpio_in_sync1 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_in_sync2 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_in_prev = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__int_status_reg = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__rising_edge = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__falling_edge = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out0 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out1 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out2 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out3 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out4 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out5 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out6 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out7 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out8 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out9 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out10 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out11 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out12 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out13 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out14 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out15 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out16 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out17 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out18 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out19 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out20 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out21 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out22 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out23 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out24 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out25 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out26 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out27 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out28 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out29 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out30 = VL_RAND_RESET_I(32);
    vlSelf->gpio_controller__DOT__gpio_pins__out__strong__out31 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
