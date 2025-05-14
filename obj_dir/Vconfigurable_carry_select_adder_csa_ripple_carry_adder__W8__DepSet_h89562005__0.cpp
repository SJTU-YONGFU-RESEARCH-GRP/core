// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_carry_select_adder.h for the primary calling header

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder__Syms.h"
#include "Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8.h"

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_comb__TOP__configurable_carry_select_adder__DOT__first_block__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_comb__TOP__configurable_carry_select_adder__DOT__first_block__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & (((IData)(vlSymsp->TOP.a) & ((IData)(vlSymsp->TOP.b) 
                                             | (IData)(vlSymsp->TOP.configurable_carry_select_adder__DOT__block_carry))) 
                 | ((IData)(vlSymsp->TOP.b) & (IData)(vlSymsp->TOP.configurable_carry_select_adder__DOT__block_carry))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 1U)) & 
                  ((IData)((vlSymsp->TOP.b >> 1U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 1U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 2U)) & 
                  ((IData)((vlSymsp->TOP.b >> 2U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 2U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 3U)) & 
                  ((IData)((vlSymsp->TOP.b >> 3U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 3U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 4U)) & 
                  ((IData)((vlSymsp->TOP.b >> 4U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 4U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 5U)) & 
                  ((IData)((vlSymsp->TOP.b >> 5U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 5U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 6U)) & 
                  ((IData)((vlSymsp->TOP.b >> 6U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 6U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 7U)) & ((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 7U)) 
                                               | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 7U)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 8U)) & (IData)(
                                                           (vlSymsp->TOP.b 
                                                            >> 8U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 9U)) & 
                  ((IData)((vlSymsp->TOP.b >> 9U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 9U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xaU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xaU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xaU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xbU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xbU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xbU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xcU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xcU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xcU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xdU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xdU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xdU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xeU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xeU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xeU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0xfU)) & ((IData)(
                                                         (vlSymsp->TOP.b 
                                                          >> 0xfU)) 
                                                 | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0xfU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 8U)) | (IData)(
                                                           (vlSymsp->TOP.b 
                                                            >> 8U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 9U)) & 
                  ((IData)((vlSymsp->TOP.b >> 9U)) 
                   | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 9U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xaU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xaU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xaU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xbU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xbU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xbU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xcU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xcU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xcU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xdU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xdU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xdU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0xeU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0xeU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0xeU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0xfU)) & ((IData)(
                                                         (vlSymsp->TOP.b 
                                                          >> 0xfU)) 
                                                 | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0xfU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x10U)) 
                 & (IData)((vlSymsp->TOP.b >> 0x10U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x11U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x11U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x11U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x12U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x12U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x12U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x13U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x13U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x13U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x14U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x14U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x14U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x15U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x15U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x15U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x16U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x16U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x16U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x17U)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x17U)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x17U)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x10U)) 
                 | (IData)((vlSymsp->TOP.b >> 0x10U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x11U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x11U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x11U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x12U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x12U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x12U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x13U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x13U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x13U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x14U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x14U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x14U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x15U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x15U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x15U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x16U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x16U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x16U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x17U)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x17U)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x17U)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x18U)) 
                 & (IData)((vlSymsp->TOP.b >> 0x18U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x19U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x19U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x19U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1aU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1aU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1aU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1bU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1bU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1bU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1cU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1cU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1cU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1dU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1dU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1dU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1eU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1eU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1eU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x1fU)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x1fU)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x1fU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x18U)) 
                 | (IData)((vlSymsp->TOP.b >> 0x18U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x19U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x19U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x19U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1aU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1aU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1aU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1bU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1bU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1bU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1cU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1cU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1cU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1dU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1dU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1dU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x1eU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x1eU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x1eU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x1fU)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x1fU)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x1fU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x20U)) 
                 & (IData)((vlSymsp->TOP.b >> 0x20U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x21U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x21U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x21U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x22U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x22U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x22U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x23U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x23U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x23U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x24U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x24U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x24U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x25U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x25U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x25U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x26U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x26U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x26U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x27U)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x27U)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x27U)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x20U)) 
                 | (IData)((vlSymsp->TOP.b >> 0x20U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x21U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x21U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x21U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x22U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x22U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x22U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x23U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x23U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x23U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x24U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x24U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x24U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x25U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x25U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x25U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x26U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x26U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x26U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x27U)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x27U)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x27U)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x28U)) 
                 & (IData)((vlSymsp->TOP.b >> 0x28U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x29U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x29U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x29U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2aU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2aU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2aU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2bU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2bU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2bU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2cU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2cU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2cU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2dU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2dU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2dU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2eU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2eU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2eU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x2fU)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x2fU)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x2fU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x28U)) 
                 | (IData)((vlSymsp->TOP.b >> 0x28U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x29U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x29U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x29U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2aU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2aU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2aU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2bU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2bU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2bU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2cU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2cU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2cU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2dU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2dU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2dU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x2eU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x2eU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x2eU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x2fU)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x2fU)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x2fU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x30U)) 
                 & (IData)((vlSymsp->TOP.b >> 0x30U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x31U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x31U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x31U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x32U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x32U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x32U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x33U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x33U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x33U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x34U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x34U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x34U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x35U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x35U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x35U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x36U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x36U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x36U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x37U)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x37U)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x37U)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x30U)) 
                 | (IData)((vlSymsp->TOP.b >> 0x30U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x31U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x31U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x31U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x32U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x32U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x32U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x33U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x33U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x33U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x34U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x34U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x34U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x35U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x35U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x35U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x36U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x36U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x36U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x37U)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x37U)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x37U)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x38U)) 
                 & (IData)((vlSymsp->TOP.b >> 0x38U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x39U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x39U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x39U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3aU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3aU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3aU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3bU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3bU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3bU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3cU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3cU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3cU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3dU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3dU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3dU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3eU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3eU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3eU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x3fU)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x3fU)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x3fU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0\n"); );
    // Body
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & ((IData)((vlSymsp->TOP.a >> 0x38U)) 
                 | (IData)((vlSymsp->TOP.b >> 0x38U))));
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x39U)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x39U)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x39U)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3aU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3aU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3aU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3bU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3bU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3bU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3cU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3cU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3cU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3dU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3dU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3dU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))));
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (((IData)((vlSymsp->TOP.a >> 0x3eU)) 
                  & ((IData)((vlSymsp->TOP.b >> 0x3eU)) 
                     | (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                 | ((IData)((vlSymsp->TOP.b >> 0x3eU)) 
                    & (IData)(vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))));
    vlSelf->cout = (1U & (((IData)((vlSymsp->TOP.a 
                                    >> 0x3fU)) & ((IData)(
                                                          (vlSymsp->TOP.b 
                                                           >> 0x3fU)) 
                                                  | (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                          | ((IData)((vlSymsp->TOP.b 
                                      >> 0x3fU)) & (IData)(vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))));
}
