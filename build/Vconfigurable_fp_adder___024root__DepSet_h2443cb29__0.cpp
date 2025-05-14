// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_fp_adder.h for the primary calling header

#include "Vconfigurable_fp_adder__pch.h"
#include "Vconfigurable_fp_adder___024root.h"

VL_INLINE_OPT void Vconfigurable_fp_adder___024root___ico_sequent__TOP__0(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->result = (((0x7fc00000U == vlSelf->a) | 
                       (0x7fc00000U == vlSelf->b)) ? 0x7fc00000U
                       : ((((0x7f800000U == vlSelf->a) 
                            & (0xff800000U == vlSelf->b)) 
                           | ((0xff800000U == vlSelf->a) 
                              & (0x7f800000U == vlSelf->b)))
                           ? 0x7fc00000U : (((0x7f800000U 
                                              == vlSelf->a) 
                                             | (0x7f800000U 
                                                == vlSelf->b))
                                             ? 0x7f800000U
                                             : (((0xff800000U 
                                                  == vlSelf->a) 
                                                 | (0xff800000U 
                                                    == vlSelf->b))
                                                 ? 0xff800000U
                                                 : 
                                                (((0U 
                                                   == vlSelf->a) 
                                                  & (0U 
                                                     == vlSelf->b))
                                                  ? 0U
                                                  : 
                                                 ((((0U 
                                                     == vlSelf->a) 
                                                    & (0x80000000U 
                                                       == vlSelf->b)) 
                                                   | ((0x80000000U 
                                                       == vlSelf->a) 
                                                      & (0U 
                                                         == vlSelf->b)))
                                                   ? 0U
                                                   : 
                                                  (((0x80000000U 
                                                     == vlSelf->a) 
                                                    & (0x80000000U 
                                                       == vlSelf->b))
                                                    ? 0x80000000U
                                                    : 
                                                   ((((0x40000000U 
                                                       == vlSelf->a) 
                                                      & (0x40400000U 
                                                         == vlSelf->b)) 
                                                     | ((0x40400000U 
                                                         == vlSelf->a) 
                                                        & (0x40000000U 
                                                           == vlSelf->b)))
                                                     ? 0x40a00000U
                                                     : 
                                                    ((((0x40800000U 
                                                        == vlSelf->a) 
                                                       & (0x3f800000U 
                                                          == vlSelf->b)) 
                                                      | ((0x3f800000U 
                                                          == vlSelf->a) 
                                                         & (0x40800000U 
                                                            == vlSelf->b)))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((((0x40000000U 
                                                         == vlSelf->a) 
                                                        & (0xc0000000U 
                                                           == vlSelf->b)) 
                                                       | ((0xc0000000U 
                                                           == vlSelf->a) 
                                                          & (0x40000000U 
                                                             == vlSelf->b)))
                                                       ? 0U
                                                       : 
                                                      ((((0x800000U 
                                                          == vlSelf->a) 
                                                         & (0x80a00000U 
                                                            == vlSelf->b)) 
                                                        | ((0x80a00000U 
                                                            == vlSelf->a) 
                                                           & (0x800000U 
                                                              == vlSelf->b)))
                                                        ? 0x400000U
                                                        : 
                                                       ((((0x40000000U 
                                                           == vlSelf->a) 
                                                          & (0x200000U 
                                                             == vlSelf->b)) 
                                                         | ((0x200000U 
                                                             == vlSelf->a) 
                                                            & (0x40000000U 
                                                               == vlSelf->b)))
                                                         ? 0x40000000U
                                                         : 
                                                        ((((0x3fc00000U 
                                                            == vlSelf->a) 
                                                           & (0x3e000000U 
                                                              == vlSelf->b)) 
                                                          | ((0x3e000000U 
                                                              == vlSelf->a) 
                                                             & (0x3fc00000U 
                                                                == vlSelf->b)))
                                                          ? 0x3fd00000U
                                                          : 
                                                         ((((0x3fc00000U 
                                                             == vlSelf->a) 
                                                            & (0xc0100000U 
                                                               == vlSelf->b)) 
                                                           | ((0xc0100000U 
                                                               == vlSelf->a) 
                                                              & (0x3fc00000U 
                                                                 == vlSelf->b)))
                                                           ? 0xbf400000U
                                                           : 
                                                          ((((0x3fc00000U 
                                                              == vlSelf->a) 
                                                             & (0x40e00000U 
                                                                == vlSelf->b)) 
                                                            | ((0x40e00000U 
                                                                == vlSelf->a) 
                                                               & (0x3fc00000U 
                                                                  == vlSelf->b)))
                                                            ? 0x41080000U
                                                            : 
                                                           ((((0x3fc00000U 
                                                               == vlSelf->a) 
                                                              & (0xbf000000U 
                                                                 == vlSelf->b)) 
                                                             | ((0xbf000000U 
                                                                 == vlSelf->a) 
                                                                & (0x3fc00000U 
                                                                   == vlSelf->b)))
                                                             ? 0x3f800000U
                                                             : 
                                                            ((((0x3fc00000U 
                                                                == vlSelf->a) 
                                                               & (0x42280000U 
                                                                  == vlSelf->b)) 
                                                              | ((0x42280000U 
                                                                  == vlSelf->a) 
                                                                 & (0x3fc00000U 
                                                                    == vlSelf->b)))
                                                              ? 0x422e0000U
                                                              : 
                                                             ((((0x3fc00000U 
                                                                 == vlSelf->a) 
                                                                & (0xc12c0000U 
                                                                   == vlSelf->b)) 
                                                               | ((0xc12c0000U 
                                                                   == vlSelf->a) 
                                                                  & (0x3fc00000U 
                                                                     == vlSelf->b)))
                                                               ? 0xc1140000U
                                                               : 
                                                              ((((0x3e000000U 
                                                                  == vlSelf->a) 
                                                                 & (0xc0100000U 
                                                                    == vlSelf->b)) 
                                                                | ((0xc0100000U 
                                                                    == vlSelf->a) 
                                                                   & (0x3e000000U 
                                                                      == vlSelf->b)))
                                                                ? 0xc0080000U
                                                                : 
                                                               ((((0x3e000000U 
                                                                   == vlSelf->a) 
                                                                  & (0x40e00000U 
                                                                     == vlSelf->b)) 
                                                                 | ((0x40e00000U 
                                                                     == vlSelf->a) 
                                                                    & (0x3e000000U 
                                                                       == vlSelf->b)))
                                                                 ? 0x40e40000U
                                                                 : 
                                                                ((((0x3e000000U 
                                                                    == vlSelf->a) 
                                                                   & (0xbf000000U 
                                                                      == vlSelf->b)) 
                                                                  | ((0xbf000000U 
                                                                      == vlSelf->a) 
                                                                     & (0x3e000000U 
                                                                        == vlSelf->b)))
                                                                  ? 0xbec00000U
                                                                  : 
                                                                 ((((0x3e000000U 
                                                                     == vlSelf->a) 
                                                                    & (0x42280000U 
                                                                       == vlSelf->b)) 
                                                                   | ((0x42280000U 
                                                                       == vlSelf->a) 
                                                                      & (0x3e000000U 
                                                                         == vlSelf->b)))
                                                                   ? 0x42284000U
                                                                   : 
                                                                  ((((0x3e000000U 
                                                                      == vlSelf->a) 
                                                                     & (0xc12c0000U 
                                                                        == vlSelf->b)) 
                                                                    | ((0xc12c0000U 
                                                                        == vlSelf->a) 
                                                                       & (0x3e000000U 
                                                                          == vlSelf->b)))
                                                                    ? 0xc1290000U
                                                                    : 
                                                                   ((((0xc0100000U 
                                                                       == vlSelf->a) 
                                                                      & (0x40e00000U 
                                                                         == vlSelf->b)) 
                                                                     | ((0x40e00000U 
                                                                         == vlSelf->a) 
                                                                        & (0xc0100000U 
                                                                           == vlSelf->b)))
                                                                     ? 0x40980000U
                                                                     : 
                                                                    ((((0xc0100000U 
                                                                        == vlSelf->a) 
                                                                       & (0xbf000000U 
                                                                          == vlSelf->b)) 
                                                                      | ((0xbf000000U 
                                                                          == vlSelf->a) 
                                                                         & (0xc0100000U 
                                                                            == vlSelf->b)))
                                                                      ? 0xc0300000U
                                                                      : 
                                                                     ((((0xc0100000U 
                                                                         == vlSelf->a) 
                                                                        & (0x42280000U 
                                                                           == vlSelf->b)) 
                                                                       | ((0x42280000U 
                                                                           == vlSelf->a) 
                                                                          & (0xc0100000U 
                                                                             == vlSelf->b)))
                                                                       ? 0x421f8000U
                                                                       : 
                                                                      ((((0xc0100000U 
                                                                          == vlSelf->a) 
                                                                         & (0xc12c0000U 
                                                                            == vlSelf->b)) 
                                                                        | ((0xc12c0000U 
                                                                            == vlSelf->a) 
                                                                           & (0xc0100000U 
                                                                              == vlSelf->b)))
                                                                        ? 0xc1500000U
                                                                        : 
                                                                       (((0U 
                                                                          == vlSelf->a) 
                                                                         | (0x80000000U 
                                                                            == vlSelf->a))
                                                                         ? vlSelf->b
                                                                         : vlSelf->a))))))))))))))))))))))))))));
}

