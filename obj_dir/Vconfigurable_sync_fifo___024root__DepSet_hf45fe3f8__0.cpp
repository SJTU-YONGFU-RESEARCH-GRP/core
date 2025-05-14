// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_sync_fifo.h for the primary calling header

#include "Vconfigurable_sync_fifo__pch.h"
#include "Vconfigurable_sync_fifo___024root.h"

VL_INLINE_OPT void Vconfigurable_sync_fifo___024root___ico_sequent__TOP__0(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->configurable_sync_fifo__DOT__wr_allow = 
        ((~ (IData)(vlSelf->full)) & (IData)(vlSelf->wr_en));
    vlSelf->configurable_sync_fifo__DOT__rd_allow = 
        ((~ (IData)(vlSelf->empty)) & (IData)(vlSelf->rd_en));
}

void Vconfigurable_sync_fifo___024root___eval_ico(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vconfigurable_sync_fifo___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vconfigurable_sync_fifo___024root___eval_triggers__ico(Vconfigurable_sync_fifo___024root* vlSelf);

bool Vconfigurable_sync_fifo___024root___eval_phase__ico(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_sync_fifo___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_sync_fifo___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconfigurable_sync_fifo___024root___eval_act(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vconfigurable_sync_fifo___024root___nba_sequent__TOP__0(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__configurable_sync_fifo__DOT__rd_ptr;
    __Vdly__configurable_sync_fifo__DOT__rd_ptr = 0;
    // Body
    __Vdly__configurable_sync_fifo__DOT__rd_ptr = vlSelf->configurable_sync_fifo__DOT__rd_ptr;
    vlSelf->__Vdly__configurable_sync_fifo__DOT__wr_ptr 
        = vlSelf->configurable_sync_fifo__DOT__wr_ptr;
    if (vlSelf->rst_n) {
        if (vlSelf->configurable_sync_fifo__DOT__rd_allow) {
            __Vdly__configurable_sync_fifo__DOT__rd_ptr 
                = ((0xfU == (IData)(vlSelf->configurable_sync_fifo__DOT__rd_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->configurable_sync_fifo__DOT__rd_ptr))));
            vlSelf->data_out = vlSelf->configurable_sync_fifo__DOT__mem
                [vlSelf->configurable_sync_fifo__DOT__rd_ptr];
        }
        if (vlSelf->configurable_sync_fifo__DOT__wr_allow) {
            vlSelf->__Vdly__configurable_sync_fifo__DOT__wr_ptr 
                = ((0xfU == (IData)(vlSelf->configurable_sync_fifo__DOT__wr_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->configurable_sync_fifo__DOT__wr_ptr))));
        }
        vlSelf->configurable_sync_fifo__DOT__count 
            = (0x1fU & ((2U == (((IData)(vlSelf->configurable_sync_fifo__DOT__wr_allow) 
                                 << 1U) | (IData)(vlSelf->configurable_sync_fifo__DOT__rd_allow)))
                         ? ((IData)(1U) + (IData)(vlSelf->configurable_sync_fifo__DOT__count))
                         : ((1U == (((IData)(vlSelf->configurable_sync_fifo__DOT__wr_allow) 
                                     << 1U) | (IData)(vlSelf->configurable_sync_fifo__DOT__rd_allow)))
                             ? ((IData)(vlSelf->configurable_sync_fifo__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelf->configurable_sync_fifo__DOT__count))));
    } else {
        __Vdly__configurable_sync_fifo__DOT__rd_ptr = 0U;
        vlSelf->__Vdly__configurable_sync_fifo__DOT__wr_ptr = 0U;
        vlSelf->configurable_sync_fifo__DOT__count = 0U;
        vlSelf->data_out = 0U;
    }
    vlSelf->configurable_sync_fifo__DOT__rd_ptr = __Vdly__configurable_sync_fifo__DOT__rd_ptr;
    vlSelf->almost_full = (0xcU <= (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->almost_empty = (4U >= (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->fill_level = vlSelf->configurable_sync_fifo__DOT__count;
    vlSelf->full = (0x10U == (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->empty = (0U == (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->configurable_sync_fifo__DOT__rd_allow = 
        ((~ (IData)(vlSelf->empty)) & (IData)(vlSelf->rd_en));
}

VL_INLINE_OPT void Vconfigurable_sync_fifo___024root___nba_sequent__TOP__1(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__configurable_sync_fifo__DOT__mem__v0;
    __Vdlyvdim0__configurable_sync_fifo__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__configurable_sync_fifo__DOT__mem__v0;
    __Vdlyvval__configurable_sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__configurable_sync_fifo__DOT__mem__v0;
    __Vdlyvset__configurable_sync_fifo__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__configurable_sync_fifo__DOT__mem__v0 = 0U;
    if (vlSelf->configurable_sync_fifo__DOT__wr_allow) {
        __Vdlyvval__configurable_sync_fifo__DOT__mem__v0 
            = vlSelf->data_in;
        __Vdlyvset__configurable_sync_fifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__configurable_sync_fifo__DOT__mem__v0 
            = vlSelf->configurable_sync_fifo__DOT__wr_ptr;
    }
    if (__Vdlyvset__configurable_sync_fifo__DOT__mem__v0) {
        vlSelf->configurable_sync_fifo__DOT__mem[__Vdlyvdim0__configurable_sync_fifo__DOT__mem__v0] 
            = __Vdlyvval__configurable_sync_fifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vconfigurable_sync_fifo___024root___nba_sequent__TOP__2(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->configurable_sync_fifo__DOT__wr_ptr = vlSelf->__Vdly__configurable_sync_fifo__DOT__wr_ptr;
    vlSelf->configurable_sync_fifo__DOT__wr_allow = 
        ((~ (IData)(vlSelf->full)) & (IData)(vlSelf->wr_en));
}

void Vconfigurable_sync_fifo___024root___eval_nba(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vconfigurable_sync_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vconfigurable_sync_fifo___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vconfigurable_sync_fifo___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vconfigurable_sync_fifo___024root___eval_triggers__act(Vconfigurable_sync_fifo___024root* vlSelf);

bool Vconfigurable_sync_fifo___024root___eval_phase__act(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_sync_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vconfigurable_sync_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_sync_fifo___024root___eval_phase__nba(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_sync_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__ico(Vconfigurable_sync_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__nba(Vconfigurable_sync_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__act(Vconfigurable_sync_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_sync_fifo___024root___eval(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval\n"); );
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
            Vconfigurable_sync_fifo___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("configurable_sync_fifo.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_sync_fifo___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vconfigurable_sync_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("configurable_sync_fifo.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vconfigurable_sync_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("configurable_sync_fifo.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vconfigurable_sync_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vconfigurable_sync_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_sync_fifo___024root___eval_debug_assertions(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((vlSelf->rd_en & 0xfeU))) {
        Verilated::overWidthError("rd_en");}
}
#endif  // VL_DEBUG
