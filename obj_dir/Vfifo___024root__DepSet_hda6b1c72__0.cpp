// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo___024root.h"

void Vfifo___024root___eval_act(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vfifo___024root___nba_sequent__TOP__0(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__fifo__DOT__mem__v0;
    __Vdlyvdim0__fifo__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__fifo__DOT__mem__v0;
    __Vdlyvval__fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fifo__DOT__mem__v0;
    __Vdlyvset__fifo__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__fifo__DOT__mem__v0 = 0U;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->wr_en) & (~ (IData)(vlSelf->full)))) {
            __Vdlyvval__fifo__DOT__mem__v0 = vlSelf->din;
            __Vdlyvset__fifo__DOT__mem__v0 = 1U;
            __Vdlyvdim0__fifo__DOT__mem__v0 = (0xfU 
                                               & (IData)(vlSelf->fifo__DOT__wr_ptr));
            vlSelf->fifo__DOT__wr_ptr = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelf->rd_en) & (~ (IData)(vlSelf->empty)))) {
            vlSelf->dout = vlSelf->fifo__DOT__mem[(0xfU 
                                                   & (IData)(vlSelf->fifo__DOT__rd_ptr))];
            vlSelf->fifo__DOT__rd_ptr = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->fifo__DOT__rd_ptr)));
        }
    } else {
        vlSelf->fifo__DOT__wr_ptr = 0U;
        vlSelf->fifo__DOT__rd_ptr = 0U;
        vlSelf->dout = 0U;
    }
    if (__Vdlyvset__fifo__DOT__mem__v0) {
        vlSelf->fifo__DOT__mem[__Vdlyvdim0__fifo__DOT__mem__v0] 
            = __Vdlyvval__fifo__DOT__mem__v0;
    }
    vlSelf->full = (((0xfU & (IData)(vlSelf->fifo__DOT__wr_ptr)) 
                     == (0xfU & (IData)(vlSelf->fifo__DOT__rd_ptr))) 
                    & ((1U & ((IData)(vlSelf->fifo__DOT__wr_ptr) 
                              >> 4U)) != (1U & ((IData)(vlSelf->fifo__DOT__rd_ptr) 
                                                >> 4U))));
    vlSelf->empty = ((IData)(vlSelf->fifo__DOT__rd_ptr) 
                     == (IData)(vlSelf->fifo__DOT__wr_ptr));
}

void Vfifo___024root___eval_nba(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vfifo___024root___eval_triggers__act(Vfifo___024root* vlSelf);

bool Vfifo___024root___eval_phase__act(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vfifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfifo___024root___eval_phase__nba(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__nba(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__act(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo___024root___eval(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fifo.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vfifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fifo.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vfifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vfifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfifo___024root___eval_debug_assertions(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_debug_assertions\n"); );
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
