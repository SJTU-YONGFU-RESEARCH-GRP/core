// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_clock_fifo.h for the primary calling header

#include "Vdual_clock_fifo__pch.h"
#include "Vdual_clock_fifo___024root.h"

void Vdual_clock_fifo___024root___eval_act(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vdual_clock_fifo___024root___nba_sequent__TOP__0(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__dual_clock_fifo__DOT__mem__v0 = 0U;
    if (((IData)(vlSelf->wr_en) & (~ (IData)(vlSelf->full)))) {
        vlSelf->__Vdlyvval__dual_clock_fifo__DOT__mem__v0 
            = vlSelf->wr_data;
        vlSelf->__Vdlyvset__dual_clock_fifo__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__dual_clock_fifo__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin));
    }
}

VL_INLINE_OPT void Vdual_clock_fifo___024root___nba_sequent__TOP__1(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__Vfuncout;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray = 0;
    // Body
    vlSelf->__Vdly__dual_clock_fifo__DOT__wr_ptr_bin 
        = vlSelf->dual_clock_fifo__DOT__wr_ptr_bin;
    if (vlSelf->wr_rst_n) {
        vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2 
            = vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync1;
        vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync1 
            = vlSelf->dual_clock_fifo__DOT__rd_ptr_gray;
    } else {
        vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2 = 0U;
        vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync1 = 0U;
    }
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray 
        = vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2;
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray;
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray), 1U)));
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray), 2U)));
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray), 3U)));
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray), 4U)));
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__Vfuncout 
        = vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin;
    vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync 
        = __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__Vfuncout;
}

VL_INLINE_OPT void Vdual_clock_fifo___024root___nba_sequent__TOP__2(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__Vfuncout;
    __Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__bin;
    __Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__bin = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__Vfuncout;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray = 0;
    // Body
    vlSelf->__Vdly__dual_clock_fifo__DOT__rd_ptr_bin 
        = vlSelf->dual_clock_fifo__DOT__rd_ptr_bin;
    if (vlSelf->rd_rst_n) {
        vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2 
            = vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync1;
        if (((IData)(vlSelf->rd_en) & (~ (IData)(vlSelf->empty)))) {
            vlSelf->__Vdly__dual_clock_fifo__DOT__rd_ptr_bin 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin)));
            __Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__bin 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin)));
            __Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__Vfuncout 
                = (0x1fU & ((IData)(__Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__bin) 
                            ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__bin), 1U)));
            vlSelf->dual_clock_fifo__DOT__rd_ptr_gray 
                = __Vfunc_dual_clock_fifo__DOT__bin_to_gray__1__Vfuncout;
        }
        vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync1 
            = vlSelf->dual_clock_fifo__DOT__wr_ptr_gray;
    } else {
        vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2 = 0U;
        vlSelf->__Vdly__dual_clock_fifo__DOT__rd_ptr_bin = 0U;
        vlSelf->dual_clock_fifo__DOT__rd_ptr_gray = 0U;
        vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync1 = 0U;
    }
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray 
        = vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2;
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray;
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray), 1U)));
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray), 2U)));
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray), 3U)));
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin 
        = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray), 4U)));
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__Vfuncout 
        = vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin;
    vlSelf->dual_clock_fifo__DOT__wr_ptr_bin_rd_sync 
        = __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__Vfuncout;
}

VL_INLINE_OPT void Vdual_clock_fifo___024root___nba_sequent__TOP__3(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->rd_en) & (~ (IData)(vlSelf->empty)))) {
        vlSelf->dual_clock_fifo__DOT__rd_data_reg = 
            vlSelf->dual_clock_fifo__DOT__mem[(0xfU 
                                               & (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin))];
    }
    vlSelf->rd_data = vlSelf->dual_clock_fifo__DOT__rd_data_reg;
}

