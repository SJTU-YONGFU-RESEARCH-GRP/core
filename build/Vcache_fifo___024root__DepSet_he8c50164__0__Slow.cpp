// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_fifo.h for the primary calling header

#include "Vcache_fifo__pch.h"
#include "Vcache_fifo___024root.h"

VL_ATTR_COLD void Vcache_fifo___024root___eval_static(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_static\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vcache_fifo___024root___eval_initial(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_initial\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcache_fifo___024root___eval_final(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_final\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_fifo___024root___dump_triggers__stl(Vcache_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcache_fifo___024root___eval_phase__stl(Vcache_fifo___024root* vlSelf);

VL_ATTR_COLD void Vcache_fifo___024root___eval_settle(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_settle\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcache_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/cache_fifo.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcache_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_fifo___024root___dump_triggers__stl(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___dump_triggers__stl\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcache_fifo___024root___stl_sequent__TOP__0(Vcache_fifo___024root* vlSelf);

VL_ATTR_COLD void Vcache_fifo___024root___eval_stl(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_stl\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcache_fifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcache_fifo___024root___stl_sequent__TOP__0(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___stl_sequent__TOP__0\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cache_fifo__DOT____VdfgRegularize_h22d21639_1_0;
    cache_fifo__DOT____VdfgRegularize_h22d21639_1_0 = 0;
    // Body
    vlSelfRef.rd_valid = vlSelfRef.cache_fifo__DOT__rd_valid_reg;
    cache_fifo__DOT____VdfgRegularize_h22d21639_1_0 
        = (vlSelfRef.cache_hits + vlSelfRef.cache_misses);
    vlSelfRef.data_count = (0x1fU & ((IData)(vlSelfRef.cache_fifo__DOT__wr_ptr) 
                                     - (IData)(vlSelfRef.cache_fifo__DOT__rd_ptr)));
    vlSelfRef.hit_ratio = ((0U == cache_fifo__DOT____VdfgRegularize_h22d21639_1_0)
                            ? 0U : VL_DIV_III(32, ((IData)(0x2710U) 
                                                   * vlSelfRef.cache_hits), cache_fifo__DOT____VdfgRegularize_h22d21639_1_0));
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.data_count));
    vlSelfRef.full = (0x10U == (IData)(vlSelfRef.data_count));
    vlSelfRef.wr_ready = (1U & (~ (IData)(vlSelfRef.full)));
}

VL_ATTR_COLD void Vcache_fifo___024root___eval_triggers__stl(Vcache_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vcache_fifo___024root___eval_phase__stl(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_phase__stl\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcache_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcache_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_fifo___024root___dump_triggers__act(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___dump_triggers__act\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcache_fifo___024root___dump_triggers__nba(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___dump_triggers__nba\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcache_fifo___024root___ctor_var_reset(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___ctor_var_reset\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->wr_data = VL_RAND_RESET_I(32);
    vlSelf->wr_tag = VL_RAND_RESET_I(8);
    vlSelf->wr_ready = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->rd_tag = VL_RAND_RESET_I(8);
    vlSelf->rd_data = VL_RAND_RESET_I(32);
    vlSelf->rd_valid = VL_RAND_RESET_I(1);
    vlSelf->rd_hit = VL_RAND_RESET_I(1);
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->empty = VL_RAND_RESET_I(1);
    vlSelf->data_count = VL_RAND_RESET_I(5);
    vlSelf->cache_hits = VL_RAND_RESET_I(32);
    vlSelf->cache_misses = VL_RAND_RESET_I(32);
    vlSelf->hit_ratio = VL_RAND_RESET_I(32);
    vlSelf->clear_stats = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->cache_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->cache_fifo__DOT__tag_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cache_fifo__DOT__wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->cache_fifo__DOT__rd_ptr = VL_RAND_RESET_I(5);
    vlSelf->cache_fifo__DOT__search_idx = VL_RAND_RESET_I(4);
    vlSelf->cache_fifo__DOT__fifo_replacement_ptr = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__cache_data0 = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__cache_data1 = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__cache_data2 = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__cache_data3 = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__cache_tags0 = VL_RAND_RESET_I(8);
    vlSelf->cache_fifo__DOT__cache_tags1 = VL_RAND_RESET_I(8);
    vlSelf->cache_fifo__DOT__cache_tags2 = VL_RAND_RESET_I(8);
    vlSelf->cache_fifo__DOT__cache_tags3 = VL_RAND_RESET_I(8);
    vlSelf->cache_fifo__DOT__cache_valid0 = VL_RAND_RESET_I(1);
    vlSelf->cache_fifo__DOT__cache_valid1 = VL_RAND_RESET_I(1);
    vlSelf->cache_fifo__DOT__cache_valid2 = VL_RAND_RESET_I(1);
    vlSelf->cache_fifo__DOT__cache_valid3 = VL_RAND_RESET_I(1);
    vlSelf->cache_fifo__DOT__lru_counters0 = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__lru_counters1 = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__lru_counters2 = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__lru_counters3 = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__cache_idx_reg = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__matched_tag = VL_RAND_RESET_I(4);
    vlSelf->cache_fifo__DOT__hit_index = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__rd_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->cache_fifo__DOT__find_lru_index__Vstatic__j = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__find_lru_index__Vstatic__min_idx = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__find_lru_index__Vstatic__min_counter = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__find_lru_index__Vstatic__counter_i = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__find_cache_index__Vstatic__j = VL_RAND_RESET_I(32);
    vlSelf->cache_fifo__DOT__find_cache_index__Vstatic__idx = VL_RAND_RESET_I(2);
    vlSelf->cache_fifo__DOT__find_cache_index__Vstatic__found_empty = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
