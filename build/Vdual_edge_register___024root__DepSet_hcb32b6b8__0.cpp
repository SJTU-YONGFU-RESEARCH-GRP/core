// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_edge_register.h for the primary calling header

#include "Vdual_edge_register__pch.h"
#include "Vdual_edge_register___024root.h"

void Vdual_edge_register___024root___ico_sequent__TOP__0(Vdual_edge_register___024root* vlSelf);

void Vdual_edge_register___024root___eval_ico(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_ico\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdual_edge_register___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdual_edge_register___024root___ico_sequent__TOP__0(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___ico_sequent__TOP__0\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_out = ((IData)(vlSelfRef.rst_n) ? 
                          ((IData)(vlSelfRef.clk) ? (IData)(vlSelfRef.dual_edge_register__DOT__posedge_reg)
                            : (IData)(vlSelfRef.dual_edge_register__DOT__negedge_reg))
                           : 0U);
}

void Vdual_edge_register___024root___eval_triggers__ico(Vdual_edge_register___024root* vlSelf);

bool Vdual_edge_register___024root___eval_phase__ico(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_phase__ico\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdual_edge_register___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdual_edge_register___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdual_edge_register___024root___eval_act(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_act\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdual_edge_register___024root___nba_sequent__TOP__0(Vdual_edge_register___024root* vlSelf);
void Vdual_edge_register___024root___nba_sequent__TOP__1(Vdual_edge_register___024root* vlSelf);

void Vdual_edge_register___024root___eval_nba(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_nba\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdual_edge_register___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdual_edge_register___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdual_edge_register___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdual_edge_register___024root___nba_sequent__TOP__0(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___nba_sequent__TOP__0\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.enable) {
            vlSelfRef.dual_edge_register__DOT__posedge_reg 
                = vlSelfRef.data_in;
        }
    } else {
        vlSelfRef.dual_edge_register__DOT__posedge_reg = 0U;
    }
}

VL_INLINE_OPT void Vdual_edge_register___024root___nba_sequent__TOP__1(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___nba_sequent__TOP__1\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.enable) {
            vlSelfRef.dual_edge_register__DOT__negedge_reg 
                = vlSelfRef.data_in;
        }
    } else {
        vlSelfRef.dual_edge_register__DOT__negedge_reg = 0U;
    }
}

void Vdual_edge_register___024root___eval_triggers__act(Vdual_edge_register___024root* vlSelf);

bool Vdual_edge_register___024root___eval_phase__act(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_phase__act\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdual_edge_register___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdual_edge_register___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdual_edge_register___024root___eval_phase__nba(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_phase__nba\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdual_edge_register___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__ico(Vdual_edge_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__nba(Vdual_edge_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__act(Vdual_edge_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vdual_edge_register___024root___eval(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdual_edge_register___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/registers/dual_edge_register.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdual_edge_register___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdual_edge_register___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/registers/dual_edge_register.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdual_edge_register___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/registers/dual_edge_register.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdual_edge_register___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdual_edge_register___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdual_edge_register___024root___eval_debug_assertions(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_debug_assertions\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
