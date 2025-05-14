// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_carry_select_adder.h for the primary calling header

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder__Syms.h"
#include "Vconfigurable_carry_select_adder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__ico(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_carry_select_adder___024root___eval_triggers__ico(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__1)));
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__1 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_carry_select_adder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->configurable_carry_select_adder__DOT__block_carry 
        = ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__select)
              ? (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.cout)
              : (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.cout)) 
            << 8U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__select)
                         ? (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.cout)
                         : (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.cout)) 
                       << 7U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__select)
                                    ? (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.cout)
                                    : (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.cout)) 
                                  << 6U) | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__select)
                                               ? (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.cout)
                                               : (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.cout)) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__select)
                                                  ? (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.cout)
                                                  : (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.cout)) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__select)
                                                     ? (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.cout)
                                                     : (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.cout)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__select)
                                                        ? (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.cout)
                                                        : (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.cout)) 
                                                      << 2U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.cout) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->cin)))))))));
    vlSelf->cout = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                          >> 8U));
    vlSelf->sum = (((QData)((IData)(((0x80U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                      ? (((IData)((
                                                   ((vlSelf->a 
                                                     ^ vlSelf->b) 
                                                    >> 0x3fU) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                          << 7U) | 
                                         ((0x40U & 
                                           (((IData)(
                                                     (vlSelf->a 
                                                      >> 0x3eU)) 
                                             ^ ((IData)(
                                                        (vlSelf->b 
                                                         >> 0x3eU)) 
                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x3dU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x3dU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (((IData)(
                                                             (vlSelf->a 
                                                              >> 0x3cU)) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSelf->b 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x3bU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x3bU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x3aU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x3aU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x39U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x39U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(
                                                                       (vlSelf->a 
                                                                        >> 0x38U)) 
                                                               ^ 
                                                               (~ (IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x38U))))))))))))
                                      : (((IData)((
                                                   ((vlSelf->a 
                                                     ^ vlSelf->b) 
                                                    >> 0x3fU) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                          << 7U) | 
                                         ((0x40U & 
                                           (((IData)(
                                                     (vlSelf->a 
                                                      >> 0x3eU)) 
                                             ^ ((IData)(
                                                        (vlSelf->b 
                                                         >> 0x3eU)) 
                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x3dU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x3dU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (((IData)(
                                                             (vlSelf->a 
                                                              >> 0x3cU)) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSelf->b 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x3bU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x3bU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x3aU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x3aU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x39U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x39U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(
                                                                       (vlSelf->a 
                                                                        >> 0x38U)) 
                                                               ^ (IData)(
                                                                         (vlSelf->b 
                                                                          >> 0x38U)))))))))))))) 
                    << 0x38U) | (((QData)((IData)((
                                                   (0x40U 
                                                    & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                    ? 
                                                   ((0x80U 
                                                     & (((IData)(
                                                                 (vlSelf->a 
                                                                  >> 0x37U)) 
                                                         ^ 
                                                         ((IData)(
                                                                  (vlSelf->b 
                                                                   >> 0x37U)) 
                                                          ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                        << 7U)) 
                                                    | ((0x40U 
                                                        & (((IData)(
                                                                    (vlSelf->a 
                                                                     >> 0x36U)) 
                                                            ^ 
                                                            ((IData)(
                                                                     (vlSelf->b 
                                                                      >> 0x36U)) 
                                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                           << 6U)) 
                                                       | ((0x20U 
                                                           & (((IData)(
                                                                       (vlSelf->a 
                                                                        >> 0x35U)) 
                                                               ^ 
                                                               ((IData)(
                                                                        (vlSelf->b 
                                                                         >> 0x35U)) 
                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                              << 5U)) 
                                                          | ((0x10U 
                                                              & (((IData)(
                                                                          (vlSelf->a 
                                                                           >> 0x34U)) 
                                                                  ^ 
                                                                  ((IData)(
                                                                           (vlSelf->b 
                                                                            >> 0x34U)) 
                                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                 << 4U)) 
                                                             | ((8U 
                                                                 & (((IData)(
                                                                             (vlSelf->a 
                                                                              >> 0x33U)) 
                                                                     ^ 
                                                                     ((IData)(
                                                                              (vlSelf->b 
                                                                               >> 0x33U)) 
                                                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                    << 3U)) 
                                                                | ((4U 
                                                                    & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x32U)) 
                                                                        ^ 
                                                                        ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x32U)) 
                                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                       << 2U)) 
                                                                   | ((2U 
                                                                       & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x31U)) 
                                                                           ^ 
                                                                           ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x31U)) 
                                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x30U)) 
                                                                            ^ 
                                                                            (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x30U))))))))))))
                                                    : 
                                                   ((0x80U 
                                                     & (((IData)(
                                                                 (vlSelf->a 
                                                                  >> 0x37U)) 
                                                         ^ 
                                                         ((IData)(
                                                                  (vlSelf->b 
                                                                   >> 0x37U)) 
                                                          ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                        << 7U)) 
                                                    | ((0x40U 
                                                        & (((IData)(
                                                                    (vlSelf->a 
                                                                     >> 0x36U)) 
                                                            ^ 
                                                            ((IData)(
                                                                     (vlSelf->b 
                                                                      >> 0x36U)) 
                                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                           << 6U)) 
                                                       | ((0x20U 
                                                           & (((IData)(
                                                                       (vlSelf->a 
                                                                        >> 0x35U)) 
                                                               ^ 
                                                               ((IData)(
                                                                        (vlSelf->b 
                                                                         >> 0x35U)) 
                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                              << 5U)) 
                                                          | ((0x10U 
                                                              & (((IData)(
                                                                          (vlSelf->a 
                                                                           >> 0x34U)) 
                                                                  ^ 
                                                                  ((IData)(
                                                                           (vlSelf->b 
                                                                            >> 0x34U)) 
                                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                 << 4U)) 
                                                             | ((8U 
                                                                 & (((IData)(
                                                                             (vlSelf->a 
                                                                              >> 0x33U)) 
                                                                     ^ 
                                                                     ((IData)(
                                                                              (vlSelf->b 
                                                                               >> 0x33U)) 
                                                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                    << 3U)) 
                                                                | ((4U 
                                                                    & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x32U)) 
                                                                        ^ 
                                                                        ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x32U)) 
                                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                       << 2U)) 
                                                                   | ((2U 
                                                                       & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x31U)) 
                                                                           ^ 
                                                                           ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x31U)) 
                                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x30U)) 
                                                                            ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x30U)))))))))))))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                ((0x20U 
                                                                  & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                                  ? 
                                                                 ((0x80U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x2fU)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2fU)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                      << 7U)) 
                                                                  | ((0x40U 
                                                                      & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2eU)) 
                                                                          ^ 
                                                                          ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2eU)) 
                                                                           ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                         << 6U)) 
                                                                     | ((0x20U 
                                                                         & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2dU)) 
                                                                             ^ 
                                                                             ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2dU)) 
                                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                            << 5U)) 
                                                                        | ((0x10U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2cU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                               << 4U)) 
                                                                           | ((8U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2bU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                              | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2aU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x29U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x29U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x28U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x28U))))))))))))
                                                                  : 
                                                                 ((0x80U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x2fU)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2fU)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                      << 7U)) 
                                                                  | ((0x40U 
                                                                      & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2eU)) 
                                                                          ^ 
                                                                          ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2eU)) 
                                                                           ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                         << 6U)) 
                                                                     | ((0x20U 
                                                                         & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2dU)) 
                                                                             ^ 
                                                                             ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2dU)) 
                                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                            << 5U)) 
                                                                        | ((0x10U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2cU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                               << 4U)) 
                                                                           | ((8U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2bU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                              | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x2aU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x2aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x29U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x29U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x28U)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x28U)))))))))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                                     ? 
                                                                    ((0x80U 
                                                                      & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x27U)) 
                                                                          ^ 
                                                                          ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x27U)) 
                                                                           ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x26U)) 
                                                                             ^ 
                                                                             ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x26U)) 
                                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x25U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x25U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x24U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x24U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x23U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x23U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x22U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x22U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x21U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x21U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x20U))))))))))))
                                                                     : 
                                                                    ((0x80U 
                                                                      & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x27U)) 
                                                                          ^ 
                                                                          ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x27U)) 
                                                                           ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x26U)) 
                                                                             ^ 
                                                                             ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x26U)) 
                                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x25U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x25U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x24U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x24U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x23U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x23U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x22U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x22U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x21U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x21U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x20U)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x20U)))))))))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                                        ? 
                                                                       ((0x80U 
                                                                         & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1fU)) 
                                                                             ^ 
                                                                             ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1fU)) 
                                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1eU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1eU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1dU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1dU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1cU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1bU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1aU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x19U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x18U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x18U))))))))))))
                                                                        : 
                                                                       ((0x80U 
                                                                         & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1fU)) 
                                                                             ^ 
                                                                             ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1fU)) 
                                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1eU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1eU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1dU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1dU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1cU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1bU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1aU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x19U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x18U)))))))))))) 
                                                                      << 0x18U) 
                                                                     | ((((4U 
                                                                           & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                                           ? 
                                                                          ((0x80U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x17U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x16U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                                << 6U)) 
                                                                              | ((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x15U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x14U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x13U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x12U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x11U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x10U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x10U))))))))))))
                                                                           : 
                                                                          ((0x80U 
                                                                            & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x17U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x16U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                                << 6U)) 
                                                                              | ((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x15U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x14U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x13U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x12U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x11U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x10U)))))))))))) 
                                                                         << 0x10U) 
                                                                        | ((((2U 
                                                                              & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))
                                                                              ? 
                                                                             ((0x80U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xfU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                                << 7U)) 
                                                                              | ((0x40U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xeU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xdU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xcU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xbU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xaU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 9U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 8U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 8U))))))))))))
                                                                              : 
                                                                             ((0x80U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xfU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                                << 7U)) 
                                                                              | ((0x40U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xeU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xdU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xcU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xbU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0xaU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 9U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 8U)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 8U)))))))))))) 
                                                                            << 8U) 
                                                                           | ((0x80U 
                                                                               & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 7U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 7U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                                                                << 7U)) 
                                                                              | ((0x40U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 6U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 6U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 5U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 5U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 4U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 4U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 3U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 3U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 2U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 2U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->a 
                                                                                >> 1U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 1U)) 
                                                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->a) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->b) 
                                                                                ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))))))))))))))))));
}

void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);
void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_comb__TOP__configurable_carry_select_adder__DOT__first_block__0(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf);

void Vconfigurable_carry_select_adder___024root___eval_ico(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0));
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_sequent__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1));
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_comb__TOP__configurable_carry_select_adder__DOT__first_block__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__act(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_carry_select_adder___024root___eval_triggers__act(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__2)));
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__2 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_carry_select_adder___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vconfigurable_carry_select_adder___024root___act_sequent__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf);

void Vconfigurable_carry_select_adder___024root___eval_act(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vconfigurable_carry_select_adder___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ico_comb__TOP__configurable_carry_select_adder__DOT__first_block__0((&vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block));
        Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0(vlSelf);
    }
}
