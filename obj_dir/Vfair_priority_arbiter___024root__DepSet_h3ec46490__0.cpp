// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfair_priority_arbiter.h for the primary calling header

#include "Vfair_priority_arbiter__pch.h"
#include "Vfair_priority_arbiter___024root.h"

VL_INLINE_OPT void Vfair_priority_arbiter___024root___ico_sequent__TOP__0(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->fair_priority_arbiter__DOT__priority_values[0U] 
        = (3U & (IData)(vlSelf->priorities));
    vlSelf->fair_priority_arbiter__DOT__priority_values[1U] 
        = (3U & ((IData)(vlSelf->priorities) >> 2U));
    vlSelf->fair_priority_arbiter__DOT__priority_values[2U] 
        = (3U & ((IData)(vlSelf->priorities) >> 4U));
    vlSelf->fair_priority_arbiter__DOT__priority_values[3U] 
        = (3U & ((IData)(vlSelf->priorities) >> 6U));
}

void Vfair_priority_arbiter___024root___eval_ico(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vfair_priority_arbiter___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vfair_priority_arbiter___024root___eval_triggers__ico(Vfair_priority_arbiter___024root* vlSelf);

bool Vfair_priority_arbiter___024root___eval_phase__ico(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vfair_priority_arbiter___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vfair_priority_arbiter___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vfair_priority_arbiter___024root___eval_act(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vfair_priority_arbiter___024root___nba_sequent__TOP__0(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__0__Vfuncout;
    __Vfunc_fair_priority_arbiter__DOT__next_index__0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__0__current_idx;
    __Vfunc_fair_priority_arbiter__DOT__next_index__0__current_idx = 0;
    IData/*31:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__0__offset;
    __Vfunc_fair_priority_arbiter__DOT__next_index__0__offset = 0;
    IData/*31:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__0__unnamedblk1__DOT__inc_i;
    __Vfunc_fair_priority_arbiter__DOT__next_index__0__unnamedblk1__DOT__inc_i = 0;
    CData/*1:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout;
    __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx;
    __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx = 0;
    IData/*31:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset;
    __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset = 0;
    IData/*31:0*/ __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i;
    __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i = 0;
    // Body
    if (vlSelf->rst_n) {
        vlSelf->grant = 0U;
        vlSelf->valid = 0U;
        if ((0U != (IData)(vlSelf->request))) {
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__unnamedblk3__DOT__loop_j = 4U;
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority = 0U;
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx = 0U;
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found = 0U;
            __Vfunc_fair_priority_arbiter__DOT__next_index__0__offset = 1U;
            __Vfunc_fair_priority_arbiter__DOT__next_index__0__current_idx 
                = vlSelf->fair_priority_arbiter__DOT__last_grant_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__0__Vfuncout 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__0__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__0__unnamedblk1__DOT__inc_i = 0U;
            while (VL_LTS_III(32, __Vfunc_fair_priority_arbiter__DOT__next_index__0__unnamedblk1__DOT__inc_i, __Vfunc_fair_priority_arbiter__DOT__next_index__0__offset)) {
                __Vfunc_fair_priority_arbiter__DOT__next_index__0__Vfuncout 
                    = ((3U == (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__0__Vfuncout))
                        ? 0U : (3U & ((IData)(1U) + (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__0__Vfuncout))));
                __Vfunc_fair_priority_arbiter__DOT__next_index__0__unnamedblk1__DOT__inc_i 
                    = ((IData)(1U) + __Vfunc_fair_priority_arbiter__DOT__next_index__0__unnamedblk1__DOT__inc_i);
            }
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__0__Vfuncout;
            if ((1U & ((IData)(vlSelf->request) >> (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx)))) {
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority 
                    = vlSelf->fair_priority_arbiter__DOT__priority_values
                    [vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx];
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found = 1U;
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx 
                    = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            }
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset = 1U;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx 
                = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i = 0U;
            while (VL_LTS_III(32, __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i, __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset)) {
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                    = ((3U == (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))
                        ? 0U : (3U & ((IData)(1U) + (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))));
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i 
                    = ((IData)(1U) + __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i);
            }
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset = 1U;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx 
                = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i = 0U;
            while (VL_LTS_III(32, __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i, __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset)) {
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                    = ((3U == (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))
                        ? 0U : (3U & ((IData)(1U) + (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))));
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i 
                    = ((IData)(1U) + __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i);
            }
            if ((1U & (((IData)(vlSelf->request) >> (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx)) 
                       & ((vlSelf->fair_priority_arbiter__DOT__priority_values
                           [vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx] 
                           > (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority)) 
                          | (~ (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found)))))) {
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority 
                    = vlSelf->fair_priority_arbiter__DOT__priority_values
                    [vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx];
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found = 1U;
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx 
                    = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            }
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset = 1U;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx 
                = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i = 0U;
            while (VL_LTS_III(32, __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i, __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset)) {
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                    = ((3U == (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))
                        ? 0U : (3U & ((IData)(1U) + (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))));
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i 
                    = ((IData)(1U) + __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i);
            }
            if ((1U & (((IData)(vlSelf->request) >> (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx)) 
                       & ((vlSelf->fair_priority_arbiter__DOT__priority_values
                           [vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx] 
                           > (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority)) 
                          | (~ (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found)))))) {
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority 
                    = vlSelf->fair_priority_arbiter__DOT__priority_values
                    [vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx];
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found = 1U;
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx 
                    = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            }
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout;
            if ((1U & (((IData)(vlSelf->request) >> (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx)) 
                       & ((vlSelf->fair_priority_arbiter__DOT__priority_values
                           [vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx] 
                           > (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority)) 
                          | (~ (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found)))))) {
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority 
                    = vlSelf->fair_priority_arbiter__DOT__priority_values
                    [vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx];
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found = 1U;
                vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx 
                    = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            }
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset = 1U;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx 
                = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__current_idx;
            __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i = 0U;
            while (VL_LTS_III(32, __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i, __Vfunc_fair_priority_arbiter__DOT__next_index__1__offset)) {
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout 
                    = ((3U == (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))
                        ? 0U : (3U & ((IData)(1U) + (IData)(__Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout))));
                __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i 
                    = ((IData)(1U) + __Vfunc_fair_priority_arbiter__DOT__next_index__1__unnamedblk1__DOT__inc_i);
            }
            vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx 
                = __Vfunc_fair_priority_arbiter__DOT__next_index__1__Vfuncout;
            if (vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found) {
                vlSelf->grant = ((IData)(vlSelf->grant) 
                                 | (0xfU & ((IData)(1U) 
                                            << (IData)(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx))));
                vlSelf->valid = 1U;
                vlSelf->grant_idx = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx;
                vlSelf->fair_priority_arbiter__DOT__last_grant_idx 
                    = vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx;
            }
        }
    } else {
        vlSelf->grant = 0U;
        vlSelf->grant_idx = 0U;
        vlSelf->valid = 0U;
        vlSelf->fair_priority_arbiter__DOT__last_grant_idx = 0U;
    }
}

void Vfair_priority_arbiter___024root___eval_nba(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfair_priority_arbiter___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vfair_priority_arbiter___024root___eval_triggers__act(Vfair_priority_arbiter___024root* vlSelf);

bool Vfair_priority_arbiter___024root___eval_phase__act(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfair_priority_arbiter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vfair_priority_arbiter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfair_priority_arbiter___024root___eval_phase__nba(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfair_priority_arbiter___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__ico(Vfair_priority_arbiter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__nba(Vfair_priority_arbiter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__act(Vfair_priority_arbiter___024root* vlSelf);
#endif  // VL_DEBUG

void Vfair_priority_arbiter___024root___eval(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vfair_priority_arbiter___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("fair_priority_arbiter.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vfair_priority_arbiter___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfair_priority_arbiter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fair_priority_arbiter.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vfair_priority_arbiter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fair_priority_arbiter.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vfair_priority_arbiter___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vfair_priority_arbiter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfair_priority_arbiter___024root___eval_debug_assertions(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->request & 0xf0U))) {
        Verilated::overWidthError("request");}
}
#endif  // VL_DEBUG
