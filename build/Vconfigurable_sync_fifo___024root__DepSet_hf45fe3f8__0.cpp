// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_sync_fifo.h for the primary calling header

#include "Vconfigurable_sync_fifo__pch.h"
#include "Vconfigurable_sync_fifo___024root.h"

void Vconfigurable_sync_fifo___024root___eval_act(Vconfigurable_sync_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_act\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vconfigurable_sync_fifo___024root___nba_sequent__TOP__0(Vconfigurable_sync_fifo___024root* vlSelf);

void Vconfigurable_sync_fifo___024root___eval_nba(Vconfigurable_sync_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_nba\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconfigurable_sync_fifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vconfigurable_sync_fifo___024root___nba_sequent__TOP__0(Vconfigurable_sync_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___nba_sequent__TOP__0\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__configurable_sync_fifo__DOT__memory__v0;
    __VdlyVal__configurable_sync_fifo__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__configurable_sync_fifo__DOT__memory__v0;
    __VdlyDim0__configurable_sync_fifo__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_sync_fifo__DOT__memory__v0;
    __VdlySet__configurable_sync_fifo__DOT__memory__v0 = 0;
    // Body
    __VdlySet__configurable_sync_fifo__DOT__memory__v0 = 0U;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full)))) {
            __VdlyVal__configurable_sync_fifo__DOT__memory__v0 
                = vlSelfRef.data_in;
            __VdlyDim0__configurable_sync_fifo__DOT__memory__v0 
                = vlSelfRef.configurable_sync_fifo__DOT__wr_ptr;
            __VdlySet__configurable_sync_fifo__DOT__memory__v0 = 1U;
            vlSelfRef.configurable_sync_fifo__DOT__wr_ptr 
                = ((0xfU == (IData)(vlSelfRef.configurable_sync_fifo__DOT__wr_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.configurable_sync_fifo__DOT__wr_ptr))));
        }
        vlSelfRef.configurable_sync_fifo__DOT__count 
            = (0x1fU & ((1U == ((((IData)(vlSelfRef.wr_en) 
                                  & (~ (IData)(vlSelfRef.full))) 
                                 << 1U) | ((IData)(vlSelfRef.rd_en) 
                                           & (~ (IData)(vlSelfRef.empty)))))
                         ? ((IData)(vlSelfRef.configurable_sync_fifo__DOT__count) 
                            - (IData)(1U)) : ((2U == 
                                               ((((IData)(vlSelfRef.wr_en) 
                                                  & (~ (IData)(vlSelfRef.full))) 
                                                 << 1U) 
                                                | ((IData)(vlSelfRef.rd_en) 
                                                   & (~ (IData)(vlSelfRef.empty)))))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.configurable_sync_fifo__DOT__count))
                                               : (IData)(vlSelfRef.configurable_sync_fifo__DOT__count))));
        if (((IData)(vlSelfRef.rd_en) & (~ (IData)(vlSelfRef.empty)))) {
            vlSelfRef.data_out = vlSelfRef.configurable_sync_fifo__DOT__memory
                [vlSelfRef.configurable_sync_fifo__DOT__rd_ptr];
            vlSelfRef.configurable_sync_fifo__DOT__rd_ptr 
                = ((0xfU == (IData)(vlSelfRef.configurable_sync_fifo__DOT__rd_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.configurable_sync_fifo__DOT__rd_ptr))));
        }
    } else {
        vlSelfRef.configurable_sync_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.configurable_sync_fifo__DOT__count = 0U;
        vlSelfRef.configurable_sync_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.data_out = 0U;
    }
    if (__VdlySet__configurable_sync_fifo__DOT__memory__v0) {
        vlSelfRef.configurable_sync_fifo__DOT__memory[__VdlyDim0__configurable_sync_fifo__DOT__memory__v0] 
            = __VdlyVal__configurable_sync_fifo__DOT__memory__v0;
    }
    vlSelfRef.full = (0x10U == (IData)(vlSelfRef.configurable_sync_fifo__DOT__count));
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.configurable_sync_fifo__DOT__count));
    vlSelfRef.almost_full = (0xcU <= (IData)(vlSelfRef.configurable_sync_fifo__DOT__count));
    vlSelfRef.almost_empty = (4U >= (IData)(vlSelfRef.configurable_sync_fifo__DOT__count));
    vlSelfRef.fill_level = vlSelfRef.configurable_sync_fifo__DOT__count;
}

void Vconfigurable_sync_fifo___024root___eval_triggers__act(Vconfigurable_sync_fifo___024root* vlSelf);

bool Vconfigurable_sync_fifo___024root___eval_phase__act(Vconfigurable_sync_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_phase__act\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_sync_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vconfigurable_sync_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_sync_fifo___024root___eval_phase__nba(Vconfigurable_sync_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_phase__nba\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_sync_fifo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__nba(Vconfigurable_sync_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__act(Vconfigurable_sync_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_sync_fifo___024root___eval(Vconfigurable_sync_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vconfigurable_sync_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/configurable_sync_fifo.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vconfigurable_sync_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/fifos/configurable_sync_fifo.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vconfigurable_sync_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vconfigurable_sync_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_sync_fifo___024root___eval_debug_assertions(Vconfigurable_sync_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_debug_assertions\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.wr_en & 0xfeU)))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY(((vlSelfRef.rd_en & 0xfeU)))) {
        Verilated::overWidthError("rd_en");}
}
#endif  // VL_DEBUG
