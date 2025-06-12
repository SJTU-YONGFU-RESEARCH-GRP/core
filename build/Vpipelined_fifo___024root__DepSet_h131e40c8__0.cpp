// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipelined_fifo.h for the primary calling header

#include "Vpipelined_fifo__pch.h"
#include "Vpipelined_fifo___024root.h"

void Vpipelined_fifo___024root___eval_act(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_act\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpipelined_fifo___024root___nba_sequent__TOP__0(Vpipelined_fifo___024root* vlSelf);
void Vpipelined_fifo___024root___nba_sequent__TOP__1(Vpipelined_fifo___024root* vlSelf);
void Vpipelined_fifo___024root___nba_sequent__TOP__2(Vpipelined_fifo___024root* vlSelf);

void Vpipelined_fifo___024root___eval_nba(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_nba\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipelined_fifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipelined_fifo___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipelined_fifo___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vpipelined_fifo__ConstPool__TABLE_h985e87a6_0;
extern const VlUnpacked<CData/*4:0*/, 1024> Vpipelined_fifo__ConstPool__TABLE_hfedbe596_0;

VL_INLINE_OPT void Vpipelined_fifo___024root___nba_sequent__TOP__0(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___nba_sequent__TOP__0\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v0 = 0U;
    vlSelfRef.__Vdly__pipelined_fifo__DOT__wr_en_pipe 
        = vlSelfRef.pipelined_fifo__DOT__wr_en_pipe;
    vlSelfRef.__Vdly__pipelined_fifo__DOT__rd_en_pipe 
        = vlSelfRef.pipelined_fifo__DOT__rd_en_pipe;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v0 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v2 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v2 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v0 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v2 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v3 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v0 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v2 = 0U;
    vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v3 = 0U;
    vlSelfRef.pipelined_fifo__DOT__i = 2U;
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v0 = 1U;
    }
    if (vlSelfRef.rst_n) {
        vlSelfRef.__Vdly__pipelined_fifo__DOT__wr_en_pipe 
            = ((2U & ((IData)(vlSelfRef.pipelined_fifo__DOT__wr_en_pipe) 
                      << 1U)) | ((IData)(vlSelfRef.wr_en) 
                                 & (~ (IData)(vlSelfRef.full))));
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v0 
            = vlSelfRef.wr_data;
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v0 = 1U;
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v1 
            = vlSelfRef.pipelined_fifo__DOT__wr_data_pipe
            [0U];
        vlSelfRef.__Vdly__pipelined_fifo__DOT__rd_en_pipe 
            = ((2U & ((IData)(vlSelfRef.pipelined_fifo__DOT__rd_en_pipe) 
                      << 1U)) | ((IData)(vlSelfRef.rd_en) 
                                 & (~ (IData)(vlSelfRef.empty))));
        vlSelfRef.pipelined_fifo__DOT__rd_data_valid 
            = ((1U & (IData)(vlSelfRef.pipelined_fifo__DOT__rd_data_valid)) 
               | (2U & ((IData)(vlSelfRef.pipelined_fifo__DOT__rd_data_valid) 
                        << 1U)));
        vlSelfRef.pipelined_fifo__DOT__rd_data_valid 
            = ((2U & (IData)(vlSelfRef.pipelined_fifo__DOT__rd_data_valid)) 
               | (((IData)(vlSelfRef.rd_en) & (~ (IData)(vlSelfRef.empty))) 
                  || (1U & ((IData)(vlSelfRef.pipelined_fifo__DOT__rd_en_pipe) 
                            >> 1U))));
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v0 
            = vlSelfRef.pipelined_fifo__DOT__wr_ptr;
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v0 = 1U;
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v1 
            = vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe
            [0U];
        if (((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full)))) {
            vlSelfRef.pipelined_fifo__DOT__wr_ptr = 
                (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.pipelined_fifo__DOT__wr_ptr)));
        }
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v0 
            = vlSelfRef.pipelined_fifo__DOT__rd_ptr;
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v0 = 1U;
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v1 
            = vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe
            [0U];
        if (((IData)(vlSelfRef.rd_en) & (~ (IData)(vlSelfRef.empty)))) {
            vlSelfRef.pipelined_fifo__DOT__rd_ptr = 
                (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.pipelined_fifo__DOT__rd_ptr)));
        }
    } else {
        vlSelfRef.__Vdly__pipelined_fifo__DOT__wr_en_pipe = 0U;
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v2 = 1U;
        vlSelfRef.__Vdly__pipelined_fifo__DOT__rd_en_pipe 
            = (2U & (IData)(vlSelfRef.__Vdly__pipelined_fifo__DOT__rd_en_pipe));
        vlSelfRef.pipelined_fifo__DOT__rd_data_valid 
            = (2U & (IData)(vlSelfRef.pipelined_fifo__DOT__rd_data_valid));
        vlSelfRef.__Vdly__pipelined_fifo__DOT__rd_en_pipe 
            = (1U & (IData)(vlSelfRef.__Vdly__pipelined_fifo__DOT__rd_en_pipe));
        vlSelfRef.pipelined_fifo__DOT__rd_data_valid 
            = (1U & (IData)(vlSelfRef.pipelined_fifo__DOT__rd_data_valid));
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v2 = 1U;
        vlSelfRef.pipelined_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v3 = 1U;
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v2 = 1U;
        vlSelfRef.pipelined_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v3 = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.pipelined_fifo__DOT__pipeline_count) 
                     << 5U) | (((IData)(vlSelfRef.pipelined_fifo__DOT__rd_en_pipe) 
                                << 3U) | (((IData)(vlSelfRef.pipelined_fifo__DOT__wr_en_pipe) 
                                           << 1U) | (IData)(vlSelfRef.rst_n))));
    if (Vpipelined_fifo__ConstPool__TABLE_h985e87a6_0
        [__Vtableidx1]) {
        vlSelfRef.pipelined_fifo__DOT__pipeline_count 
            = Vpipelined_fifo__ConstPool__TABLE_hfedbe596_0
            [__Vtableidx1];
    }
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

