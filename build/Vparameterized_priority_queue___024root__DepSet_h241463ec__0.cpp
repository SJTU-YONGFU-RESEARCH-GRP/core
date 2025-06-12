// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_priority_queue.h for the primary calling header

#include "Vparameterized_priority_queue__pch.h"
#include "Vparameterized_priority_queue___024root.h"

void Vparameterized_priority_queue___024root___eval_act(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_act\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vparameterized_priority_queue___024root___nba_sequent__TOP__0(Vparameterized_priority_queue___024root* vlSelf);

void Vparameterized_priority_queue___024root___eval_nba(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_nba\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vparameterized_priority_queue___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vparameterized_priority_queue___024root___nba_sequent__TOP__0(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___nba_sequent__TOP__0\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__parameterized_priority_queue__DOT__count;
    __Vdly__parameterized_priority_queue__DOT__count = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v0;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v0 = 0;
    CData/*0:0*/ __VdlySet__parameterized_priority_queue__DOT__queue_data__v0;
    __VdlySet__parameterized_priority_queue__DOT__queue_data__v0 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v0;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v0 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v1;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v1 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v1;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v1 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v2;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v2 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v2;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v2 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v3;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v3 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v3;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v3 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v4;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v4 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v4;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v4 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v5;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v5 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v5;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v5 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v6;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v6 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v6;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v6 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v7;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v7 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v7;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v7 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v8;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v8 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v8;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v8 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v9;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v9 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v9;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v9 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v10;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v10 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v10;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v10 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v11;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v11 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v11;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v11 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v12;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v12 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v12;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v12 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v13;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v13 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v13;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v13 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v14;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v14 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v14;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v14 = 0;
    CData/*7:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_data__v15;
    __VdlyVal__parameterized_priority_queue__DOT__queue_data__v15 = 0;
    CData/*2:0*/ __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v15;
    __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v15 = 0;
    CData/*0:0*/ __VdlySet__parameterized_priority_queue__DOT__queue_data__v16;
    __VdlySet__parameterized_priority_queue__DOT__queue_data__v16 = 0;
    CData/*0:0*/ __VdlySet__parameterized_priority_queue__DOT__queue_data__v17;
    __VdlySet__parameterized_priority_queue__DOT__queue_data__v17 = 0;
    // Body
    __Vdly__parameterized_priority_queue__DOT__count 
        = vlSelfRef.parameterized_priority_queue__DOT__count;
    __VdlySet__parameterized_priority_queue__DOT__queue_data__v0 = 0U;
    __VdlySet__parameterized_priority_queue__DOT__queue_data__v16 = 0U;
    __VdlySet__parameterized_priority_queue__DOT__queue_data__v17 = 0U;
    if (vlSelfRef.rst_n) {
        __Vdly__parameterized_priority_queue__DOT__count 
            = (0x1fU & (((IData)(vlSelfRef.i_enqueue) 
                         & (~ (IData)(vlSelfRef.o_full)))
                         ? (((IData)(vlSelfRef.i_dequeue) 
                             & (~ (IData)(vlSelfRef.o_empty)))
                             ? (IData)(vlSelfRef.parameterized_priority_queue__DOT__count)
                             : ((IData)(1U) + (IData)(vlSelfRef.parameterized_priority_queue__DOT__count)))
                         : (((IData)(vlSelfRef.i_dequeue) 
                             & (~ (IData)(vlSelfRef.o_empty)))
                             ? ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))));
        vlSelfRef.o_count = vlSelfRef.parameterized_priority_queue__DOT__count;
        if (((IData)(vlSelfRef.i_dequeue) & (~ (IData)(vlSelfRef.o_empty)))) {
            vlSelfRef.o_data = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0U];
            vlSelfRef.o_priority = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0U];
        }
        if (((IData)(vlSelfRef.i_enqueue) | ((IData)(vlSelfRef.i_dequeue) 
                                             & (~ (IData)(vlSelfRef.o_empty))))) {
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[0U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[1U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [1U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[1U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [1U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[2U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [2U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[2U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [2U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[3U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [3U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[3U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [3U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[4U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [4U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[4U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [4U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[5U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [5U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[5U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [5U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[6U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [6U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[6U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [6U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[7U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [7U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[7U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [7U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[8U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [8U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[8U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [8U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[9U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [9U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[9U] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [9U];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xaU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0xaU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xaU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0xaU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xbU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0xbU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xbU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0xbU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xcU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0xcU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xcU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0xcU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xdU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0xdU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xdU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0xdU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xeU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0xeU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xeU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0xeU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xfU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                [0xfU];
            vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xfU] 
                = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                [0xfU];
            vlSelfRef.parameterized_priority_queue__DOT__i = 0x10U;
            if (((IData)(vlSelfRef.i_enqueue) & (~ (IData)(vlSelfRef.o_full)))) {
                vlSelfRef.parameterized_priority_queue__DOT__insert_idx 
                    = vlSelfRef.parameterized_priority_queue__DOT__count;
                vlSelfRef.parameterized_priority_queue__DOT__i = 0U;
                while (VL_GTS_III(32, 0x10U, vlSelfRef.parameterized_priority_queue__DOT__i)) {
                    if ((vlSelfRef.parameterized_priority_queue__DOT__i 
                         < (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                        if (((IData)(vlSelfRef.i_priority) 
                             > vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                             [(0xfU & vlSelfRef.parameterized_priority_queue__DOT__i)])) {
                            vlSelfRef.parameterized_priority_queue__DOT__insert_idx 
                                = (0x1fU & vlSelfRef.parameterized_priority_queue__DOT__i);
                            vlSelfRef.parameterized_priority_queue__DOT__i = 0x10U;
                        }
                    }
                    vlSelfRef.parameterized_priority_queue__DOT__i 
                        = ((IData)(1U) + vlSelfRef.parameterized_priority_queue__DOT__i);
                }
                if ((0U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0U];
                } else if ((0U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0U] 
                        = vlSelfRef.i_priority;
                } else {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xfU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xfU];
                }
                if ((1U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[1U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [1U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[1U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [1U];
                } else if ((1U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[1U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[1U] 
                        = vlSelfRef.i_priority;
                } else if ((1U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[1U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[1U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0U];
                }
                if ((2U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[2U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [2U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[2U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [2U];
                } else if ((2U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[2U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[2U] 
                        = vlSelfRef.i_priority;
                } else if ((2U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[2U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [1U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[2U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [1U];
                }
                if ((3U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[3U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [3U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[3U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [3U];
                } else if ((3U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[3U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[3U] 
                        = vlSelfRef.i_priority;
                } else if ((3U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[3U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [2U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[3U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [2U];
                }
                if ((4U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[4U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [4U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[4U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [4U];
                } else if ((4U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[4U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[4U] 
                        = vlSelfRef.i_priority;
                } else if ((4U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[4U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [3U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[4U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [3U];
                }
                if ((5U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[5U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [5U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[5U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [5U];
                } else if ((5U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[5U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[5U] 
                        = vlSelfRef.i_priority;
                } else if ((5U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[5U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [4U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[5U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [4U];
                }
                if ((6U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[6U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [6U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[6U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [6U];
                } else if ((6U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[6U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[6U] 
                        = vlSelfRef.i_priority;
                } else if ((6U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[6U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [5U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[6U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [5U];
                }
                if ((7U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[7U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [7U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[7U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [7U];
                } else if ((7U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[7U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[7U] 
                        = vlSelfRef.i_priority;
                } else if ((7U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[7U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [6U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[7U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [6U];
                }
                if ((8U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[8U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [8U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[8U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [8U];
                } else if ((8U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[8U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[8U] 
                        = vlSelfRef.i_priority;
                } else if ((8U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[8U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [7U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[8U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [7U];
                }
                if ((9U < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[9U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [9U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[9U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [9U];
                } else if ((9U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[9U] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[9U] 
                        = vlSelfRef.i_priority;
                } else if ((9U <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[9U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [8U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[9U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [8U];
                }
                if ((0xaU < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xaU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xaU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xaU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xaU];
                } else if ((0xaU == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xaU] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xaU] 
                        = vlSelfRef.i_priority;
                } else if ((0xaU <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xaU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [9U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xaU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [9U];
                }
                if ((0xbU < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xbU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xbU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xbU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xbU];
                } else if ((0xbU == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xbU] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xbU] 
                        = vlSelfRef.i_priority;
                } else if ((0xbU <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xbU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xaU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xbU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xaU];
                }
                if ((0xcU < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xcU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xcU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xcU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xcU];
                } else if ((0xcU == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xcU] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xcU] 
                        = vlSelfRef.i_priority;
                } else if ((0xcU <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xcU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xbU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xcU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xbU];
                }
                if ((0xdU < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xdU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xdU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xdU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xdU];
                } else if ((0xdU == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xdU] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xdU] 
                        = vlSelfRef.i_priority;
                } else if ((0xdU <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xdU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xcU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xdU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xcU];
                }
                if ((0xeU < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xeU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xeU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xeU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xeU];
                } else if ((0xeU == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xeU] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xeU] 
                        = vlSelfRef.i_priority;
                } else if ((0xeU <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xeU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xdU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xeU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xdU];
                }
                if ((0xfU < (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xfU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xfU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xfU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xfU];
                } else if ((0xfU == (IData)(vlSelfRef.parameterized_priority_queue__DOT__insert_idx))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xfU] 
                        = vlSelfRef.i_data;
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xfU] 
                        = vlSelfRef.i_priority;
                } else if ((0xfU <= (IData)(vlSelfRef.parameterized_priority_queue__DOT__count))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xfU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xeU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xfU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xeU];
                }
                vlSelfRef.parameterized_priority_queue__DOT__i = 0x10U;
            }
            if (((IData)(vlSelfRef.i_dequeue) & (~ (IData)(vlSelfRef.o_empty)))) {
                if ((0U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [1U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [1U];
                }
                vlSelfRef.parameterized_priority_queue__DOT__i = 0xfU;
                if ((1U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[1U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [2U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[1U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [2U];
                }
                if ((2U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[2U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [3U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[2U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [3U];
                }
                if ((3U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[3U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [4U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[3U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [4U];
                }
                if ((4U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[4U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [5U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[4U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [5U];
                }
                if ((5U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[5U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [6U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[5U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [6U];
                }
                if ((6U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[6U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [7U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[6U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [7U];
                }
                if ((7U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[7U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [8U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[7U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [8U];
                }
                if ((8U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[8U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [9U];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[8U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [9U];
                }
                if ((9U < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                           - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[9U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xaU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[9U] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xaU];
                }
                if ((0xaU < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                             - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xaU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xbU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xaU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xbU];
                }
                if ((0xbU < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                             - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xbU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xcU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xbU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xcU];
                }
                if ((0xcU < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                             - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xcU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xdU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xcU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xdU];
                }
                if ((0xdU < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                             - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xdU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xeU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xdU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xeU];
                }
                if ((0xeU < ((IData)(vlSelfRef.parameterized_priority_queue__DOT__count) 
                             - (IData)(1U)))) {
                    vlSelfRef.parameterized_priority_queue__DOT__temp_data[0xeU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_data
                        [0xfU];
                    vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0xeU] 
                        = vlSelfRef.parameterized_priority_queue__DOT__queue_priority
                        [0xfU];
                }
            }
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v0 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [0U];
            __VdlySet__parameterized_priority_queue__DOT__queue_data__v0 = 1U;
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v0 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [0U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v1 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [1U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v1 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [1U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v2 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [2U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v2 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [2U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v3 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [3U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v3 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [3U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v4 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [4U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v4 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [4U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v5 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [5U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v5 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [5U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v6 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [6U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v6 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [6U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v7 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [7U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v7 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [7U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v8 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [8U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v8 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [8U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v9 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [9U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v9 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [9U];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v10 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [0xaU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v10 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [0xaU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v11 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [0xbU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v11 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [0xbU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v12 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [0xcU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v12 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [0xcU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v13 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [0xdU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v13 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [0xdU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v14 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [0xeU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v14 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [0xeU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_data__v15 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_data
                [0xfU];
            __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v15 
                = vlSelfRef.parameterized_priority_queue__DOT__temp_priority
                [0xfU];
            vlSelfRef.parameterized_priority_queue__DOT__i = 0x10U;
        }
    } else {
        __Vdly__parameterized_priority_queue__DOT__count = 0U;
        vlSelfRef.o_count = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__i = 0x10U;
        __VdlySet__parameterized_priority_queue__DOT__queue_data__v16 = 1U;
        vlSelfRef.o_data = 0U;
        vlSelfRef.o_priority = 0U;
        __VdlySet__parameterized_priority_queue__DOT__queue_data__v17 = 1U;
    }
    vlSelfRef.parameterized_priority_queue__DOT__count 
        = __Vdly__parameterized_priority_queue__DOT__count;
    if (__VdlySet__parameterized_priority_queue__DOT__queue_data__v0) {
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v0;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[1U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v1;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[2U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v2;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[3U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v3;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[4U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v4;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[5U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v5;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[6U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v6;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[7U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v7;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[8U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v8;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[9U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v9;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xaU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v10;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xbU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v11;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xcU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v12;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xdU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v13;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xeU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v14;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xfU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_data__v15;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v0;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[1U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v1;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[2U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v2;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[3U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v3;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[4U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v4;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[5U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v5;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[6U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v6;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[7U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v7;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[8U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v8;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[9U] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v9;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xaU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v10;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xbU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v11;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xcU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v12;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xdU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v13;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xeU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v14;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xfU] 
            = __VdlyVal__parameterized_priority_queue__DOT__queue_priority__v15;
    }
    if (__VdlySet__parameterized_priority_queue__DOT__queue_data__v16) {
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0U] = 0U;
    }
    if (__VdlySet__parameterized_priority_queue__DOT__queue_data__v17) {
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[1U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[2U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[3U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[4U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[5U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[6U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[7U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[8U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[9U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xaU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xbU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xcU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xdU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xeU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_data[0xfU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[1U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[2U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[3U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[4U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[5U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[6U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[7U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[8U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[9U] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xaU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xbU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xcU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xdU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xeU] = 0U;
        vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0xfU] = 0U;
    }
    vlSelfRef.o_full = (0x10U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__count));
    vlSelfRef.o_empty = (0U == (IData)(vlSelfRef.parameterized_priority_queue__DOT__count));
}

void Vparameterized_priority_queue___024root___eval_triggers__act(Vparameterized_priority_queue___024root* vlSelf);

bool Vparameterized_priority_queue___024root___eval_phase__act(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_phase__act\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vparameterized_priority_queue___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vparameterized_priority_queue___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vparameterized_priority_queue___024root___eval_phase__nba(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_phase__nba\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vparameterized_priority_queue___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_priority_queue___024root___dump_triggers__nba(Vparameterized_priority_queue___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_priority_queue___024root___dump_triggers__act(Vparameterized_priority_queue___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_priority_queue___024root___eval(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vparameterized_priority_queue___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/parameterized_priority_queue.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vparameterized_priority_queue___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/fifos/parameterized_priority_queue.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vparameterized_priority_queue___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vparameterized_priority_queue___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vparameterized_priority_queue___024root___eval_debug_assertions(Vparameterized_priority_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root___eval_debug_assertions\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.i_priority & 0xf8U)))) {
        Verilated::overWidthError("i_priority");}
    if (VL_UNLIKELY(((vlSelfRef.i_enqueue & 0xfeU)))) {
        Verilated::overWidthError("i_enqueue");}
    if (VL_UNLIKELY(((vlSelfRef.i_dequeue & 0xfeU)))) {
        Verilated::overWidthError("i_dequeue");}
}
#endif  // VL_DEBUG
