// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_ported_fifo.h for the primary calling header

#include "Vmulti_ported_fifo__pch.h"
#include "Vmulti_ported_fifo___024root.h"

void Vmulti_ported_fifo___024root___ico_sequent__TOP__0(Vmulti_ported_fifo___024root* vlSelf);

void Vmulti_ported_fifo___024root___eval_ico(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_ico\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmulti_ported_fifo___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmulti_ported_fifo___024root___ico_sequent__TOP__0(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___ico_sequent__TOP__0\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vmulti_ported_fifo___024root___eval_triggers__ico(Vmulti_ported_fifo___024root* vlSelf);

bool Vmulti_ported_fifo___024root___eval_phase__ico(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_phase__ico\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmulti_ported_fifo___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmulti_ported_fifo___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmulti_ported_fifo___024root___eval_act(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_act\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmulti_ported_fifo___024root___nba_sequent__TOP__0(Vmulti_ported_fifo___024root* vlSelf);
void Vmulti_ported_fifo___024root___nba_sequent__TOP__1(Vmulti_ported_fifo___024root* vlSelf);
void Vmulti_ported_fifo___024root___nba_sequent__TOP__2(Vmulti_ported_fifo___024root* vlSelf);

void Vmulti_ported_fifo___024root___eval_nba(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_nba\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmulti_ported_fifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmulti_ported_fifo___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmulti_ported_fifo___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vmulti_ported_fifo___024root___nba_sequent__TOP__0(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___nba_sequent__TOP__0\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__multi_ported_fifo__DOT__current_rd_addr;
    __Vdly__multi_ported_fifo__DOT__current_rd_addr = 0;
    CData/*4:0*/ __Vdly__multi_ported_fifo__DOT__read_count;
    __Vdly__multi_ported_fifo__DOT__read_count = 0;
    IData/*31:0*/ __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v0;
    __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v0 = 0;
    CData/*0:0*/ __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v0;
    __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v1;
    __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v1 = 0;
    CData/*0:0*/ __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v1;
    __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v1 = 0;
    CData/*0:0*/ __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v2;
    __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v2 = 0;
    // Body
    vlSelfRef.__Vdly__multi_ported_fifo__DOT__wr_ptr 
        = vlSelfRef.multi_ported_fifo__DOT__wr_ptr;
    __Vdly__multi_ported_fifo__DOT__current_rd_addr 
        = vlSelfRef.multi_ported_fifo__DOT__current_rd_addr;
    __Vdly__multi_ported_fifo__DOT__read_count = vlSelfRef.multi_ported_fifo__DOT__read_count;
    __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v0 = 0U;
    __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v1 = 0U;
    __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v2 = 0U;
    vlSelfRef.multi_ported_fifo__DOT__i = 2U;
    if (vlSelfRef.rst_n) {
        if ((0U < (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count))) {
            vlSelfRef.__Vdly__multi_ported_fifo__DOT__wr_ptr 
                = (0x1fU & ((IData)(vlSelfRef.multi_ported_fifo__DOT__wr_ptr) 
                            + (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count)));
        }
        __Vdly__multi_ported_fifo__DOT__current_rd_addr 
            = (0xfU & (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_ptr));
        __Vdly__multi_ported_fifo__DOT__read_count = 0U;
        if (((IData)(vlSelfRef.rd_en) & ((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                                         > (IData)(vlSelfRef.multi_ported_fifo__DOT__read_count)))) {
            __Vdly__multi_ported_fifo__DOT__read_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__read_count)));
            __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v0 
                = vlSelfRef.multi_ported_fifo__DOT__mem
                [vlSelfRef.multi_ported_fifo__DOT__current_rd_addr];
            __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v0 = 1U;
            vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs 
                = (1U | (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs));
            __Vdly__multi_ported_fifo__DOT__current_rd_addr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__current_rd_addr)));
        } else {
            vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs 
                = (2U & (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs));
        }
        if ((((IData)(vlSelfRef.rd_en) >> 1U) & ((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                                                 > (IData)(vlSelfRef.multi_ported_fifo__DOT__read_count)))) {
            __Vdly__multi_ported_fifo__DOT__read_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__read_count)));
            __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v1 
                = vlSelfRef.multi_ported_fifo__DOT__mem
                [vlSelfRef.multi_ported_fifo__DOT__current_rd_addr];
            __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v1 = 1U;
            vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs 
                = (2U | (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs));
            __Vdly__multi_ported_fifo__DOT__current_rd_addr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__current_rd_addr)));
        } else {
            vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs 
                = (1U & (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs));
        }
        if ((0U < (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count))) {
            vlSelfRef.multi_ported_fifo__DOT__rd_ptr 
                = (0x1fU & ((IData)(vlSelfRef.multi_ported_fifo__DOT__rd_ptr) 
                            + (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count)));
        }
    } else {
        vlSelfRef.__Vdly__multi_ported_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.multi_ported_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs = 0U;
        __VdlySet__multi_ported_fifo__DOT__rd_data_regs__v2 = 1U;
    }
    vlSelfRef.multi_ported_fifo__DOT__current_rd_addr 
        = __Vdly__multi_ported_fifo__DOT__current_rd_addr;
    vlSelfRef.multi_ported_fifo__DOT__read_count = __Vdly__multi_ported_fifo__DOT__read_count;
    if (__VdlySet__multi_ported_fifo__DOT__rd_data_regs__v0) {
        vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[0U] 
            = __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v0;
    }
    if (__VdlySet__multi_ported_fifo__DOT__rd_data_regs__v1) {
        vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[1U] 
            = __VdlyVal__multi_ported_fifo__DOT__rd_data_regs__v1;
    }
    if (__VdlySet__multi_ported_fifo__DOT__rd_data_regs__v2) {
        vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[0U] = 0U;
        vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[1U] = 0U;
    }
    vlSelfRef.rd_valid = vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs;
    vlSelfRef.rd_data = (((QData)((IData)(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs
                                          [1U])) << 0x20U) 
                         | (QData)((IData)(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs
                                           [0U])));
}

