// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipelined_fifo.h for the primary calling header

#include "Vpipelined_fifo__pch.h"
#include "Vpipelined_fifo___024root.h"

VL_ATTR_COLD void Vpipelined_fifo___024root___eval_static(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_static\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vpipelined_fifo___024root___eval_initial(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_initial\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpipelined_fifo___024root___eval_final(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_final\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipelined_fifo___024root___dump_triggers__stl(Vpipelined_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpipelined_fifo___024root___eval_phase__stl(Vpipelined_fifo___024root* vlSelf);

VL_ATTR_COLD void Vpipelined_fifo___024root___eval_settle(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_settle\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vpipelined_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/pipelined_fifo.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpipelined_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipelined_fifo___024root___dump_triggers__stl(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___dump_triggers__stl\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipelined_fifo___024root___stl_sequent__TOP__0(Vpipelined_fifo___024root* vlSelf);
VL_ATTR_COLD void Vpipelined_fifo___024root____Vm_traceActivitySetAll(Vpipelined_fifo___024root* vlSelf);

VL_ATTR_COLD void Vpipelined_fifo___024root___eval_stl(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_stl\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipelined_fifo___024root___stl_sequent__TOP__0(vlSelf);
        Vpipelined_fifo___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vpipelined_fifo___024root___stl_sequent__TOP__0(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___stl_sequent__TOP__0\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_data = ((2U & (IData)(vlSelfRef.pipelined_fifo__DOT__rd_data_valid))
                          ? vlSelfRef.pipelined_fifo__DOT__rd_data_pipe
                         [1U] : 0U);
    vlSelfRef.pipelined_fifo__DOT__raw_count = (0x1fU 
                                                & ((IData)(vlSelfRef.pipelined_fifo__DOT__wr_ptr) 
                                                   - (IData)(vlSelfRef.pipelined_fifo__DOT__rd_ptr)));
    vlSelfRef.full = (0xeU <= (IData)(vlSelfRef.pipelined_fifo__DOT__raw_count));
    vlSelfRef.almost_full = (0xcU <= (IData)(vlSelfRef.pipelined_fifo__DOT__raw_count));
    vlSelfRef.empty = ((0U == (IData)(vlSelfRef.pipelined_fifo__DOT__raw_count)) 
                       & (0U == (IData)(vlSelfRef.pipelined_fifo__DOT__pipeline_count)));
    vlSelfRef.almost_empty = ((4U >= (IData)(vlSelfRef.pipelined_fifo__DOT__raw_count)) 
                              & (1U >= (IData)(vlSelfRef.pipelined_fifo__DOT__pipeline_count)));
    vlSelfRef.data_count = (0x1fU & ((IData)(vlSelfRef.pipelined_fifo__DOT__raw_count) 
                                     + (IData)(vlSelfRef.pipelined_fifo__DOT__pipeline_count)));
}

VL_ATTR_COLD void Vpipelined_fifo___024root___eval_triggers__stl(Vpipelined_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vpipelined_fifo___024root___eval_phase__stl(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_phase__stl\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpipelined_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpipelined_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipelined_fifo___024root___dump_triggers__act(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___dump_triggers__act\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipelined_fifo___024root___dump_triggers__nba(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___dump_triggers__nba\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipelined_fifo___024root____Vm_traceActivitySetAll(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root____Vm_traceActivitySetAll\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vpipelined_fifo___024root___ctor_var_reset(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___ctor_var_reset\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->wr_data = VL_RAND_RESET_I(32);
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->almost_full = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->rd_data = VL_RAND_RESET_I(32);
    vlSelf->empty = VL_RAND_RESET_I(1);
    vlSelf->almost_empty = VL_RAND_RESET_I(1);
    vlSelf->data_count = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->pipelined_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipelined_fifo__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pipelined_fifo__DOT__wr_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->pipelined_fifo__DOT__wr_ptr_pipe[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->pipelined_fifo__DOT__wr_data_pipe[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipelined_fifo__DOT__wr_en_pipe = VL_RAND_RESET_I(2);
    vlSelf->pipelined_fifo__DOT__rd_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->pipelined_fifo__DOT__rd_ptr_pipe[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->pipelined_fifo__DOT__rd_data_pipe[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipelined_fifo__DOT__rd_en_pipe = VL_RAND_RESET_I(2);
    vlSelf->pipelined_fifo__DOT__rd_data_valid = VL_RAND_RESET_I(2);
    vlSelf->pipelined_fifo__DOT__pipeline_count = VL_RAND_RESET_I(5);
    vlSelf->pipelined_fifo__DOT__raw_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__pipelined_fifo__DOT__wr_en_pipe = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__pipelined_fifo__DOT__rd_en_pipe = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v0 = 0;
    vlSelf->__VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v1 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v2 = 0;
    vlSelf->__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v3 = 0;
    vlSelf->__VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v0 = 0;
    vlSelf->__VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v1 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v2 = 0;
    vlSelf->__VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v0 = 0;
    vlSelf->__VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v1 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v2 = 0;
    vlSelf->__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v3 = 0;
    vlSelf->__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v0 = 0;
    vlSelf->__VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v2 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v2 = 0;
    vlSelf->__VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v3 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
