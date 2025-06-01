// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_fifo.h for the primary calling header

#include "Vcache_fifo__pch.h"
#include "Vcache_fifo___024root.h"

void Vcache_fifo___024root___eval_act(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_act\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcache_fifo___024root___nba_sequent__TOP__0(Vcache_fifo___024root* vlSelf);

void Vcache_fifo___024root___eval_nba(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_nba\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcache_fifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vcache_fifo___024root___nba_sequent__TOP__0(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___nba_sequent__TOP__0\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cache_fifo__DOT____VdfgRegularize_h22d21639_1_0;
    cache_fifo__DOT____VdfgRegularize_h22d21639_1_0 = 0;
    IData/*31:0*/ __Vdly__cache_hits;
    __Vdly__cache_hits = 0;
    IData/*31:0*/ __Vdly__cache_misses;
    __Vdly__cache_misses = 0;
    CData/*1:0*/ __Vdly__cache_fifo__DOT__lru_counters0;
    __Vdly__cache_fifo__DOT__lru_counters0 = 0;
    CData/*1:0*/ __Vdly__cache_fifo__DOT__lru_counters1;
    __Vdly__cache_fifo__DOT__lru_counters1 = 0;
    CData/*1:0*/ __Vdly__cache_fifo__DOT__lru_counters2;
    __Vdly__cache_fifo__DOT__lru_counters2 = 0;
    CData/*1:0*/ __Vdly__cache_fifo__DOT__lru_counters3;
    __Vdly__cache_fifo__DOT__lru_counters3 = 0;
    IData/*31:0*/ __VdlyVal__cache_fifo__DOT__mem__v0;
    __VdlyVal__cache_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__cache_fifo__DOT__mem__v0;
    __VdlyDim0__cache_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_fifo__DOT__mem__v0;
    __VdlySet__cache_fifo__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cache_fifo__DOT__tag_mem__v0;
    __VdlyVal__cache_fifo__DOT__tag_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__cache_fifo__DOT__tag_mem__v0;
    __VdlyDim0__cache_fifo__DOT__tag_mem__v0 = 0;
    // Body
    __VdlySet__cache_fifo__DOT__mem__v0 = 0U;
    __Vdly__cache_fifo__DOT__lru_counters0 = vlSelfRef.cache_fifo__DOT__lru_counters0;
    __Vdly__cache_fifo__DOT__lru_counters1 = vlSelfRef.cache_fifo__DOT__lru_counters1;
    __Vdly__cache_fifo__DOT__lru_counters2 = vlSelfRef.cache_fifo__DOT__lru_counters2;
    __Vdly__cache_fifo__DOT__lru_counters3 = vlSelfRef.cache_fifo__DOT__lru_counters3;
    __Vdly__cache_misses = vlSelfRef.cache_misses;
    __Vdly__cache_hits = vlSelfRef.cache_hits;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full)))) {
            __VdlyVal__cache_fifo__DOT__mem__v0 = vlSelfRef.wr_data;
            __VdlyDim0__cache_fifo__DOT__mem__v0 = 
                (0xfU & (IData)(vlSelfRef.cache_fifo__DOT__wr_ptr));
            __VdlySet__cache_fifo__DOT__mem__v0 = 1U;
            __VdlyVal__cache_fifo__DOT__tag_mem__v0 
                = vlSelfRef.wr_tag;
            __VdlyDim0__cache_fifo__DOT__tag_mem__v0 
                = (0xfU & (IData)(vlSelfRef.cache_fifo__DOT__wr_ptr));
            vlSelfRef.cache_fifo__DOT__wr_ptr = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.cache_fifo__DOT__wr_ptr)));
        }
        if (vlSelfRef.clear_stats) {
            __Vdly__cache_hits = 0U;
            __Vdly__cache_misses = 0U;
        }
        if (vlSelfRef.rd_en) {
            vlSelfRef.cache_fifo__DOT__matched_tag = 0U;
            vlSelfRef.cache_fifo__DOT__hit_index = 0U;
            vlSelfRef.rd_hit = 0U;
            if (((IData)(vlSelfRef.cache_fifo__DOT__cache_valid0) 
                 & ((IData)(vlSelfRef.cache_fifo__DOT__cache_tags0) 
                    == (IData)(vlSelfRef.rd_tag)))) {
                vlSelfRef.cache_fifo__DOT__matched_tag 
                    = (1U | (IData)(vlSelfRef.cache_fifo__DOT__matched_tag));
                vlSelfRef.cache_fifo__DOT__hit_index = 0U;
            }
            if (((IData)(vlSelfRef.cache_fifo__DOT__cache_valid1) 
                 & ((IData)(vlSelfRef.cache_fifo__DOT__cache_tags1) 
                    == (IData)(vlSelfRef.rd_tag)))) {
                vlSelfRef.cache_fifo__DOT__matched_tag 
                    = (2U | (IData)(vlSelfRef.cache_fifo__DOT__matched_tag));
                vlSelfRef.cache_fifo__DOT__hit_index = 1U;
            }
            if (((IData)(vlSelfRef.cache_fifo__DOT__cache_valid2) 
                 & ((IData)(vlSelfRef.cache_fifo__DOT__cache_tags2) 
                    == (IData)(vlSelfRef.rd_tag)))) {
                vlSelfRef.cache_fifo__DOT__matched_tag 
                    = (4U | (IData)(vlSelfRef.cache_fifo__DOT__matched_tag));
                vlSelfRef.cache_fifo__DOT__hit_index = 2U;
            }
            if (((IData)(vlSelfRef.cache_fifo__DOT__cache_valid3) 
                 & ((IData)(vlSelfRef.cache_fifo__DOT__cache_tags3) 
                    == (IData)(vlSelfRef.rd_tag)))) {
                vlSelfRef.cache_fifo__DOT__matched_tag 
                    = (8U | (IData)(vlSelfRef.cache_fifo__DOT__matched_tag));
                vlSelfRef.cache_fifo__DOT__hit_index = 3U;
            }
            if ((0U != (IData)(vlSelfRef.cache_fifo__DOT__matched_tag))) {
                __Vdly__cache_hits = ((IData)(1U) + vlSelfRef.cache_hits);
                if ((0U == (IData)(vlSelfRef.cache_fifo__DOT__hit_index))) {
                    vlSelfRef.rd_data = vlSelfRef.cache_fifo__DOT__cache_data0;
                    __Vdly__cache_fifo__DOT__lru_counters0 = 3U;
                } else {
                    if ((1U == (IData)(vlSelfRef.cache_fifo__DOT__hit_index))) {
                        vlSelfRef.rd_data = vlSelfRef.cache_fifo__DOT__cache_data1;
                    } else if ((2U == (IData)(vlSelfRef.cache_fifo__DOT__hit_index))) {
                        vlSelfRef.rd_data = vlSelfRef.cache_fifo__DOT__cache_data2;
                    } else if ((3U == (IData)(vlSelfRef.cache_fifo__DOT__hit_index))) {
                        vlSelfRef.rd_data = vlSelfRef.cache_fifo__DOT__cache_data3;
                    }
                    if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters0))) {
                        __Vdly__cache_fifo__DOT__lru_counters0 
                            = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters0) 
                                     - (IData)(1U)));
                    }
                }
                vlSelfRef.rd_hit = 1U;
                if ((1U == (IData)(vlSelfRef.cache_fifo__DOT__hit_index))) {
                    __Vdly__cache_fifo__DOT__lru_counters1 = 3U;
                } else if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters1))) {
                    __Vdly__cache_fifo__DOT__lru_counters1 
                        = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters1) 
                                 - (IData)(1U)));
                }
                if ((2U == (IData)(vlSelfRef.cache_fifo__DOT__hit_index))) {
                    __Vdly__cache_fifo__DOT__lru_counters2 = 3U;
                } else if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters2))) {
                    __Vdly__cache_fifo__DOT__lru_counters2 
                        = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters2) 
                                 - (IData)(1U)));
                }
                if ((3U == (IData)(vlSelfRef.cache_fifo__DOT__hit_index))) {
                    __Vdly__cache_fifo__DOT__lru_counters3 = 3U;
                } else if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters3))) {
                    __Vdly__cache_fifo__DOT__lru_counters3 
                        = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters3) 
                                 - (IData)(1U)));
                }
            } else {
                __Vdly__cache_misses = ((IData)(1U) 
                                        + vlSelfRef.cache_misses);
                vlSelfRef.cache_fifo__DOT__search_idx = 0U;
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [0U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 0U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [1U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 1U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [2U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 2U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [3U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 3U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [4U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 4U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [5U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 5U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [6U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 6U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [7U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 7U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [8U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 8U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [9U] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 9U;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [0xaU] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 0xaU;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [0xbU] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 0xbU;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [0xcU] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 0xcU;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [0xdU] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 0xdU;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [0xeU] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 0xeU;
                }
                if ((vlSelfRef.cache_fifo__DOT__tag_mem
                     [0xfU] == (IData)(vlSelfRef.rd_tag))) {
                    vlSelfRef.cache_fifo__DOT__search_idx = 0xfU;
                }
                vlSelfRef.rd_data = vlSelfRef.cache_fifo__DOT__mem
                    [vlSelfRef.cache_fifo__DOT__search_idx];
                vlSelfRef.cache_fifo__DOT__cache_idx_reg 
                    = ((IData)(vlSelfRef.cache_fifo__DOT__cache_valid0)
                        ? ((IData)(vlSelfRef.cache_fifo__DOT__cache_valid1)
                            ? ((IData)(vlSelfRef.cache_fifo__DOT__cache_valid2)
                                ? ((IData)(vlSelfRef.cache_fifo__DOT__cache_valid3)
                                    ? 0U : 3U) : 2U)
                            : 1U) : 0U);
                if ((0U == (IData)(vlSelfRef.cache_fifo__DOT__cache_idx_reg))) {
                    vlSelfRef.cache_fifo__DOT__cache_valid0 = 1U;
                    vlSelfRef.cache_fifo__DOT__cache_tags0 
                        = vlSelfRef.rd_tag;
                    vlSelfRef.cache_fifo__DOT__cache_data0 
                        = vlSelfRef.cache_fifo__DOT__mem
                        [vlSelfRef.cache_fifo__DOT__search_idx];
                    __Vdly__cache_fifo__DOT__lru_counters0 = 3U;
                } else {
                    if ((1U == (IData)(vlSelfRef.cache_fifo__DOT__cache_idx_reg))) {
                        vlSelfRef.cache_fifo__DOT__cache_valid1 = 1U;
                        vlSelfRef.cache_fifo__DOT__cache_tags1 
                            = vlSelfRef.rd_tag;
                        vlSelfRef.cache_fifo__DOT__cache_data1 
                            = vlSelfRef.cache_fifo__DOT__mem
                            [vlSelfRef.cache_fifo__DOT__search_idx];
                    } else if ((2U == (IData)(vlSelfRef.cache_fifo__DOT__cache_idx_reg))) {
                        vlSelfRef.cache_fifo__DOT__cache_valid2 = 1U;
                        vlSelfRef.cache_fifo__DOT__cache_tags2 
                            = vlSelfRef.rd_tag;
                        vlSelfRef.cache_fifo__DOT__cache_data2 
                            = vlSelfRef.cache_fifo__DOT__mem
                            [vlSelfRef.cache_fifo__DOT__search_idx];
                    } else if ((3U == (IData)(vlSelfRef.cache_fifo__DOT__cache_idx_reg))) {
                        vlSelfRef.cache_fifo__DOT__cache_valid3 = 1U;
                        vlSelfRef.cache_fifo__DOT__cache_tags3 
                            = vlSelfRef.rd_tag;
                        vlSelfRef.cache_fifo__DOT__cache_data3 
                            = vlSelfRef.cache_fifo__DOT__mem
                            [vlSelfRef.cache_fifo__DOT__search_idx];
                    }
                    if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters0))) {
                        __Vdly__cache_fifo__DOT__lru_counters0 
                            = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters0) 
                                     - (IData)(1U)));
                    }
                }
                if ((1U == (IData)(vlSelfRef.cache_fifo__DOT__cache_idx_reg))) {
                    __Vdly__cache_fifo__DOT__lru_counters1 = 3U;
                } else if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters1))) {
                    __Vdly__cache_fifo__DOT__lru_counters1 
                        = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters1) 
                                 - (IData)(1U)));
                }
                if ((2U == (IData)(vlSelfRef.cache_fifo__DOT__cache_idx_reg))) {
                    __Vdly__cache_fifo__DOT__lru_counters2 = 3U;
                } else if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters2))) {
                    __Vdly__cache_fifo__DOT__lru_counters2 
                        = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters2) 
                                 - (IData)(1U)));
                }
                if ((3U == (IData)(vlSelfRef.cache_fifo__DOT__cache_idx_reg))) {
                    __Vdly__cache_fifo__DOT__lru_counters3 = 3U;
                } else if ((0U < (IData)(vlSelfRef.cache_fifo__DOT__lru_counters3))) {
                    __Vdly__cache_fifo__DOT__lru_counters3 
                        = (3U & ((IData)(vlSelfRef.cache_fifo__DOT__lru_counters3) 
                                 - (IData)(1U)));
                }
            }
        }
    } else {
        vlSelfRef.cache_fifo__DOT__wr_ptr = 0U;
        __Vdly__cache_hits = 0U;
        __Vdly__cache_misses = 0U;
        vlSelfRef.rd_hit = 0U;
        vlSelfRef.cache_fifo__DOT__cache_data0 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_data1 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_data2 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_data3 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_tags0 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_tags1 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_tags2 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_tags3 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_valid0 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_valid1 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_valid2 = 0U;
        vlSelfRef.cache_fifo__DOT__cache_valid3 = 0U;
        __Vdly__cache_fifo__DOT__lru_counters0 = 0U;
        __Vdly__cache_fifo__DOT__lru_counters1 = 0U;
        __Vdly__cache_fifo__DOT__lru_counters2 = 0U;
        __Vdly__cache_fifo__DOT__lru_counters3 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.cache_fifo__DOT__fifo_replacement_ptr = 0U;
        vlSelfRef.cache_fifo__DOT__rd_ptr = 0U;
    }
    vlSelfRef.cache_fifo__DOT__rd_valid_reg = ((IData)(vlSelfRef.rst_n) 
                                               && (IData)(vlSelfRef.rd_en));
    vlSelfRef.cache_fifo__DOT__lru_counters0 = __Vdly__cache_fifo__DOT__lru_counters0;
    vlSelfRef.cache_fifo__DOT__lru_counters1 = __Vdly__cache_fifo__DOT__lru_counters1;
    vlSelfRef.cache_fifo__DOT__lru_counters2 = __Vdly__cache_fifo__DOT__lru_counters2;
    vlSelfRef.cache_fifo__DOT__lru_counters3 = __Vdly__cache_fifo__DOT__lru_counters3;
    if (__VdlySet__cache_fifo__DOT__mem__v0) {
        vlSelfRef.cache_fifo__DOT__tag_mem[__VdlyDim0__cache_fifo__DOT__tag_mem__v0] 
            = __VdlyVal__cache_fifo__DOT__tag_mem__v0;
        vlSelfRef.cache_fifo__DOT__mem[__VdlyDim0__cache_fifo__DOT__mem__v0] 
            = __VdlyVal__cache_fifo__DOT__mem__v0;
    }
    vlSelfRef.cache_misses = __Vdly__cache_misses;
    vlSelfRef.cache_hits = __Vdly__cache_hits;
    vlSelfRef.rd_valid = vlSelfRef.cache_fifo__DOT__rd_valid_reg;
    vlSelfRef.data_count = (0x1fU & ((IData)(vlSelfRef.cache_fifo__DOT__wr_ptr) 
                                     - (IData)(vlSelfRef.cache_fifo__DOT__rd_ptr)));
    cache_fifo__DOT____VdfgRegularize_h22d21639_1_0 
        = (vlSelfRef.cache_hits + vlSelfRef.cache_misses);
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.data_count));
    vlSelfRef.full = (0x10U == (IData)(vlSelfRef.data_count));
    vlSelfRef.hit_ratio = ((0U == cache_fifo__DOT____VdfgRegularize_h22d21639_1_0)
                            ? 0U : VL_DIV_III(32, ((IData)(0x2710U) 
                                                   * vlSelfRef.cache_hits), cache_fifo__DOT____VdfgRegularize_h22d21639_1_0));
    vlSelfRef.wr_ready = (1U & (~ (IData)(vlSelfRef.full)));
}

void Vcache_fifo___024root___eval_triggers__act(Vcache_fifo___024root* vlSelf);

bool Vcache_fifo___024root___eval_phase__act(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_phase__act\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcache_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcache_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcache_fifo___024root___eval_phase__nba(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_phase__nba\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcache_fifo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_fifo___024root___dump_triggers__nba(Vcache_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_fifo___024root___dump_triggers__act(Vcache_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vcache_fifo___024root___eval(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcache_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/cache_fifo.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcache_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/fifos/cache_fifo.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcache_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcache_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcache_fifo___024root___eval_debug_assertions(Vcache_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root___eval_debug_assertions\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if (VL_UNLIKELY(((vlSelfRef.clear_stats & 0xfeU)))) {
        Verilated::overWidthError("clear_stats");}
}
#endif  // VL_DEBUG