VL_INLINE_OPT void Vmulti_ported_fifo___024root___nba_sequent__TOP__1(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___nba_sequent__TOP__1\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_multi_ported_fifo__DOT__get_wr_data__0__Vfuncout;
    __Vfunc_multi_ported_fifo__DOT__get_wr_data__0__Vfuncout = 0;
    CData/*3:0*/ __Vdly__multi_ported_fifo__DOT__current_wr_addr;
    __Vdly__multi_ported_fifo__DOT__current_wr_addr = 0;
    CData/*4:0*/ __Vdly__multi_ported_fifo__DOT__write_count;
    __Vdly__multi_ported_fifo__DOT__write_count = 0;
    IData/*31:0*/ __VdlyVal__multi_ported_fifo__DOT__mem__v0;
    __VdlyVal__multi_ported_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__multi_ported_fifo__DOT__mem__v0;
    __VdlyDim0__multi_ported_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__multi_ported_fifo__DOT__mem__v0;
    __VdlySet__multi_ported_fifo__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__multi_ported_fifo__DOT__mem__v1;
    __VdlyVal__multi_ported_fifo__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__multi_ported_fifo__DOT__mem__v1;
    __VdlyDim0__multi_ported_fifo__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__multi_ported_fifo__DOT__mem__v1;
    __VdlySet__multi_ported_fifo__DOT__mem__v1 = 0;
    // Body
    __Vdly__multi_ported_fifo__DOT__current_wr_addr 
        = vlSelfRef.multi_ported_fifo__DOT__current_wr_addr;
    __Vdly__multi_ported_fifo__DOT__write_count = vlSelfRef.multi_ported_fifo__DOT__write_count;
    __VdlySet__multi_ported_fifo__DOT__mem__v0 = 0U;
    __VdlySet__multi_ported_fifo__DOT__mem__v1 = 0U;
    vlSelfRef.multi_ported_fifo__DOT__wp = 2U;
    __Vdly__multi_ported_fifo__DOT__current_wr_addr 
        = (0xfU & (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_ptr));
    __Vdly__multi_ported_fifo__DOT__write_count = 0U;
    if ((((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full))) 
         & (0x10U > ((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                     + (IData)(vlSelfRef.multi_ported_fifo__DOT__write_count))))) {
        __Vfunc_multi_ported_fifo__DOT__get_wr_data__0__Vfuncout 
            = (IData)(vlSelfRef.wr_data);
        __Vdly__multi_ported_fifo__DOT__write_count 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__write_count)));
        vlSelfRef.multi_ported_fifo__DOT__get_wr_data__Vstatic__start_bit = 0U;
        __VdlyVal__multi_ported_fifo__DOT__mem__v0 
            = __Vfunc_multi_ported_fifo__DOT__get_wr_data__0__Vfuncout;
        __VdlyDim0__multi_ported_fifo__DOT__mem__v0 
            = vlSelfRef.multi_ported_fifo__DOT__current_wr_addr;
        __VdlySet__multi_ported_fifo__DOT__mem__v0 = 1U;
        __Vdly__multi_ported_fifo__DOT__current_wr_addr 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__current_wr_addr)));
    }
    if (((((IData)(vlSelfRef.wr_en) >> 1U) & (~ (IData)(vlSelfRef.full))) 
         & (0x10U > ((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                     + (IData)(vlSelfRef.multi_ported_fifo__DOT__write_count))))) {
        __Vfunc_multi_ported_fifo__DOT__get_wr_data__0__Vfuncout 
            = (IData)((vlSelfRef.wr_data >> 0x20U));
        __Vdly__multi_ported_fifo__DOT__write_count 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__write_count)));
        vlSelfRef.multi_ported_fifo__DOT__get_wr_data__Vstatic__start_bit = 0x20U;
        __VdlyVal__multi_ported_fifo__DOT__mem__v1 
            = __Vfunc_multi_ported_fifo__DOT__get_wr_data__0__Vfuncout;
        __VdlyDim0__multi_ported_fifo__DOT__mem__v1 
            = vlSelfRef.multi_ported_fifo__DOT__current_wr_addr;
        __VdlySet__multi_ported_fifo__DOT__mem__v1 = 1U;
        __Vdly__multi_ported_fifo__DOT__current_wr_addr 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.multi_ported_fifo__DOT__current_wr_addr)));
    }
    vlSelfRef.multi_ported_fifo__DOT__current_wr_addr 
        = __Vdly__multi_ported_fifo__DOT__current_wr_addr;
    vlSelfRef.multi_ported_fifo__DOT__write_count = __Vdly__multi_ported_fifo__DOT__write_count;
    if (__VdlySet__multi_ported_fifo__DOT__mem__v0) {
        vlSelfRef.multi_ported_fifo__DOT__mem[__VdlyDim0__multi_ported_fifo__DOT__mem__v0] 
            = __VdlyVal__multi_ported_fifo__DOT__mem__v0;
    }
    if (__VdlySet__multi_ported_fifo__DOT__mem__v1) {
        vlSelfRef.multi_ported_fifo__DOT__mem[__VdlyDim0__multi_ported_fifo__DOT__mem__v1] 
            = __VdlyVal__multi_ported_fifo__DOT__mem__v1;
    }
}

