// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_core.h for the primary calling header

#include "Vaes_core__pch.h"
#include "Vaes_core___024root.h"

void Vaes_core___024root___ico_sequent__TOP__0(Vaes_core___024root* vlSelf);

void Vaes_core___024root___eval_ico(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_ico\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vaes_core___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 512> Vaes_core__ConstPool__TABLE_h96874b73_0;

VL_INLINE_OPT void Vaes_core___024root___ico_sequent__TOP__0(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___ico_sequent__TOP__0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.aes_core__DOT__formatted_data_in[0U] 
        = vlSelfRef.data_in[3U];
    vlSelfRef.aes_core__DOT__formatted_data_in[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.data_in
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.data_in
                                     [2U]))));
    vlSelfRef.aes_core__DOT__formatted_data_in[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.data_in
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.data_in
                                      [2U]))) >> 0x20U));
    vlSelfRef.aes_core__DOT__formatted_data_in[3U] 
        = vlSelfRef.data_in[0U];
    vlSelfRef.aes_core__DOT__formatted_key[0U] = vlSelfRef.key
        [3U];
    vlSelfRef.aes_core__DOT__formatted_key[1U] = (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.key
                                                                           [1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.key
                                                                            [2U]))));
    vlSelfRef.aes_core__DOT__formatted_key[2U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelfRef.key
                                                                            [1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.key
                                                                             [2U]))) 
                                                          >> 0x20U));
    vlSelfRef.aes_core__DOT__formatted_key[3U] = vlSelfRef.key
        [0U];
    __Vtableidx1 = ((((IData)(vlSelfRef.aes_core__DOT__round_cnt) 
                      << 5U) | ((IData)(vlSelfRef.encrypt) 
                                << 4U)) | (((IData)(vlSelfRef.start) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.aes_core__DOT__state)));
    vlSelfRef.aes_core__DOT__next_state = Vaes_core__ConstPool__TABLE_h96874b73_0
        [__Vtableidx1];
}

void Vaes_core___024root___eval_triggers__ico(Vaes_core___024root* vlSelf);

