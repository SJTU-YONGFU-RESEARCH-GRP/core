// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsipo_register.h for the primary calling header

#include "Vsipo_register__pch.h"
#include "Vsipo_register___024root.h"

void Vsipo_register___024root___eval_act(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_act\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsipo_register___024root___nba_sequent__TOP__0(Vsipo_register___024root* vlSelf);

void Vsipo_register___024root___eval_nba(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_nba\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsipo_register___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vsipo_register___024root___nba_sequent__TOP__0(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___nba_sequent__TOP__0\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout;
    __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sipo_register__DOT__count_ones__0__data;
    __Vfunc_sipo_register__DOT__count_ones__0__data = 0;
    CData/*7:0*/ __Vdly__sipo_register__DOT__shift_reg;
    __Vdly__sipo_register__DOT__shift_reg = 0;
    // Body
    __Vdly__sipo_register__DOT__shift_reg = vlSelfRef.sipo_register__DOT__shift_reg;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.enable) {
            __Vdly__sipo_register__DOT__shift_reg = 
                ((0xfeU & ((IData)(vlSelfRef.sipo_register__DOT__shift_reg) 
                           << 1U)) | (IData)(vlSelfRef.serial_in));
        }
    } else {
        __Vdly__sipo_register__DOT__shift_reg = 0U;
    }
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.enable) {
            vlSelfRef.sipo_register__DOT__parity_bit 
                = (0U != VL_MODDIVS_III(32, ([&]() {
                            __Vfunc_sipo_register__DOT__count_ones__0__data 
                                = vlSelfRef.sipo_register__DOT__next_shift_reg;
                            vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count = 0U;
                            if ((1U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((2U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((4U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((8U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x10U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x20U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x40U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            if ((0x80U & (IData)(__Vfunc_sipo_register__DOT__count_ones__0__data))) {
                                vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count 
                                    = ((IData)(1U) 
                                       + vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count);
                            }
                            vlSelfRef.sipo_register__DOT__count_ones__Vstatic__i = 8U;
                            __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout 
                                = vlSelfRef.sipo_register__DOT__count_ones__Vstatic__count;
                        }(), __Vfunc_sipo_register__DOT__count_ones__0__Vfuncout), (IData)(2U)));
            vlSelfRef.sipo_register__DOT__next_shift_reg 
                = ((0xfeU & ((IData)(vlSelfRef.sipo_register__DOT__shift_reg) 
                             << 1U)) | (IData)(vlSelfRef.serial_in));
        }
    } else {
        vlSelfRef.sipo_register__DOT__parity_bit = 0U;
    }
    vlSelfRef.sipo_register__DOT__shift_reg = __Vdly__sipo_register__DOT__shift_reg;
    vlSelfRef.parity_out = vlSelfRef.sipo_register__DOT__parity_bit;
    vlSelfRef.parallel_out = vlSelfRef.sipo_register__DOT__shift_reg;
}

void Vsipo_register___024root___eval_triggers__act(Vsipo_register___024root* vlSelf);

bool Vsipo_register___024root___eval_phase__act(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_phase__act\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsipo_register___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsipo_register___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsipo_register___024root___eval_phase__nba(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_phase__nba\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsipo_register___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsipo_register___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/registers/sipo_register.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsipo_register___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/registers/sipo_register.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsipo_register___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsipo_register___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsipo_register___024root___eval_debug_assertions(Vsipo_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_debug_assertions\n"); );
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.serial_in & 0xfeU)))) {
        Verilated::overWidthError("serial_in");}
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
