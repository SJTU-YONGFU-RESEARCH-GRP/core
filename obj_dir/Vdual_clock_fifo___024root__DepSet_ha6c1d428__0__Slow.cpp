// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_clock_fifo.h for the primary calling header

#include "Vdual_clock_fifo__pch.h"
#include "Vdual_clock_fifo___024root.h"

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_static(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_initial__TOP(Vdual_clock_fifo___024root* vlSelf);

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_initial(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_initial\n"); );
    // Body
    Vdual_clock_fifo___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__rd_clk__0 = vlSelf->rd_clk;
    vlSelf->__Vtrigprevexpr___TOP__rd_rst_n__0 = vlSelf->rd_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__wr_clk__0 = vlSelf->wr_clk;
    vlSelf->__Vtrigprevexpr___TOP__wr_rst_n__0 = vlSelf->wr_rst_n;
}

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_initial__TOP(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__i = 5U;
}

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_final(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_clock_fifo___024root___dump_triggers__stl(Vdual_clock_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdual_clock_fifo___024root___eval_phase__stl(Vdual_clock_fifo___024root* vlSelf);

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_settle(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vdual_clock_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dual_clock_fifo.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdual_clock_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_clock_fifo___024root___dump_triggers__stl(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdual_clock_fifo___024root___stl_sequent__TOP__0(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__Vfuncout;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__2__gray = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__Vfuncout;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray;
    __Vfunc_dual_clock_fifo__DOT__gray_to_bin__3__gray = 0;
    // Body
    vlSelf->rd_data = vlSelf->dual_clock_fifo__DOT__rd_data_reg;
    vlSelf->empty = ((IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray) 
                     == (IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2));
    vlSelf->full = (((1U & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray) 
                            >> 4U)) != (1U & ((IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2) 
                                              >> 4U))) 
                    & ((0xfU & (IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray)) 
                       == (0xfU & (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2))));
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
    vlSelf->almost_full = ((IData)(vlSelf->full) | 
                           (4U <= (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin) 
                                            - (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync)))));
    vlSelf->fifo_count = (0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin_rd_sync) 
                                   - (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin)));
    vlSelf->almost_empty = ((IData)(vlSelf->empty) 
                            | (4U >= (IData)(vlSelf->fifo_count)));
}

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_stl(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdual_clock_fifo___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vdual_clock_fifo___024root___eval_triggers__stl(Vdual_clock_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vdual_clock_fifo___024root___eval_phase__stl(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdual_clock_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdual_clock_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_clock_fifo___024root___dump_triggers__act(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge rd_clk or negedge rd_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge wr_clk or negedge wr_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge wr_clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge rd_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_clock_fifo___024root___dump_triggers__nba(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge rd_clk or negedge rd_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge wr_clk or negedge wr_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge wr_clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge rd_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdual_clock_fifo___024root___ctor_var_reset(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->wr_clk = VL_RAND_RESET_I(1);
    vlSelf->wr_rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->wr_data = VL_RAND_RESET_I(8);
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->almost_full = VL_RAND_RESET_I(1);
    vlSelf->rd_clk = VL_RAND_RESET_I(1);
    vlSelf->rd_rst_n = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->rd_data = VL_RAND_RESET_I(8);
    vlSelf->empty = VL_RAND_RESET_I(1);
    vlSelf->almost_empty = VL_RAND_RESET_I(1);
    vlSelf->fifo_count = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dual_clock_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->dual_clock_fifo__DOT__wr_ptr_bin = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__rd_ptr_bin = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__wr_ptr_gray = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__rd_ptr_gray = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync1 = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2 = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync1 = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2 = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__rd_data_reg = VL_RAND_RESET_I(8);
    vlSelf->dual_clock_fifo__DOT__wr_ptr_bin_rd_sync = VL_RAND_RESET_I(5);
    vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__dual_clock_fifo__DOT__rd_ptr_bin = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__dual_clock_fifo__DOT__wr_ptr_bin = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvdim0__dual_clock_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__dual_clock_fifo__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dual_clock_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rd_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rd_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__wr_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__wr_rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