VL_INLINE_OPT void Vdual_clock_fifo___024root___nba_sequent__TOP__4(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__Vfuncout;
    __Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__bin;
    __Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__bin = 0;
    // Body
    if (vlSelf->wr_rst_n) {
        if (((IData)(vlSelf->wr_en) & (~ (IData)(vlSelf->full)))) {
            vlSelf->__Vdly__dual_clock_fifo__DOT__wr_ptr_bin 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin)));
            __Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__bin 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin)));
            __Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__Vfuncout 
                = (0x1fU & ((IData)(__Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__bin) 
                            ^ VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__bin), 1U)));
            vlSelf->dual_clock_fifo__DOT__wr_ptr_gray 
                = __Vfunc_dual_clock_fifo__DOT__bin_to_gray__0__Vfuncout;
        }
    } else {
        vlSelf->__Vdly__dual_clock_fifo__DOT__wr_ptr_bin = 0U;
        vlSelf->dual_clock_fifo__DOT__wr_ptr_gray = 0U;
    }
    vlSelf->dual_clock_fifo__DOT__wr_ptr_bin = vlSelf->__Vdly__dual_clock_fifo__DOT__wr_ptr_bin;
    vlSelf->full = (((1U & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray) 
                            >> 4U)) != (1U & ((IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2) 
                                              >> 4U))) 
                    & ((0xfU & (IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray)) 
                       == (0xfU & (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2))));
    vlSelf->almost_full = ((IData)(vlSelf->full) | 
                           (4U <= (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin) 
                                            - (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync)))));
}

VL_INLINE_OPT void Vdual_clock_fifo___024root___nba_sequent__TOP__5(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__dual_clock_fifo__DOT__mem__v0) {
        vlSelf->dual_clock_fifo__DOT__mem[vlSelf->__Vdlyvdim0__dual_clock_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__dual_clock_fifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vdual_clock_fifo___024root___nba_sequent__TOP__6(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->empty = ((IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray) 
                     == (IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2));
    vlSelf->dual_clock_fifo__DOT__rd_ptr_bin = vlSelf->__Vdly__dual_clock_fifo__DOT__rd_ptr_bin;
    vlSelf->fifo_count = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin_rd_sync) 
                                   - (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin)));
    vlSelf->almost_empty = ((IData)(vlSelf->empty) 
                            | (4U >= (IData)(vlSelf->fifo_count)));
}

void Vdual_clock_fifo___024root___eval_nba(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_clock_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_clock_fifo___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_clock_fifo___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_clock_fifo___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_clock_fifo___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_clock_fifo___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdual_clock_fifo___024root___nba_sequent__TOP__6(vlSelf);
    }
}

void Vdual_clock_fifo___024root___eval_triggers__act(Vdual_clock_fifo___024root* vlSelf);

bool Vdual_clock_fifo___024root___eval_phase__act(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdual_clock_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdual_clock_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdual_clock_fifo___024root___eval_phase__nba(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdual_clock_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_clock_fifo___024root___dump_triggers__nba(Vdual_clock_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_clock_fifo___024root___dump_triggers__act(Vdual_clock_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vdual_clock_fifo___024root___eval(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdual_clock_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dual_clock_fifo.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdual_clock_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dual_clock_fifo.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdual_clock_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdual_clock_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdual_clock_fifo___024root___eval_debug_assertions(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->wr_clk & 0xfeU))) {
        Verilated::overWidthError("wr_clk");}
    if (VL_UNLIKELY((vlSelf->wr_rst_n & 0xfeU))) {
        Verilated::overWidthError("wr_rst_n");}
    if (VL_UNLIKELY((vlSelf->wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((vlSelf->rd_clk & 0xfeU))) {
        Verilated::overWidthError("rd_clk");}
    if (VL_UNLIKELY((vlSelf->rd_rst_n & 0xfeU))) {
        Verilated::overWidthError("rd_rst_n");}
    if (VL_UNLIKELY((vlSelf->rd_en & 0xfeU))) {
        Verilated::overWidthError("rd_en");}
}
#endif  // VL_DEBUG
