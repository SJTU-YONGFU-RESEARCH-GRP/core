// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsipo_register.h for the primary calling header

#include "Vsipo_register__pch.h"
#include "Vsipo_register___024root.h"

void Vsipo_register___024root___eval_act(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsipo_register___024root___nba_sequent__TOP__0(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout;
    __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sipo_register__DOT__count_ones__0__data;
    __Vfunc_sipo_register__DOT__count_ones__0__data = 0;
    CData/*7:0*/ __Vdly__sipo_register__DOT__shift_reg;
    __Vdly__sipo_register__DOT__shift_reg = 0;
    // Body
    __Vdly__sipo_register__DOT__shift_reg = vlSelf->sipo_register__DOT__shift_reg;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __Vdly__sipo_register__DOT__shift_reg = 
                ((0xfeU & ((IData)(vlSelf->sipo_register__DOT__shift_reg) 
                           << 1U)) | (IData)(vlSelf->serial_in));
        }
    } else {
        __Vdly__sipo_register__DOT__shift_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            vlSelf->sipo_register__DOT__unnamedblk1__DOT__next_shift_reg 
                = ((0xfeU & ((IData)(vlSelf->sipo_register__DOT__shift_reg) 
                             << 1U)) | (IData)(vlSelf->serial_in));
            vlSelf->sipo_register__DOT__parity_bit 
                = (0U != VL_MODDIVS_III(32, ([&]() {
                            __Vfunc_sipo_register__DOT__count_ones__0__data 
                                = vlSelf->sipo_register__DOT__unnamedblk1__DOT__next_shift_reg;
                            vlSelf->sipo_register__DOT__count_ones__Vstatic__count = 0U;
                            if ((1U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((2U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((4U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((8U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x10U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x20U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x40U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x80U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelf->sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelf->sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            vlSelf->sipo_register__DOT__count_ones__Vstatic__i = 8U;
                            __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout 
                                = vlSelf->sipo_register__DOT__count_ones__Vstatic__count;
                        }(), __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout), (IData)(2U)));
        }
    } else {
        vlSelf->sipo_register__DOT__parity_bit = 0U;
    }
    vlSelf->sipo_register__DOT__shift_reg = __Vdly__sipo_register__DOT__shift_reg;
    vlSelf->parallel_out = vlSelf->sipo_register__DOT__shift_reg;
    vlSelf->parity_out = vlSelf->sipo_register__DOT__parity_bit;
}

void Vsipo_register___024root___eval_nba(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsipo_register___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsipo_register___024root___eval_triggers__act(Vsipo_register___024root* vlSelf);

bool Vsipo_register___024root___eval_phase__act(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsipo_register___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsipo_register___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsipo_register___024root___eval_phase__nba(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsipo_register___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsipo_register___024root___dump_triggers__nba(Vsipo_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsipo_register___024root___dump_triggers__act(Vsipo_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vsipo_register___024root___eval(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsipo_register___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sipo_register.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsipo_register___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sipo_register.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsipo_register___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsipo_register___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsipo_register___024root___eval_debug_assertions(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->serial_in & 0xfeU))) {
        Verilated::overWidthError("serial_in");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
