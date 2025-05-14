// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_carry_select_adder.h for the primary calling header

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder___024root.h"

VL_INLINE_OPT void Vconfigurable_carry_select_adder___024root___ico_sequent__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a & vlSelf->b) >> 4U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a | vlSelf->b) >> 4U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a & vlSelf->b) >> 8U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a | vlSelf->b) >> 8U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a & vlSelf->b) >> 0xcU));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a | vlSelf->b) >> 0xcU));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a & vlSelf->b) >> 0x10U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a | vlSelf->b) >> 0x10U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a & vlSelf->b) >> 0x14U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a | vlSelf->b) >> 0x14U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a & vlSelf->b) >> 0x18U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a | vlSelf->b) >> 0x18U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a & vlSelf->b) >> 0x1cU));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((vlSelf->a | vlSelf->b) >> 0x1cU));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 5U) & ((vlSelf->b >> 5U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 5U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 5U) & ((vlSelf->b >> 5U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 5U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 9U) & ((vlSelf->b >> 9U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 9U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 9U) & ((vlSelf->b >> 9U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 9U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0xdU) & ((vlSelf->b 
                                          >> 0xdU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xdU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0xdU) & ((vlSelf->b 
                                          >> 0xdU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xdU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x11U) & ((vlSelf->b 
                                           >> 0x11U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x11U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x11U) & ((vlSelf->b 
                                           >> 0x11U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x11U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x15U) & ((vlSelf->b 
                                           >> 0x15U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x15U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x15U) & ((vlSelf->b 
                                           >> 0x15U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x15U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x19U) & ((vlSelf->b 
                                           >> 0x19U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x19U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x19U) & ((vlSelf->b 
                                           >> 0x19U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x19U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x1dU) & ((vlSelf->b 
                                           >> 0x1dU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1dU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x1dU) & ((vlSelf->b 
                                           >> 0x1dU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1dU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 6U) & ((vlSelf->b >> 6U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 6U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 6U) & ((vlSelf->b >> 6U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 6U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0xaU) & ((vlSelf->b 
                                          >> 0xaU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xaU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0xaU) & ((vlSelf->b 
                                          >> 0xaU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xaU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0xeU) & ((vlSelf->b 
                                          >> 0xeU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xeU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0xeU) & ((vlSelf->b 
                                          >> 0xeU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xeU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x12U) & ((vlSelf->b 
                                           >> 0x12U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x12U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x12U) & ((vlSelf->b 
                                           >> 0x12U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x12U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x16U) & ((vlSelf->b 
                                           >> 0x16U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x16U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x16U) & ((vlSelf->b 
                                           >> 0x16U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x16U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x1aU) & ((vlSelf->b 
                                           >> 0x1aU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1aU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x1aU) & ((vlSelf->b 
                                           >> 0x1aU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1aU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x1eU) & ((vlSelf->b 
                                           >> 0x1eU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1eU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((vlSelf->a >> 0x1eU) & ((vlSelf->b 
                                           >> 0x1eU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1eU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0 
        = (1U & (((vlSelf->a >> 7U) & ((vlSelf->b >> 7U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 7U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1 
        = (1U & (((vlSelf->a >> 7U) & ((vlSelf->b >> 7U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 7U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0 
        = (1U & (((vlSelf->a >> 0xbU) & ((vlSelf->b 
                                          >> 0xbU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xbU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1 
        = (1U & (((vlSelf->a >> 0xbU) & ((vlSelf->b 
                                          >> 0xbU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xbU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0 
        = (1U & (((vlSelf->a >> 0xfU) & ((vlSelf->b 
                                          >> 0xfU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xfU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1 
        = (1U & (((vlSelf->a >> 0xfU) & ((vlSelf->b 
                                          >> 0xfU) 
                                         | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0xfU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0 
        = (1U & (((vlSelf->a >> 0x13U) & ((vlSelf->b 
                                           >> 0x13U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x13U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1 
        = (1U & (((vlSelf->a >> 0x13U) & ((vlSelf->b 
                                           >> 0x13U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x13U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0 
        = (1U & (((vlSelf->a >> 0x17U) & ((vlSelf->b 
                                           >> 0x17U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x17U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1 
        = (1U & (((vlSelf->a >> 0x17U) & ((vlSelf->b 
                                           >> 0x17U) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x17U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0 
        = (1U & (((vlSelf->a >> 0x1bU) & ((vlSelf->b 
                                           >> 0x1bU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1bU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1 
        = (1U & (((vlSelf->a >> 0x1bU) & ((vlSelf->b 
                                           >> 0x1bU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1bU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0 
        = (1U & (((vlSelf->a >> 0x1fU) & ((vlSelf->b 
                                           >> 0x1fU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1fU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1 
        = (1U & (((vlSelf->a >> 0x1fU) & ((vlSelf->b 
                                           >> 0x1fU) 
                                          | (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((vlSelf->b >> 0x1fU) & (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout 
        = (1U & ((vlSelf->a & (vlSelf->b | (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))) 
                 | (vlSelf->b & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))));
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout 
        = (1U & (((vlSelf->a >> 1U) & ((vlSelf->b >> 1U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout))) 
                 | ((vlSelf->b >> 1U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout))));
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout 
        = (1U & (((vlSelf->a >> 2U) & ((vlSelf->b >> 2U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout))) 
                 | ((vlSelf->b >> 2U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout))));
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout 
        = (1U & (((vlSelf->a >> 3U) & ((vlSelf->b >> 3U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout))) 
                 | ((vlSelf->b >> 3U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout))));
    vlSelf->configurable_carry_select_adder__DOT__block_carry 
        = ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__select)
              ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1)
              : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0)) 
            << 8U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__select)
                         ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1)
                         : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0)) 
                       << 7U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__select)
                                    ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1)
                                    : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0)) 
                                  << 6U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__select)
                                               ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1)
                                               : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0)) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__select)
                                                  ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1)
                                                  : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0)) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__select)
                                                     ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1)
                                                     : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__select)
                                                        ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1)
                                                        : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0)) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->cin)))))))));
    vlSelf->cout = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                          >> 8U));
    vlSelf->sum = ((((0x80U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                      ? (((8U & ((vlSelf->a ^ vlSelf->b) 
                                 >> 0x1cU)) ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                               << 3U)) 
                         | ((4U & ((0xcU & (vlSelf->a 
                                            >> 0x1cU)) 
                                   ^ ((0xcU & (vlSelf->b 
                                               >> 0x1cU)) 
                                      ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                         << 2U)))) 
                            | ((2U & ((0xeU & (vlSelf->a 
                                               >> 0x1cU)) 
                                      ^ ((0xeU & (vlSelf->b 
                                                  >> 0x1cU)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                            << 1U)))) 
                               | (1U & ((~ (vlSelf->b 
                                            >> 0x1cU)) 
                                        ^ (vlSelf->a 
                                           >> 0x1cU))))))
                      : (((8U & ((vlSelf->a ^ vlSelf->b) 
                                 >> 0x1cU)) ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                               << 3U)) 
                         | ((4U & ((0xcU & (vlSelf->a 
                                            >> 0x1cU)) 
                                   ^ ((0xcU & (vlSelf->b 
                                               >> 0x1cU)) 
                                      ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                         << 2U)))) 
                            | ((2U & ((0xeU & (vlSelf->a 
                                               >> 0x1cU)) 
                                      ^ ((0xeU & (vlSelf->b 
                                                  >> 0x1cU)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                            << 1U)))) 
                               | (1U & ((vlSelf->a 
                                         ^ vlSelf->b) 
                                        >> 0x1cU)))))) 
                    << 0x1cU) | ((((0x40U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                    ? ((8U & ((0xf8U 
                                               & (vlSelf->a 
                                                  >> 0x18U)) 
                                              ^ ((0xf8U 
                                                  & (vlSelf->b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U)))) 
                                       | ((4U & ((0xfcU 
                                                  & (vlSelf->a 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((0xfcU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U)))) 
                                          | ((2U & 
                                              ((0xfeU 
                                                & (vlSelf->a 
                                                   >> 0x18U)) 
                                               ^ ((0xfeU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                   << 1U)))) 
                                             | (1U 
                                                & ((~ 
                                                    (vlSelf->b 
                                                     >> 0x18U)) 
                                                   ^ 
                                                   (vlSelf->a 
                                                    >> 0x18U))))))
                                    : ((8U & ((0xf8U 
                                               & (vlSelf->a 
                                                  >> 0x18U)) 
                                              ^ ((0xf8U 
                                                  & (vlSelf->b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U)))) 
                                       | ((4U & ((0xfcU 
                                                  & (vlSelf->a 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((0xfcU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U)))) 
                                          | ((2U & 
                                              ((0xfeU 
                                                & (vlSelf->a 
                                                   >> 0x18U)) 
                                               ^ ((0xfeU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                   << 1U)))) 
                                             | (1U 
                                                & ((vlSelf->a 
                                                    ^ vlSelf->b) 
                                                   >> 0x18U)))))) 
                                  << 0x18U) | ((((0x20U 
                                                  & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                  ? 
                                                 ((8U 
                                                   & ((0xff8U 
                                                       & (vlSelf->a 
                                                          >> 0x14U)) 
                                                      ^ 
                                                      ((0xff8U 
                                                        & (vlSelf->b 
                                                           >> 0x14U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                        << 3U)))) 
                                                  | ((4U 
                                                      & ((0xffcU 
                                                          & (vlSelf->a 
                                                             >> 0x14U)) 
                                                         ^ 
                                                         ((0xffcU 
                                                           & (vlSelf->b 
                                                              >> 0x14U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                           << 2U)))) 
                                                     | ((2U 
                                                         & ((0xffeU 
                                                             & (vlSelf->a 
                                                                >> 0x14U)) 
                                                            ^ 
                                                            ((0xffeU 
                                                              & (vlSelf->b 
                                                                 >> 0x14U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U)))) 
                                                        | (1U 
                                                           & ((~ 
                                                               (vlSelf->b 
                                                                >> 0x14U)) 
                                                              ^ 
                                                              (vlSelf->a 
                                                               >> 0x14U))))))
                                                  : 
                                                 ((8U 
                                                   & ((0xff8U 
                                                       & (vlSelf->a 
                                                          >> 0x14U)) 
                                                      ^ 
                                                      ((0xff8U 
                                                        & (vlSelf->b 
                                                           >> 0x14U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                        << 3U)))) 
                                                  | ((4U 
                                                      & ((0xffcU 
                                                          & (vlSelf->a 
                                                             >> 0x14U)) 
                                                         ^ 
                                                         ((0xffcU 
                                                           & (vlSelf->b 
                                                              >> 0x14U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                           << 2U)))) 
                                                     | ((2U 
                                                         & ((0xffeU 
                                                             & (vlSelf->a 
                                                                >> 0x14U)) 
                                                            ^ 
                                                            ((0xffeU 
                                                              & (vlSelf->b 
                                                                 >> 0x14U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U)))) 
                                                        | (1U 
                                                           & ((vlSelf->a 
                                                               ^ vlSelf->b) 
                                                              >> 0x14U)))))) 
                                                << 0x14U) 
                                               | ((((0x10U 
                                                     & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                     ? 
                                                    ((8U 
                                                      & ((0xfff8U 
                                                          & (vlSelf->a 
                                                             >> 0x10U)) 
                                                         ^ 
                                                         ((0xfff8U 
                                                           & (vlSelf->b 
                                                              >> 0x10U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                           << 3U)))) 
                                                     | ((4U 
                                                         & ((0xfffcU 
                                                             & (vlSelf->a 
                                                                >> 0x10U)) 
                                                            ^ 
                                                            ((0xfffcU 
                                                              & (vlSelf->b 
                                                                 >> 0x10U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                              << 2U)))) 
                                                        | ((2U 
                                                            & ((0xfffeU 
                                                                & (vlSelf->a 
                                                                   >> 0x10U)) 
                                                               ^ 
                                                               ((0xfffeU 
                                                                 & (vlSelf->b 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))) 
                                                           | (1U 
                                                              & ((~ 
                                                                  (vlSelf->b 
                                                                   >> 0x10U)) 
                                                                 ^ 
                                                                 (vlSelf->a 
                                                                  >> 0x10U))))))
                                                     : 
                                                    ((8U 
                                                      & ((0xfff8U 
                                                          & (vlSelf->a 
                                                             >> 0x10U)) 
                                                         ^ 
                                                         ((0xfff8U 
                                                           & (vlSelf->b 
                                                              >> 0x10U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                           << 3U)))) 
                                                     | ((4U 
                                                         & ((0xfffcU 
                                                             & (vlSelf->a 
                                                                >> 0x10U)) 
                                                            ^ 
                                                            ((0xfffcU 
                                                              & (vlSelf->b 
                                                                 >> 0x10U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                              << 2U)))) 
                                                        | ((2U 
                                                            & ((0xfffeU 
                                                                & (vlSelf->a 
                                                                   >> 0x10U)) 
                                                               ^ 
                                                               ((0xfffeU 
                                                                 & (vlSelf->b 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))) 
                                                           | (1U 
                                                              & ((vlSelf->a 
                                                                  ^ vlSelf->b) 
                                                                 >> 0x10U)))))) 
                                                   << 0x10U) 
                                                  | ((((8U 
                                                        & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                        ? 
                                                       ((8U 
                                                         & ((0xffff8U 
                                                             & (vlSelf->a 
                                                                >> 0xcU)) 
                                                            ^ 
                                                            ((0xffff8U 
                                                              & (vlSelf->b 
                                                                 >> 0xcU)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                              << 3U)))) 
                                                        | ((4U 
                                                            & ((0xffffcU 
                                                                & (vlSelf->a 
                                                                   >> 0xcU)) 
                                                               ^ 
                                                               ((0xffffcU 
                                                                 & (vlSelf->b 
                                                                    >> 0xcU)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                 << 2U)))) 
                                                           | ((2U 
                                                               & ((0xffffeU 
                                                                   & (vlSelf->a 
                                                                      >> 0xcU)) 
                                                                  ^ 
                                                                  ((0xffffeU 
                                                                    & (vlSelf->b 
                                                                       >> 0xcU)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))) 
                                                              | (1U 
                                                                 & ((~ 
                                                                     (vlSelf->b 
                                                                      >> 0xcU)) 
                                                                    ^ 
                                                                    (vlSelf->a 
                                                                     >> 0xcU))))))
                                                        : 
                                                       ((8U 
                                                         & ((0xffff8U 
                                                             & (vlSelf->a 
                                                                >> 0xcU)) 
                                                            ^ 
                                                            ((0xffff8U 
                                                              & (vlSelf->b 
                                                                 >> 0xcU)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                              << 3U)))) 
                                                        | ((4U 
                                                            & ((0xffffcU 
                                                                & (vlSelf->a 
                                                                   >> 0xcU)) 
                                                               ^ 
                                                               ((0xffffcU 
                                                                 & (vlSelf->b 
                                                                    >> 0xcU)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                 << 2U)))) 
                                                           | ((2U 
                                                               & ((0xffffeU 
                                                                   & (vlSelf->a 
                                                                      >> 0xcU)) 
                                                                  ^ 
                                                                  ((0xffffeU 
                                                                    & (vlSelf->b 
                                                                       >> 0xcU)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))) 
                                                              | (1U 
                                                                 & ((vlSelf->a 
                                                                     ^ vlSelf->b) 
                                                                    >> 0xcU)))))) 
                                                      << 0xcU) 
                                                     | ((((4U 
                                                           & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                           ? 
                                                          ((8U 
                                                            & ((0xfffff8U 
                                                                & (vlSelf->a 
                                                                   >> 8U)) 
                                                               ^ 
                                                               ((0xfffff8U 
                                                                 & (vlSelf->b 
                                                                    >> 8U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                 << 3U)))) 
                                                           | ((4U 
                                                               & ((0xfffffcU 
                                                                   & (vlSelf->a 
                                                                      >> 8U)) 
                                                                  ^ 
                                                                  ((0xfffffcU 
                                                                    & (vlSelf->b 
                                                                       >> 8U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                    << 2U)))) 
                                                              | ((2U 
                                                                  & ((0xfffffeU 
                                                                      & (vlSelf->a 
                                                                         >> 8U)) 
                                                                     ^ 
                                                                     ((0xfffffeU 
                                                                       & (vlSelf->b 
                                                                          >> 8U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                       << 1U)))) 
                                                                 | (1U 
                                                                    & ((~ 
                                                                        (vlSelf->b 
                                                                         >> 8U)) 
                                                                       ^ 
                                                                       (vlSelf->a 
                                                                        >> 8U))))))
                                                           : 
                                                          ((8U 
                                                            & ((0xfffff8U 
                                                                & (vlSelf->a 
                                                                   >> 8U)) 
                                                               ^ 
                                                               ((0xfffff8U 
                                                                 & (vlSelf->b 
                                                                    >> 8U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                 << 3U)))) 
                                                           | ((4U 
                                                               & ((0xfffffcU 
                                                                   & (vlSelf->a 
                                                                      >> 8U)) 
                                                                  ^ 
                                                                  ((0xfffffcU 
                                                                    & (vlSelf->b 
                                                                       >> 8U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                    << 2U)))) 
                                                              | ((2U 
                                                                  & ((0xfffffeU 
                                                                      & (vlSelf->a 
                                                                         >> 8U)) 
                                                                     ^ 
                                                                     ((0xfffffeU 
                                                                       & (vlSelf->b 
                                                                          >> 8U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                       << 1U)))) 
                                                                 | (1U 
                                                                    & ((vlSelf->a 
                                                                        ^ vlSelf->b) 
                                                                       >> 8U)))))) 
                                                         << 8U) 
                                                        | ((((2U 
                                                              & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                              ? 
                                                             ((8U 
                                                               & ((0xffffff8U 
                                                                   & (vlSelf->a 
                                                                      >> 4U)) 
                                                                  ^ 
                                                                  ((0xffffff8U 
                                                                    & (vlSelf->b 
                                                                       >> 4U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                    << 3U)))) 
                                                              | ((4U 
                                                                  & ((0xffffffcU 
                                                                      & (vlSelf->a 
                                                                         >> 4U)) 
                                                                     ^ 
                                                                     ((0xffffffcU 
                                                                       & (vlSelf->b 
                                                                          >> 4U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                       << 2U)))) 
                                                                 | ((2U 
                                                                     & ((0xffffffeU 
                                                                         & (vlSelf->a 
                                                                            >> 4U)) 
                                                                        ^ 
                                                                        ((0xffffffeU 
                                                                          & (vlSelf->b 
                                                                             >> 4U)) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                          << 1U)))) 
                                                                    | (1U 
                                                                       & ((~ 
                                                                           (vlSelf->b 
                                                                            >> 4U)) 
                                                                          ^ 
                                                                          (vlSelf->a 
                                                                           >> 4U))))))
                                                              : 
                                                             ((8U 
                                                               & ((0xffffff8U 
                                                                   & (vlSelf->a 
                                                                      >> 4U)) 
                                                                  ^ 
                                                                  ((0xffffff8U 
                                                                    & (vlSelf->b 
                                                                       >> 4U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                    << 3U)))) 
                                                              | ((4U 
                                                                  & ((0xffffffcU 
                                                                      & (vlSelf->a 
                                                                         >> 4U)) 
                                                                     ^ 
                                                                     ((0xffffffcU 
                                                                       & (vlSelf->b 
                                                                          >> 4U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                       << 2U)))) 
                                                                 | ((2U 
                                                                     & ((0xffffffeU 
                                                                         & (vlSelf->a 
                                                                            >> 4U)) 
                                                                        ^ 
                                                                        ((0xffffffeU 
                                                                          & (vlSelf->b 
                                                                             >> 4U)) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                          << 1U)))) 
                                                                    | (1U 
                                                                       & ((vlSelf->a 
                                                                           ^ vlSelf->b) 
                                                                          >> 4U)))))) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & ((0xfffffff8U 
                                                                   & vlSelf->a) 
                                                                  ^ 
                                                                  ((0xfffffff8U 
                                                                    & vlSelf->b) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout) 
                                                                    << 3U)))) 
                                                              | ((4U 
                                                                  & ((0xfffffffcU 
                                                                      & vlSelf->a) 
                                                                     ^ 
                                                                     ((0xfffffffcU 
                                                                       & vlSelf->b) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout) 
                                                                       << 2U)))) 
                                                                 | ((2U 
                                                                     & ((0xfffffffeU 
                                                                         & vlSelf->a) 
                                                                        ^ 
                                                                        ((0xfffffffeU 
                                                                          & vlSelf->b) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout) 
                                                                          << 1U)))) 
                                                                    | (1U 
                                                                       & (vlSelf->a 
                                                                          ^ 
                                                                          (vlSelf->b 
                                                                           ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))))))))))));
}

void Vconfigurable_carry_select_adder___024root___eval_ico(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_carry_select_adder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vconfigurable_carry_select_adder___024root___eval_triggers__ico(Vconfigurable_carry_select_adder___024root* vlSelf);

bool Vconfigurable_carry_select_adder___024root___eval_phase__ico(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_carry_select_adder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_carry_select_adder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder___024root___act_sequent__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 7U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 6U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 5U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 4U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 3U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 2U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 1U));
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout 
        = (1U & ((vlSelf->a & (vlSelf->b | (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))) 
                 | (vlSelf->b & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))));
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout 
        = (1U & (((vlSelf->a >> 1U) & ((vlSelf->b >> 1U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout))) 
                 | ((vlSelf->b >> 1U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout))));
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout 
        = (1U & (((vlSelf->a >> 2U) & ((vlSelf->b >> 2U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout))) 
                 | ((vlSelf->b >> 2U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout))));
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout 
        = (1U & (((vlSelf->a >> 3U) & ((vlSelf->b >> 3U) 
                                       | (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout))) 
                 | ((vlSelf->b >> 3U) & (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder___024root___act_sequent__TOP__1(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->configurable_carry_select_adder__DOT__block_carry 
        = ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__select)
              ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1)
              : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0)) 
            << 8U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__select)
                         ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1)
                         : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0)) 
                       << 7U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__select)
                                    ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1)
                                    : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0)) 
                                  << 6U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__select)
                                               ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1)
                                               : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0)) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__select)
                                                  ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1)
                                                  : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0)) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__select)
                                                     ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1)
                                                     : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__select)
                                                        ? (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1)
                                                        : (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0)) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->cin)))))))));
    vlSelf->cout = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                          >> 8U));
    vlSelf->sum = ((((0x80U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                      ? (((8U & ((vlSelf->a ^ vlSelf->b) 
                                 >> 0x1cU)) ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                               << 3U)) 
                         | ((4U & ((0xcU & (vlSelf->a 
                                            >> 0x1cU)) 
                                   ^ ((0xcU & (vlSelf->b 
                                               >> 0x1cU)) 
                                      ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                         << 2U)))) 
                            | ((2U & ((0xeU & (vlSelf->a 
                                               >> 0x1cU)) 
                                      ^ ((0xeU & (vlSelf->b 
                                                  >> 0x1cU)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                            << 1U)))) 
                               | (1U & ((~ (vlSelf->b 
                                            >> 0x1cU)) 
                                        ^ (vlSelf->a 
                                           >> 0x1cU))))))
                      : (((8U & ((vlSelf->a ^ vlSelf->b) 
                                 >> 0x1cU)) ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                               << 3U)) 
                         | ((4U & ((0xcU & (vlSelf->a 
                                            >> 0x1cU)) 
                                   ^ ((0xcU & (vlSelf->b 
                                               >> 0x1cU)) 
                                      ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                         << 2U)))) 
                            | ((2U & ((0xeU & (vlSelf->a 
                                               >> 0x1cU)) 
                                      ^ ((0xeU & (vlSelf->b 
                                                  >> 0x1cU)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                            << 1U)))) 
                               | (1U & ((vlSelf->a 
                                         ^ vlSelf->b) 
                                        >> 0x1cU)))))) 
                    << 0x1cU) | ((((0x40U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                    ? ((8U & ((0xf8U 
                                               & (vlSelf->a 
                                                  >> 0x18U)) 
                                              ^ ((0xf8U 
                                                  & (vlSelf->b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U)))) 
                                       | ((4U & ((0xfcU 
                                                  & (vlSelf->a 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((0xfcU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U)))) 
                                          | ((2U & 
                                              ((0xfeU 
                                                & (vlSelf->a 
                                                   >> 0x18U)) 
                                               ^ ((0xfeU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                   << 1U)))) 
                                             | (1U 
                                                & ((~ 
                                                    (vlSelf->b 
                                                     >> 0x18U)) 
                                                   ^ 
                                                   (vlSelf->a 
                                                    >> 0x18U))))))
                                    : ((8U & ((0xf8U 
                                               & (vlSelf->a 
                                                  >> 0x18U)) 
                                              ^ ((0xf8U 
                                                  & (vlSelf->b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U)))) 
                                       | ((4U & ((0xfcU 
                                                  & (vlSelf->a 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((0xfcU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U)))) 
                                          | ((2U & 
                                              ((0xfeU 
                                                & (vlSelf->a 
                                                   >> 0x18U)) 
                                               ^ ((0xfeU 
                                                   & (vlSelf->b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                   << 1U)))) 
                                             | (1U 
                                                & ((vlSelf->a 
                                                    ^ vlSelf->b) 
                                                   >> 0x18U)))))) 
                                  << 0x18U) | ((((0x20U 
                                                  & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                  ? 
                                                 ((8U 
                                                   & ((0xff8U 
                                                       & (vlSelf->a 
                                                          >> 0x14U)) 
                                                      ^ 
                                                      ((0xff8U 
                                                        & (vlSelf->b 
                                                           >> 0x14U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                        << 3U)))) 
                                                  | ((4U 
                                                      & ((0xffcU 
                                                          & (vlSelf->a 
                                                             >> 0x14U)) 
                                                         ^ 
                                                         ((0xffcU 
                                                           & (vlSelf->b 
                                                              >> 0x14U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                           << 2U)))) 
                                                     | ((2U 
                                                         & ((0xffeU 
                                                             & (vlSelf->a 
                                                                >> 0x14U)) 
                                                            ^ 
                                                            ((0xffeU 
                                                              & (vlSelf->b 
                                                                 >> 0x14U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U)))) 
                                                        | (1U 
                                                           & ((~ 
                                                               (vlSelf->b 
                                                                >> 0x14U)) 
                                                              ^ 
                                                              (vlSelf->a 
                                                               >> 0x14U))))))
                                                  : 
                                                 ((8U 
                                                   & ((0xff8U 
                                                       & (vlSelf->a 
                                                          >> 0x14U)) 
                                                      ^ 
                                                      ((0xff8U 
                                                        & (vlSelf->b 
                                                           >> 0x14U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                        << 3U)))) 
                                                  | ((4U 
                                                      & ((0xffcU 
                                                          & (vlSelf->a 
                                                             >> 0x14U)) 
                                                         ^ 
                                                         ((0xffcU 
                                                           & (vlSelf->b 
                                                              >> 0x14U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                           << 2U)))) 
                                                     | ((2U 
                                                         & ((0xffeU 
                                                             & (vlSelf->a 
                                                                >> 0x14U)) 
                                                            ^ 
                                                            ((0xffeU 
                                                              & (vlSelf->b 
                                                                 >> 0x14U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U)))) 
                                                        | (1U 
                                                           & ((vlSelf->a 
                                                               ^ vlSelf->b) 
                                                              >> 0x14U)))))) 
                                                << 0x14U) 
                                               | ((((0x10U 
                                                     & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                     ? 
                                                    ((8U 
                                                      & ((0xfff8U 
                                                          & (vlSelf->a 
                                                             >> 0x10U)) 
                                                         ^ 
                                                         ((0xfff8U 
                                                           & (vlSelf->b 
                                                              >> 0x10U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                           << 3U)))) 
                                                     | ((4U 
                                                         & ((0xfffcU 
                                                             & (vlSelf->a 
                                                                >> 0x10U)) 
                                                            ^ 
                                                            ((0xfffcU 
                                                              & (vlSelf->b 
                                                                 >> 0x10U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                              << 2U)))) 
                                                        | ((2U 
                                                            & ((0xfffeU 
                                                                & (vlSelf->a 
                                                                   >> 0x10U)) 
                                                               ^ 
                                                               ((0xfffeU 
                                                                 & (vlSelf->b 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))) 
                                                           | (1U 
                                                              & ((~ 
                                                                  (vlSelf->b 
                                                                   >> 0x10U)) 
                                                                 ^ 
                                                                 (vlSelf->a 
                                                                  >> 0x10U))))))
                                                     : 
                                                    ((8U 
                                                      & ((0xfff8U 
                                                          & (vlSelf->a 
                                                             >> 0x10U)) 
                                                         ^ 
                                                         ((0xfff8U 
                                                           & (vlSelf->b 
                                                              >> 0x10U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                           << 3U)))) 
                                                     | ((4U 
                                                         & ((0xfffcU 
                                                             & (vlSelf->a 
                                                                >> 0x10U)) 
                                                            ^ 
                                                            ((0xfffcU 
                                                              & (vlSelf->b 
                                                                 >> 0x10U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                              << 2U)))) 
                                                        | ((2U 
                                                            & ((0xfffeU 
                                                                & (vlSelf->a 
                                                                   >> 0x10U)) 
                                                               ^ 
                                                               ((0xfffeU 
                                                                 & (vlSelf->b 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))) 
                                                           | (1U 
                                                              & ((vlSelf->a 
                                                                  ^ vlSelf->b) 
                                                                 >> 0x10U)))))) 
                                                   << 0x10U) 
                                                  | ((((8U 
                                                        & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                        ? 
                                                       ((8U 
                                                         & ((0xffff8U 
                                                             & (vlSelf->a 
                                                                >> 0xcU)) 
                                                            ^ 
                                                            ((0xffff8U 
                                                              & (vlSelf->b 
                                                                 >> 0xcU)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                              << 3U)))) 
                                                        | ((4U 
                                                            & ((0xffffcU 
                                                                & (vlSelf->a 
                                                                   >> 0xcU)) 
                                                               ^ 
                                                               ((0xffffcU 
                                                                 & (vlSelf->b 
                                                                    >> 0xcU)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                 << 2U)))) 
                                                           | ((2U 
                                                               & ((0xffffeU 
                                                                   & (vlSelf->a 
                                                                      >> 0xcU)) 
                                                                  ^ 
                                                                  ((0xffffeU 
                                                                    & (vlSelf->b 
                                                                       >> 0xcU)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))) 
                                                              | (1U 
                                                                 & ((~ 
                                                                     (vlSelf->b 
                                                                      >> 0xcU)) 
                                                                    ^ 
                                                                    (vlSelf->a 
                                                                     >> 0xcU))))))
                                                        : 
                                                       ((8U 
                                                         & ((0xffff8U 
                                                             & (vlSelf->a 
                                                                >> 0xcU)) 
                                                            ^ 
                                                            ((0xffff8U 
                                                              & (vlSelf->b 
                                                                 >> 0xcU)) 
                                                             ^ 
                                                             ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                              << 3U)))) 
                                                        | ((4U 
                                                            & ((0xffffcU 
                                                                & (vlSelf->a 
                                                                   >> 0xcU)) 
                                                               ^ 
                                                               ((0xffffcU 
                                                                 & (vlSelf->b 
                                                                    >> 0xcU)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                 << 2U)))) 
                                                           | ((2U 
                                                               & ((0xffffeU 
                                                                   & (vlSelf->a 
                                                                      >> 0xcU)) 
                                                                  ^ 
                                                                  ((0xffffeU 
                                                                    & (vlSelf->b 
                                                                       >> 0xcU)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))) 
                                                              | (1U 
                                                                 & ((vlSelf->a 
                                                                     ^ vlSelf->b) 
                                                                    >> 0xcU)))))) 
                                                      << 0xcU) 
                                                     | ((((4U 
                                                           & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                           ? 
                                                          ((8U 
                                                            & ((0xfffff8U 
                                                                & (vlSelf->a 
                                                                   >> 8U)) 
                                                               ^ 
                                                               ((0xfffff8U 
                                                                 & (vlSelf->b 
                                                                    >> 8U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                 << 3U)))) 
                                                           | ((4U 
                                                               & ((0xfffffcU 
                                                                   & (vlSelf->a 
                                                                      >> 8U)) 
                                                                  ^ 
                                                                  ((0xfffffcU 
                                                                    & (vlSelf->b 
                                                                       >> 8U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                    << 2U)))) 
                                                              | ((2U 
                                                                  & ((0xfffffeU 
                                                                      & (vlSelf->a 
                                                                         >> 8U)) 
                                                                     ^ 
                                                                     ((0xfffffeU 
                                                                       & (vlSelf->b 
                                                                          >> 8U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                       << 1U)))) 
                                                                 | (1U 
                                                                    & ((~ 
                                                                        (vlSelf->b 
                                                                         >> 8U)) 
                                                                       ^ 
                                                                       (vlSelf->a 
                                                                        >> 8U))))))
                                                           : 
                                                          ((8U 
                                                            & ((0xfffff8U 
                                                                & (vlSelf->a 
                                                                   >> 8U)) 
                                                               ^ 
                                                               ((0xfffff8U 
                                                                 & (vlSelf->b 
                                                                    >> 8U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                 << 3U)))) 
                                                           | ((4U 
                                                               & ((0xfffffcU 
                                                                   & (vlSelf->a 
                                                                      >> 8U)) 
                                                                  ^ 
                                                                  ((0xfffffcU 
                                                                    & (vlSelf->b 
                                                                       >> 8U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                    << 2U)))) 
                                                              | ((2U 
                                                                  & ((0xfffffeU 
                                                                      & (vlSelf->a 
                                                                         >> 8U)) 
                                                                     ^ 
                                                                     ((0xfffffeU 
                                                                       & (vlSelf->b 
                                                                          >> 8U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                       << 1U)))) 
                                                                 | (1U 
                                                                    & ((vlSelf->a 
                                                                        ^ vlSelf->b) 
                                                                       >> 8U)))))) 
                                                         << 8U) 
                                                        | ((((2U 
                                                              & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                              ? 
                                                             ((8U 
                                                               & ((0xffffff8U 
                                                                   & (vlSelf->a 
                                                                      >> 4U)) 
                                                                  ^ 
                                                                  ((0xffffff8U 
                                                                    & (vlSelf->b 
                                                                       >> 4U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                    << 3U)))) 
                                                              | ((4U 
                                                                  & ((0xffffffcU 
                                                                      & (vlSelf->a 
                                                                         >> 4U)) 
                                                                     ^ 
                                                                     ((0xffffffcU 
                                                                       & (vlSelf->b 
                                                                          >> 4U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                       << 2U)))) 
                                                                 | ((2U 
                                                                     & ((0xffffffeU 
                                                                         & (vlSelf->a 
                                                                            >> 4U)) 
                                                                        ^ 
                                                                        ((0xffffffeU 
                                                                          & (vlSelf->b 
                                                                             >> 4U)) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                          << 1U)))) 
                                                                    | (1U 
                                                                       & ((~ 
                                                                           (vlSelf->b 
                                                                            >> 4U)) 
                                                                          ^ 
                                                                          (vlSelf->a 
                                                                           >> 4U))))))
                                                              : 
                                                             ((8U 
                                                               & ((0xffffff8U 
                                                                   & (vlSelf->a 
                                                                      >> 4U)) 
                                                                  ^ 
                                                                  ((0xffffff8U 
                                                                    & (vlSelf->b 
                                                                       >> 4U)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                    << 3U)))) 
                                                              | ((4U 
                                                                  & ((0xffffffcU 
                                                                      & (vlSelf->a 
                                                                         >> 4U)) 
                                                                     ^ 
                                                                     ((0xffffffcU 
                                                                       & (vlSelf->b 
                                                                          >> 4U)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                       << 2U)))) 
                                                                 | ((2U 
                                                                     & ((0xffffffeU 
                                                                         & (vlSelf->a 
                                                                            >> 4U)) 
                                                                        ^ 
                                                                        ((0xffffffeU 
                                                                          & (vlSelf->b 
                                                                             >> 4U)) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                          << 1U)))) 
                                                                    | (1U 
                                                                       & ((vlSelf->a 
                                                                           ^ vlSelf->b) 
                                                                          >> 4U)))))) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & ((0xfffffff8U 
                                                                   & vlSelf->a) 
                                                                  ^ 
                                                                  ((0xfffffff8U 
                                                                    & vlSelf->b) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout) 
                                                                    << 3U)))) 
                                                              | ((4U 
                                                                  & ((0xfffffffcU 
                                                                      & vlSelf->a) 
                                                                     ^ 
                                                                     ((0xfffffffcU 
                                                                       & vlSelf->b) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout) 
                                                                       << 2U)))) 
                                                                 | ((2U 
                                                                     & ((0xfffffffeU 
                                                                         & vlSelf->a) 
                                                                        ^ 
                                                                        ((0xfffffffeU 
                                                                          & vlSelf->b) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout) 
                                                                          << 1U)))) 
                                                                    | (1U 
                                                                       & (vlSelf->a 
                                                                          ^ 
                                                                          (vlSelf->b 
                                                                           ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))))))))))));
}

void Vconfigurable_carry_select_adder___024root___eval_act(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vconfigurable_carry_select_adder___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vconfigurable_carry_select_adder___024root___act_sequent__TOP__1(vlSelf);
    }
}

void Vconfigurable_carry_select_adder___024root___eval_nba(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_nba\n"); );
}

void Vconfigurable_carry_select_adder___024root___eval_triggers__act(Vconfigurable_carry_select_adder___024root* vlSelf);

bool Vconfigurable_carry_select_adder___024root___eval_phase__act(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_carry_select_adder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vconfigurable_carry_select_adder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_carry_select_adder___024root___eval_phase__nba(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_carry_select_adder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__ico(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__nba(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__act(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_carry_select_adder___024root___eval(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval\n"); );
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
            Vconfigurable_carry_select_adder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("configurable_carry_select_adder.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_carry_select_adder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_carry_select_adder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("configurable_carry_select_adder.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vconfigurable_carry_select_adder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("configurable_carry_select_adder.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vconfigurable_carry_select_adder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vconfigurable_carry_select_adder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_carry_select_adder___024root___eval_debug_assertions(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
