// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_async_credit_counter.h for the primary calling header

#include "Vbsg_async_credit_counter__pch.h"
#include "Vbsg_async_credit_counter___024root.h"

void Vbsg_async_credit_counter___024root___ico_sequent__TOP__0(Vbsg_async_credit_counter___024root* vlSelf);

void Vbsg_async_credit_counter___024root___eval_ico(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_ico\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbsg_async_credit_counter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbsg_async_credit_counter___024root___ico_sequent__TOP__0(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___ico_sequent__TOP__0\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.binary_o = (((8U & (VL_REDXOR_32((0xfU 
                                                & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.gray_i), 3U))) 
                                  << 3U)) | (4U & (
                                                   VL_REDXOR_32(
                                                                (0xfU 
                                                                 & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.gray_i), 2U))) 
                                                   << 2U))) 
                          | ((2U & (VL_REDXOR_32((0xfU 
                                                  & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.gray_i), 1U))) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_4(vlSelfRef.gray_i))));
    vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n 
        = (7U & ((IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r) 
                 + ((IData)(vlSelfRef.w_inc_token_i)
                     ? 1U : 0U)));
    vlSelfRef.r_credits_avail_o = ((IData)(vlSelfRef.r_infinite_credits_i) 
                                   | ((7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r), 1U) 
                                             ^ (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r))) 
                                      != vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
                                      [0x2bU]));
}

void Vbsg_async_credit_counter___024root___eval_triggers__ico(Vbsg_async_credit_counter___024root* vlSelf);

bool Vbsg_async_credit_counter___024root___eval_phase__ico(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_phase__ico\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbsg_async_credit_counter___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbsg_async_credit_counter___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbsg_async_credit_counter___024root___eval_act(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_act\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbsg_async_credit_counter___024root___nba_sequent__TOP__0(Vbsg_async_credit_counter___024root* vlSelf);
void Vbsg_async_credit_counter___024root___nba_sequent__TOP__1(Vbsg_async_credit_counter___024root* vlSelf);

void Vbsg_async_credit_counter___024root___eval_nba(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_nba\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbsg_async_credit_counter___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbsg_async_credit_counter___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vbsg_async_credit_counter___024root___nba_sequent__TOP__0(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___nba_sequent__TOP__0\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__bsg_async_credit_counter__DOT__r_counter_r;
    __Vdly__bsg_async_credit_counter__DOT__r_counter_r = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v0;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v0 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86 = 0;
    CData/*2:0*/ __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87;
    __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87 = 0;
    CData/*0:0*/ __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87 = 0;
    // Body
    __Vdly__bsg_async_credit_counter__DOT__r_counter_r 
        = vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v0 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86 = 0U;
    __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87 = 0U;
    vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__sync_i = 0x2cU;
    if (vlSelfRef.r_reset_i) {
        __Vdly__bsg_async_credit_counter__DOT__r_counter_r = 4U;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v0 = 1U;
    } else {
        if (vlSelfRef.r_dec_credit_i) {
            __Vdly__bsg_async_credit_counter__DOT__r_counter_r 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r)));
        }
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [1U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [2U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [3U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [4U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [5U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [6U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [7U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [8U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [9U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0xaU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0xbU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0xcU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0xdU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0xeU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0xfU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x10U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x11U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x12U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x13U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x14U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x15U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x16U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x17U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x18U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x19U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x1aU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x1bU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x1cU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x1dU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x1eU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x1fU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x20U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x21U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x22U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x23U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x24U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x25U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x26U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x27U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x28U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x29U];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86 = 1U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
            [0x2aU];
        __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
        __VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87 = 1U;
    }
    vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r 
        = __Vdly__bsg_async_credit_counter__DOT__r_counter_r;
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x2bU)) {
            vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v44;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[1U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v45;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[2U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v46;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[3U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v47;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[4U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v48;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[5U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v49;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[6U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v50;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[7U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v51;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[8U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v52;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[9U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v53;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0xaU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v54;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0xbU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v55;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0xcU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v56;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0xdU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v57;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0xeU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v58;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0xfU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v59;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x10U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v60;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x11U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v61;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x12U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v62;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x13U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v63;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x14U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v64;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x15U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v65;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x16U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v66;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x17U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v67;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x18U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v68;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x19U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v69;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x1aU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v70;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x1bU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v71;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x1cU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v72;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x1dU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v73;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x1eU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v74;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x1fU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v75;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x20U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v76;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x21U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v77;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x22U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v78;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x23U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v79;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x24U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v80;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x25U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v81;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x26U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v82;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x27U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v83;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x28U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v84;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x29U] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v85;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x2aU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v86;
    }
    if (__VdlySet__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r[0x2bU] 
            = __VdlyVal__bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r__v87;
    }
    vlSelfRef.r_credits_avail_o = ((IData)(vlSelfRef.r_infinite_credits_i) 
                                   | ((7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r), 1U) 
                                             ^ (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r))) 
                                      != vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
                                      [0x2bU]));
}

VL_INLINE_OPT void Vbsg_async_credit_counter___024root___nba_sequent__TOP__1(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___nba_sequent__TOP__1\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.w_reset_i) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r = 0U;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r = 0U;
    } else if (vlSelfRef.w_inc_token_i) {
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r 
            = vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n;
        vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r 
            = (7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n), 1U) 
                     ^ (IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n)));
    }
    vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n 
        = (7U & ((IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r) 
                 + ((IData)(vlSelfRef.w_inc_token_i)
                     ? 1U : 0U)));
}

void Vbsg_async_credit_counter___024root___eval_triggers__act(Vbsg_async_credit_counter___024root* vlSelf);

bool Vbsg_async_credit_counter___024root___eval_phase__act(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_phase__act\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbsg_async_credit_counter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbsg_async_credit_counter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbsg_async_credit_counter___024root___eval_phase__nba(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_phase__nba\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbsg_async_credit_counter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__ico(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__nba(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__act(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vbsg_async_credit_counter___024root___eval(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbsg_async_credit_counter___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/cdc/bsg_async_credit_counter.v", 71, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbsg_async_credit_counter___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbsg_async_credit_counter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/cdc/bsg_async_credit_counter.v", 71, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbsg_async_credit_counter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/cdc/bsg_async_credit_counter.v", 71, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbsg_async_credit_counter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbsg_async_credit_counter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbsg_async_credit_counter___024root___eval_debug_assertions(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_debug_assertions\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.gray_i & 0xf0U)))) {
        Verilated::overWidthError("gray_i");}
    if (VL_UNLIKELY(((vlSelfRef.w_clk_i & 0xfeU)))) {
        Verilated::overWidthError("w_clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.w_inc_token_i & 0xfeU)))) {
        Verilated::overWidthError("w_inc_token_i");}
    if (VL_UNLIKELY(((vlSelfRef.w_reset_i & 0xfeU)))) {
        Verilated::overWidthError("w_reset_i");}
    if (VL_UNLIKELY(((vlSelfRef.r_clk_i & 0xfeU)))) {
        Verilated::overWidthError("r_clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.r_reset_i & 0xfeU)))) {
        Verilated::overWidthError("r_reset_i");}
    if (VL_UNLIKELY(((vlSelfRef.r_dec_credit_i & 0xfeU)))) {
        Verilated::overWidthError("r_dec_credit_i");}
    if (VL_UNLIKELY(((vlSelfRef.r_infinite_credits_i 
                      & 0xfeU)))) {
        Verilated::overWidthError("r_infinite_credits_i");}
}
#endif  // VL_DEBUG
