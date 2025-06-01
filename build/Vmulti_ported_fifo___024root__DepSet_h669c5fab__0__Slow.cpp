// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_ported_fifo.h for the primary calling header

#include "Vmulti_ported_fifo__pch.h"
#include "Vmulti_ported_fifo___024root.h"

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_static(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_static\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_initial__TOP(Vmulti_ported_fifo___024root* vlSelf);
VL_ATTR_COLD void Vmulti_ported_fifo___024root____Vm_traceActivitySetAll(Vmulti_ported_fifo___024root* vlSelf);

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_initial(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_initial\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmulti_ported_fifo___024root___eval_initial__TOP(vlSelf);
    Vmulti_ported_fifo___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_initial__TOP(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_initial__TOP\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.multi_ported_fifo__DOT__i = 2U;
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_final(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_final\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__stl(Vmulti_ported_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmulti_ported_fifo___024root___eval_phase__stl(Vmulti_ported_fifo___024root* vlSelf);

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_settle(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_settle\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmulti_ported_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/multi_ported_fifo.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmulti_ported_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__stl(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___dump_triggers__stl\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vmulti_ported_fifo___024root___stl_sequent__TOP__0(Vmulti_ported_fifo___024root* vlSelf);

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_stl(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_stl\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmulti_ported_fifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root___stl_sequent__TOP__0(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___stl_sequent__TOP__0\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.almost_full = (0xeU <= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count));
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count));
    vlSelfRef.almost_empty = (2U >= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count));
    vlSelfRef.data_count = vlSelfRef.multi_ported_fifo__DOT__fifo_count;
    vlSelfRef.rd_data = (((QData)((IData)(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs
                                          [1U])) << 0x20U) 
                         | (QData)((IData)(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs
                                           [0U])));
    vlSelfRef.rd_valid = vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs;
    vlSelfRef.multi_ported_fifo__DOT__rd_count = 0U;
    if (((IData)(vlSelfRef.rd_en) & (0U < (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count)))) {
        vlSelfRef.multi_ported_fifo__DOT__rd_count 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count)));
    }
    if ((((IData)(vlSelfRef.rd_en) >> 1U) & ((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                                             > (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count)))) {
        vlSelfRef.multi_ported_fifo__DOT__rd_count 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count)));
    }
    vlSelfRef.full = (0xfU <= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count));
    vlSelfRef.wr_ready = ((((~ (IData)(vlSelfRef.full)) 
                            & (0x10U > ((IData)(1U) 
                                        + (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count)))) 
                           << 1U) | ((~ (IData)(vlSelfRef.full)) 
                                     & (0x10U > (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count))));
    vlSelfRef.multi_ported_fifo__DOT__wr_count = 0U;
    if ((((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full))) 
         & (0x10U > (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count)))) {
        vlSelfRef.multi_ported_fifo__DOT__wr_count 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count)));
    }
    if (((((IData)(vlSelfRef.wr_en) >> 1U) & (~ (IData)(vlSelfRef.full))) 
         & (0x10U > ((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                     + (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count))))) {
        vlSelfRef.multi_ported_fifo__DOT__wr_count 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count)));
    }
    vlSelfRef.multi_ported_fifo__DOT__next_count = 
        (0x1fU & (((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                   + (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count)) 
                  - (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count)));
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_triggers__stl(Vmulti_ported_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vmulti_ported_fifo___024root___eval_phase__stl(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_phase__stl\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmulti_ported_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmulti_ported_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__ico(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___dump_triggers__ico\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__act(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___dump_triggers__act\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__nba(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___dump_triggers__nba\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vmulti_ported_fifo___024root____Vm_traceActivitySetAll(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root____Vm_traceActivitySetAll\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root___ctor_var_reset(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___ctor_var_reset\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(2);
    vlSelf->wr_data = VL_RAND_RESET_Q(64);
    vlSelf->wr_ready = VL_RAND_RESET_I(2);
    vlSelf->rd_en = VL_RAND_RESET_I(2);
    vlSelf->rd_data = VL_RAND_RESET_Q(64);
    vlSelf->rd_valid = VL_RAND_RESET_I(2);
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->almost_full = VL_RAND_RESET_I(1);
    vlSelf->empty = VL_RAND_RESET_I(1);
    vlSelf->almost_empty = VL_RAND_RESET_I(1);
    vlSelf->data_count = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->multi_ported_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->multi_ported_fifo__DOT__wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->multi_ported_fifo__DOT__rd_ptr = VL_RAND_RESET_I(5);
    vlSelf->multi_ported_fifo__DOT__fifo_count = VL_RAND_RESET_I(5);
    vlSelf->multi_ported_fifo__DOT__current_wr_addr = VL_RAND_RESET_I(4);
    vlSelf->multi_ported_fifo__DOT__write_count = VL_RAND_RESET_I(5);
    vlSelf->multi_ported_fifo__DOT__current_rd_addr = VL_RAND_RESET_I(4);
    vlSelf->multi_ported_fifo__DOT__read_count = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->multi_ported_fifo__DOT__rd_data_regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->multi_ported_fifo__DOT__rd_valid_regs = VL_RAND_RESET_I(2);
    vlSelf->multi_ported_fifo__DOT__wr_count = VL_RAND_RESET_I(5);
    vlSelf->multi_ported_fifo__DOT__rd_count = VL_RAND_RESET_I(5);
    vlSelf->multi_ported_fifo__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->multi_ported_fifo__DOT__wp = VL_RAND_RESET_I(32);
    vlSelf->multi_ported_fifo__DOT__next_count = VL_RAND_RESET_I(5);
    vlSelf->multi_ported_fifo__DOT__get_wr_data__Vstatic__start_bit = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__multi_ported_fifo__DOT__wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