VL_INLINE_OPT void Vmulti_ported_fifo___024root___nba_sequent__TOP__2(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___nba_sequent__TOP__2\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.multi_ported_fifo__DOT__wr_ptr = vlSelfRef.__Vdly__multi_ported_fifo__DOT__wr_ptr;
    vlSelfRef.multi_ported_fifo__DOT__fifo_count = 
        ((IData)(vlSelfRef.rst_n) ? (IData)(vlSelfRef.multi_ported_fifo__DOT__next_count)
          : 0U);
    vlSelfRef.almost_full = (0xeU <= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count));
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count));
    vlSelfRef.almost_empty = (2U >= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count));
    vlSelfRef.data_count = vlSelfRef.multi_ported_fifo__DOT__fifo_count;
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

void Vmulti_ported_fifo___024root___eval_triggers__act(Vmulti_ported_fifo___024root* vlSelf);

bool Vmulti_ported_fifo___024root___eval_phase__act(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_phase__act\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmulti_ported_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmulti_ported_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmulti_ported_fifo___024root___eval_phase__nba(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_phase__nba\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmulti_ported_fifo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__ico(Vmulti_ported_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__nba(Vmulti_ported_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__act(Vmulti_ported_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vmulti_ported_fifo___024root___eval(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmulti_ported_fifo___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/multi_ported_fifo.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmulti_ported_fifo___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmulti_ported_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/multi_ported_fifo.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmulti_ported_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/fifos/multi_ported_fifo.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmulti_ported_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmulti_ported_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmulti_ported_fifo___024root___eval_debug_assertions(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_debug_assertions\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.wr_en & 0xfcU)))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY(((vlSelfRef.rd_en & 0xfcU)))) {
        Verilated::overWidthError("rd_en");}
}
#endif  // VL_DEBUG