bool Vaes_core___024root___eval_phase__ico(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_phase__ico\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vaes_core___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vaes_core___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vaes_core___024root___eval_act(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_act\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vaes_core___024root___nba_sequent__TOP__0(Vaes_core___024root* vlSelf);

void Vaes_core___024root___eval_nba(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_nba\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vaes_core___024root___nba_sequent__TOP__0(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___nba_sequent__TOP__0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__0__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__0__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__0__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__0__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__1__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__1__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__1__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__1__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__2__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__2__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__2__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__2__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__3__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__3__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__3__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__3__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__4__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__4__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__4__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__4__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__5__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__5__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__5__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__5__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__6__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__6__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__6__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__6__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__7__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__7__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__7__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__7__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__8__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__8__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__8__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__8__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__9__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__9__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__9__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__9__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__10__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__10__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__10__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__10__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__11__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__11__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__11__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__11__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__12__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__12__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__12__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__12__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__13__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__13__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__13__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__13__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__14__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__14__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__14__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__14__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__15__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__15__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__15__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__15__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__16__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__16__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__16__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__16__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__17__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__17__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__17__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__17__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__18__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__18__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__18__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__18__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__19__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__19__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__19__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__19__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__20__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__20__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__20__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__20__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__21__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__21__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__21__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__21__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__22__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__22__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__22__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__22__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__23__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__23__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__23__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__23__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__24__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__24__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__24__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__24__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__25__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__25__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__25__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__25__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__26__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__26__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__26__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__26__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__27__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__27__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__27__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__27__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__28__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__28__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__28__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__28__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__29__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__29__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__29__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__29__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__30__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__30__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__30__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__30__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__31__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__31__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__31__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__31__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__32__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__32__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__32__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__32__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__33__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__33__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__33__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__33__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__34__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__34__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__34__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__34__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__35__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__35__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__35__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__35__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__36__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__36__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__36__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__36__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__37__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__37__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__37__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__37__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__38__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__38__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__38__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__38__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__39__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__39__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__39__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__39__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__40__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__40__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__40__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__40__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__41__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__41__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__41__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__41__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__42__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__42__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__42__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__42__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__43__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__43__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__43__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__43__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__44__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__44__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__44__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__44__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__45__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__45__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__45__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__45__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__46__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__46__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__46__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__46__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__47__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__47__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__47__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__47__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__48__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__48__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__48__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__48__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__49__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__49__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__49__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__49__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__50__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__50__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__50__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__50__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__51__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__51__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__51__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__51__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__52__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__52__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__52__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__52__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__53__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__53__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__53__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__53__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__key_expansion__54__prev_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__key_expansion__54__prev_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__key_expansion__54__rcon_val;
    __Vfunc_aes_core__DOT__key_expansion__54__rcon_val = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__55__data_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__55__data_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__55__round_key_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__55__round_key_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__56__data_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__56__data_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__56__round_key_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__56__round_key_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__57__data_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__57__data_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__57__round_key_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__57__round_key_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__mix_columns__58__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__mix_columns__58__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__59__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__59__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__60__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__60__state_in);
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__61__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__61__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__61__b;
    __Vfunc_aes_core__DOT__xtime__61__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__62__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__62__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__62__b;
    __Vfunc_aes_core__DOT__mul3__62__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__63__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__63__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__63__b;
    __Vfunc_aes_core__DOT__xtime__63__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__64__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__64__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__64__b;
    __Vfunc_aes_core__DOT__xtime__64__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__65__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__65__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__65__b;
    __Vfunc_aes_core__DOT__mul3__65__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__66__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__66__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__66__b;
    __Vfunc_aes_core__DOT__xtime__66__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__67__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__67__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__67__b;
    __Vfunc_aes_core__DOT__xtime__67__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__68__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__68__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__68__b;
    __Vfunc_aes_core__DOT__mul3__68__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__69__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__69__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__69__b;
    __Vfunc_aes_core__DOT__xtime__69__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__70__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__70__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__70__b;
    __Vfunc_aes_core__DOT__mul3__70__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__71__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__71__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__71__b;
    __Vfunc_aes_core__DOT__xtime__71__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__72__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__72__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__72__b;
    __Vfunc_aes_core__DOT__xtime__72__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__73__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__73__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__73__b;
    __Vfunc_aes_core__DOT__xtime__73__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__74__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__74__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__74__b;
    __Vfunc_aes_core__DOT__mul3__74__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__75__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__75__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__75__b;
    __Vfunc_aes_core__DOT__xtime__75__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__76__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__76__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__76__b;
    __Vfunc_aes_core__DOT__xtime__76__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__77__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__77__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__77__b;
    __Vfunc_aes_core__DOT__mul3__77__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__78__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__78__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__78__b;
    __Vfunc_aes_core__DOT__xtime__78__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__79__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__79__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__79__b;
    __Vfunc_aes_core__DOT__xtime__79__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__80__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__80__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__80__b;
    __Vfunc_aes_core__DOT__mul3__80__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__81__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__81__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__81__b;
    __Vfunc_aes_core__DOT__xtime__81__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__82__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__82__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__82__b;
    __Vfunc_aes_core__DOT__mul3__82__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__83__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__83__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__83__b;
    __Vfunc_aes_core__DOT__xtime__83__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__84__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__84__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__84__b;
    __Vfunc_aes_core__DOT__xtime__84__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__85__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__85__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__85__b;
    __Vfunc_aes_core__DOT__xtime__85__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__86__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__86__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__86__b;
    __Vfunc_aes_core__DOT__mul3__86__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__87__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__87__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__87__b;
    __Vfunc_aes_core__DOT__xtime__87__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__88__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__88__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__88__b;
    __Vfunc_aes_core__DOT__xtime__88__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__89__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__89__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__89__b;
    __Vfunc_aes_core__DOT__mul3__89__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__90__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__90__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__90__b;
    __Vfunc_aes_core__DOT__xtime__90__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__91__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__91__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__91__b;
    __Vfunc_aes_core__DOT__xtime__91__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__92__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__92__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__92__b;
    __Vfunc_aes_core__DOT__mul3__92__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__93__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__93__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__93__b;
    __Vfunc_aes_core__DOT__xtime__93__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__94__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__94__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__94__b;
    __Vfunc_aes_core__DOT__mul3__94__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__95__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__95__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__95__b;
    __Vfunc_aes_core__DOT__xtime__95__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__96__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__96__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__96__b;
    __Vfunc_aes_core__DOT__xtime__96__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__97__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__97__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__97__b;
    __Vfunc_aes_core__DOT__xtime__97__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__98__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__98__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__98__b;
    __Vfunc_aes_core__DOT__mul3__98__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__99__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__99__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__99__b;
    __Vfunc_aes_core__DOT__xtime__99__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__100__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__100__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__100__b;
    __Vfunc_aes_core__DOT__xtime__100__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__101__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__101__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__101__b;
    __Vfunc_aes_core__DOT__mul3__101__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__102__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__102__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__102__b;
    __Vfunc_aes_core__DOT__xtime__102__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__103__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__103__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__103__b;
    __Vfunc_aes_core__DOT__xtime__103__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__104__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__104__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__104__b;
    __Vfunc_aes_core__DOT__mul3__104__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__105__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__105__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__105__b;
    __Vfunc_aes_core__DOT__xtime__105__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__106__Vfuncout;
    __Vfunc_aes_core__DOT__mul3__106__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul3__106__b;
    __Vfunc_aes_core__DOT__mul3__106__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__107__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__107__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__107__b;
    __Vfunc_aes_core__DOT__xtime__107__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__108__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__108__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__108__b;
    __Vfunc_aes_core__DOT__xtime__108__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__110__data_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__110__data_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__110__round_key_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__110__round_key_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in);
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__113__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__113__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__113__b;
    __Vfunc_aes_core__DOT__mul14__113__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__114__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__114__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__114__b;
    __Vfunc_aes_core__DOT__xtime__114__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__115__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__115__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__115__b;
    __Vfunc_aes_core__DOT__xtime__115__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__116__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__116__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__116__b;
    __Vfunc_aes_core__DOT__xtime__116__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__117__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__117__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__117__b;
    __Vfunc_aes_core__DOT__xtime__117__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__118__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__118__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__118__b;
    __Vfunc_aes_core__DOT__xtime__118__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__119__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__119__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__119__b;
    __Vfunc_aes_core__DOT__xtime__119__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__120__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__120__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__120__b;
    __Vfunc_aes_core__DOT__mul11__120__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__121__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__121__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__121__b;
    __Vfunc_aes_core__DOT__xtime__121__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__122__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__122__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__122__b;
    __Vfunc_aes_core__DOT__xtime__122__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__123__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__123__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__123__b;
    __Vfunc_aes_core__DOT__xtime__123__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__124__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__124__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__124__b;
    __Vfunc_aes_core__DOT__xtime__124__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__125__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__125__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__125__b;
    __Vfunc_aes_core__DOT__mul13__125__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__126__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__126__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__126__b;
    __Vfunc_aes_core__DOT__xtime__126__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__127__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__127__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__127__b;
    __Vfunc_aes_core__DOT__xtime__127__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__128__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__128__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__128__b;
    __Vfunc_aes_core__DOT__xtime__128__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__129__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__129__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__129__b;
    __Vfunc_aes_core__DOT__xtime__129__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__130__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__130__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__130__b;
    __Vfunc_aes_core__DOT__xtime__130__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__131__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__131__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__131__b;
    __Vfunc_aes_core__DOT__mul9__131__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__132__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__132__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__132__b;
    __Vfunc_aes_core__DOT__xtime__132__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__133__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__133__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__133__b;
    __Vfunc_aes_core__DOT__xtime__133__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__134__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__134__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__134__b;
    __Vfunc_aes_core__DOT__xtime__134__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__135__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__135__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__135__b;
    __Vfunc_aes_core__DOT__mul9__135__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__136__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__136__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__136__b;
    __Vfunc_aes_core__DOT__xtime__136__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__137__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__137__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__137__b;
    __Vfunc_aes_core__DOT__xtime__137__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__138__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__138__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__138__b;
    __Vfunc_aes_core__DOT__xtime__138__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__139__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__139__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__139__b;
    __Vfunc_aes_core__DOT__mul14__139__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__140__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__140__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__140__b;
    __Vfunc_aes_core__DOT__xtime__140__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__141__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__141__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__141__b;
    __Vfunc_aes_core__DOT__xtime__141__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__142__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__142__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__142__b;
    __Vfunc_aes_core__DOT__xtime__142__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__143__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__143__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__143__b;
    __Vfunc_aes_core__DOT__xtime__143__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__144__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__144__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__144__b;
    __Vfunc_aes_core__DOT__xtime__144__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__145__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__145__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__145__b;
    __Vfunc_aes_core__DOT__xtime__145__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__146__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__146__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__146__b;
    __Vfunc_aes_core__DOT__mul11__146__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__147__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__147__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__147__b;
    __Vfunc_aes_core__DOT__xtime__147__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__148__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__148__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__148__b;
    __Vfunc_aes_core__DOT__xtime__148__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__149__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__149__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__149__b;
    __Vfunc_aes_core__DOT__xtime__149__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__150__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__150__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__150__b;
    __Vfunc_aes_core__DOT__xtime__150__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__151__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__151__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__151__b;
    __Vfunc_aes_core__DOT__mul13__151__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__152__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__152__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__152__b;
    __Vfunc_aes_core__DOT__xtime__152__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__153__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__153__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__153__b;
    __Vfunc_aes_core__DOT__xtime__153__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__154__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__154__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__154__b;
    __Vfunc_aes_core__DOT__xtime__154__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__155__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__155__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__155__b;
    __Vfunc_aes_core__DOT__xtime__155__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__156__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__156__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__156__b;
    __Vfunc_aes_core__DOT__xtime__156__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__157__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__157__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__157__b;
    __Vfunc_aes_core__DOT__mul13__157__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__158__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__158__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__158__b;
    __Vfunc_aes_core__DOT__xtime__158__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__159__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__159__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__159__b;
    __Vfunc_aes_core__DOT__xtime__159__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__160__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__160__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__160__b;
    __Vfunc_aes_core__DOT__xtime__160__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__161__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__161__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__161__b;
    __Vfunc_aes_core__DOT__xtime__161__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__162__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__162__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__162__b;
    __Vfunc_aes_core__DOT__xtime__162__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__163__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__163__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__163__b;
    __Vfunc_aes_core__DOT__mul9__163__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__164__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__164__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__164__b;
    __Vfunc_aes_core__DOT__xtime__164__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__165__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__165__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__165__b;
    __Vfunc_aes_core__DOT__xtime__165__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__166__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__166__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__166__b;
    __Vfunc_aes_core__DOT__xtime__166__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__167__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__167__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__167__b;
    __Vfunc_aes_core__DOT__mul14__167__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__168__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__168__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__168__b;
    __Vfunc_aes_core__DOT__xtime__168__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__169__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__169__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__169__b;
    __Vfunc_aes_core__DOT__xtime__169__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__170__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__170__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__170__b;
    __Vfunc_aes_core__DOT__xtime__170__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__171__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__171__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__171__b;
    __Vfunc_aes_core__DOT__xtime__171__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__172__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__172__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__172__b;
    __Vfunc_aes_core__DOT__xtime__172__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__173__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__173__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__173__b;
    __Vfunc_aes_core__DOT__xtime__173__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__174__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__174__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__174__b;
    __Vfunc_aes_core__DOT__mul11__174__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__175__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__175__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__175__b;
    __Vfunc_aes_core__DOT__xtime__175__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__176__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__176__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__176__b;
    __Vfunc_aes_core__DOT__xtime__176__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__177__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__177__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__177__b;
    __Vfunc_aes_core__DOT__xtime__177__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__178__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__178__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__178__b;
    __Vfunc_aes_core__DOT__xtime__178__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__179__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__179__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__179__b;
    __Vfunc_aes_core__DOT__mul11__179__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__180__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__180__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__180__b;
    __Vfunc_aes_core__DOT__xtime__180__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__181__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__181__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__181__b;
    __Vfunc_aes_core__DOT__xtime__181__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__182__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__182__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__182__b;
    __Vfunc_aes_core__DOT__xtime__182__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__183__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__183__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__183__b;
    __Vfunc_aes_core__DOT__xtime__183__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__184__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__184__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__184__b;
    __Vfunc_aes_core__DOT__mul13__184__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__185__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__185__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__185__b;
    __Vfunc_aes_core__DOT__xtime__185__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__186__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__186__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__186__b;
    __Vfunc_aes_core__DOT__xtime__186__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__187__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__187__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__187__b;
    __Vfunc_aes_core__DOT__xtime__187__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__188__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__188__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__188__b;
    __Vfunc_aes_core__DOT__xtime__188__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__189__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__189__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__189__b;
    __Vfunc_aes_core__DOT__xtime__189__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__190__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__190__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__190__b;
    __Vfunc_aes_core__DOT__mul9__190__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__191__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__191__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__191__b;
    __Vfunc_aes_core__DOT__xtime__191__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__192__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__192__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__192__b;
    __Vfunc_aes_core__DOT__xtime__192__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__193__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__193__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__193__b;
    __Vfunc_aes_core__DOT__xtime__193__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__194__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__194__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__194__b;
    __Vfunc_aes_core__DOT__mul14__194__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__195__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__195__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__195__b;
    __Vfunc_aes_core__DOT__xtime__195__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__196__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__196__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__196__b;
    __Vfunc_aes_core__DOT__xtime__196__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__197__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__197__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__197__b;
    __Vfunc_aes_core__DOT__xtime__197__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__198__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__198__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__198__b;
    __Vfunc_aes_core__DOT__xtime__198__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__199__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__199__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__199__b;
    __Vfunc_aes_core__DOT__xtime__199__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__200__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__200__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__200__b;
    __Vfunc_aes_core__DOT__xtime__200__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__201__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__201__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__201__b;
    __Vfunc_aes_core__DOT__mul14__201__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__202__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__202__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__202__b;
    __Vfunc_aes_core__DOT__xtime__202__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__203__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__203__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__203__b;
    __Vfunc_aes_core__DOT__xtime__203__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__204__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__204__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__204__b;
    __Vfunc_aes_core__DOT__xtime__204__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__205__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__205__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__205__b;
    __Vfunc_aes_core__DOT__xtime__205__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__206__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__206__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__206__b;
    __Vfunc_aes_core__DOT__xtime__206__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__207__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__207__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__207__b;
    __Vfunc_aes_core__DOT__xtime__207__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__208__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__208__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__208__b;
    __Vfunc_aes_core__DOT__mul11__208__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__209__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__209__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__209__b;
    __Vfunc_aes_core__DOT__xtime__209__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__210__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__210__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__210__b;
    __Vfunc_aes_core__DOT__xtime__210__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__211__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__211__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__211__b;
    __Vfunc_aes_core__DOT__xtime__211__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__212__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__212__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__212__b;
    __Vfunc_aes_core__DOT__xtime__212__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__213__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__213__b;
    __Vfunc_aes_core__DOT__mul13__213__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__214__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__214__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__214__b;
    __Vfunc_aes_core__DOT__xtime__214__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__215__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__215__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__215__b;
    __Vfunc_aes_core__DOT__xtime__215__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__216__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__216__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__216__b;
    __Vfunc_aes_core__DOT__xtime__216__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__217__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__217__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__217__b;
    __Vfunc_aes_core__DOT__xtime__217__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__218__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__218__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__218__b;
    __Vfunc_aes_core__DOT__xtime__218__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__219__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__219__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__219__b;
    __Vfunc_aes_core__DOT__mul9__219__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__220__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__220__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__220__b;
    __Vfunc_aes_core__DOT__xtime__220__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__221__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__221__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__221__b;
    __Vfunc_aes_core__DOT__xtime__221__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__222__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__222__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__222__b;
    __Vfunc_aes_core__DOT__xtime__222__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__223__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__223__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__223__b;
    __Vfunc_aes_core__DOT__mul9__223__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__224__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__224__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__224__b;
    __Vfunc_aes_core__DOT__xtime__224__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__225__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__225__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__225__b;
    __Vfunc_aes_core__DOT__xtime__225__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__226__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__226__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__226__b;
    __Vfunc_aes_core__DOT__xtime__226__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__227__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__227__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__227__b;
    __Vfunc_aes_core__DOT__mul14__227__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__228__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__228__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__228__b;
    __Vfunc_aes_core__DOT__xtime__228__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__229__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__229__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__229__b;
    __Vfunc_aes_core__DOT__xtime__229__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__230__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__230__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__230__b;
    __Vfunc_aes_core__DOT__xtime__230__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__231__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__231__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__231__b;
    __Vfunc_aes_core__DOT__xtime__231__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__232__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__232__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__232__b;
    __Vfunc_aes_core__DOT__xtime__232__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__233__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__233__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__233__b;
    __Vfunc_aes_core__DOT__xtime__233__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__234__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__234__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__234__b;
    __Vfunc_aes_core__DOT__mul11__234__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__235__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__235__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__235__b;
    __Vfunc_aes_core__DOT__xtime__235__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__236__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__236__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__236__b;
    __Vfunc_aes_core__DOT__xtime__236__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__237__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__237__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__237__b;
    __Vfunc_aes_core__DOT__xtime__237__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__238__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__238__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__238__b;
    __Vfunc_aes_core__DOT__xtime__238__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__239__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__239__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__239__b;
    __Vfunc_aes_core__DOT__mul13__239__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__240__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__240__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__240__b;
    __Vfunc_aes_core__DOT__xtime__240__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__241__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__241__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__241__b;
    __Vfunc_aes_core__DOT__xtime__241__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__242__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__242__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__242__b;
    __Vfunc_aes_core__DOT__xtime__242__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__243__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__243__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__243__b;
    __Vfunc_aes_core__DOT__xtime__243__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__244__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__244__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__244__b;
    __Vfunc_aes_core__DOT__xtime__244__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__245__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__245__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__245__b;
    __Vfunc_aes_core__DOT__mul13__245__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__246__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__246__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__246__b;
    __Vfunc_aes_core__DOT__xtime__246__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__247__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__247__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__247__b;
    __Vfunc_aes_core__DOT__xtime__247__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__248__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__248__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__248__b;
    __Vfunc_aes_core__DOT__xtime__248__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__249__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__249__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__249__b;
    __Vfunc_aes_core__DOT__xtime__249__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__250__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__250__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__250__b;
    __Vfunc_aes_core__DOT__xtime__250__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__251__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__251__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__251__b;
    __Vfunc_aes_core__DOT__mul9__251__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__252__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__252__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__252__b;
    __Vfunc_aes_core__DOT__xtime__252__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__253__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__253__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__253__b;
    __Vfunc_aes_core__DOT__xtime__253__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__254__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__254__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__254__b;
    __Vfunc_aes_core__DOT__xtime__254__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__255__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__255__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__255__b;
    __Vfunc_aes_core__DOT__mul14__255__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__256__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__256__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__256__b;
    __Vfunc_aes_core__DOT__xtime__256__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__257__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__257__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__257__b;
    __Vfunc_aes_core__DOT__xtime__257__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__258__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__258__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__258__b;
    __Vfunc_aes_core__DOT__xtime__258__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__259__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__259__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__259__b;
    __Vfunc_aes_core__DOT__xtime__259__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__260__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__260__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__260__b;
    __Vfunc_aes_core__DOT__xtime__260__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__261__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__261__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__261__b;
    __Vfunc_aes_core__DOT__xtime__261__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__262__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__262__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__262__b;
    __Vfunc_aes_core__DOT__mul11__262__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__263__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__263__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__263__b;
    __Vfunc_aes_core__DOT__xtime__263__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__264__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__264__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__264__b;
    __Vfunc_aes_core__DOT__xtime__264__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__265__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__265__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__265__b;
    __Vfunc_aes_core__DOT__xtime__265__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__266__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__266__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__266__b;
    __Vfunc_aes_core__DOT__xtime__266__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__267__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__267__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__267__b;
    __Vfunc_aes_core__DOT__mul11__267__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__268__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__268__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__268__b;
    __Vfunc_aes_core__DOT__xtime__268__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__269__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__269__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__269__b;
    __Vfunc_aes_core__DOT__xtime__269__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__270__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__270__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__270__b;
    __Vfunc_aes_core__DOT__xtime__270__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__271__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__271__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__271__b;
    __Vfunc_aes_core__DOT__xtime__271__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__272__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__272__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__272__b;
    __Vfunc_aes_core__DOT__mul13__272__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__273__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__273__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__273__b;
    __Vfunc_aes_core__DOT__xtime__273__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__274__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__274__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__274__b;
    __Vfunc_aes_core__DOT__xtime__274__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__275__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__275__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__275__b;
    __Vfunc_aes_core__DOT__xtime__275__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__276__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__276__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__276__b;
    __Vfunc_aes_core__DOT__xtime__276__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__277__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__277__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__277__b;
    __Vfunc_aes_core__DOT__xtime__277__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__278__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__278__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__278__b;
    __Vfunc_aes_core__DOT__mul9__278__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__279__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__279__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__279__b;
    __Vfunc_aes_core__DOT__xtime__279__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__280__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__280__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__280__b;
    __Vfunc_aes_core__DOT__xtime__280__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__281__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__281__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__281__b;
    __Vfunc_aes_core__DOT__xtime__281__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__282__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__282__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__282__b;
    __Vfunc_aes_core__DOT__mul14__282__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__283__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__283__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__283__b;
    __Vfunc_aes_core__DOT__xtime__283__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__284__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__284__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__284__b;
    __Vfunc_aes_core__DOT__xtime__284__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__285__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__285__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__285__b;
    __Vfunc_aes_core__DOT__xtime__285__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__286__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__286__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__286__b;
    __Vfunc_aes_core__DOT__xtime__286__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__287__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__287__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__287__b;
    __Vfunc_aes_core__DOT__xtime__287__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__288__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__288__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__288__b;
    __Vfunc_aes_core__DOT__xtime__288__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__289__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__289__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__289__b;
    __Vfunc_aes_core__DOT__mul14__289__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__290__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__290__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__290__b;
    __Vfunc_aes_core__DOT__xtime__290__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__291__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__291__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__291__b;
    __Vfunc_aes_core__DOT__xtime__291__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__292__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__292__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__292__b;
    __Vfunc_aes_core__DOT__xtime__292__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__293__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__293__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__293__b;
    __Vfunc_aes_core__DOT__xtime__293__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__294__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__294__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__294__b;
    __Vfunc_aes_core__DOT__xtime__294__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__295__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__295__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__295__b;
    __Vfunc_aes_core__DOT__xtime__295__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__296__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__296__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__296__b;
    __Vfunc_aes_core__DOT__mul11__296__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__297__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__297__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__297__b;
    __Vfunc_aes_core__DOT__xtime__297__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__298__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__298__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__298__b;
    __Vfunc_aes_core__DOT__xtime__298__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__299__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__299__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__299__b;
    __Vfunc_aes_core__DOT__xtime__299__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__300__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__300__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__300__b;
    __Vfunc_aes_core__DOT__xtime__300__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__301__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__301__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__301__b;
    __Vfunc_aes_core__DOT__mul13__301__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__302__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__302__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__302__b;
    __Vfunc_aes_core__DOT__xtime__302__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__303__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__303__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__303__b;
    __Vfunc_aes_core__DOT__xtime__303__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__304__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__304__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__304__b;
    __Vfunc_aes_core__DOT__xtime__304__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__305__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__305__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__305__b;
    __Vfunc_aes_core__DOT__xtime__305__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__306__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__306__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__306__b;
    __Vfunc_aes_core__DOT__xtime__306__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__307__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__307__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__307__b;
    __Vfunc_aes_core__DOT__mul9__307__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__308__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__308__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__308__b;
    __Vfunc_aes_core__DOT__xtime__308__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__309__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__309__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__309__b;
    __Vfunc_aes_core__DOT__xtime__309__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__310__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__310__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__310__b;
    __Vfunc_aes_core__DOT__xtime__310__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__311__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__311__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__311__b;
    __Vfunc_aes_core__DOT__mul9__311__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__312__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__312__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__312__b;
    __Vfunc_aes_core__DOT__xtime__312__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__313__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__313__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__313__b;
    __Vfunc_aes_core__DOT__xtime__313__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__314__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__314__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__314__b;
    __Vfunc_aes_core__DOT__xtime__314__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__315__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__315__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__315__b;
    __Vfunc_aes_core__DOT__mul14__315__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__316__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__316__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__316__b;
    __Vfunc_aes_core__DOT__xtime__316__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__317__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__317__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__317__b;
    __Vfunc_aes_core__DOT__xtime__317__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__318__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__318__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__318__b;
    __Vfunc_aes_core__DOT__xtime__318__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__319__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__319__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__319__b;
    __Vfunc_aes_core__DOT__xtime__319__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__320__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__320__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__320__b;
    __Vfunc_aes_core__DOT__xtime__320__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__321__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__321__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__321__b;
    __Vfunc_aes_core__DOT__xtime__321__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__322__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__322__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__322__b;
    __Vfunc_aes_core__DOT__mul11__322__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__323__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__323__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__323__b;
    __Vfunc_aes_core__DOT__xtime__323__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__324__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__324__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__324__b;
    __Vfunc_aes_core__DOT__xtime__324__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__325__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__325__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__325__b;
    __Vfunc_aes_core__DOT__xtime__325__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__326__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__326__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__326__b;
    __Vfunc_aes_core__DOT__xtime__326__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__327__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__327__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__327__b;
    __Vfunc_aes_core__DOT__mul13__327__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__328__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__328__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__328__b;
    __Vfunc_aes_core__DOT__xtime__328__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__329__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__329__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__329__b;
    __Vfunc_aes_core__DOT__xtime__329__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__330__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__330__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__330__b;
    __Vfunc_aes_core__DOT__xtime__330__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__331__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__331__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__331__b;
    __Vfunc_aes_core__DOT__xtime__331__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__332__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__332__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__332__b;
    __Vfunc_aes_core__DOT__xtime__332__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__333__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__333__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__333__b;
    __Vfunc_aes_core__DOT__mul13__333__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__334__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__334__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__334__b;
    __Vfunc_aes_core__DOT__xtime__334__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__335__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__335__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__335__b;
    __Vfunc_aes_core__DOT__xtime__335__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__336__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__336__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__336__b;
    __Vfunc_aes_core__DOT__xtime__336__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__337__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__337__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__337__b;
    __Vfunc_aes_core__DOT__xtime__337__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__338__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__338__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__338__b;
    __Vfunc_aes_core__DOT__xtime__338__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__339__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__339__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__339__b;
    __Vfunc_aes_core__DOT__mul9__339__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__340__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__340__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__340__b;
    __Vfunc_aes_core__DOT__xtime__340__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__341__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__341__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__341__b;
    __Vfunc_aes_core__DOT__xtime__341__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__342__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__342__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__342__b;
    __Vfunc_aes_core__DOT__xtime__342__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__343__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__343__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__343__b;
    __Vfunc_aes_core__DOT__mul14__343__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__344__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__344__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__344__b;
    __Vfunc_aes_core__DOT__xtime__344__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__345__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__345__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__345__b;
    __Vfunc_aes_core__DOT__xtime__345__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__346__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__346__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__346__b;
    __Vfunc_aes_core__DOT__xtime__346__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__347__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__347__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__347__b;
    __Vfunc_aes_core__DOT__xtime__347__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__348__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__348__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__348__b;
    __Vfunc_aes_core__DOT__xtime__348__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__349__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__349__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__349__b;
    __Vfunc_aes_core__DOT__xtime__349__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__350__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__350__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__350__b;
    __Vfunc_aes_core__DOT__mul11__350__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__351__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__351__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__351__b;
    __Vfunc_aes_core__DOT__xtime__351__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__352__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__352__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__352__b;
    __Vfunc_aes_core__DOT__xtime__352__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__353__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__353__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__353__b;
    __Vfunc_aes_core__DOT__xtime__353__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__354__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__354__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__354__b;
    __Vfunc_aes_core__DOT__xtime__354__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__355__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__355__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__355__b;
    __Vfunc_aes_core__DOT__mul11__355__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__356__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__356__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__356__b;
    __Vfunc_aes_core__DOT__xtime__356__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__357__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__357__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__357__b;
    __Vfunc_aes_core__DOT__xtime__357__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__358__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__358__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__358__b;
    __Vfunc_aes_core__DOT__xtime__358__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__359__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__359__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__359__b;
    __Vfunc_aes_core__DOT__xtime__359__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__360__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__360__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__360__b;
    __Vfunc_aes_core__DOT__mul13__360__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__361__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__361__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__361__b;
    __Vfunc_aes_core__DOT__xtime__361__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__362__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__362__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__362__b;
    __Vfunc_aes_core__DOT__xtime__362__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__363__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__363__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__363__b;
    __Vfunc_aes_core__DOT__xtime__363__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__364__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__364__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__364__b;
    __Vfunc_aes_core__DOT__xtime__364__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__365__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__365__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__365__b;
    __Vfunc_aes_core__DOT__xtime__365__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__366__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__366__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__366__b;
    __Vfunc_aes_core__DOT__mul9__366__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__367__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__367__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__367__b;
    __Vfunc_aes_core__DOT__xtime__367__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__368__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__368__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__368__b;
    __Vfunc_aes_core__DOT__xtime__368__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__369__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__369__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__369__b;
    __Vfunc_aes_core__DOT__xtime__369__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__370__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__370__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__370__b;
    __Vfunc_aes_core__DOT__mul14__370__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__371__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__371__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__371__b;
    __Vfunc_aes_core__DOT__xtime__371__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__372__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__372__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__372__b;
    __Vfunc_aes_core__DOT__xtime__372__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__373__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__373__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__373__b;
    __Vfunc_aes_core__DOT__xtime__373__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__374__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__374__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__374__b;
    __Vfunc_aes_core__DOT__xtime__374__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__375__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__375__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__375__b;
    __Vfunc_aes_core__DOT__xtime__375__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__376__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__376__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__376__b;
    __Vfunc_aes_core__DOT__xtime__376__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__377__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__377__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__377__b;
    __Vfunc_aes_core__DOT__mul14__377__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__378__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__378__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__378__b;
    __Vfunc_aes_core__DOT__xtime__378__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__379__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__379__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__379__b;
    __Vfunc_aes_core__DOT__xtime__379__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__380__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__380__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__380__b;
    __Vfunc_aes_core__DOT__xtime__380__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__381__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__381__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__381__b;
    __Vfunc_aes_core__DOT__xtime__381__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__382__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__382__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__382__b;
    __Vfunc_aes_core__DOT__xtime__382__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__383__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__383__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__383__b;
    __Vfunc_aes_core__DOT__xtime__383__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__384__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__384__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__384__b;
    __Vfunc_aes_core__DOT__mul11__384__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__385__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__385__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__385__b;
    __Vfunc_aes_core__DOT__xtime__385__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__386__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__386__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__386__b;
    __Vfunc_aes_core__DOT__xtime__386__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__387__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__387__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__387__b;
    __Vfunc_aes_core__DOT__xtime__387__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__388__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__388__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__388__b;
    __Vfunc_aes_core__DOT__xtime__388__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__389__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__389__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__389__b;
    __Vfunc_aes_core__DOT__mul13__389__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__390__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__390__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__390__b;
    __Vfunc_aes_core__DOT__xtime__390__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__391__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__391__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__391__b;
    __Vfunc_aes_core__DOT__xtime__391__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__392__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__392__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__392__b;
    __Vfunc_aes_core__DOT__xtime__392__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__393__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__393__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__393__b;
    __Vfunc_aes_core__DOT__xtime__393__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__394__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__394__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__394__b;
    __Vfunc_aes_core__DOT__xtime__394__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__395__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__395__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__395__b;
    __Vfunc_aes_core__DOT__mul9__395__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__396__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__396__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__396__b;
    __Vfunc_aes_core__DOT__xtime__396__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__397__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__397__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__397__b;
    __Vfunc_aes_core__DOT__xtime__397__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__398__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__398__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__398__b;
    __Vfunc_aes_core__DOT__xtime__398__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__399__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__399__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__399__b;
    __Vfunc_aes_core__DOT__mul9__399__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__400__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__400__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__400__b;
    __Vfunc_aes_core__DOT__xtime__400__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__401__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__401__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__401__b;
    __Vfunc_aes_core__DOT__xtime__401__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__402__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__402__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__402__b;
    __Vfunc_aes_core__DOT__xtime__402__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__403__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__403__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__403__b;
    __Vfunc_aes_core__DOT__mul14__403__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__404__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__404__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__404__b;
    __Vfunc_aes_core__DOT__xtime__404__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__405__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__405__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__405__b;
    __Vfunc_aes_core__DOT__xtime__405__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__406__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__406__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__406__b;
    __Vfunc_aes_core__DOT__xtime__406__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__407__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__407__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__407__b;
    __Vfunc_aes_core__DOT__xtime__407__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__408__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__408__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__408__b;
    __Vfunc_aes_core__DOT__xtime__408__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__409__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__409__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__409__b;
    __Vfunc_aes_core__DOT__xtime__409__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__410__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__410__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__410__b;
    __Vfunc_aes_core__DOT__mul11__410__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__411__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__411__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__411__b;
    __Vfunc_aes_core__DOT__xtime__411__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__412__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__412__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__412__b;
    __Vfunc_aes_core__DOT__xtime__412__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__413__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__413__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__413__b;
    __Vfunc_aes_core__DOT__xtime__413__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__414__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__414__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__414__b;
    __Vfunc_aes_core__DOT__xtime__414__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__415__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__415__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__415__b;
    __Vfunc_aes_core__DOT__mul13__415__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__416__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__416__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__416__b;
    __Vfunc_aes_core__DOT__xtime__416__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__417__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__417__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__417__b;
    __Vfunc_aes_core__DOT__xtime__417__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__418__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__418__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__418__b;
    __Vfunc_aes_core__DOT__xtime__418__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__419__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__419__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__419__b;
    __Vfunc_aes_core__DOT__xtime__419__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__420__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__420__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__420__b;
    __Vfunc_aes_core__DOT__xtime__420__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__421__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__421__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__421__b;
    __Vfunc_aes_core__DOT__mul13__421__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__422__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__422__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__422__b;
    __Vfunc_aes_core__DOT__xtime__422__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__423__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__423__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__423__b;
    __Vfunc_aes_core__DOT__xtime__423__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__424__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__424__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__424__b;
    __Vfunc_aes_core__DOT__xtime__424__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__425__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__425__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__425__b;
    __Vfunc_aes_core__DOT__xtime__425__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__426__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__426__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__426__b;
    __Vfunc_aes_core__DOT__xtime__426__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__427__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__427__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__427__b;
    __Vfunc_aes_core__DOT__mul9__427__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__428__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__428__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__428__b;
    __Vfunc_aes_core__DOT__xtime__428__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__429__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__429__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__429__b;
    __Vfunc_aes_core__DOT__xtime__429__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__430__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__430__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__430__b;
    __Vfunc_aes_core__DOT__xtime__430__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__431__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__431__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__431__b;
    __Vfunc_aes_core__DOT__mul14__431__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__432__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__432__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__432__b;
    __Vfunc_aes_core__DOT__xtime__432__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__433__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__433__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__433__b;
    __Vfunc_aes_core__DOT__xtime__433__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__434__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__434__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__434__b;
    __Vfunc_aes_core__DOT__xtime__434__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__435__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__435__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__435__b;
    __Vfunc_aes_core__DOT__xtime__435__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__436__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__436__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__436__b;
    __Vfunc_aes_core__DOT__xtime__436__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__437__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__437__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__437__b;
    __Vfunc_aes_core__DOT__xtime__437__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__438__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__438__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__438__b;
    __Vfunc_aes_core__DOT__mul11__438__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__439__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__439__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__439__b;
    __Vfunc_aes_core__DOT__xtime__439__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__440__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__440__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__440__b;
    __Vfunc_aes_core__DOT__xtime__440__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__441__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__441__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__441__b;
    __Vfunc_aes_core__DOT__xtime__441__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__442__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__442__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__442__b;
    __Vfunc_aes_core__DOT__xtime__442__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__443__Vfuncout;
    __Vfunc_aes_core__DOT__mul11__443__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul11__443__b;
    __Vfunc_aes_core__DOT__mul11__443__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__444__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__444__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__444__b;
    __Vfunc_aes_core__DOT__xtime__444__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__445__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__445__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__445__b;
    __Vfunc_aes_core__DOT__xtime__445__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__446__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__446__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__446__b;
    __Vfunc_aes_core__DOT__xtime__446__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__447__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__447__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__447__b;
    __Vfunc_aes_core__DOT__xtime__447__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__448__Vfuncout;
    __Vfunc_aes_core__DOT__mul13__448__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul13__448__b;
    __Vfunc_aes_core__DOT__mul13__448__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__449__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__449__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__449__b;
    __Vfunc_aes_core__DOT__xtime__449__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__450__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__450__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__450__b;
    __Vfunc_aes_core__DOT__xtime__450__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__451__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__451__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__451__b;
    __Vfunc_aes_core__DOT__xtime__451__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__452__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__452__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__452__b;
    __Vfunc_aes_core__DOT__xtime__452__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__453__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__453__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__453__b;
    __Vfunc_aes_core__DOT__xtime__453__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__454__Vfuncout;
    __Vfunc_aes_core__DOT__mul9__454__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul9__454__b;
    __Vfunc_aes_core__DOT__mul9__454__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__455__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__455__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__455__b;
    __Vfunc_aes_core__DOT__xtime__455__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__456__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__456__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__456__b;
    __Vfunc_aes_core__DOT__xtime__456__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__457__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__457__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__457__b;
    __Vfunc_aes_core__DOT__xtime__457__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__458__Vfuncout;
    __Vfunc_aes_core__DOT__mul14__458__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__mul14__458__b;
    __Vfunc_aes_core__DOT__mul14__458__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__459__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__459__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__459__b;
    __Vfunc_aes_core__DOT__xtime__459__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__460__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__460__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__460__b;
    __Vfunc_aes_core__DOT__xtime__460__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__461__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__461__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__461__b;
    __Vfunc_aes_core__DOT__xtime__461__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__462__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__462__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__462__b;
    __Vfunc_aes_core__DOT__xtime__462__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__463__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__463__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__463__b;
    __Vfunc_aes_core__DOT__xtime__463__b = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__464__Vfuncout;
    __Vfunc_aes_core__DOT__xtime__464__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__xtime__464__b;
    __Vfunc_aes_core__DOT__xtime__464__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__465__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__465__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__465__data_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__465__data_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__465__round_key_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__465__round_key_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__466__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__466__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__467__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__467__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__468__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__468__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__468__data_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__468__data_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__468__round_key_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__468__round_key_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in);
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vdly__aes_core__DOT__round_cnt;
    __Vdly__aes_core__DOT__round_cnt = 0;
    VlWide<4>/*127:0*/ __Vdly__aes_core__DOT__state_reg;
    VL_ZERO_W(128, __Vdly__aes_core__DOT__state_reg);
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v0;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v0);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v0;
    __VdlySet__aes_core__DOT__round_keys__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v1;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v1);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v1;
    __VdlySet__aes_core__DOT__round_keys__v1 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v2;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v2);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v2;
    __VdlySet__aes_core__DOT__round_keys__v2 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v3;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v3);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v3;
    __VdlySet__aes_core__DOT__round_keys__v3 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v4;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v4);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v4;
    __VdlySet__aes_core__DOT__round_keys__v4 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v5;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v5);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v5;
    __VdlySet__aes_core__DOT__round_keys__v5 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v6;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v6);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v6;
    __VdlySet__aes_core__DOT__round_keys__v6 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v7;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v7);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v7;
    __VdlySet__aes_core__DOT__round_keys__v7 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v8;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v8);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v8;
    __VdlySet__aes_core__DOT__round_keys__v8 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v9;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v9);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v9;
    __VdlySet__aes_core__DOT__round_keys__v9 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__aes_core__DOT__round_keys__v10;
    VL_ZERO_W(128, __VdlyVal__aes_core__DOT__round_keys__v10);
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v10;
    __VdlySet__aes_core__DOT__round_keys__v10 = 0;
    IData/*31:0*/ __VdlyVal__data_out__v0;
    __VdlyVal__data_out__v0 = 0;
    CData/*0:0*/ __VdlySet__data_out__v0;
    __VdlySet__data_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__data_out__v1;
    __VdlyVal__data_out__v1 = 0;
    CData/*0:0*/ __VdlySet__data_out__v1;
    __VdlySet__data_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__data_out__v2;
    __VdlyVal__data_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__data_out__v3;
    __VdlyVal__data_out__v3 = 0;
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v11;
    __VdlySet__aes_core__DOT__round_keys__v11 = 0;
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v12;
    __VdlySet__aes_core__DOT__round_keys__v12 = 0;
    CData/*0:0*/ __VdlySet__aes_core__DOT__round_keys__v13;
    __VdlySet__aes_core__DOT__round_keys__v13 = 0;
    // Body
    __Vdly__aes_core__DOT__state_reg[0U] = vlSelfRef.aes_core__DOT__state_reg[0U];
    __Vdly__aes_core__DOT__state_reg[1U] = vlSelfRef.aes_core__DOT__state_reg[1U];
    __Vdly__aes_core__DOT__state_reg[2U] = vlSelfRef.aes_core__DOT__state_reg[2U];
    __Vdly__aes_core__DOT__state_reg[3U] = vlSelfRef.aes_core__DOT__state_reg[3U];
    __VdlySet__data_out__v0 = 0U;
    __VdlySet__data_out__v1 = 0U;
    __Vdly__aes_core__DOT__round_cnt = vlSelfRef.aes_core__DOT__round_cnt;
    __VdlySet__aes_core__DOT__round_keys__v0 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v1 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v2 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v3 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v4 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v5 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v6 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v7 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v8 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v9 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v10 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v11 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v12 = 0U;
    __VdlySet__aes_core__DOT__round_keys__v13 = 0U;
    if (vlSelfRef.rst_n) {
        if ((0U == (IData)(vlSelfRef.aes_core__DOT__state))) {
            vlSelfRef.done = 0U;
            if (vlSelfRef.start) {
                vlSelfRef.busy = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.aes_core__DOT__state))) {
            __VdlyVal__aes_core__DOT__round_keys__v0[0U] 
                = vlSelfRef.aes_core__DOT__formatted_key[0U];
            __VdlyVal__aes_core__DOT__round_keys__v0[1U] 
                = vlSelfRef.aes_core__DOT__formatted_key[1U];
            __VdlyVal__aes_core__DOT__round_keys__v0[2U] 
                = vlSelfRef.aes_core__DOT__formatted_key[2U];
            __VdlyVal__aes_core__DOT__round_keys__v0[3U] 
                = vlSelfRef.aes_core__DOT__formatted_key[3U];
            __VdlySet__aes_core__DOT__round_keys__v0 = 1U;
            if ((0U == ((((vlSelfRef.aes_core__DOT__round_keys
                           [0U][0U] ^ vlSelfRef.aes_core__DOT__formatted_key[0U]) 
                          | (vlSelfRef.aes_core__DOT__round_keys
                             [0U][1U] ^ vlSelfRef.aes_core__DOT__formatted_key[1U])) 
                         | (vlSelfRef.aes_core__DOT__round_keys
                            [0U][2U] ^ vlSelfRef.aes_core__DOT__formatted_key[2U])) 
                        | (vlSelfRef.aes_core__DOT__round_keys
                           [0U][3U] ^ vlSelfRef.aes_core__DOT__formatted_key[3U])))) {
                __Vfunc_aes_core__DOT__key_expansion__0__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__0__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__0__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__0__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__0__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__0__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__0__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__0__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__0__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__0__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v1[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v1[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v1[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v1[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__0__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v1 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__1__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__2__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__2__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__2__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__2__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__2__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__2__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__2__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__2__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__2__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__2__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__1__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__1__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__1__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__1__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__2__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__1__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__1__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__1__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__1__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__1__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v2[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v2[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v2[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v2[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__1__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v2 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__3__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__4__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__5__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__5__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__5__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__5__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__5__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__5__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__5__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__5__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__5__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__5__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__4__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__4__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__4__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__4__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__5__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__4__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__4__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__4__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__4__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__4__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__3__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__3__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__3__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__3__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__4__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__3__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__3__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__3__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__3__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__3__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v3[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v3[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v3[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v3[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__3__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v3 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__6__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [3U];
                __Vfunc_aes_core__DOT__key_expansion__7__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__8__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__9__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__9__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__9__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__9__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__9__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__9__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__9__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__9__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__9__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__9__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__8__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__8__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__8__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__8__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__9__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__8__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__8__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__8__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__8__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__8__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__7__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__7__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__7__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__7__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__8__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__7__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__7__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__7__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__7__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__7__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__6__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__6__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__6__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__6__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__7__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__6__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__6__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__6__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__6__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__6__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v4[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v4[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v4[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v4[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__6__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v4 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__10__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [4U];
                __Vfunc_aes_core__DOT__key_expansion__11__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [3U];
                __Vfunc_aes_core__DOT__key_expansion__12__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__13__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__14__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__14__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__14__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__14__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__14__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__14__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__14__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__14__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__14__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__14__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__13__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__13__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__13__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__13__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__14__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__13__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__13__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__13__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__13__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__13__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__12__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__12__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__12__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__12__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__13__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__12__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__12__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__12__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__12__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__12__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__11__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__11__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__11__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__11__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__12__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__11__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__11__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__11__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__11__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__11__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__10__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__10__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__10__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__10__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__11__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__10__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__10__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__10__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__10__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__10__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v5[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v5[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v5[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v5[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__10__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v5 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__15__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [5U];
                __Vfunc_aes_core__DOT__key_expansion__16__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [4U];
                __Vfunc_aes_core__DOT__key_expansion__17__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [3U];
                __Vfunc_aes_core__DOT__key_expansion__18__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__19__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__20__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__20__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__20__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__20__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__20__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__20__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__20__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__20__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__20__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__20__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__19__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__19__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__19__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__19__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__20__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__19__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__19__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__19__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__19__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__19__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__18__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__18__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__18__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__18__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__19__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__18__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__18__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__18__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__18__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__18__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__17__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__17__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__17__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__17__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__18__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__17__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__17__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__17__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__17__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__17__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__16__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__16__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__16__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__16__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__17__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__16__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__16__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__16__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__16__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__16__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__15__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__15__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__15__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__15__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__16__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__15__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__15__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__15__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__15__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__15__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v6[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v6[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v6[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v6[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__15__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v6 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__21__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [6U];
                __Vfunc_aes_core__DOT__key_expansion__22__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [5U];
                __Vfunc_aes_core__DOT__key_expansion__23__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [4U];
                __Vfunc_aes_core__DOT__key_expansion__24__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [3U];
                __Vfunc_aes_core__DOT__key_expansion__25__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__26__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__27__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__27__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__27__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__27__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__27__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__27__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__27__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__27__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__27__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__27__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__26__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__26__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__26__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__26__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__27__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__26__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__26__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__26__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__26__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__26__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__25__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__25__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__25__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__25__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__26__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__25__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__25__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__25__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__25__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__25__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__24__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__24__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__24__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__24__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__25__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__24__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__24__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__24__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__24__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__24__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__23__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__23__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__23__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__23__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__24__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__23__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__23__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__23__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__23__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__23__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__22__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__22__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__22__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__22__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__23__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__22__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__22__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__22__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__22__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__22__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__21__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__21__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__21__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__21__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__22__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__21__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__21__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__21__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__21__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__21__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v7[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v7[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v7[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v7[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__21__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v7 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__28__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [7U];
                __Vfunc_aes_core__DOT__key_expansion__29__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [6U];
                __Vfunc_aes_core__DOT__key_expansion__30__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [5U];
                __Vfunc_aes_core__DOT__key_expansion__31__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [4U];
                __Vfunc_aes_core__DOT__key_expansion__32__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [3U];
                __Vfunc_aes_core__DOT__key_expansion__33__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__34__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__35__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__35__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__35__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__35__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__35__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__35__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__35__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__35__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__35__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__35__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__34__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__34__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__34__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__34__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__35__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__34__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__34__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__34__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__34__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__34__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__33__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__33__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__33__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__33__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__34__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__33__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__33__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__33__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__33__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__33__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__32__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__32__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__32__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__32__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__33__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__32__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__32__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__32__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__32__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__32__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__31__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__31__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__31__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__31__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__32__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__31__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__31__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__31__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__31__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__31__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__30__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__30__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__30__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__30__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__31__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__30__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__30__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__30__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__30__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__30__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__29__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__29__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__29__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__29__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__30__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__29__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__29__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__29__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__29__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__29__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__28__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__28__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__28__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__28__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__29__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__28__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__28__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__28__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__28__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__28__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v8[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v8[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v8[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v8[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__28__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v8 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__36__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [8U];
                __Vfunc_aes_core__DOT__key_expansion__37__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [7U];
                __Vfunc_aes_core__DOT__key_expansion__38__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [6U];
                __Vfunc_aes_core__DOT__key_expansion__39__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [5U];
                __Vfunc_aes_core__DOT__key_expansion__40__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [4U];
                __Vfunc_aes_core__DOT__key_expansion__41__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [3U];
                __Vfunc_aes_core__DOT__key_expansion__42__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__43__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__44__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__44__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__44__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__44__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__44__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__44__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__44__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__44__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__44__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__44__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__43__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__43__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__43__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__43__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__44__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__43__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__43__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__43__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__43__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__43__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__42__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__42__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__42__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__42__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__43__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__42__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__42__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__42__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__42__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__42__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__41__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__41__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__41__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__41__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__42__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__41__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__41__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__41__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__41__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__41__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__40__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__40__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__40__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__40__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__41__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__40__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__40__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__40__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__40__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__40__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__39__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__39__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__39__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__39__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__40__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__39__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__39__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__39__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__39__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__39__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__38__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__38__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__38__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__38__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__39__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__38__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__38__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__38__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__38__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__38__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__37__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__37__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__37__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__37__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__38__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__37__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__37__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__37__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__37__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__37__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__36__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__36__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__36__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__36__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__37__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__36__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__36__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__36__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__36__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__36__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v9[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v9[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v9[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v9[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__36__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v9 = 1U;
                __Vfunc_aes_core__DOT__key_expansion__45__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [9U];
                __Vfunc_aes_core__DOT__key_expansion__46__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [8U];
                __Vfunc_aes_core__DOT__key_expansion__47__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [7U];
                __Vfunc_aes_core__DOT__key_expansion__48__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [6U];
                __Vfunc_aes_core__DOT__key_expansion__49__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [5U];
                __Vfunc_aes_core__DOT__key_expansion__50__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [4U];
                __Vfunc_aes_core__DOT__key_expansion__51__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [3U];
                __Vfunc_aes_core__DOT__key_expansion__52__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [2U];
                __Vfunc_aes_core__DOT__key_expansion__53__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [1U];
                __Vfunc_aes_core__DOT__key_expansion__54__rcon_val 
                    = vlSelfRef.aes_core__DOT__rcon
                    [0U];
                __Vfunc_aes_core__DOT__key_expansion__54__prev_key[0U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][0U];
                __Vfunc_aes_core__DOT__key_expansion__54__prev_key[1U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][1U];
                __Vfunc_aes_core__DOT__key_expansion__54__prev_key[2U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][2U];
                __Vfunc_aes_core__DOT__key_expansion__54__prev_key[3U] 
                    = vlSelfRef.aes_core__DOT__round_keys
                    [0U][3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__54__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__54__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__54__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__54__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__54__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__53__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__53__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__53__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__53__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__54__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__53__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__53__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__53__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__53__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__53__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__52__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__52__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__52__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__52__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__53__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__52__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__52__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__52__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__52__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__52__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__51__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__51__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__51__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__51__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__52__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__51__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__51__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__51__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__51__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__51__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__50__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__50__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__50__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__50__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__51__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__50__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__50__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__50__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__50__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__50__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__49__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__49__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__49__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__49__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__50__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__49__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__49__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__49__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__49__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__49__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__48__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__48__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__48__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__48__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__49__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__48__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__48__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__48__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__48__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__48__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__47__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__47__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__47__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__47__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__48__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__47__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__47__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__47__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__47__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__47__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__46__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__46__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__46__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__46__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__47__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__46__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__46__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__46__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__46__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__46__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__key_expansion__45__prev_key[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[0U];
                __Vfunc_aes_core__DOT__key_expansion__45__prev_key[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[1U];
                __Vfunc_aes_core__DOT__key_expansion__45__prev_key[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[2U];
                __Vfunc_aes_core__DOT__key_expansion__45__prev_key[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__46__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = __Vfunc_aes_core__DOT__key_expansion__45__prev_key[3U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = __Vfunc_aes_core__DOT__key_expansion__45__prev_key[2U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = __Vfunc_aes_core__DOT__key_expansion__45__prev_key[1U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = __Vfunc_aes_core__DOT__key_expansion__45__prev_key[0U];
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                        << 8U) | (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                                  >> 0x18U));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp)]));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp 
                    = ((0xffffffU & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                       | (0xff000000U & ((0xff000000U 
                                          & vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp) 
                                         ^ ((IData)(__Vfunc_aes_core__DOT__key_expansion__45__rcon_val) 
                                            << 0x18U))));
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1);
                vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                    = (vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3 
                       ^ vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2);
                __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3;
                __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2;
                __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))));
                __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1))) 
                               >> 0x20U));
                __VdlyVal__aes_core__DOT__round_keys__v10[0U] 
                    = __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[0U];
                __VdlyVal__aes_core__DOT__round_keys__v10[1U] 
                    = __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[1U];
                __VdlyVal__aes_core__DOT__round_keys__v10[2U] 
                    = __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[2U];
                __VdlyVal__aes_core__DOT__round_keys__v10[3U] 
                    = __Vfunc_aes_core__DOT__key_expansion__45__Vfuncout[3U];
                __VdlySet__aes_core__DOT__round_keys__v10 = 1U;
                if (vlSelfRef.encrypt) {
                    __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[0U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0U][0U];
                    __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[1U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0U][1U];
                    __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[2U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0U][2U];
                    __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[3U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0U][3U];
                    __Vfunc_aes_core__DOT__add_round_key__55__data_in[0U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[0U];
                    __Vfunc_aes_core__DOT__add_round_key__55__data_in[1U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[1U];
                    __Vfunc_aes_core__DOT__add_round_key__55__data_in[2U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[2U];
                    __Vfunc_aes_core__DOT__add_round_key__55__data_in[3U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[3U];
                    __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[0U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__55__data_in[0U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[0U]);
                    __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[1U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__55__data_in[1U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[1U]);
                    __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[2U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__55__data_in[2U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[2U]);
                    __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[3U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__55__data_in[3U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__55__round_key_in[3U]);
                    __Vdly__aes_core__DOT__round_cnt = 1U;
                    __Vdly__aes_core__DOT__state_reg[0U] 
                        = __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[0U];
                    __Vdly__aes_core__DOT__state_reg[1U] 
                        = __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[1U];
                    __Vdly__aes_core__DOT__state_reg[2U] 
                        = __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[2U];
                    __Vdly__aes_core__DOT__state_reg[3U] 
                        = __Vfunc_aes_core__DOT__add_round_key__55__Vfuncout[3U];
                } else {
                    __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[0U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0xaU][0U];
                    __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[1U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0xaU][1U];
                    __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[2U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0xaU][2U];
                    __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[3U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [0xaU][3U];
                    __Vfunc_aes_core__DOT__add_round_key__56__data_in[0U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[0U];
                    __Vfunc_aes_core__DOT__add_round_key__56__data_in[1U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[1U];
                    __Vfunc_aes_core__DOT__add_round_key__56__data_in[2U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[2U];
                    __Vfunc_aes_core__DOT__add_round_key__56__data_in[3U] 
                        = vlSelfRef.aes_core__DOT__formatted_data_in[3U];
                    __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[0U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__56__data_in[0U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[0U]);
                    __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[1U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__56__data_in[1U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[1U]);
                    __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[2U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__56__data_in[2U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[2U]);
                    __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[3U] 
                        = (__Vfunc_aes_core__DOT__add_round_key__56__data_in[3U] 
                           ^ __Vfunc_aes_core__DOT__add_round_key__56__round_key_in[3U]);
                    __Vdly__aes_core__DOT__round_cnt = 9U;
                    __Vdly__aes_core__DOT__state_reg[0U] 
                        = __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[0U];
                    __Vdly__aes_core__DOT__state_reg[1U] 
                        = __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[1U];
                    __Vdly__aes_core__DOT__state_reg[2U] 
                        = __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[2U];
                    __Vdly__aes_core__DOT__state_reg[3U] 
                        = __Vfunc_aes_core__DOT__add_round_key__56__Vfuncout[3U];
                }
            }
        } else if ((2U == (IData)(vlSelfRef.aes_core__DOT__state))) {
            if (vlSelfRef.encrypt) {
                if ((0xaU >= (IData)(vlSelfRef.aes_core__DOT__round_cnt))) {
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[0U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][0U];
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[1U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][1U];
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[2U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][2U];
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[3U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][3U];
                } else {
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[0U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[1U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[2U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[3U] = 0U;
                }
                __Vfunc_aes_core__DOT__sub_bytes__60__state_in[0U] 
                    = vlSelfRef.aes_core__DOT__state_reg[0U];
                __Vfunc_aes_core__DOT__sub_bytes__60__state_in[1U] 
                    = vlSelfRef.aes_core__DOT__state_reg[1U];
                __Vfunc_aes_core__DOT__sub_bytes__60__state_in[2U] 
                    = vlSelfRef.aes_core__DOT__state_reg[2U];
                __Vfunc_aes_core__DOT__sub_bytes__60__state_in[3U] 
                    = vlSelfRef.aes_core__DOT__state_reg[3U];
                __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[0U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__60__state_in[0U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[0U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[0U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__60__state_in[0U])]));
                __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[1U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__60__state_in[1U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[1U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[1U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__60__state_in[1U])]));
                __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[2U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__60__state_in[2U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[2U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[2U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__60__state_in[2U])]));
                __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[3U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__60__state_in[3U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[3U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__60__state_in[3U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__60__state_in[3U])]));
                __Vfunc_aes_core__DOT__shift_rows__59__state_in[0U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[0U];
                __Vfunc_aes_core__DOT__shift_rows__59__state_in[1U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[1U];
                __Vfunc_aes_core__DOT__shift_rows__59__state_in[2U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[2U];
                __Vfunc_aes_core__DOT__shift_rows__59__state_in[3U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__60__Vfuncout[3U];
                __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[0U] 
                    = (((__Vfunc_aes_core__DOT__shift_rows__59__state_in[0U] 
                         << 0x18U) | (0xff0000U & (
                                                   __Vfunc_aes_core__DOT__shift_rows__59__state_in[3U] 
                                                   << 0x10U))) 
                       | ((0xff00U & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[2U] 
                                      << 8U)) | (0xffU 
                                                 & __Vfunc_aes_core__DOT__shift_rows__59__state_in[1U])));
                __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[1U] 
                    = (((0xff000000U & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[1U] 
                                        << 0x10U)) 
                        | (0xff0000U & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[0U] 
                                        << 8U))) | 
                       ((0xff00U & __Vfunc_aes_core__DOT__shift_rows__59__state_in[3U]) 
                        | (0xffU & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[2U] 
                                    >> 8U))));
                __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[2U] 
                    = (((0xff000000U & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[2U] 
                                        << 8U)) | (0xff0000U 
                                                   & __Vfunc_aes_core__DOT__shift_rows__59__state_in[1U])) 
                       | ((0xff00U & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[0U] 
                                      >> 8U)) | (0xffU 
                                                 & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[3U] 
                                                    >> 0x10U))));
                __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[3U] 
                    = (((0xff000000U & __Vfunc_aes_core__DOT__shift_rows__59__state_in[3U]) 
                        | (0xff0000U & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[2U] 
                                        >> 8U))) | 
                       ((0xff00U & (__Vfunc_aes_core__DOT__shift_rows__59__state_in[1U] 
                                    >> 0x10U)) | (__Vfunc_aes_core__DOT__shift_rows__59__state_in[0U] 
                                                  >> 0x18U)));
                __Vfunc_aes_core__DOT__mix_columns__58__state_in[0U] 
                    = __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[0U];
                __Vfunc_aes_core__DOT__mix_columns__58__state_in[1U] 
                    = __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[1U];
                __Vfunc_aes_core__DOT__mix_columns__58__state_in[2U] 
                    = __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[2U];
                __Vfunc_aes_core__DOT__mix_columns__58__state_in[3U] 
                    = __Vfunc_aes_core__DOT__shift_rows__59__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__mix_columns__58__state_in[3U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[3U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[3U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__mix_columns__58__state_in[3U]);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__xtime__61__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__xtime__61__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__61__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__61__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__61__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__61__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul3__62__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul3__62__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__63__b 
                                                    = __Vfunc_aes_core__DOT__mul3__62__b;
                                                __Vfunc_aes_core__DOT__xtime__63__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__63__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__63__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__63__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__63__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__62__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__62__Vfuncout))) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__xtime__64__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__xtime__64__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__64__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__64__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__64__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__64__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul3__65__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul3__65__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__66__b 
                                                = __Vfunc_aes_core__DOT__mul3__65__b;
                                            __Vfunc_aes_core__DOT__xtime__66__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__66__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__66__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__66__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__66__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul3__65__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul3__65__Vfuncout))) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__xtime__67__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__xtime__67__Vfuncout 
                                    = (0xffU & ((0U 
                                                 != 
                                                 (0x80U 
                                                  & (IData)(__Vfunc_aes_core__DOT__xtime__67__b)))
                                                 ? 
                                                (0x1bU 
                                                 ^ 
                                                 VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__67__b), 1U))
                                                 : 
                                                VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__67__b), 1U)));
                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__67__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul3__68__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul3__68__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__69__b 
                                            = __Vfunc_aes_core__DOT__mul3__68__b;
                                        __Vfunc_aes_core__DOT__xtime__69__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__69__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__69__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__69__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__69__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul3__68__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul3__68__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul3__70__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul3__70__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__71__b 
                                                    = __Vfunc_aes_core__DOT__mul3__70__b;
                                                __Vfunc_aes_core__DOT__xtime__71__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__71__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__71__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__71__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__71__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__70__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__70__Vfuncout)) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__xtime__72__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__xtime__72__Vfuncout 
                                = (0xffU & ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__72__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__72__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__72__b), 1U)));
                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__72__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__mix_columns__58__state_in[2U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[2U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[2U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__mix_columns__58__state_in[2U]);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__xtime__73__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__xtime__73__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__73__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__73__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__73__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__73__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul3__74__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul3__74__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__75__b 
                                                    = __Vfunc_aes_core__DOT__mul3__74__b;
                                                __Vfunc_aes_core__DOT__xtime__75__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__75__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__75__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__75__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__75__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__74__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__74__Vfuncout))) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__xtime__76__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__xtime__76__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__76__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__76__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__76__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__76__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul3__77__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul3__77__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__78__b 
                                                = __Vfunc_aes_core__DOT__mul3__77__b;
                                            __Vfunc_aes_core__DOT__xtime__78__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__78__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__78__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__78__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__78__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul3__77__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul3__77__Vfuncout))) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__xtime__79__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__xtime__79__Vfuncout 
                                    = (0xffU & ((0U 
                                                 != 
                                                 (0x80U 
                                                  & (IData)(__Vfunc_aes_core__DOT__xtime__79__b)))
                                                 ? 
                                                (0x1bU 
                                                 ^ 
                                                 VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__79__b), 1U))
                                                 : 
                                                VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__79__b), 1U)));
                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__79__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul3__80__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul3__80__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__81__b 
                                            = __Vfunc_aes_core__DOT__mul3__80__b;
                                        __Vfunc_aes_core__DOT__xtime__81__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__81__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__81__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__81__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__81__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul3__80__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul3__80__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul3__82__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul3__82__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__83__b 
                                                    = __Vfunc_aes_core__DOT__mul3__82__b;
                                                __Vfunc_aes_core__DOT__xtime__83__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__83__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__83__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__83__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__83__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__82__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__82__Vfuncout)) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__xtime__84__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__xtime__84__Vfuncout 
                                = (0xffU & ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__84__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__84__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__84__b), 1U)));
                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__84__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__mix_columns__58__state_in[1U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[1U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[1U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__mix_columns__58__state_in[1U]);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__xtime__85__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__xtime__85__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__85__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__85__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__85__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__85__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul3__86__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul3__86__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__87__b 
                                                    = __Vfunc_aes_core__DOT__mul3__86__b;
                                                __Vfunc_aes_core__DOT__xtime__87__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__87__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__87__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__87__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__87__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__86__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__86__Vfuncout))) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__xtime__88__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__xtime__88__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__88__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__88__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__88__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__88__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul3__89__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul3__89__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__90__b 
                                                = __Vfunc_aes_core__DOT__mul3__89__b;
                                            __Vfunc_aes_core__DOT__xtime__90__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__90__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__90__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__90__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__90__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul3__89__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul3__89__Vfuncout))) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__xtime__91__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__xtime__91__Vfuncout 
                                    = (0xffU & ((0U 
                                                 != 
                                                 (0x80U 
                                                  & (IData)(__Vfunc_aes_core__DOT__xtime__91__b)))
                                                 ? 
                                                (0x1bU 
                                                 ^ 
                                                 VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__91__b), 1U))
                                                 : 
                                                VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__91__b), 1U)));
                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__91__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul3__92__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul3__92__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__93__b 
                                            = __Vfunc_aes_core__DOT__mul3__92__b;
                                        __Vfunc_aes_core__DOT__xtime__93__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__93__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__93__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__93__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__93__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul3__92__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul3__92__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul3__94__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul3__94__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__95__b 
                                                    = __Vfunc_aes_core__DOT__mul3__94__b;
                                                __Vfunc_aes_core__DOT__xtime__95__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__95__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__95__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__95__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__95__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__94__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__94__Vfuncout)) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__xtime__96__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__xtime__96__Vfuncout 
                                = (0xffU & ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__96__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__96__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__96__b), 1U)));
                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__96__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__mix_columns__58__state_in[0U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[0U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__mix_columns__58__state_in[0U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__mix_columns__58__state_in[0U]);
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__xtime__97__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__xtime__97__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__97__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__97__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__97__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__97__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul3__98__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul3__98__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__99__b 
                                                    = __Vfunc_aes_core__DOT__mul3__98__b;
                                                __Vfunc_aes_core__DOT__xtime__99__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__99__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__99__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__99__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__99__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__98__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__98__Vfuncout))) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__xtime__100__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__xtime__100__Vfuncout 
                                        = (0xffU & 
                                           ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__100__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__100__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__100__b), 1U)));
                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__100__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul3__101__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul3__101__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__102__b 
                                                = __Vfunc_aes_core__DOT__mul3__101__b;
                                            __Vfunc_aes_core__DOT__xtime__102__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__102__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__102__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__102__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__102__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul3__101__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul3__101__Vfuncout))) 
                       ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__xtime__103__b 
                                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__xtime__103__Vfuncout 
                                    = (0xffU & ((0U 
                                                 != 
                                                 (0x80U 
                                                  & (IData)(__Vfunc_aes_core__DOT__xtime__103__b)))
                                                 ? 
                                                (0x1bU 
                                                 ^ 
                                                 VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__103__b), 1U))
                                                 : 
                                                VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__103__b), 1U)));
                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__103__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul3__104__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul3__104__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__105__b 
                                            = __Vfunc_aes_core__DOT__mul3__104__b;
                                        __Vfunc_aes_core__DOT__xtime__105__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__105__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__105__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__105__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__105__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul3__104__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul3__104__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul3__106__b 
                                        = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul3__106__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__107__b 
                                                    = __Vfunc_aes_core__DOT__mul3__106__b;
                                                __Vfunc_aes_core__DOT__xtime__107__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__107__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__107__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__107__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__107__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul3__106__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul3__106__Vfuncout)) 
                         ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1)) 
                        ^ (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2)) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__xtime__108__b 
                                = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__xtime__108__Vfuncout 
                                = (0xffU & ((0U != 
                                             (0x80U 
                                              & (IData)(__Vfunc_aes_core__DOT__xtime__108__b)))
                                             ? (0x1bU 
                                                ^ VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__108__b), 1U))
                                             : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__108__b), 1U)));
                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__108__Vfuncout)));
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                    = ((((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3)));
                __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3;
                __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2;
                __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1))));
                __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__add_round_key__57__data_in[0U] 
                    = __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[0U];
                __Vfunc_aes_core__DOT__add_round_key__57__data_in[1U] 
                    = __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[1U];
                __Vfunc_aes_core__DOT__add_round_key__57__data_in[2U] 
                    = __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[2U];
                __Vfunc_aes_core__DOT__add_round_key__57__data_in[3U] 
                    = __Vfunc_aes_core__DOT__mix_columns__58__Vfuncout[3U];
                __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[0U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__57__data_in[0U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[0U]);
                __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[1U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__57__data_in[1U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[1U]);
                __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[2U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__57__data_in[2U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[2U]);
                __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[3U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__57__data_in[3U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__57__round_key_in[3U]);
                __Vdly__aes_core__DOT__state_reg[0U] 
                    = __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[0U];
                __Vdly__aes_core__DOT__state_reg[1U] 
                    = __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[1U];
                __Vdly__aes_core__DOT__state_reg[2U] 
                    = __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[2U];
                __Vdly__aes_core__DOT__state_reg[3U] 
                    = __Vfunc_aes_core__DOT__add_round_key__57__Vfuncout[3U];
                __Vdly__aes_core__DOT__round_cnt = 
                    (0xfU & ((IData)(1U) + (IData)(vlSelfRef.aes_core__DOT__round_cnt)));
            } else {
                if ((0xaU >= (IData)(vlSelfRef.aes_core__DOT__round_cnt))) {
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[0U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][0U];
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[1U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][1U];
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[2U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][2U];
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[3U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][3U];
                } else {
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[0U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[1U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[2U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[3U] = 0U;
                }
                __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[0U] 
                    = vlSelfRef.aes_core__DOT__state_reg[0U];
                __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[1U] 
                    = vlSelfRef.aes_core__DOT__state_reg[1U];
                __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[2U] 
                    = vlSelfRef.aes_core__DOT__state_reg[2U];
                __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[3U] 
                    = vlSelfRef.aes_core__DOT__state_reg[3U];
                __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[0U] 
                    = (((__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[2U] 
                         << 0x18U) | (0xff0000U & (
                                                   __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[1U] 
                                                   << 0x10U))) 
                       | ((0xff00U & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[0U] 
                                      << 8U)) | (0xffU 
                                                 & __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[3U])));
                __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[1U] 
                    = (((0xff000000U & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[1U] 
                                        << 0x10U)) 
                        | (0xff0000U & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[0U] 
                                        << 8U))) | 
                       ((0xff00U & __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[3U]) 
                        | (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[2U] 
                                    >> 8U))));
                __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[2U] 
                    = (((0xff000000U & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[0U] 
                                        << 8U)) | (0xff0000U 
                                                   & __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[3U])) 
                       | ((0xff00U & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[2U] 
                                      >> 8U)) | (0xffU 
                                                 & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[1U] 
                                                    >> 0x10U))));
                __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[3U] 
                    = (((0xff000000U & __Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[3U]) 
                        | (0xff0000U & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[2U] 
                                        >> 8U))) | 
                       ((0xff00U & (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[1U] 
                                    >> 0x10U)) | (__Vfunc_aes_core__DOT__inv_shift_rows__112__state_in[0U] 
                                                  >> 0x18U)));
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[0U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[0U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[1U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[1U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[2U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[2U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[3U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__112__Vfuncout[3U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[0U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[0U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[0U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[0U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[0U])]));
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[1U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[1U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[1U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[1U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[1U])]));
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[2U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[2U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[2U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[2U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[2U])]));
                __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[3U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[3U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[3U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[3U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__111__state_in[3U])]));
                __Vfunc_aes_core__DOT__add_round_key__110__data_in[0U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[0U];
                __Vfunc_aes_core__DOT__add_round_key__110__data_in[1U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[1U];
                __Vfunc_aes_core__DOT__add_round_key__110__data_in[2U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[2U];
                __Vfunc_aes_core__DOT__add_round_key__110__data_in[3U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__111__Vfuncout[3U];
                __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[0U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__110__data_in[0U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[0U]);
                __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[1U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__110__data_in[1U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[1U]);
                __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[2U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__110__data_in[2U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[2U]);
                __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[3U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__110__data_in[3U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__110__round_key_in[3U]);
                __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[0U] 
                    = __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[0U];
                __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[1U] 
                    = __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[1U];
                __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[2U] 
                    = __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[2U];
                __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[3U] 
                    = __Vfunc_aes_core__DOT__add_round_key__110__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[3U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[3U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[3U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[3U]);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul14__113__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul14__113__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__116__b 
                                                        = __Vfunc_aes_core__DOT__mul14__113__b;
                                                    __Vfunc_aes_core__DOT__xtime__116__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__116__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__116__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__116__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__115__b 
                                                        = __Vfunc_aes_core__DOT__xtime__116__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__115__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__115__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__115__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__115__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__114__b 
                                                        = __Vfunc_aes_core__DOT__xtime__115__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__114__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__114__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__114__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__114__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__114__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__118__b 
                                                        = __Vfunc_aes_core__DOT__mul14__113__b;
                                                    __Vfunc_aes_core__DOT__xtime__118__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__118__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__118__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__118__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__117__b 
                                                        = __Vfunc_aes_core__DOT__xtime__118__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__117__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__117__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__117__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__117__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__117__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__119__b 
                                                    = __Vfunc_aes_core__DOT__mul14__113__b;
                                                __Vfunc_aes_core__DOT__xtime__119__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__119__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__119__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__119__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__119__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__113__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul11__120__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul11__120__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__123__b 
                                                        = __Vfunc_aes_core__DOT__mul11__120__b;
                                                    __Vfunc_aes_core__DOT__xtime__123__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__123__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__123__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__123__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__122__b 
                                                        = __Vfunc_aes_core__DOT__xtime__123__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__122__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__122__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__122__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__122__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__121__b 
                                                        = __Vfunc_aes_core__DOT__xtime__122__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__121__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__121__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__121__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__121__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__121__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__124__b 
                                                        = __Vfunc_aes_core__DOT__mul11__120__b;
                                                    __Vfunc_aes_core__DOT__xtime__124__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__124__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__124__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__124__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__124__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__120__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__120__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul13__125__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul13__125__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__128__b 
                                                    = __Vfunc_aes_core__DOT__mul13__125__b;
                                                __Vfunc_aes_core__DOT__xtime__128__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__128__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__128__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__128__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__127__b 
                                                    = __Vfunc_aes_core__DOT__xtime__128__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__127__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__127__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__127__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__127__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__126__b 
                                                    = __Vfunc_aes_core__DOT__xtime__127__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__126__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__126__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__126__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__126__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__126__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__130__b 
                                                    = __Vfunc_aes_core__DOT__mul13__125__b;
                                                __Vfunc_aes_core__DOT__xtime__130__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__130__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__130__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__130__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__129__b 
                                                    = __Vfunc_aes_core__DOT__xtime__130__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__129__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__129__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__129__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__129__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__129__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul13__125__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul13__125__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul9__131__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul9__131__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__134__b 
                                            = __Vfunc_aes_core__DOT__mul9__131__b;
                                        __Vfunc_aes_core__DOT__xtime__134__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__134__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__134__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__134__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__133__b 
                                            = __Vfunc_aes_core__DOT__xtime__134__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__133__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__133__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__133__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__133__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__132__b 
                                            = __Vfunc_aes_core__DOT__xtime__133__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__132__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__132__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__132__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__132__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__132__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul9__131__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul9__131__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul9__135__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul9__135__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__138__b 
                                                    = __Vfunc_aes_core__DOT__mul9__135__b;
                                                __Vfunc_aes_core__DOT__xtime__138__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__138__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__138__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__138__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__137__b 
                                                    = __Vfunc_aes_core__DOT__xtime__138__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__137__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__137__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__137__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__137__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__136__b 
                                                    = __Vfunc_aes_core__DOT__xtime__137__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__136__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__136__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__136__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__136__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__136__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__135__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__135__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul14__139__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul14__139__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__142__b 
                                                        = __Vfunc_aes_core__DOT__mul14__139__b;
                                                    __Vfunc_aes_core__DOT__xtime__142__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__142__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__142__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__142__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__141__b 
                                                        = __Vfunc_aes_core__DOT__xtime__142__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__141__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__141__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__141__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__141__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__140__b 
                                                        = __Vfunc_aes_core__DOT__xtime__141__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__140__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__140__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__140__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__140__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__140__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__144__b 
                                                        = __Vfunc_aes_core__DOT__mul14__139__b;
                                                    __Vfunc_aes_core__DOT__xtime__144__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__144__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__144__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__144__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__143__b 
                                                        = __Vfunc_aes_core__DOT__xtime__144__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__143__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__143__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__143__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__143__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__143__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__145__b 
                                                    = __Vfunc_aes_core__DOT__mul14__139__b;
                                                __Vfunc_aes_core__DOT__xtime__145__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__145__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__145__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__145__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__145__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__139__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul11__146__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul11__146__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__149__b 
                                                    = __Vfunc_aes_core__DOT__mul11__146__b;
                                                __Vfunc_aes_core__DOT__xtime__149__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__149__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__149__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__149__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__148__b 
                                                    = __Vfunc_aes_core__DOT__xtime__149__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__148__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__148__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__148__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__148__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__147__b 
                                                    = __Vfunc_aes_core__DOT__xtime__148__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__147__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__147__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__147__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__147__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__147__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__150__b 
                                                    = __Vfunc_aes_core__DOT__mul11__146__b;
                                                __Vfunc_aes_core__DOT__xtime__150__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__150__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__150__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__150__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__150__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul11__146__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul11__146__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul13__151__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul13__151__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__154__b 
                                                = __Vfunc_aes_core__DOT__mul13__151__b;
                                            __Vfunc_aes_core__DOT__xtime__154__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__154__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__154__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__154__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__153__b 
                                                = __Vfunc_aes_core__DOT__xtime__154__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__153__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__153__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__153__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__153__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__152__b 
                                                = __Vfunc_aes_core__DOT__xtime__153__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__152__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__152__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__152__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__152__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__152__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__156__b 
                                                = __Vfunc_aes_core__DOT__mul13__151__b;
                                            __Vfunc_aes_core__DOT__xtime__156__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__156__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__156__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__156__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__155__b 
                                                = __Vfunc_aes_core__DOT__xtime__156__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__155__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__155__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__155__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__155__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__155__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul13__151__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul13__151__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul13__157__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul13__157__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__160__b 
                                                        = __Vfunc_aes_core__DOT__mul13__157__b;
                                                    __Vfunc_aes_core__DOT__xtime__160__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__160__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__160__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__160__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__159__b 
                                                        = __Vfunc_aes_core__DOT__xtime__160__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__159__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__159__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__159__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__159__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__158__b 
                                                        = __Vfunc_aes_core__DOT__xtime__159__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__158__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__158__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__158__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__158__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__158__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__162__b 
                                                        = __Vfunc_aes_core__DOT__mul13__157__b;
                                                    __Vfunc_aes_core__DOT__xtime__162__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__162__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__162__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__162__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__161__b 
                                                        = __Vfunc_aes_core__DOT__xtime__162__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__161__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__161__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__161__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__161__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__161__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__157__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__157__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul9__163__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul9__163__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__166__b 
                                                    = __Vfunc_aes_core__DOT__mul9__163__b;
                                                __Vfunc_aes_core__DOT__xtime__166__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__166__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__166__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__166__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__165__b 
                                                    = __Vfunc_aes_core__DOT__xtime__166__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__165__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__165__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__165__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__165__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__164__b 
                                                    = __Vfunc_aes_core__DOT__xtime__165__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__164__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__164__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__164__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__164__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__164__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__163__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__163__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul14__167__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul14__167__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__170__b 
                                                    = __Vfunc_aes_core__DOT__mul14__167__b;
                                                __Vfunc_aes_core__DOT__xtime__170__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__170__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__170__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__170__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__169__b 
                                                    = __Vfunc_aes_core__DOT__xtime__170__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__169__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__169__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__169__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__169__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__168__b 
                                                    = __Vfunc_aes_core__DOT__xtime__169__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__168__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__168__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__168__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__168__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__168__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__172__b 
                                                    = __Vfunc_aes_core__DOT__mul14__167__b;
                                                __Vfunc_aes_core__DOT__xtime__172__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__172__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__172__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__172__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__171__b 
                                                    = __Vfunc_aes_core__DOT__xtime__172__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__171__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__171__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__171__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__171__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__171__Vfuncout))) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__173__b 
                                                = __Vfunc_aes_core__DOT__mul14__167__b;
                                            __Vfunc_aes_core__DOT__xtime__173__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__173__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__173__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__173__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__173__Vfuncout)));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul14__167__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul11__174__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul11__174__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__177__b 
                                                = __Vfunc_aes_core__DOT__mul11__174__b;
                                            __Vfunc_aes_core__DOT__xtime__177__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__177__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__177__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__177__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__176__b 
                                                = __Vfunc_aes_core__DOT__xtime__177__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__176__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__176__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__176__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__176__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__175__b 
                                                = __Vfunc_aes_core__DOT__xtime__176__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__175__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__175__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__175__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__175__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__175__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__178__b 
                                                = __Vfunc_aes_core__DOT__mul11__174__b;
                                            __Vfunc_aes_core__DOT__xtime__178__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__178__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__178__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__178__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__178__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul11__174__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul11__174__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul11__179__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul11__179__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__182__b 
                                                        = __Vfunc_aes_core__DOT__mul11__179__b;
                                                    __Vfunc_aes_core__DOT__xtime__182__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__182__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__182__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__182__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__181__b 
                                                        = __Vfunc_aes_core__DOT__xtime__182__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__181__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__181__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__181__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__181__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__180__b 
                                                        = __Vfunc_aes_core__DOT__xtime__181__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__180__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__180__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__180__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__180__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__180__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__183__b 
                                                        = __Vfunc_aes_core__DOT__mul11__179__b;
                                                    __Vfunc_aes_core__DOT__xtime__183__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__183__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__183__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__183__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__183__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__179__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__179__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul13__184__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul13__184__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__187__b 
                                                        = __Vfunc_aes_core__DOT__mul13__184__b;
                                                    __Vfunc_aes_core__DOT__xtime__187__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__187__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__187__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__187__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__186__b 
                                                        = __Vfunc_aes_core__DOT__xtime__187__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__186__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__186__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__186__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__186__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__185__b 
                                                        = __Vfunc_aes_core__DOT__xtime__186__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__185__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__185__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__185__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__185__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__185__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__189__b 
                                                        = __Vfunc_aes_core__DOT__mul13__184__b;
                                                    __Vfunc_aes_core__DOT__xtime__189__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__189__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__189__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__189__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__188__b 
                                                        = __Vfunc_aes_core__DOT__xtime__189__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__188__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__188__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__188__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__188__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__188__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__184__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__184__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul9__190__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul9__190__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__193__b 
                                                = __Vfunc_aes_core__DOT__mul9__190__b;
                                            __Vfunc_aes_core__DOT__xtime__193__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__193__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__193__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__193__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__192__b 
                                                = __Vfunc_aes_core__DOT__xtime__193__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__192__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__192__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__192__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__192__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__191__b 
                                                = __Vfunc_aes_core__DOT__xtime__192__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__191__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__191__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__191__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__191__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__191__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul9__190__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul9__190__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul14__194__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul14__194__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__197__b 
                                                = __Vfunc_aes_core__DOT__mul14__194__b;
                                            __Vfunc_aes_core__DOT__xtime__197__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__197__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__197__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__197__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__196__b 
                                                = __Vfunc_aes_core__DOT__xtime__197__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__196__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__196__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__196__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__196__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__195__b 
                                                = __Vfunc_aes_core__DOT__xtime__196__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__195__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__195__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__195__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__195__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__195__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__199__b 
                                                = __Vfunc_aes_core__DOT__mul14__194__b;
                                            __Vfunc_aes_core__DOT__xtime__199__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__199__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__199__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__199__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__198__b 
                                                = __Vfunc_aes_core__DOT__xtime__199__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__198__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__198__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__198__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__198__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__198__Vfuncout))) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__xtime__200__b 
                                            = __Vfunc_aes_core__DOT__mul14__194__b;
                                        __Vfunc_aes_core__DOT__xtime__200__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__200__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__200__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__200__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__200__Vfuncout)));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul14__194__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                    = ((((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[2U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[2U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[2U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[2U]);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul14__201__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul14__201__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__204__b 
                                                        = __Vfunc_aes_core__DOT__mul14__201__b;
                                                    __Vfunc_aes_core__DOT__xtime__204__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__204__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__204__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__204__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__203__b 
                                                        = __Vfunc_aes_core__DOT__xtime__204__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__203__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__203__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__203__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__203__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__202__b 
                                                        = __Vfunc_aes_core__DOT__xtime__203__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__202__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__202__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__202__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__202__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__202__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__206__b 
                                                        = __Vfunc_aes_core__DOT__mul14__201__b;
                                                    __Vfunc_aes_core__DOT__xtime__206__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__206__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__206__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__206__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__205__b 
                                                        = __Vfunc_aes_core__DOT__xtime__206__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__205__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__205__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__205__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__205__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__205__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__207__b 
                                                    = __Vfunc_aes_core__DOT__mul14__201__b;
                                                __Vfunc_aes_core__DOT__xtime__207__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__207__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__207__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__207__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__207__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__201__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul11__208__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul11__208__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__211__b 
                                                        = __Vfunc_aes_core__DOT__mul11__208__b;
                                                    __Vfunc_aes_core__DOT__xtime__211__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__211__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__211__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__211__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__210__b 
                                                        = __Vfunc_aes_core__DOT__xtime__211__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__210__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__210__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__210__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__210__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__209__b 
                                                        = __Vfunc_aes_core__DOT__xtime__210__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__209__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__209__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__209__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__209__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__209__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__212__b 
                                                        = __Vfunc_aes_core__DOT__mul11__208__b;
                                                    __Vfunc_aes_core__DOT__xtime__212__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__212__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__212__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__212__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__212__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__208__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__208__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul13__213__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul13__213__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__216__b 
                                                    = __Vfunc_aes_core__DOT__mul13__213__b;
                                                __Vfunc_aes_core__DOT__xtime__216__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__216__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__216__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__216__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__215__b 
                                                    = __Vfunc_aes_core__DOT__xtime__216__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__215__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__215__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__215__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__215__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__214__b 
                                                    = __Vfunc_aes_core__DOT__xtime__215__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__214__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__214__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__214__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__214__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__214__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__218__b 
                                                    = __Vfunc_aes_core__DOT__mul13__213__b;
                                                __Vfunc_aes_core__DOT__xtime__218__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__218__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__218__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__218__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__217__b 
                                                    = __Vfunc_aes_core__DOT__xtime__218__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__217__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__217__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__217__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__217__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__217__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul13__213__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul13__213__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul9__219__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul9__219__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__222__b 
                                            = __Vfunc_aes_core__DOT__mul9__219__b;
                                        __Vfunc_aes_core__DOT__xtime__222__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__222__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__222__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__222__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__221__b 
                                            = __Vfunc_aes_core__DOT__xtime__222__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__221__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__221__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__221__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__221__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__220__b 
                                            = __Vfunc_aes_core__DOT__xtime__221__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__220__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__220__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__220__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__220__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__220__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul9__219__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul9__219__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul9__223__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul9__223__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__226__b 
                                                    = __Vfunc_aes_core__DOT__mul9__223__b;
                                                __Vfunc_aes_core__DOT__xtime__226__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__226__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__226__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__226__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__225__b 
                                                    = __Vfunc_aes_core__DOT__xtime__226__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__225__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__225__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__225__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__225__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__224__b 
                                                    = __Vfunc_aes_core__DOT__xtime__225__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__224__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__224__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__224__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__224__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__224__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__223__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__223__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul14__227__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul14__227__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__230__b 
                                                        = __Vfunc_aes_core__DOT__mul14__227__b;
                                                    __Vfunc_aes_core__DOT__xtime__230__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__230__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__230__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__230__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__229__b 
                                                        = __Vfunc_aes_core__DOT__xtime__230__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__229__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__229__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__229__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__229__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__228__b 
                                                        = __Vfunc_aes_core__DOT__xtime__229__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__228__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__228__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__228__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__228__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__228__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__232__b 
                                                        = __Vfunc_aes_core__DOT__mul14__227__b;
                                                    __Vfunc_aes_core__DOT__xtime__232__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__232__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__232__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__232__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__231__b 
                                                        = __Vfunc_aes_core__DOT__xtime__232__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__231__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__231__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__231__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__231__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__231__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__233__b 
                                                    = __Vfunc_aes_core__DOT__mul14__227__b;
                                                __Vfunc_aes_core__DOT__xtime__233__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__233__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__233__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__233__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__233__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__227__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul11__234__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul11__234__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__237__b 
                                                    = __Vfunc_aes_core__DOT__mul11__234__b;
                                                __Vfunc_aes_core__DOT__xtime__237__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__237__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__237__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__237__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__236__b 
                                                    = __Vfunc_aes_core__DOT__xtime__237__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__236__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__236__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__236__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__236__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__235__b 
                                                    = __Vfunc_aes_core__DOT__xtime__236__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__235__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__235__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__235__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__235__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__235__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__238__b 
                                                    = __Vfunc_aes_core__DOT__mul11__234__b;
                                                __Vfunc_aes_core__DOT__xtime__238__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__238__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__238__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__238__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__238__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul11__234__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul11__234__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul13__239__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul13__239__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__242__b 
                                                = __Vfunc_aes_core__DOT__mul13__239__b;
                                            __Vfunc_aes_core__DOT__xtime__242__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__242__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__242__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__242__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__241__b 
                                                = __Vfunc_aes_core__DOT__xtime__242__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__241__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__241__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__241__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__241__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__240__b 
                                                = __Vfunc_aes_core__DOT__xtime__241__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__240__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__240__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__240__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__240__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__240__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__244__b 
                                                = __Vfunc_aes_core__DOT__mul13__239__b;
                                            __Vfunc_aes_core__DOT__xtime__244__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__244__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__244__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__244__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__243__b 
                                                = __Vfunc_aes_core__DOT__xtime__244__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__243__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__243__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__243__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__243__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__243__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul13__239__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul13__239__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul13__245__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul13__245__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__248__b 
                                                        = __Vfunc_aes_core__DOT__mul13__245__b;
                                                    __Vfunc_aes_core__DOT__xtime__248__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__248__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__248__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__248__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__247__b 
                                                        = __Vfunc_aes_core__DOT__xtime__248__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__247__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__247__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__247__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__247__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__246__b 
                                                        = __Vfunc_aes_core__DOT__xtime__247__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__246__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__246__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__246__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__246__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__246__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__250__b 
                                                        = __Vfunc_aes_core__DOT__mul13__245__b;
                                                    __Vfunc_aes_core__DOT__xtime__250__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__250__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__250__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__250__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__249__b 
                                                        = __Vfunc_aes_core__DOT__xtime__250__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__249__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__249__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__249__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__249__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__249__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__245__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__245__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul9__251__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul9__251__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__254__b 
                                                    = __Vfunc_aes_core__DOT__mul9__251__b;
                                                __Vfunc_aes_core__DOT__xtime__254__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__254__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__254__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__254__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__253__b 
                                                    = __Vfunc_aes_core__DOT__xtime__254__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__253__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__253__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__253__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__253__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__252__b 
                                                    = __Vfunc_aes_core__DOT__xtime__253__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__252__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__252__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__252__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__252__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__252__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__251__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__251__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul14__255__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul14__255__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__258__b 
                                                    = __Vfunc_aes_core__DOT__mul14__255__b;
                                                __Vfunc_aes_core__DOT__xtime__258__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__258__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__258__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__258__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__257__b 
                                                    = __Vfunc_aes_core__DOT__xtime__258__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__257__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__257__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__257__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__257__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__256__b 
                                                    = __Vfunc_aes_core__DOT__xtime__257__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__256__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__256__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__256__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__256__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__256__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__260__b 
                                                    = __Vfunc_aes_core__DOT__mul14__255__b;
                                                __Vfunc_aes_core__DOT__xtime__260__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__260__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__260__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__260__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__259__b 
                                                    = __Vfunc_aes_core__DOT__xtime__260__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__259__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__259__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__259__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__259__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__259__Vfuncout))) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__261__b 
                                                = __Vfunc_aes_core__DOT__mul14__255__b;
                                            __Vfunc_aes_core__DOT__xtime__261__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__261__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__261__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__261__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__261__Vfuncout)));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul14__255__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul11__262__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul11__262__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__265__b 
                                                = __Vfunc_aes_core__DOT__mul11__262__b;
                                            __Vfunc_aes_core__DOT__xtime__265__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__265__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__265__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__265__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__264__b 
                                                = __Vfunc_aes_core__DOT__xtime__265__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__264__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__264__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__264__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__264__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__263__b 
                                                = __Vfunc_aes_core__DOT__xtime__264__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__263__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__263__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__263__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__263__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__263__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__266__b 
                                                = __Vfunc_aes_core__DOT__mul11__262__b;
                                            __Vfunc_aes_core__DOT__xtime__266__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__266__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__266__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__266__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__266__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul11__262__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul11__262__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul11__267__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul11__267__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__270__b 
                                                        = __Vfunc_aes_core__DOT__mul11__267__b;
                                                    __Vfunc_aes_core__DOT__xtime__270__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__270__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__270__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__270__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__269__b 
                                                        = __Vfunc_aes_core__DOT__xtime__270__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__269__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__269__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__269__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__269__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__268__b 
                                                        = __Vfunc_aes_core__DOT__xtime__269__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__268__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__268__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__268__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__268__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__268__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__271__b 
                                                        = __Vfunc_aes_core__DOT__mul11__267__b;
                                                    __Vfunc_aes_core__DOT__xtime__271__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__271__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__271__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__271__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__271__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__267__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__267__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul13__272__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul13__272__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__275__b 
                                                        = __Vfunc_aes_core__DOT__mul13__272__b;
                                                    __Vfunc_aes_core__DOT__xtime__275__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__275__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__275__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__275__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__274__b 
                                                        = __Vfunc_aes_core__DOT__xtime__275__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__274__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__274__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__274__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__274__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__273__b 
                                                        = __Vfunc_aes_core__DOT__xtime__274__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__273__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__273__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__273__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__273__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__273__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__277__b 
                                                        = __Vfunc_aes_core__DOT__mul13__272__b;
                                                    __Vfunc_aes_core__DOT__xtime__277__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__277__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__277__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__277__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__276__b 
                                                        = __Vfunc_aes_core__DOT__xtime__277__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__276__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__276__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__276__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__276__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__276__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__272__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__272__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul9__278__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul9__278__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__281__b 
                                                = __Vfunc_aes_core__DOT__mul9__278__b;
                                            __Vfunc_aes_core__DOT__xtime__281__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__281__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__281__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__281__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__280__b 
                                                = __Vfunc_aes_core__DOT__xtime__281__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__280__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__280__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__280__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__280__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__279__b 
                                                = __Vfunc_aes_core__DOT__xtime__280__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__279__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__279__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__279__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__279__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__279__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul9__278__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul9__278__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul14__282__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul14__282__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__285__b 
                                                = __Vfunc_aes_core__DOT__mul14__282__b;
                                            __Vfunc_aes_core__DOT__xtime__285__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__285__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__285__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__285__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__284__b 
                                                = __Vfunc_aes_core__DOT__xtime__285__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__284__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__284__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__284__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__284__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__283__b 
                                                = __Vfunc_aes_core__DOT__xtime__284__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__283__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__283__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__283__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__283__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__283__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__287__b 
                                                = __Vfunc_aes_core__DOT__mul14__282__b;
                                            __Vfunc_aes_core__DOT__xtime__287__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__287__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__287__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__287__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__286__b 
                                                = __Vfunc_aes_core__DOT__xtime__287__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__286__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__286__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__286__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__286__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__286__Vfuncout))) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__xtime__288__b 
                                            = __Vfunc_aes_core__DOT__mul14__282__b;
                                        __Vfunc_aes_core__DOT__xtime__288__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__288__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__288__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__288__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__288__Vfuncout)));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul14__282__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                    = ((((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[1U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[1U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[1U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[1U]);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul14__289__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul14__289__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__292__b 
                                                        = __Vfunc_aes_core__DOT__mul14__289__b;
                                                    __Vfunc_aes_core__DOT__xtime__292__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__292__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__292__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__292__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__291__b 
                                                        = __Vfunc_aes_core__DOT__xtime__292__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__291__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__291__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__291__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__291__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__290__b 
                                                        = __Vfunc_aes_core__DOT__xtime__291__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__290__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__290__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__290__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__290__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__290__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__294__b 
                                                        = __Vfunc_aes_core__DOT__mul14__289__b;
                                                    __Vfunc_aes_core__DOT__xtime__294__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__294__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__294__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__294__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__293__b 
                                                        = __Vfunc_aes_core__DOT__xtime__294__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__293__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__293__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__293__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__293__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__293__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__295__b 
                                                    = __Vfunc_aes_core__DOT__mul14__289__b;
                                                __Vfunc_aes_core__DOT__xtime__295__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__295__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__295__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__295__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__295__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__289__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul11__296__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul11__296__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__299__b 
                                                        = __Vfunc_aes_core__DOT__mul11__296__b;
                                                    __Vfunc_aes_core__DOT__xtime__299__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__299__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__299__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__299__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__298__b 
                                                        = __Vfunc_aes_core__DOT__xtime__299__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__298__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__298__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__298__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__298__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__297__b 
                                                        = __Vfunc_aes_core__DOT__xtime__298__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__297__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__297__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__297__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__297__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__297__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__300__b 
                                                        = __Vfunc_aes_core__DOT__mul11__296__b;
                                                    __Vfunc_aes_core__DOT__xtime__300__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__300__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__300__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__300__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__300__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__296__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__296__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul13__301__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul13__301__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__304__b 
                                                    = __Vfunc_aes_core__DOT__mul13__301__b;
                                                __Vfunc_aes_core__DOT__xtime__304__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__304__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__304__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__304__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__303__b 
                                                    = __Vfunc_aes_core__DOT__xtime__304__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__303__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__303__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__303__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__303__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__302__b 
                                                    = __Vfunc_aes_core__DOT__xtime__303__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__302__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__302__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__302__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__302__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__302__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__306__b 
                                                    = __Vfunc_aes_core__DOT__mul13__301__b;
                                                __Vfunc_aes_core__DOT__xtime__306__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__306__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__306__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__306__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__305__b 
                                                    = __Vfunc_aes_core__DOT__xtime__306__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__305__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__305__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__305__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__305__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__305__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul13__301__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul13__301__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul9__307__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul9__307__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__310__b 
                                            = __Vfunc_aes_core__DOT__mul9__307__b;
                                        __Vfunc_aes_core__DOT__xtime__310__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__310__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__310__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__310__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__309__b 
                                            = __Vfunc_aes_core__DOT__xtime__310__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__309__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__309__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__309__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__309__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__308__b 
                                            = __Vfunc_aes_core__DOT__xtime__309__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__308__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__308__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__308__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__308__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__308__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul9__307__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul9__307__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul9__311__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul9__311__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__314__b 
                                                    = __Vfunc_aes_core__DOT__mul9__311__b;
                                                __Vfunc_aes_core__DOT__xtime__314__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__314__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__314__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__314__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__313__b 
                                                    = __Vfunc_aes_core__DOT__xtime__314__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__313__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__313__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__313__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__313__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__312__b 
                                                    = __Vfunc_aes_core__DOT__xtime__313__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__312__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__312__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__312__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__312__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__312__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__311__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__311__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul14__315__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul14__315__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__318__b 
                                                        = __Vfunc_aes_core__DOT__mul14__315__b;
                                                    __Vfunc_aes_core__DOT__xtime__318__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__318__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__318__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__318__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__317__b 
                                                        = __Vfunc_aes_core__DOT__xtime__318__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__317__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__317__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__317__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__317__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__316__b 
                                                        = __Vfunc_aes_core__DOT__xtime__317__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__316__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__316__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__316__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__316__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__316__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__320__b 
                                                        = __Vfunc_aes_core__DOT__mul14__315__b;
                                                    __Vfunc_aes_core__DOT__xtime__320__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__320__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__320__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__320__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__319__b 
                                                        = __Vfunc_aes_core__DOT__xtime__320__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__319__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__319__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__319__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__319__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__319__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__321__b 
                                                    = __Vfunc_aes_core__DOT__mul14__315__b;
                                                __Vfunc_aes_core__DOT__xtime__321__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__321__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__321__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__321__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__321__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__315__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul11__322__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul11__322__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__325__b 
                                                    = __Vfunc_aes_core__DOT__mul11__322__b;
                                                __Vfunc_aes_core__DOT__xtime__325__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__325__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__325__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__325__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__324__b 
                                                    = __Vfunc_aes_core__DOT__xtime__325__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__324__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__324__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__324__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__324__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__323__b 
                                                    = __Vfunc_aes_core__DOT__xtime__324__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__323__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__323__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__323__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__323__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__323__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__326__b 
                                                    = __Vfunc_aes_core__DOT__mul11__322__b;
                                                __Vfunc_aes_core__DOT__xtime__326__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__326__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__326__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__326__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__326__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul11__322__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul11__322__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul13__327__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul13__327__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__330__b 
                                                = __Vfunc_aes_core__DOT__mul13__327__b;
                                            __Vfunc_aes_core__DOT__xtime__330__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__330__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__330__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__330__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__329__b 
                                                = __Vfunc_aes_core__DOT__xtime__330__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__329__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__329__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__329__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__329__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__328__b 
                                                = __Vfunc_aes_core__DOT__xtime__329__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__328__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__328__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__328__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__328__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__328__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__332__b 
                                                = __Vfunc_aes_core__DOT__mul13__327__b;
                                            __Vfunc_aes_core__DOT__xtime__332__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__332__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__332__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__332__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__331__b 
                                                = __Vfunc_aes_core__DOT__xtime__332__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__331__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__331__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__331__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__331__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__331__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul13__327__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul13__327__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul13__333__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul13__333__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__336__b 
                                                        = __Vfunc_aes_core__DOT__mul13__333__b;
                                                    __Vfunc_aes_core__DOT__xtime__336__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__336__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__336__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__336__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__335__b 
                                                        = __Vfunc_aes_core__DOT__xtime__336__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__335__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__335__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__335__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__335__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__334__b 
                                                        = __Vfunc_aes_core__DOT__xtime__335__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__334__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__334__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__334__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__334__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__334__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__338__b 
                                                        = __Vfunc_aes_core__DOT__mul13__333__b;
                                                    __Vfunc_aes_core__DOT__xtime__338__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__338__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__338__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__338__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__337__b 
                                                        = __Vfunc_aes_core__DOT__xtime__338__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__337__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__337__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__337__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__337__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__337__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__333__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__333__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul9__339__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul9__339__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__342__b 
                                                    = __Vfunc_aes_core__DOT__mul9__339__b;
                                                __Vfunc_aes_core__DOT__xtime__342__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__342__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__342__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__342__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__341__b 
                                                    = __Vfunc_aes_core__DOT__xtime__342__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__341__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__341__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__341__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__341__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__340__b 
                                                    = __Vfunc_aes_core__DOT__xtime__341__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__340__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__340__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__340__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__340__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__340__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__339__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__339__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul14__343__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul14__343__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__346__b 
                                                    = __Vfunc_aes_core__DOT__mul14__343__b;
                                                __Vfunc_aes_core__DOT__xtime__346__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__346__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__346__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__346__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__345__b 
                                                    = __Vfunc_aes_core__DOT__xtime__346__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__345__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__345__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__345__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__345__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__344__b 
                                                    = __Vfunc_aes_core__DOT__xtime__345__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__344__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__344__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__344__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__344__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__344__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__348__b 
                                                    = __Vfunc_aes_core__DOT__mul14__343__b;
                                                __Vfunc_aes_core__DOT__xtime__348__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__348__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__348__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__348__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__347__b 
                                                    = __Vfunc_aes_core__DOT__xtime__348__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__347__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__347__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__347__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__347__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__347__Vfuncout))) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__349__b 
                                                = __Vfunc_aes_core__DOT__mul14__343__b;
                                            __Vfunc_aes_core__DOT__xtime__349__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__349__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__349__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__349__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__349__Vfuncout)));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul14__343__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul11__350__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul11__350__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__353__b 
                                                = __Vfunc_aes_core__DOT__mul11__350__b;
                                            __Vfunc_aes_core__DOT__xtime__353__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__353__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__353__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__353__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__352__b 
                                                = __Vfunc_aes_core__DOT__xtime__353__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__352__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__352__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__352__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__352__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__351__b 
                                                = __Vfunc_aes_core__DOT__xtime__352__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__351__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__351__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__351__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__351__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__351__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__354__b 
                                                = __Vfunc_aes_core__DOT__mul11__350__b;
                                            __Vfunc_aes_core__DOT__xtime__354__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__354__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__354__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__354__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__354__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul11__350__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul11__350__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul11__355__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul11__355__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__358__b 
                                                        = __Vfunc_aes_core__DOT__mul11__355__b;
                                                    __Vfunc_aes_core__DOT__xtime__358__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__358__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__358__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__358__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__357__b 
                                                        = __Vfunc_aes_core__DOT__xtime__358__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__357__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__357__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__357__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__357__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__356__b 
                                                        = __Vfunc_aes_core__DOT__xtime__357__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__356__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__356__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__356__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__356__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__356__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__359__b 
                                                        = __Vfunc_aes_core__DOT__mul11__355__b;
                                                    __Vfunc_aes_core__DOT__xtime__359__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__359__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__359__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__359__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__359__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__355__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__355__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul13__360__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul13__360__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__363__b 
                                                        = __Vfunc_aes_core__DOT__mul13__360__b;
                                                    __Vfunc_aes_core__DOT__xtime__363__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__363__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__363__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__363__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__362__b 
                                                        = __Vfunc_aes_core__DOT__xtime__363__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__362__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__362__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__362__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__362__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__361__b 
                                                        = __Vfunc_aes_core__DOT__xtime__362__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__361__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__361__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__361__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__361__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__361__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__365__b 
                                                        = __Vfunc_aes_core__DOT__mul13__360__b;
                                                    __Vfunc_aes_core__DOT__xtime__365__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__365__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__365__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__365__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__364__b 
                                                        = __Vfunc_aes_core__DOT__xtime__365__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__364__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__364__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__364__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__364__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__364__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__360__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__360__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul9__366__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul9__366__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__369__b 
                                                = __Vfunc_aes_core__DOT__mul9__366__b;
                                            __Vfunc_aes_core__DOT__xtime__369__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__369__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__369__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__369__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__368__b 
                                                = __Vfunc_aes_core__DOT__xtime__369__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__368__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__368__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__368__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__368__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__367__b 
                                                = __Vfunc_aes_core__DOT__xtime__368__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__367__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__367__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__367__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__367__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__367__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul9__366__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul9__366__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul14__370__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul14__370__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__373__b 
                                                = __Vfunc_aes_core__DOT__mul14__370__b;
                                            __Vfunc_aes_core__DOT__xtime__373__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__373__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__373__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__373__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__372__b 
                                                = __Vfunc_aes_core__DOT__xtime__373__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__372__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__372__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__372__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__372__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__371__b 
                                                = __Vfunc_aes_core__DOT__xtime__372__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__371__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__371__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__371__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__371__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__371__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__375__b 
                                                = __Vfunc_aes_core__DOT__mul14__370__b;
                                            __Vfunc_aes_core__DOT__xtime__375__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__375__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__375__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__375__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__374__b 
                                                = __Vfunc_aes_core__DOT__xtime__375__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__374__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__374__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__374__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__374__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__374__Vfuncout))) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__xtime__376__b 
                                            = __Vfunc_aes_core__DOT__mul14__370__b;
                                        __Vfunc_aes_core__DOT__xtime__376__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__376__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__376__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__376__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__376__Vfuncout)));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul14__370__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                    = ((((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0 
                    = (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[0U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[0U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[0U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_mix_columns__109__state_in[0U]);
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul14__377__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul14__377__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__380__b 
                                                        = __Vfunc_aes_core__DOT__mul14__377__b;
                                                    __Vfunc_aes_core__DOT__xtime__380__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__380__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__380__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__380__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__379__b 
                                                        = __Vfunc_aes_core__DOT__xtime__380__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__379__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__379__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__379__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__379__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__378__b 
                                                        = __Vfunc_aes_core__DOT__xtime__379__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__378__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__378__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__378__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__378__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__378__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__382__b 
                                                        = __Vfunc_aes_core__DOT__mul14__377__b;
                                                    __Vfunc_aes_core__DOT__xtime__382__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__382__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__382__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__382__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__381__b 
                                                        = __Vfunc_aes_core__DOT__xtime__382__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__381__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__381__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__381__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__381__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__381__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__383__b 
                                                    = __Vfunc_aes_core__DOT__mul14__377__b;
                                                __Vfunc_aes_core__DOT__xtime__383__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__383__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__383__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__383__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__383__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__377__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul11__384__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul11__384__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__387__b 
                                                        = __Vfunc_aes_core__DOT__mul11__384__b;
                                                    __Vfunc_aes_core__DOT__xtime__387__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__387__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__387__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__387__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__386__b 
                                                        = __Vfunc_aes_core__DOT__xtime__387__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__386__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__386__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__386__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__386__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__385__b 
                                                        = __Vfunc_aes_core__DOT__xtime__386__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__385__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__385__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__385__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__385__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__385__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__388__b 
                                                        = __Vfunc_aes_core__DOT__mul11__384__b;
                                                    __Vfunc_aes_core__DOT__xtime__388__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__388__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__388__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__388__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__388__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__384__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__384__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul13__389__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul13__389__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__392__b 
                                                    = __Vfunc_aes_core__DOT__mul13__389__b;
                                                __Vfunc_aes_core__DOT__xtime__392__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__392__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__392__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__392__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__391__b 
                                                    = __Vfunc_aes_core__DOT__xtime__392__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__391__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__391__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__391__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__391__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__390__b 
                                                    = __Vfunc_aes_core__DOT__xtime__391__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__390__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__390__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__390__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__390__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__390__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__394__b 
                                                    = __Vfunc_aes_core__DOT__mul13__389__b;
                                                __Vfunc_aes_core__DOT__xtime__394__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__394__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__394__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__394__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__393__b 
                                                    = __Vfunc_aes_core__DOT__xtime__394__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__393__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__393__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__393__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__393__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__393__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul13__389__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul13__389__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul9__395__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul9__395__Vfuncout 
                                = (([&]() {
                                        __Vfunc_aes_core__DOT__xtime__398__b 
                                            = __Vfunc_aes_core__DOT__mul9__395__b;
                                        __Vfunc_aes_core__DOT__xtime__398__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__398__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__398__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__398__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__397__b 
                                            = __Vfunc_aes_core__DOT__xtime__398__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__397__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__397__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__397__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__397__b), 1U)));
                                        __Vfunc_aes_core__DOT__xtime__396__b 
                                            = __Vfunc_aes_core__DOT__xtime__397__Vfuncout;
                                        __Vfunc_aes_core__DOT__xtime__396__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__396__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__396__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__396__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__396__Vfuncout)) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul9__395__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul9__395__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul9__399__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul9__399__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__402__b 
                                                    = __Vfunc_aes_core__DOT__mul9__399__b;
                                                __Vfunc_aes_core__DOT__xtime__402__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__402__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__402__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__402__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__401__b 
                                                    = __Vfunc_aes_core__DOT__xtime__402__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__401__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__401__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__401__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__401__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__400__b 
                                                    = __Vfunc_aes_core__DOT__xtime__401__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__400__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__400__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__400__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__400__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__400__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__399__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__399__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul14__403__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul14__403__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__406__b 
                                                        = __Vfunc_aes_core__DOT__mul14__403__b;
                                                    __Vfunc_aes_core__DOT__xtime__406__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__406__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__406__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__406__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__405__b 
                                                        = __Vfunc_aes_core__DOT__xtime__406__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__405__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__405__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__405__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__405__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__404__b 
                                                        = __Vfunc_aes_core__DOT__xtime__405__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__404__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__404__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__404__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__404__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__404__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__408__b 
                                                        = __Vfunc_aes_core__DOT__mul14__403__b;
                                                    __Vfunc_aes_core__DOT__xtime__408__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__408__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__408__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__408__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__407__b 
                                                        = __Vfunc_aes_core__DOT__xtime__408__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__407__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__407__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__407__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__407__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__407__Vfuncout))) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__409__b 
                                                    = __Vfunc_aes_core__DOT__mul14__403__b;
                                                __Vfunc_aes_core__DOT__xtime__409__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__409__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__409__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__409__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__409__Vfuncout)));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul14__403__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul11__410__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul11__410__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__413__b 
                                                    = __Vfunc_aes_core__DOT__mul11__410__b;
                                                __Vfunc_aes_core__DOT__xtime__413__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__413__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__413__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__413__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__412__b 
                                                    = __Vfunc_aes_core__DOT__xtime__413__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__412__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__412__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__412__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__412__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__411__b 
                                                    = __Vfunc_aes_core__DOT__xtime__412__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__411__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__411__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__411__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__411__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__411__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__414__b 
                                                    = __Vfunc_aes_core__DOT__mul11__410__b;
                                                __Vfunc_aes_core__DOT__xtime__414__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__414__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__414__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__414__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__414__Vfuncout))) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul11__410__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul11__410__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul13__415__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul13__415__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__418__b 
                                                = __Vfunc_aes_core__DOT__mul13__415__b;
                                            __Vfunc_aes_core__DOT__xtime__418__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__418__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__418__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__418__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__417__b 
                                                = __Vfunc_aes_core__DOT__xtime__418__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__417__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__417__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__417__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__417__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__416__b 
                                                = __Vfunc_aes_core__DOT__xtime__417__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__416__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__416__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__416__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__416__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__416__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__420__b 
                                                = __Vfunc_aes_core__DOT__mul13__415__b;
                                            __Vfunc_aes_core__DOT__xtime__420__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__420__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__420__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__420__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__419__b 
                                                = __Vfunc_aes_core__DOT__xtime__420__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__419__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__419__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__419__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__419__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__419__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul13__415__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul13__415__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul13__421__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul13__421__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__424__b 
                                                        = __Vfunc_aes_core__DOT__mul13__421__b;
                                                    __Vfunc_aes_core__DOT__xtime__424__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__424__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__424__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__424__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__423__b 
                                                        = __Vfunc_aes_core__DOT__xtime__424__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__423__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__423__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__423__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__423__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__422__b 
                                                        = __Vfunc_aes_core__DOT__xtime__423__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__422__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__422__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__422__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__422__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__422__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__426__b 
                                                        = __Vfunc_aes_core__DOT__mul13__421__b;
                                                    __Vfunc_aes_core__DOT__xtime__426__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__426__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__426__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__426__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__425__b 
                                                        = __Vfunc_aes_core__DOT__xtime__426__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__425__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__425__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__425__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__425__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__425__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__421__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__421__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul9__427__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul9__427__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__xtime__430__b 
                                                    = __Vfunc_aes_core__DOT__mul9__427__b;
                                                __Vfunc_aes_core__DOT__xtime__430__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__430__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__430__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__430__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__429__b 
                                                    = __Vfunc_aes_core__DOT__xtime__430__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__429__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__429__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__429__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__429__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__428__b 
                                                    = __Vfunc_aes_core__DOT__xtime__429__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__428__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__428__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__428__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__428__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__428__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul9__427__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul9__427__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul14__431__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul14__431__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_aes_core__DOT__xtime__434__b 
                                                    = __Vfunc_aes_core__DOT__mul14__431__b;
                                                __Vfunc_aes_core__DOT__xtime__434__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__434__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__434__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__434__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__433__b 
                                                    = __Vfunc_aes_core__DOT__xtime__434__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__433__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__433__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__433__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__433__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__432__b 
                                                    = __Vfunc_aes_core__DOT__xtime__433__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__432__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__432__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__432__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__432__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__432__Vfuncout)) 
                                        ^ ([&]() {
                                                __Vfunc_aes_core__DOT__xtime__436__b 
                                                    = __Vfunc_aes_core__DOT__mul14__431__b;
                                                __Vfunc_aes_core__DOT__xtime__436__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__436__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__436__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__436__b), 1U)));
                                                __Vfunc_aes_core__DOT__xtime__435__b 
                                                    = __Vfunc_aes_core__DOT__xtime__436__Vfuncout;
                                                __Vfunc_aes_core__DOT__xtime__435__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & ((0U 
                                                         != 
                                                         (0x80U 
                                                          & (IData)(__Vfunc_aes_core__DOT__xtime__435__b)))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__435__b), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__435__b), 1U)));
                                            }(), (IData)(__Vfunc_aes_core__DOT__xtime__435__Vfuncout))) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__437__b 
                                                = __Vfunc_aes_core__DOT__mul14__431__b;
                                            __Vfunc_aes_core__DOT__xtime__437__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__437__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__437__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__437__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__437__Vfuncout)));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul14__431__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul11__438__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul11__438__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__441__b 
                                                = __Vfunc_aes_core__DOT__mul11__438__b;
                                            __Vfunc_aes_core__DOT__xtime__441__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__441__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__441__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__441__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__440__b 
                                                = __Vfunc_aes_core__DOT__xtime__441__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__440__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__440__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__440__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__440__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__439__b 
                                                = __Vfunc_aes_core__DOT__xtime__440__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__439__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__439__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__439__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__439__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__439__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__442__b 
                                                = __Vfunc_aes_core__DOT__mul11__438__b;
                                            __Vfunc_aes_core__DOT__xtime__442__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__442__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__442__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__442__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__442__Vfuncout))) 
                                   ^ (IData)(__Vfunc_aes_core__DOT__mul11__438__b));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul11__438__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3 
                    = (((([&]() {
                                    __Vfunc_aes_core__DOT__mul11__443__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0;
                                    __Vfunc_aes_core__DOT__mul11__443__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__446__b 
                                                        = __Vfunc_aes_core__DOT__mul11__443__b;
                                                    __Vfunc_aes_core__DOT__xtime__446__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__446__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__446__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__446__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__445__b 
                                                        = __Vfunc_aes_core__DOT__xtime__446__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__445__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__445__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__445__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__445__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__444__b 
                                                        = __Vfunc_aes_core__DOT__xtime__445__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__444__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__444__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__444__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__444__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__444__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__447__b 
                                                        = __Vfunc_aes_core__DOT__mul11__443__b;
                                                    __Vfunc_aes_core__DOT__xtime__447__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__447__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__447__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__447__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__447__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul11__443__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul11__443__Vfuncout)) 
                         ^ ([&]() {
                                    __Vfunc_aes_core__DOT__mul13__448__b 
                                        = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1;
                                    __Vfunc_aes_core__DOT__mul13__448__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__451__b 
                                                        = __Vfunc_aes_core__DOT__mul13__448__b;
                                                    __Vfunc_aes_core__DOT__xtime__451__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__451__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__451__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__451__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__450__b 
                                                        = __Vfunc_aes_core__DOT__xtime__451__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__450__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__450__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__450__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__450__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__449__b 
                                                        = __Vfunc_aes_core__DOT__xtime__450__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__449__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__449__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__449__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__449__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__449__Vfuncout)) 
                                            ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__xtime__453__b 
                                                        = __Vfunc_aes_core__DOT__mul13__448__b;
                                                    __Vfunc_aes_core__DOT__xtime__453__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__453__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__453__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__453__b), 1U)));
                                                    __Vfunc_aes_core__DOT__xtime__452__b 
                                                        = __Vfunc_aes_core__DOT__xtime__453__Vfuncout;
                                                    __Vfunc_aes_core__DOT__xtime__452__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & ((0U 
                                                             != 
                                                             (0x80U 
                                                              & (IData)(__Vfunc_aes_core__DOT__xtime__452__b)))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__452__b), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__452__b), 1U)));
                                                }(), (IData)(__Vfunc_aes_core__DOT__xtime__452__Vfuncout))) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__mul13__448__b));
                                }(), (IData)(__Vfunc_aes_core__DOT__mul13__448__Vfuncout))) 
                        ^ ([&]() {
                                __Vfunc_aes_core__DOT__mul9__454__b 
                                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2;
                                __Vfunc_aes_core__DOT__mul9__454__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__xtime__457__b 
                                                = __Vfunc_aes_core__DOT__mul9__454__b;
                                            __Vfunc_aes_core__DOT__xtime__457__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__457__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__457__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__457__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__456__b 
                                                = __Vfunc_aes_core__DOT__xtime__457__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__456__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__456__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__456__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__456__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__455__b 
                                                = __Vfunc_aes_core__DOT__xtime__456__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__455__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__455__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__455__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__455__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__455__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__mul9__454__b));
                            }(), (IData)(__Vfunc_aes_core__DOT__mul9__454__Vfuncout))) 
                       ^ ([&]() {
                            __Vfunc_aes_core__DOT__mul14__458__b 
                                = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3;
                            __Vfunc_aes_core__DOT__mul14__458__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_aes_core__DOT__xtime__461__b 
                                                = __Vfunc_aes_core__DOT__mul14__458__b;
                                            __Vfunc_aes_core__DOT__xtime__461__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__461__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__461__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__461__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__460__b 
                                                = __Vfunc_aes_core__DOT__xtime__461__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__460__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__460__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__460__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__460__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__459__b 
                                                = __Vfunc_aes_core__DOT__xtime__460__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__459__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__459__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__459__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__459__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__459__Vfuncout)) 
                                    ^ ([&]() {
                                            __Vfunc_aes_core__DOT__xtime__463__b 
                                                = __Vfunc_aes_core__DOT__mul14__458__b;
                                            __Vfunc_aes_core__DOT__xtime__463__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__463__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__463__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__463__b), 1U)));
                                            __Vfunc_aes_core__DOT__xtime__462__b 
                                                = __Vfunc_aes_core__DOT__xtime__463__Vfuncout;
                                            __Vfunc_aes_core__DOT__xtime__462__Vfuncout 
                                                = (0xffU 
                                                   & ((0U 
                                                       != 
                                                       (0x80U 
                                                        & (IData)(__Vfunc_aes_core__DOT__xtime__462__b)))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__462__b), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__462__b), 1U)));
                                        }(), (IData)(__Vfunc_aes_core__DOT__xtime__462__Vfuncout))) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__xtime__464__b 
                                            = __Vfunc_aes_core__DOT__mul14__458__b;
                                        __Vfunc_aes_core__DOT__xtime__464__Vfuncout 
                                            = (0xffU 
                                               & ((0U 
                                                   != 
                                                   (0x80U 
                                                    & (IData)(__Vfunc_aes_core__DOT__xtime__464__b)))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__464__b), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_aes_core__DOT__xtime__464__b), 1U)));
                                    }(), (IData)(__Vfunc_aes_core__DOT__xtime__464__Vfuncout)));
                        }(), (IData)(__Vfunc_aes_core__DOT__mul14__458__Vfuncout)));
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                    = ((((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0) 
                         << 0x18U) | ((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1) 
                                      << 0x10U)) | 
                       (((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2) 
                         << 8U) | (IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3)));
                __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3;
                __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2;
                __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1))));
                __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1))) 
                               >> 0x20U));
                __Vdly__aes_core__DOT__state_reg[0U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[0U];
                __Vdly__aes_core__DOT__state_reg[1U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[1U];
                __Vdly__aes_core__DOT__state_reg[2U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[2U];
                __Vdly__aes_core__DOT__state_reg[3U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__109__Vfuncout[3U];
                __Vdly__aes_core__DOT__round_cnt = 
                    (0xfU & ((IData)(vlSelfRef.aes_core__DOT__round_cnt) 
                             - (IData)(1U)));
            }
        } else if ((3U == (IData)(vlSelfRef.aes_core__DOT__state))) {
            VL_COND_WIWW(128, __Vdly__aes_core__DOT__state_reg, (IData)(vlSelfRef.encrypt), 
                         ([&]() {
                        __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[0U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][0U];
                        __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[1U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][1U];
                        __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[2U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][2U];
                        __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[3U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][3U];
                        __Vfunc_aes_core__DOT__sub_bytes__467__state_in[0U] 
                            = vlSelfRef.aes_core__DOT__state_reg[0U];
                        __Vfunc_aes_core__DOT__sub_bytes__467__state_in[1U] 
                            = vlSelfRef.aes_core__DOT__state_reg[1U];
                        __Vfunc_aes_core__DOT__sub_bytes__467__state_in[2U] 
                            = vlSelfRef.aes_core__DOT__state_reg[2U];
                        __Vfunc_aes_core__DOT__sub_bytes__467__state_in[3U] 
                            = vlSelfRef.aes_core__DOT__state_reg[3U];
                        __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[0U] 
                            = (((vlSelfRef.aes_core__DOT__sbox
                                 [(__Vfunc_aes_core__DOT__sub_bytes__467__state_in[0U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[0U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[0U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__sub_bytes__467__state_in[0U])]));
                        __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[1U] 
                            = (((vlSelfRef.aes_core__DOT__sbox
                                 [(__Vfunc_aes_core__DOT__sub_bytes__467__state_in[1U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[1U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[1U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__sub_bytes__467__state_in[1U])]));
                        __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[2U] 
                            = (((vlSelfRef.aes_core__DOT__sbox
                                 [(__Vfunc_aes_core__DOT__sub_bytes__467__state_in[2U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[2U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[2U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__sub_bytes__467__state_in[2U])]));
                        __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[3U] 
                            = (((vlSelfRef.aes_core__DOT__sbox
                                 [(__Vfunc_aes_core__DOT__sub_bytes__467__state_in[3U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[3U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__sub_bytes__467__state_in[3U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__sub_bytes__467__state_in[3U])]));
                        __Vfunc_aes_core__DOT__shift_rows__466__state_in[0U] 
                            = __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[0U];
                        __Vfunc_aes_core__DOT__shift_rows__466__state_in[1U] 
                            = __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[1U];
                        __Vfunc_aes_core__DOT__shift_rows__466__state_in[2U] 
                            = __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[2U];
                        __Vfunc_aes_core__DOT__shift_rows__466__state_in[3U] 
                            = __Vfunc_aes_core__DOT__sub_bytes__467__Vfuncout[3U];
                        __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[0U] 
                            = (((__Vfunc_aes_core__DOT__shift_rows__466__state_in[0U] 
                                 << 0x18U) | (0xff0000U 
                                              & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[3U] 
                                                 << 0x10U))) 
                               | ((0xff00U & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[2U] 
                                              << 8U)) 
                                  | (0xffU & __Vfunc_aes_core__DOT__shift_rows__466__state_in[1U])));
                        __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[1U] 
                            = (((0xff000000U & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[1U] 
                                                << 0x10U)) 
                                | (0xff0000U & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[0U] 
                                                << 8U))) 
                               | ((0xff00U & __Vfunc_aes_core__DOT__shift_rows__466__state_in[3U]) 
                                  | (0xffU & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[2U] 
                                              >> 8U))));
                        __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[2U] 
                            = (((0xff000000U & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[2U] 
                                                << 8U)) 
                                | (0xff0000U & __Vfunc_aes_core__DOT__shift_rows__466__state_in[1U])) 
                               | ((0xff00U & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[0U] 
                                              >> 8U)) 
                                  | (0xffU & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[3U] 
                                              >> 0x10U))));
                        __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[3U] 
                            = (((0xff000000U & __Vfunc_aes_core__DOT__shift_rows__466__state_in[3U]) 
                                | (0xff0000U & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[2U] 
                                                >> 8U))) 
                               | ((0xff00U & (__Vfunc_aes_core__DOT__shift_rows__466__state_in[1U] 
                                              >> 0x10U)) 
                                  | (__Vfunc_aes_core__DOT__shift_rows__466__state_in[0U] 
                                     >> 0x18U)));
                        __Vfunc_aes_core__DOT__add_round_key__465__data_in[0U] 
                            = __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[0U];
                        __Vfunc_aes_core__DOT__add_round_key__465__data_in[1U] 
                            = __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[1U];
                        __Vfunc_aes_core__DOT__add_round_key__465__data_in[2U] 
                            = __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[2U];
                        __Vfunc_aes_core__DOT__add_round_key__465__data_in[3U] 
                            = __Vfunc_aes_core__DOT__shift_rows__466__Vfuncout[3U];
                        __Vfunc_aes_core__DOT__add_round_key__465__Vfuncout[0U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__465__data_in[0U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[0U]);
                        __Vfunc_aes_core__DOT__add_round_key__465__Vfuncout[1U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__465__data_in[1U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[1U]);
                        __Vfunc_aes_core__DOT__add_round_key__465__Vfuncout[2U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__465__data_in[2U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[2U]);
                        __Vfunc_aes_core__DOT__add_round_key__465__Vfuncout[3U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__465__data_in[3U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__465__round_key_in[3U]);
                    }(), __Vfunc_aes_core__DOT__add_round_key__465__Vfuncout), 
                         ([&]() {
                        __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[0U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][0U];
                        __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[1U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][1U];
                        __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[2U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][2U];
                        __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[3U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][3U];
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[0U] 
                            = vlSelfRef.aes_core__DOT__state_reg[0U];
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[1U] 
                            = vlSelfRef.aes_core__DOT__state_reg[1U];
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[2U] 
                            = vlSelfRef.aes_core__DOT__state_reg[2U];
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[3U] 
                            = vlSelfRef.aes_core__DOT__state_reg[3U];
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[0U] 
                            = (((__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[2U] 
                                 << 0x18U) | (0xff0000U 
                                              & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[1U] 
                                                 << 0x10U))) 
                               | ((0xff00U & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[0U] 
                                              << 8U)) 
                                  | (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[3U])));
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[1U] 
                            = (((0xff000000U & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[1U] 
                                                << 0x10U)) 
                                | (0xff0000U & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[0U] 
                                                << 8U))) 
                               | ((0xff00U & __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[3U]) 
                                  | (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[2U] 
                                              >> 8U))));
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[2U] 
                            = (((0xff000000U & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[0U] 
                                                << 8U)) 
                                | (0xff0000U & __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[3U])) 
                               | ((0xff00U & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[2U] 
                                              >> 8U)) 
                                  | (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[1U] 
                                              >> 0x10U))));
                        __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[3U] 
                            = (((0xff000000U & __Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[3U]) 
                                | (0xff0000U & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[2U] 
                                                >> 8U))) 
                               | ((0xff00U & (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[1U] 
                                              >> 0x10U)) 
                                  | (__Vfunc_aes_core__DOT__inv_shift_rows__470__state_in[0U] 
                                     >> 0x18U)));
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[0U] 
                            = __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[0U];
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[1U] 
                            = __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[1U];
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[2U] 
                            = __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[2U];
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[3U] 
                            = __Vfunc_aes_core__DOT__inv_shift_rows__470__Vfuncout[3U];
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[0U] 
                            = (((vlSelfRef.aes_core__DOT__inv_sbox
                                 [(__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[0U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__inv_sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[0U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__inv_sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[0U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__inv_sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[0U])]));
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[1U] 
                            = (((vlSelfRef.aes_core__DOT__inv_sbox
                                 [(__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[1U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__inv_sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[1U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__inv_sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[1U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__inv_sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[1U])]));
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[2U] 
                            = (((vlSelfRef.aes_core__DOT__inv_sbox
                                 [(__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[2U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__inv_sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[2U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__inv_sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[2U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__inv_sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[2U])]));
                        __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[3U] 
                            = (((vlSelfRef.aes_core__DOT__inv_sbox
                                 [(__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[3U] 
                                   >> 0x18U)] << 0x18U) 
                                | (vlSelfRef.aes_core__DOT__inv_sbox
                                   [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[3U] 
                                              >> 0x10U))] 
                                   << 0x10U)) | ((vlSelfRef.aes_core__DOT__inv_sbox
                                                  [
                                                  (0xffU 
                                                   & (__Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[3U] 
                                                      >> 8U))] 
                                                  << 8U) 
                                                 | vlSelfRef.aes_core__DOT__inv_sbox
                                                 [(0xffU 
                                                   & __Vfunc_aes_core__DOT__inv_sub_bytes__469__state_in[3U])]));
                        __Vfunc_aes_core__DOT__add_round_key__468__data_in[0U] 
                            = __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[0U];
                        __Vfunc_aes_core__DOT__add_round_key__468__data_in[1U] 
                            = __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[1U];
                        __Vfunc_aes_core__DOT__add_round_key__468__data_in[2U] 
                            = __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[2U];
                        __Vfunc_aes_core__DOT__add_round_key__468__data_in[3U] 
                            = __Vfunc_aes_core__DOT__inv_sub_bytes__469__Vfuncout[3U];
                        __Vfunc_aes_core__DOT__add_round_key__468__Vfuncout[0U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__468__data_in[0U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[0U]);
                        __Vfunc_aes_core__DOT__add_round_key__468__Vfuncout[1U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__468__data_in[1U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[1U]);
                        __Vfunc_aes_core__DOT__add_round_key__468__Vfuncout[2U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__468__data_in[2U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[2U]);
                        __Vfunc_aes_core__DOT__add_round_key__468__Vfuncout[3U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__468__data_in[3U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__468__round_key_in[3U]);
                    }(), __Vfunc_aes_core__DOT__add_round_key__468__Vfuncout));
        } else if ((4U == (IData)(vlSelfRef.aes_core__DOT__state))) {
            __VdlyVal__data_out__v0 = vlSelfRef.aes_core__DOT__state_reg[3U];
            __VdlySet__data_out__v0 = 1U;
            vlSelfRef.done = 1U;
            vlSelfRef.busy = 0U;
            __VdlyVal__data_out__v1 = vlSelfRef.aes_core__DOT__state_reg[2U];
            __VdlySet__data_out__v1 = 1U;
            __VdlyVal__data_out__v2 = vlSelfRef.aes_core__DOT__state_reg[1U];
            __VdlyVal__data_out__v3 = vlSelfRef.aes_core__DOT__state_reg[0U];
        }
        vlSelfRef.aes_core__DOT__state = vlSelfRef.aes_core__DOT__next_state;
    } else {
        __VdlySet__aes_core__DOT__round_keys__v11 = 1U;
        vlSelfRef.aes_core__DOT__j = 0xbU;
        vlSelfRef.aes_core__DOT__state = 0U;
        __Vdly__aes_core__DOT__round_cnt = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.busy = 0U;
        __VdlySet__aes_core__DOT__round_keys__v12 = 1U;
        __Vdly__aes_core__DOT__state_reg[0U] = 0U;
        __Vdly__aes_core__DOT__state_reg[1U] = 0U;
        __Vdly__aes_core__DOT__state_reg[2U] = 0U;
        __Vdly__aes_core__DOT__state_reg[3U] = 0U;
        __VdlySet__aes_core__DOT__round_keys__v13 = 1U;
    }
    vlSelfRef.aes_core__DOT__state_reg[0U] = __Vdly__aes_core__DOT__state_reg[0U];
    vlSelfRef.aes_core__DOT__state_reg[1U] = __Vdly__aes_core__DOT__state_reg[1U];
    vlSelfRef.aes_core__DOT__state_reg[2U] = __Vdly__aes_core__DOT__state_reg[2U];
    vlSelfRef.aes_core__DOT__state_reg[3U] = __Vdly__aes_core__DOT__state_reg[3U];
    if (__VdlySet__data_out__v0) {
        vlSelfRef.data_out[0U] = __VdlyVal__data_out__v0;
    }
    if (__VdlySet__data_out__v1) {
        vlSelfRef.data_out[1U] = __VdlyVal__data_out__v1;
        vlSelfRef.data_out[2U] = __VdlyVal__data_out__v2;
        vlSelfRef.data_out[3U] = __VdlyVal__data_out__v3;
    }
    vlSelfRef.aes_core__DOT__round_cnt = __Vdly__aes_core__DOT__round_cnt;
    if (__VdlySet__aes_core__DOT__round_keys__v0) {
        vlSelfRef.aes_core__DOT__round_keys[0U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v0[0U];
        vlSelfRef.aes_core__DOT__round_keys[0U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v0[1U];
        vlSelfRef.aes_core__DOT__round_keys[0U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v0[2U];
        vlSelfRef.aes_core__DOT__round_keys[0U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v0[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v1) {
        vlSelfRef.aes_core__DOT__round_keys[1U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v1[0U];
        vlSelfRef.aes_core__DOT__round_keys[1U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v1[1U];
        vlSelfRef.aes_core__DOT__round_keys[1U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v1[2U];
        vlSelfRef.aes_core__DOT__round_keys[1U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v1[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v2) {
        vlSelfRef.aes_core__DOT__round_keys[2U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v2[0U];
        vlSelfRef.aes_core__DOT__round_keys[2U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v2[1U];
        vlSelfRef.aes_core__DOT__round_keys[2U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v2[2U];
        vlSelfRef.aes_core__DOT__round_keys[2U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v2[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v3) {
        vlSelfRef.aes_core__DOT__round_keys[3U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v3[0U];
        vlSelfRef.aes_core__DOT__round_keys[3U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v3[1U];
        vlSelfRef.aes_core__DOT__round_keys[3U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v3[2U];
        vlSelfRef.aes_core__DOT__round_keys[3U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v3[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v4) {
        vlSelfRef.aes_core__DOT__round_keys[4U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v4[0U];
        vlSelfRef.aes_core__DOT__round_keys[4U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v4[1U];
        vlSelfRef.aes_core__DOT__round_keys[4U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v4[2U];
        vlSelfRef.aes_core__DOT__round_keys[4U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v4[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v5) {
        vlSelfRef.aes_core__DOT__round_keys[5U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v5[0U];
        vlSelfRef.aes_core__DOT__round_keys[5U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v5[1U];
        vlSelfRef.aes_core__DOT__round_keys[5U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v5[2U];
        vlSelfRef.aes_core__DOT__round_keys[5U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v5[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v6) {
        vlSelfRef.aes_core__DOT__round_keys[6U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v6[0U];
        vlSelfRef.aes_core__DOT__round_keys[6U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v6[1U];
        vlSelfRef.aes_core__DOT__round_keys[6U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v6[2U];
        vlSelfRef.aes_core__DOT__round_keys[6U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v6[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v7) {
        vlSelfRef.aes_core__DOT__round_keys[7U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v7[0U];
        vlSelfRef.aes_core__DOT__round_keys[7U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v7[1U];
        vlSelfRef.aes_core__DOT__round_keys[7U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v7[2U];
        vlSelfRef.aes_core__DOT__round_keys[7U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v7[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v8) {
        vlSelfRef.aes_core__DOT__round_keys[8U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v8[0U];
        vlSelfRef.aes_core__DOT__round_keys[8U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v8[1U];
        vlSelfRef.aes_core__DOT__round_keys[8U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v8[2U];
        vlSelfRef.aes_core__DOT__round_keys[8U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v8[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v9) {
        vlSelfRef.aes_core__DOT__round_keys[9U][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v9[0U];
        vlSelfRef.aes_core__DOT__round_keys[9U][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v9[1U];
        vlSelfRef.aes_core__DOT__round_keys[9U][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v9[2U];
        vlSelfRef.aes_core__DOT__round_keys[9U][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v9[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v10) {
        vlSelfRef.aes_core__DOT__round_keys[0xaU][0U] 
            = __VdlyVal__aes_core__DOT__round_keys__v10[0U];
        vlSelfRef.aes_core__DOT__round_keys[0xaU][1U] 
            = __VdlyVal__aes_core__DOT__round_keys__v10[1U];
        vlSelfRef.aes_core__DOT__round_keys[0xaU][2U] 
            = __VdlyVal__aes_core__DOT__round_keys__v10[2U];
        vlSelfRef.aes_core__DOT__round_keys[0xaU][3U] 
            = __VdlyVal__aes_core__DOT__round_keys__v10[3U];
    }
    if (__VdlySet__aes_core__DOT__round_keys__v11) {
        vlSelfRef.aes_core__DOT__round_keys[0U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[0U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[0U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[0U][3U] = 0U;
    }
    if (__VdlySet__aes_core__DOT__round_keys__v12) {
        vlSelfRef.aes_core__DOT__round_keys[1U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[1U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[1U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[1U][3U] = 0U;
    }
    if (__VdlySet__aes_core__DOT__round_keys__v13) {
        vlSelfRef.aes_core__DOT__round_keys[2U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[2U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[2U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[2U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[3U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[3U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[3U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[3U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[4U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[4U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[4U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[4U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[5U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[5U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[5U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[5U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[6U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[6U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[6U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[6U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[7U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[7U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[7U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[7U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[8U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[8U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[8U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[8U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[9U][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[9U][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[9U][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[9U][3U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[0xaU][0U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[0xaU][1U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[0xaU][2U] = 0U;
        vlSelfRef.aes_core__DOT__round_keys[0xaU][3U] = 0U;
    }
    __Vtableidx1 = ((((IData)(vlSelfRef.aes_core__DOT__round_cnt) 
                      << 5U) | ((IData)(vlSelfRef.encrypt) 
                                << 4U)) | (((IData)(vlSelfRef.start) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.aes_core__DOT__state)));
    vlSelfRef.aes_core__DOT__next_state = Vaes_core__ConstPool__TABLE_h96874b73_0
        [__Vtableidx1];
}