VL_INLINE_OPT void Vpipelined_fifo___024root___nba_sequent__TOP__1(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___nba_sequent__TOP__1\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__pipelined_fifo__DOT__mem__v0;
    __VdlyVal__pipelined_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__pipelined_fifo__DOT__mem__v0;
    __VdlyDim0__pipelined_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__mem__v0;
    __VdlySet__pipelined_fifo__DOT__mem__v0 = 0;
    // Body
    __VdlySet__pipelined_fifo__DOT__mem__v0 = 0U;
    if ((1U & (IData)(vlSelfRef.pipelined_fifo__DOT__rd_en_pipe))) {
        vlSelfRef.pipelined_fifo__DOT__i = 2U;
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v2 
            = vlSelfRef.pipelined_fifo__DOT__mem[(0xfU 
                                                  & vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe
                                                  [0U])];
        vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v2 = 1U;
        vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v3 
            = vlSelfRef.pipelined_fifo__DOT__rd_data_pipe
            [0U];
    }
    if ((2U & (IData)(vlSelfRef.pipelined_fifo__DOT__wr_en_pipe))) {
        __VdlyVal__pipelined_fifo__DOT__mem__v0 = vlSelfRef.pipelined_fifo__DOT__wr_data_pipe
            [1U];
        __VdlyDim0__pipelined_fifo__DOT__mem__v0 = 
            (0xfU & vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe
             [1U]);
        __VdlySet__pipelined_fifo__DOT__mem__v0 = 1U;
    }
    if (__VdlySet__pipelined_fifo__DOT__mem__v0) {
        vlSelfRef.pipelined_fifo__DOT__mem[__VdlyDim0__pipelined_fifo__DOT__mem__v0] 
            = __VdlyVal__pipelined_fifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vpipelined_fifo___024root___nba_sequent__TOP__2(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___nba_sequent__TOP__2\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipelined_fifo__DOT__rd_en_pipe = vlSelfRef.__Vdly__pipelined_fifo__DOT__rd_en_pipe;
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v0) {
        vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[0U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v0;
        vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[1U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v1;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v2) {
        vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v3) {
        vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v0) {
        vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[0U] = 0U;
        vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__rd_data_pipe__v2) {
        vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[0U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v2;
        vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[1U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v3;
    }
    vlSelfRef.pipelined_fifo__DOT__wr_en_pipe = vlSelfRef.__Vdly__pipelined_fifo__DOT__wr_en_pipe;
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v0) {
        vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[0U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v0;
        vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[1U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v1;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_data_pipe__v2) {
        vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[0U] = 0U;
        vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v0) {
        vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[0U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v0;
        vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[1U] 
            = vlSelfRef.__VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v1;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v2) {
        vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v3) {
        vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[1U] = 0U;
    }
    vlSelfRef.rd_data = ((2U & (IData)(vlSelfRef.pipelined_fifo__DOT__rd_data_valid))
                          ? vlSelfRef.pipelined_fifo__DOT__rd_data_pipe
                         [1U] : 0U);
}

void Vpipelined_fifo___024root___eval_triggers__act(Vpipelined_fifo___024root* vlSelf);

bool Vpipelined_fifo___024root___eval_phase__act(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_phase__act\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpipelined_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpipelined_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpipelined_fifo___024root___eval_phase__nba(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_phase__nba\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpipelined_fifo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipelined_fifo___024root___dump_triggers__nba(Vpipelined_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipelined_fifo___024root___dump_triggers__act(Vpipelined_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vpipelined_fifo___024root___eval(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vpipelined_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/fifos/pipelined_fifo.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpipelined_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/fifos/pipelined_fifo.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpipelined_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpipelined_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpipelined_fifo___024root___eval_debug_assertions(Vpipelined_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root___eval_debug_assertions\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
