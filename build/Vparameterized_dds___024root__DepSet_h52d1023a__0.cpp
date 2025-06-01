// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_dds.h for the primary calling header

#include "Vparameterized_dds__pch.h"
#include "Vparameterized_dds___024root.h"

void Vparameterized_dds___024root___ico_sequent__TOP__0(Vparameterized_dds___024root* vlSelf);

void Vparameterized_dds___024root___eval_ico(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_ico\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vparameterized_dds___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vparameterized_dds___024root___ico_sequent__TOP__0(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___ico_sequent__TOP__0\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parameterized_dds__DOT__phase_with_offset 
        = (0xffffffU & (vlSelfRef.parameterized_dds__DOT__phase_acc 
                        + vlSelfRef.phase_offset));
}

void Vparameterized_dds___024root___eval_triggers__ico(Vparameterized_dds___024root* vlSelf);

bool Vparameterized_dds___024root___eval_phase__ico(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_phase__ico\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vparameterized_dds___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vparameterized_dds___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vparameterized_dds___024root___eval_act(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_act\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vparameterized_dds___024root___nba_sequent__TOP__0(Vparameterized_dds___024root* vlSelf);

void Vparameterized_dds___024root___eval_nba(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_nba\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vparameterized_dds___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vparameterized_dds___024root___nba_sequent__TOP__0(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___nba_sequent__TOP__0\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__lut_initialized;
    __Vdly__lut_initialized = 0;
    SData/*11:0*/ __VdlyVal__parameterized_dds__DOT__sine_lut__v0;
    __VdlyVal__parameterized_dds__DOT__sine_lut__v0 = 0;
    SData/*9:0*/ __VdlyDim0__parameterized_dds__DOT__sine_lut__v0;
    __VdlyDim0__parameterized_dds__DOT__sine_lut__v0 = 0;
    CData/*0:0*/ __VdlySet__parameterized_dds__DOT__sine_lut__v0;
    __VdlySet__parameterized_dds__DOT__sine_lut__v0 = 0;
    // Body
    __Vdly__lut_initialized = vlSelfRef.lut_initialized;
    __VdlySet__parameterized_dds__DOT__sine_lut__v0 = 0U;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.enable) & (IData)(vlSelfRef.lut_initialized))) {
            vlSelfRef.parameterized_dds__DOT__phase_acc 
                = (0xffffffU & (vlSelfRef.parameterized_dds__DOT__phase_acc 
                                + vlSelfRef.fcw));
            vlSelfRef.sine_out = (0xfffU & ((0x800000U 
                                             & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                             ? ((IData)(vlSelfRef.parameterized_dds__DOT__center_val) 
                                                - (
                                                   vlSelfRef.parameterized_dds__DOT__sine_lut
                                                   [
                                                   (0x3ffU 
                                                    & ((0x800000U 
                                                        & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                                        ? 
                                                       ((0x400000U 
                                                         & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                                         ? 
                                                        (~ 
                                                         (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                          >> 0xcU))
                                                         : 
                                                        (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                         >> 0xcU))
                                                        : 
                                                       ((0x400000U 
                                                         & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                                         ? 
                                                        (~ 
                                                         (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                          >> 0xcU))
                                                         : 
                                                        (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                         >> 0xcU))))] 
                                                   - (IData)(vlSelfRef.parameterized_dds__DOT__center_val)))
                                             : vlSelfRef.parameterized_dds__DOT__sine_lut
                                            [(0x3ffU 
                                              & ((0x800000U 
                                                  & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                    >> 0xcU))
                                                   : 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0xcU))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                    >> 0xcU))
                                                   : 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0xcU))))]));
            vlSelfRef.cosine_out = (0xfffU & ((2U & 
                                               ((IData)(1U) 
                                                + (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0x16U)))
                                               ? ((IData)(vlSelfRef.parameterized_dds__DOT__center_val) 
                                                  - 
                                                  (vlSelfRef.parameterized_dds__DOT__sine_lut
                                                   [
                                                   (0x3ffU 
                                                    & ((2U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                            >> 0x16U)))
                                                        ? 
                                                       ((1U 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                             >> 0x16U)))
                                                         ? 
                                                        (~ 
                                                         (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                          >> 0xcU))
                                                         : 
                                                        (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                         >> 0xcU))
                                                        : 
                                                       ((1U 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                             >> 0x16U)))
                                                         ? 
                                                        (~ 
                                                         (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                          >> 0xcU))
                                                         : 
                                                        (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                         >> 0xcU))))] 
                                                   - (IData)(vlSelfRef.parameterized_dds__DOT__center_val)))
                                               : vlSelfRef.parameterized_dds__DOT__sine_lut
                                              [(0x3ffU 
                                                & ((2U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                        >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                         >> 0x16U)))
                                                     ? 
                                                    (~ 
                                                     (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                      >> 0xcU))
                                                     : 
                                                    (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                     >> 0xcU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                         >> 0x16U)))
                                                     ? 
                                                    (~ 
                                                     (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                      >> 0xcU))
                                                     : 
                                                    (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                     >> 0xcU))))]));
        }
        if ((1U & (~ (IData)(vlSelfRef.lut_initialized)))) {
            __VdlyVal__parameterized_dds__DOT__sine_lut__v0 
                = (0xfffU & VL_SHIFTR_III(12,12,32, 
                                          (0xfffU & 
                                           ((IData)(vlSelfRef.parameterized_dds__DOT__init_counter) 
                                            * (IData)(vlSelfRef.parameterized_dds__DOT__scale_val))), 0xaU));
            __VdlyDim0__parameterized_dds__DOT__sine_lut__v0 
                = vlSelfRef.parameterized_dds__DOT__init_counter;
            __VdlySet__parameterized_dds__DOT__sine_lut__v0 = 1U;
            if ((0x3ffU == (IData)(vlSelfRef.parameterized_dds__DOT__init_counter))) {
                __Vdly__lut_initialized = 1U;
            } else {
                vlSelfRef.parameterized_dds__DOT__init_counter 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.parameterized_dds__DOT__init_counter)));
            }
        }
    } else {
        vlSelfRef.parameterized_dds__DOT__phase_acc = 0U;
        vlSelfRef.parameterized_dds__DOT__init_counter = 0U;
        __Vdly__lut_initialized = 0U;
        vlSelfRef.sine_out = 0U;
        vlSelfRef.cosine_out = 0U;
    }
    vlSelfRef.lut_initialized = __Vdly__lut_initialized;
    if (__VdlySet__parameterized_dds__DOT__sine_lut__v0) {
        vlSelfRef.parameterized_dds__DOT__sine_lut[__VdlyDim0__parameterized_dds__DOT__sine_lut__v0] 
            = __VdlyVal__parameterized_dds__DOT__sine_lut__v0;
    }
    vlSelfRef.parameterized_dds__DOT__phase_with_offset 
        = (0xffffffU & (vlSelfRef.parameterized_dds__DOT__phase_acc 
                        + vlSelfRef.phase_offset));
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.parameterized_dds__DOT__scale_val = 0x7ffU;
        vlSelfRef.parameterized_dds__DOT__center_val = 0x800U;
    }
}

void Vparameterized_dds___024root___eval_triggers__act(Vparameterized_dds___024root* vlSelf);

bool Vparameterized_dds___024root___eval_phase__act(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_phase__act\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vparameterized_dds___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vparameterized_dds___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vparameterized_dds___024root___eval_phase__nba(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_phase__nba\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vparameterized_dds___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__ico(Vparameterized_dds___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__nba(Vparameterized_dds___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__act(Vparameterized_dds___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_dds___024root___eval(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vparameterized_dds___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/signals/parameterized_dds.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vparameterized_dds___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vparameterized_dds___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/signals/parameterized_dds.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vparameterized_dds___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/signals/parameterized_dds.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vparameterized_dds___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vparameterized_dds___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vparameterized_dds___024root___eval_debug_assertions(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_debug_assertions\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY(((vlSelfRef.fcw & 0xff000000U)))) {
        Verilated::overWidthError("fcw");}
    if (VL_UNLIKELY(((vlSelfRef.phase_offset & 0xff000000U)))) {
        Verilated::overWidthError("phase_offset");}
}
#endif  // VL_DEBUG