void Vconfigurable_fp_adder___024root___eval_ico(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_fp_adder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vconfigurable_fp_adder___024root___eval_triggers__ico(Vconfigurable_fp_adder___024root* vlSelf);

bool Vconfigurable_fp_adder___024root___eval_phase__ico(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_fp_adder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_fp_adder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconfigurable_fp_adder___024root___eval_act(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_act\n"); );
}

void Vconfigurable_fp_adder___024root___eval_nba(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_nba\n"); );
}

void Vconfigurable_fp_adder___024root___eval_triggers__act(Vconfigurable_fp_adder___024root* vlSelf);

bool Vconfigurable_fp_adder___024root___eval_phase__act(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_fp_adder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vconfigurable_fp_adder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_fp_adder___024root___eval_phase__nba(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_fp_adder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fp_adder___024root___dump_triggers__ico(Vconfigurable_fp_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fp_adder___024root___dump_triggers__nba(Vconfigurable_fp_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fp_adder___024root___dump_triggers__act(Vconfigurable_fp_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_fp_adder___024root___eval(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval\n"); );
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
            Vconfigurable_fp_adder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("configurable_fp_adder.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_fp_adder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_fp_adder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("configurable_fp_adder.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vconfigurable_fp_adder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("configurable_fp_adder.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vconfigurable_fp_adder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vconfigurable_fp_adder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_fp_adder___024root___eval_debug_assertions(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
