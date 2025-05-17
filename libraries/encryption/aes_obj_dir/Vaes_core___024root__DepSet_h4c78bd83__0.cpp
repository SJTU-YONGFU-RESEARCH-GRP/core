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

extern const VlUnpacked<CData/*2:0*/, 512> Vaes_core__ConstPool__TABLE_hf4fd3c6c_0;

VL_INLINE_OPT void Vaes_core___024root___ico_sequent__TOP__0(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___ico_sequent__TOP__0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.start) << 8U) 
                     | ((IData)(vlSelfRef.aes_core__DOT__round_cnt) 
                        << 4U)) | (((IData)(vlSelfRef.encrypt) 
                                    << 3U) | (IData)(vlSelfRef.aes_core__DOT__state)));
    vlSelfRef.aes_core__DOT__next_state = Vaes_core__ConstPool__TABLE_hf4fd3c6c_0
        [__Vtableidx1];
    vlSelfRef.aes_core__DOT__round_keys[0U][0U] = vlSelfRef.key[0U];
    vlSelfRef.aes_core__DOT__round_keys[0U][1U] = vlSelfRef.key[1U];
    vlSelfRef.aes_core__DOT__round_keys[0U][2U] = vlSelfRef.key[2U];
    vlSelfRef.aes_core__DOT__round_keys[0U][3U] = vlSelfRef.key[3U];
    vlSelfRef.aes_core__DOT__w[0U] = vlSelfRef.key[3U];
    vlSelfRef.aes_core__DOT__w[1U] = vlSelfRef.key[2U];
    vlSelfRef.aes_core__DOT__w[2U] = vlSelfRef.key[1U];
    vlSelfRef.aes_core__DOT__w[3U] = vlSelfRef.key[0U];
    vlSelfRef.aes_core__DOT__round_keys[1U][0U] = vlSelfRef.aes_core__DOT__w
        [7U];
    vlSelfRef.aes_core__DOT__round_keys[1U][1U] = vlSelfRef.aes_core__DOT__w
        [6U];
    vlSelfRef.aes_core__DOT__round_keys[1U][2U] = vlSelfRef.aes_core__DOT__w
        [5U];
    vlSelfRef.aes_core__DOT__round_keys[1U][3U] = vlSelfRef.aes_core__DOT__w
        [4U];
    vlSelfRef.aes_core__DOT__round_keys[2U][0U] = vlSelfRef.aes_core__DOT__w
        [0xbU];
    vlSelfRef.aes_core__DOT__round_keys[2U][1U] = vlSelfRef.aes_core__DOT__w
        [0xaU];
    vlSelfRef.aes_core__DOT__round_keys[2U][2U] = vlSelfRef.aes_core__DOT__w
        [9U];
    vlSelfRef.aes_core__DOT__round_keys[2U][3U] = vlSelfRef.aes_core__DOT__w
        [8U];
    vlSelfRef.aes_core__DOT__round_keys[3U][0U] = vlSelfRef.aes_core__DOT__w
        [0xfU];
    vlSelfRef.aes_core__DOT__round_keys[3U][1U] = vlSelfRef.aes_core__DOT__w
        [0xeU];
    vlSelfRef.aes_core__DOT__round_keys[3U][2U] = vlSelfRef.aes_core__DOT__w
        [0xdU];
    vlSelfRef.aes_core__DOT__round_keys[3U][3U] = vlSelfRef.aes_core__DOT__w
        [0xcU];
    vlSelfRef.aes_core__DOT__round_keys[4U][0U] = vlSelfRef.aes_core__DOT__w
        [0x13U];
    vlSelfRef.aes_core__DOT__round_keys[4U][1U] = vlSelfRef.aes_core__DOT__w
        [0x12U];
    vlSelfRef.aes_core__DOT__round_keys[4U][2U] = vlSelfRef.aes_core__DOT__w
        [0x11U];
    vlSelfRef.aes_core__DOT__round_keys[4U][3U] = vlSelfRef.aes_core__DOT__w
        [0x10U];
    vlSelfRef.aes_core__DOT__round_keys[5U][0U] = vlSelfRef.aes_core__DOT__w
        [0x17U];
    vlSelfRef.aes_core__DOT__round_keys[5U][1U] = vlSelfRef.aes_core__DOT__w
        [0x16U];
    vlSelfRef.aes_core__DOT__round_keys[5U][2U] = vlSelfRef.aes_core__DOT__w
        [0x15U];
    vlSelfRef.aes_core__DOT__round_keys[5U][3U] = vlSelfRef.aes_core__DOT__w
        [0x14U];
    vlSelfRef.aes_core__DOT__round_keys[6U][0U] = vlSelfRef.aes_core__DOT__w
        [0x1bU];
    vlSelfRef.aes_core__DOT__round_keys[6U][1U] = vlSelfRef.aes_core__DOT__w
        [0x1aU];
    vlSelfRef.aes_core__DOT__round_keys[6U][2U] = vlSelfRef.aes_core__DOT__w
        [0x19U];
    vlSelfRef.aes_core__DOT__round_keys[6U][3U] = vlSelfRef.aes_core__DOT__w
        [0x18U];
    vlSelfRef.aes_core__DOT__round_keys[7U][0U] = vlSelfRef.aes_core__DOT__w
        [0x1fU];
    vlSelfRef.aes_core__DOT__round_keys[7U][1U] = vlSelfRef.aes_core__DOT__w
        [0x1eU];
    vlSelfRef.aes_core__DOT__round_keys[7U][2U] = vlSelfRef.aes_core__DOT__w
        [0x1dU];
    vlSelfRef.aes_core__DOT__round_keys[7U][3U] = vlSelfRef.aes_core__DOT__w
        [0x1cU];
    vlSelfRef.aes_core__DOT__round_keys[8U][0U] = vlSelfRef.aes_core__DOT__w
        [0x23U];
    vlSelfRef.aes_core__DOT__round_keys[8U][1U] = vlSelfRef.aes_core__DOT__w
        [0x22U];
    vlSelfRef.aes_core__DOT__round_keys[8U][2U] = vlSelfRef.aes_core__DOT__w
        [0x21U];
    vlSelfRef.aes_core__DOT__round_keys[8U][3U] = vlSelfRef.aes_core__DOT__w
        [0x20U];
    vlSelfRef.aes_core__DOT__round_keys[9U][0U] = vlSelfRef.aes_core__DOT__w
        [0x27U];
    vlSelfRef.aes_core__DOT__round_keys[9U][1U] = vlSelfRef.aes_core__DOT__w
        [0x26U];
    vlSelfRef.aes_core__DOT__round_keys[9U][2U] = vlSelfRef.aes_core__DOT__w
        [0x25U];
    vlSelfRef.aes_core__DOT__round_keys[9U][3U] = vlSelfRef.aes_core__DOT__w
        [0x24U];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][0U] = 
        vlSelfRef.aes_core__DOT__w[0x2bU];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][1U] = 
        vlSelfRef.aes_core__DOT__w[0x2aU];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][2U] = 
        vlSelfRef.aes_core__DOT__w[0x29U];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][3U] = 
        vlSelfRef.aes_core__DOT__w[0x28U];
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

void Vaes_core___024root___act_sequent__TOP__0(Vaes_core___024root* vlSelf);

void Vaes_core___024root___eval_act(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_act\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vaes_core___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vaes_core___024root___act_sequent__TOP__0(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___act_sequent__TOP__0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_core__DOT__w[5U] = (vlSelfRef.aes_core__DOT__w
                                      [1U] ^ vlSelfRef.aes_core__DOT__w
                                      [4U]);
    vlSelfRef.aes_core__DOT__w[6U] = (vlSelfRef.aes_core__DOT__w
                                      [2U] ^ vlSelfRef.aes_core__DOT__w
                                      [5U]);
    vlSelfRef.aes_core__DOT__w[7U] = (vlSelfRef.aes_core__DOT__w
                                      [3U] ^ vlSelfRef.aes_core__DOT__w
                                      [6U]);
    vlSelfRef.aes_core__DOT__w[9U] = (vlSelfRef.aes_core__DOT__w
                                      [5U] ^ vlSelfRef.aes_core__DOT__w
                                      [8U]);
    vlSelfRef.aes_core__DOT__w[0xaU] = (vlSelfRef.aes_core__DOT__w
                                        [6U] ^ vlSelfRef.aes_core__DOT__w
                                        [9U]);
    vlSelfRef.aes_core__DOT__w[0xbU] = (vlSelfRef.aes_core__DOT__w
                                        [7U] ^ vlSelfRef.aes_core__DOT__w
                                        [0xaU]);
    vlSelfRef.aes_core__DOT__w[0xdU] = (vlSelfRef.aes_core__DOT__w
                                        [9U] ^ vlSelfRef.aes_core__DOT__w
                                        [0xcU]);
    vlSelfRef.aes_core__DOT__w[0xeU] = (vlSelfRef.aes_core__DOT__w
                                        [0xaU] ^ vlSelfRef.aes_core__DOT__w
                                        [0xdU]);
    vlSelfRef.aes_core__DOT__w[0xfU] = (vlSelfRef.aes_core__DOT__w
                                        [0xbU] ^ vlSelfRef.aes_core__DOT__w
                                        [0xeU]);
    vlSelfRef.aes_core__DOT__w[0x11U] = (vlSelfRef.aes_core__DOT__w
                                         [0xdU] ^ vlSelfRef.aes_core__DOT__w
                                         [0x10U]);
    vlSelfRef.aes_core__DOT__w[0x12U] = (vlSelfRef.aes_core__DOT__w
                                         [0xeU] ^ vlSelfRef.aes_core__DOT__w
                                         [0x11U]);
    vlSelfRef.aes_core__DOT__w[0x13U] = (vlSelfRef.aes_core__DOT__w
                                         [0xfU] ^ vlSelfRef.aes_core__DOT__w
                                         [0x12U]);
    vlSelfRef.aes_core__DOT__w[0x15U] = (vlSelfRef.aes_core__DOT__w
                                         [0x11U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x14U]);
    vlSelfRef.aes_core__DOT__w[0x16U] = (vlSelfRef.aes_core__DOT__w
                                         [0x12U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x15U]);
    vlSelfRef.aes_core__DOT__w[0x17U] = (vlSelfRef.aes_core__DOT__w
                                         [0x13U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x16U]);
    vlSelfRef.aes_core__DOT__w[0x19U] = (vlSelfRef.aes_core__DOT__w
                                         [0x15U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x18U]);
    vlSelfRef.aes_core__DOT__w[0x1aU] = (vlSelfRef.aes_core__DOT__w
                                         [0x16U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x19U]);
    vlSelfRef.aes_core__DOT__w[0x1bU] = (vlSelfRef.aes_core__DOT__w
                                         [0x17U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x1aU]);
    vlSelfRef.aes_core__DOT__w[0x1dU] = (vlSelfRef.aes_core__DOT__w
                                         [0x19U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x1cU]);
    vlSelfRef.aes_core__DOT__w[0x1eU] = (vlSelfRef.aes_core__DOT__w
                                         [0x1aU] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x1dU]);
    vlSelfRef.aes_core__DOT__w[0x1fU] = (vlSelfRef.aes_core__DOT__w
                                         [0x1bU] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x1eU]);
    vlSelfRef.aes_core__DOT__w[0x21U] = (vlSelfRef.aes_core__DOT__w
                                         [0x1dU] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x20U]);
    vlSelfRef.aes_core__DOT__w[0x22U] = (vlSelfRef.aes_core__DOT__w
                                         [0x1eU] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x21U]);
    vlSelfRef.aes_core__DOT__w[0x23U] = (vlSelfRef.aes_core__DOT__w
                                         [0x1fU] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x22U]);
    vlSelfRef.aes_core__DOT__w[0x25U] = (vlSelfRef.aes_core__DOT__w
                                         [0x21U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x24U]);
    vlSelfRef.aes_core__DOT__w[0x26U] = (vlSelfRef.aes_core__DOT__w
                                         [0x22U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x25U]);
    vlSelfRef.aes_core__DOT__w[0x27U] = (vlSelfRef.aes_core__DOT__w
                                         [0x23U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x26U]);
    vlSelfRef.aes_core__DOT__w[0x29U] = (vlSelfRef.aes_core__DOT__w
                                         [0x25U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x28U]);
    vlSelfRef.aes_core__DOT__w[0x2aU] = (vlSelfRef.aes_core__DOT__w
                                         [0x26U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x29U]);
    vlSelfRef.aes_core__DOT__w[0x2bU] = (vlSelfRef.aes_core__DOT__w
                                         [0x27U] ^ 
                                         vlSelfRef.aes_core__DOT__w
                                         [0x2aU]);
    vlSelfRef.aes_core__DOT__w[4U] = ((vlSelfRef.aes_core__DOT__w
                                       [0U] ^ (((vlSelfRef.aes_core__DOT__sbox
                                                 [(0xffU 
                                                   & (vlSelfRef.aes_core__DOT__w
                                                      [3U] 
                                                      >> 0x10U))] 
                                                 << 0x18U) 
                                                | (vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__w
                                                       [3U] 
                                                       >> 8U))] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & vlSelfRef.aes_core__DOT__w
                                                    [3U])] 
                                                   << 8U) 
                                                  | vlSelfRef.aes_core__DOT__sbox
                                                  [
                                                  (vlSelfRef.aes_core__DOT__w
                                                   [3U] 
                                                   >> 0x18U)]))) 
                                      ^ (vlSelfRef.aes_core__DOT__rcon
                                         [1U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[8U] = ((vlSelfRef.aes_core__DOT__w
                                       [4U] ^ (((vlSelfRef.aes_core__DOT__sbox
                                                 [(0xffU 
                                                   & (vlSelfRef.aes_core__DOT__w
                                                      [7U] 
                                                      >> 0x10U))] 
                                                 << 0x18U) 
                                                | (vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__w
                                                       [7U] 
                                                       >> 8U))] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & vlSelfRef.aes_core__DOT__w
                                                    [7U])] 
                                                   << 8U) 
                                                  | vlSelfRef.aes_core__DOT__sbox
                                                  [
                                                  (vlSelfRef.aes_core__DOT__w
                                                   [7U] 
                                                   >> 0x18U)]))) 
                                      ^ (vlSelfRef.aes_core__DOT__rcon
                                         [2U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0xcU] = ((vlSelfRef.aes_core__DOT__w
                                         [8U] ^ (((
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.aes_core__DOT__w
                                                       [0xbU] 
                                                       >> 0x10U))] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.aes_core__DOT__sbox
                                                     [
                                                     (0xffU 
                                                      & (vlSelfRef.aes_core__DOT__w
                                                         [0xbU] 
                                                         >> 8U))] 
                                                     << 0x10U)) 
                                                 | ((vlSelfRef.aes_core__DOT__sbox
                                                     [
                                                     (0xffU 
                                                      & vlSelfRef.aes_core__DOT__w
                                                      [0xbU])] 
                                                     << 8U) 
                                                    | vlSelfRef.aes_core__DOT__sbox
                                                    [
                                                    (vlSelfRef.aes_core__DOT__w
                                                     [0xbU] 
                                                     >> 0x18U)]))) 
                                        ^ (vlSelfRef.aes_core__DOT__rcon
                                           [3U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0x10U] = ((vlSelfRef.aes_core__DOT__w
                                          [0xcU] ^ 
                                          (((vlSelfRef.aes_core__DOT__sbox
                                             [(0xffU 
                                               & (vlSelfRef.aes_core__DOT__w
                                                  [0xfU] 
                                                  >> 0x10U))] 
                                             << 0x18U) 
                                            | (vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & (vlSelfRef.aes_core__DOT__w
                                                    [0xfU] 
                                                    >> 8U))] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & vlSelfRef.aes_core__DOT__w
                                                 [0xfU])] 
                                               << 8U) 
                                              | vlSelfRef.aes_core__DOT__sbox
                                              [(vlSelfRef.aes_core__DOT__w
                                                [0xfU] 
                                                >> 0x18U)]))) 
                                         ^ (vlSelfRef.aes_core__DOT__rcon
                                            [4U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0x14U] = ((vlSelfRef.aes_core__DOT__w
                                          [0x10U] ^ 
                                          (((vlSelfRef.aes_core__DOT__sbox
                                             [(0xffU 
                                               & (vlSelfRef.aes_core__DOT__w
                                                  [0x13U] 
                                                  >> 0x10U))] 
                                             << 0x18U) 
                                            | (vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & (vlSelfRef.aes_core__DOT__w
                                                    [0x13U] 
                                                    >> 8U))] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & vlSelfRef.aes_core__DOT__w
                                                 [0x13U])] 
                                               << 8U) 
                                              | vlSelfRef.aes_core__DOT__sbox
                                              [(vlSelfRef.aes_core__DOT__w
                                                [0x13U] 
                                                >> 0x18U)]))) 
                                         ^ (vlSelfRef.aes_core__DOT__rcon
                                            [5U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0x18U] = ((vlSelfRef.aes_core__DOT__w
                                          [0x14U] ^ 
                                          (((vlSelfRef.aes_core__DOT__sbox
                                             [(0xffU 
                                               & (vlSelfRef.aes_core__DOT__w
                                                  [0x17U] 
                                                  >> 0x10U))] 
                                             << 0x18U) 
                                            | (vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & (vlSelfRef.aes_core__DOT__w
                                                    [0x17U] 
                                                    >> 8U))] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & vlSelfRef.aes_core__DOT__w
                                                 [0x17U])] 
                                               << 8U) 
                                              | vlSelfRef.aes_core__DOT__sbox
                                              [(vlSelfRef.aes_core__DOT__w
                                                [0x17U] 
                                                >> 0x18U)]))) 
                                         ^ (vlSelfRef.aes_core__DOT__rcon
                                            [6U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0x1cU] = ((vlSelfRef.aes_core__DOT__w
                                          [0x18U] ^ 
                                          (((vlSelfRef.aes_core__DOT__sbox
                                             [(0xffU 
                                               & (vlSelfRef.aes_core__DOT__w
                                                  [0x1bU] 
                                                  >> 0x10U))] 
                                             << 0x18U) 
                                            | (vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & (vlSelfRef.aes_core__DOT__w
                                                    [0x1bU] 
                                                    >> 8U))] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & vlSelfRef.aes_core__DOT__w
                                                 [0x1bU])] 
                                               << 8U) 
                                              | vlSelfRef.aes_core__DOT__sbox
                                              [(vlSelfRef.aes_core__DOT__w
                                                [0x1bU] 
                                                >> 0x18U)]))) 
                                         ^ (vlSelfRef.aes_core__DOT__rcon
                                            [7U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0x20U] = ((vlSelfRef.aes_core__DOT__w
                                          [0x1cU] ^ 
                                          (((vlSelfRef.aes_core__DOT__sbox
                                             [(0xffU 
                                               & (vlSelfRef.aes_core__DOT__w
                                                  [0x1fU] 
                                                  >> 0x10U))] 
                                             << 0x18U) 
                                            | (vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & (vlSelfRef.aes_core__DOT__w
                                                    [0x1fU] 
                                                    >> 8U))] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & vlSelfRef.aes_core__DOT__w
                                                 [0x1fU])] 
                                               << 8U) 
                                              | vlSelfRef.aes_core__DOT__sbox
                                              [(vlSelfRef.aes_core__DOT__w
                                                [0x1fU] 
                                                >> 0x18U)]))) 
                                         ^ (vlSelfRef.aes_core__DOT__rcon
                                            [8U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0x24U] = ((vlSelfRef.aes_core__DOT__w
                                          [0x20U] ^ 
                                          (((vlSelfRef.aes_core__DOT__sbox
                                             [(0xffU 
                                               & (vlSelfRef.aes_core__DOT__w
                                                  [0x23U] 
                                                  >> 0x10U))] 
                                             << 0x18U) 
                                            | (vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & (vlSelfRef.aes_core__DOT__w
                                                    [0x23U] 
                                                    >> 8U))] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & vlSelfRef.aes_core__DOT__w
                                                 [0x23U])] 
                                               << 8U) 
                                              | vlSelfRef.aes_core__DOT__sbox
                                              [(vlSelfRef.aes_core__DOT__w
                                                [0x23U] 
                                                >> 0x18U)]))) 
                                         ^ (vlSelfRef.aes_core__DOT__rcon
                                            [9U] << 0x18U));
    vlSelfRef.aes_core__DOT__w[0x28U] = ((vlSelfRef.aes_core__DOT__w
                                          [0x24U] ^ 
                                          (((vlSelfRef.aes_core__DOT__sbox
                                             [(0xffU 
                                               & (vlSelfRef.aes_core__DOT__w
                                                  [0x27U] 
                                                  >> 0x10U))] 
                                             << 0x18U) 
                                            | (vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & (vlSelfRef.aes_core__DOT__w
                                                    [0x27U] 
                                                    >> 8U))] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.aes_core__DOT__sbox
                                               [(0xffU 
                                                 & vlSelfRef.aes_core__DOT__w
                                                 [0x27U])] 
                                               << 8U) 
                                              | vlSelfRef.aes_core__DOT__sbox
                                              [(vlSelfRef.aes_core__DOT__w
                                                [0x27U] 
                                                >> 0x18U)]))) 
                                         ^ (vlSelfRef.aes_core__DOT__rcon
                                            [0xaU] 
                                            << 0x18U));
    vlSelfRef.aes_core__DOT__round_keys[1U][0U] = vlSelfRef.aes_core__DOT__w
        [7U];
    vlSelfRef.aes_core__DOT__round_keys[1U][1U] = vlSelfRef.aes_core__DOT__w
        [6U];
    vlSelfRef.aes_core__DOT__round_keys[1U][2U] = vlSelfRef.aes_core__DOT__w
        [5U];
    vlSelfRef.aes_core__DOT__round_keys[1U][3U] = vlSelfRef.aes_core__DOT__w
        [4U];
    vlSelfRef.aes_core__DOT__round_keys[2U][0U] = vlSelfRef.aes_core__DOT__w
        [0xbU];
    vlSelfRef.aes_core__DOT__round_keys[2U][1U] = vlSelfRef.aes_core__DOT__w
        [0xaU];
    vlSelfRef.aes_core__DOT__round_keys[2U][2U] = vlSelfRef.aes_core__DOT__w
        [9U];
    vlSelfRef.aes_core__DOT__round_keys[2U][3U] = vlSelfRef.aes_core__DOT__w
        [8U];
    vlSelfRef.aes_core__DOT__round_keys[3U][0U] = vlSelfRef.aes_core__DOT__w
        [0xfU];
    vlSelfRef.aes_core__DOT__round_keys[3U][1U] = vlSelfRef.aes_core__DOT__w
        [0xeU];
    vlSelfRef.aes_core__DOT__round_keys[3U][2U] = vlSelfRef.aes_core__DOT__w
        [0xdU];
    vlSelfRef.aes_core__DOT__round_keys[3U][3U] = vlSelfRef.aes_core__DOT__w
        [0xcU];
    vlSelfRef.aes_core__DOT__round_keys[4U][0U] = vlSelfRef.aes_core__DOT__w
        [0x13U];
    vlSelfRef.aes_core__DOT__round_keys[4U][1U] = vlSelfRef.aes_core__DOT__w
        [0x12U];
    vlSelfRef.aes_core__DOT__round_keys[4U][2U] = vlSelfRef.aes_core__DOT__w
        [0x11U];
    vlSelfRef.aes_core__DOT__round_keys[4U][3U] = vlSelfRef.aes_core__DOT__w
        [0x10U];
    vlSelfRef.aes_core__DOT__round_keys[5U][0U] = vlSelfRef.aes_core__DOT__w
        [0x17U];
    vlSelfRef.aes_core__DOT__round_keys[5U][1U] = vlSelfRef.aes_core__DOT__w
        [0x16U];
    vlSelfRef.aes_core__DOT__round_keys[5U][2U] = vlSelfRef.aes_core__DOT__w
        [0x15U];
    vlSelfRef.aes_core__DOT__round_keys[5U][3U] = vlSelfRef.aes_core__DOT__w
        [0x14U];
    vlSelfRef.aes_core__DOT__round_keys[6U][0U] = vlSelfRef.aes_core__DOT__w
        [0x1bU];
    vlSelfRef.aes_core__DOT__round_keys[6U][1U] = vlSelfRef.aes_core__DOT__w
        [0x1aU];
    vlSelfRef.aes_core__DOT__round_keys[6U][2U] = vlSelfRef.aes_core__DOT__w
        [0x19U];
    vlSelfRef.aes_core__DOT__round_keys[6U][3U] = vlSelfRef.aes_core__DOT__w
        [0x18U];
    vlSelfRef.aes_core__DOT__round_keys[7U][0U] = vlSelfRef.aes_core__DOT__w
        [0x1fU];
    vlSelfRef.aes_core__DOT__round_keys[7U][1U] = vlSelfRef.aes_core__DOT__w
        [0x1eU];
    vlSelfRef.aes_core__DOT__round_keys[7U][2U] = vlSelfRef.aes_core__DOT__w
        [0x1dU];
    vlSelfRef.aes_core__DOT__round_keys[7U][3U] = vlSelfRef.aes_core__DOT__w
        [0x1cU];
    vlSelfRef.aes_core__DOT__round_keys[8U][0U] = vlSelfRef.aes_core__DOT__w
        [0x23U];
    vlSelfRef.aes_core__DOT__round_keys[8U][1U] = vlSelfRef.aes_core__DOT__w
        [0x22U];
    vlSelfRef.aes_core__DOT__round_keys[8U][2U] = vlSelfRef.aes_core__DOT__w
        [0x21U];
    vlSelfRef.aes_core__DOT__round_keys[8U][3U] = vlSelfRef.aes_core__DOT__w
        [0x20U];
    vlSelfRef.aes_core__DOT__round_keys[9U][0U] = vlSelfRef.aes_core__DOT__w
        [0x27U];
    vlSelfRef.aes_core__DOT__round_keys[9U][1U] = vlSelfRef.aes_core__DOT__w
        [0x26U];
    vlSelfRef.aes_core__DOT__round_keys[9U][2U] = vlSelfRef.aes_core__DOT__w
        [0x25U];
    vlSelfRef.aes_core__DOT__round_keys[9U][3U] = vlSelfRef.aes_core__DOT__w
        [0x24U];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][0U] = 
        vlSelfRef.aes_core__DOT__w[0x2bU];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][1U] = 
        vlSelfRef.aes_core__DOT__w[0x2aU];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][2U] = 
        vlSelfRef.aes_core__DOT__w[0x29U];
    vlSelfRef.aes_core__DOT__round_keys[0xaU][3U] = 
        vlSelfRef.aes_core__DOT__w[0x28U];
}

void Vaes_core___024root___nba_sequent__TOP__0(Vaes_core___024root* vlSelf);

void Vaes_core___024root___eval_nba(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_nba\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vaes_core___024root___nba_sequent__TOP__0(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___nba_sequent__TOP__0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__0__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__0__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__0__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__0__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__0__round_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__0__round_key);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__1__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__1__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__2__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__2__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__3__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__3__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__3__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__3__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__3__round_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__3__round_key);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__6__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__6__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__6__round_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__6__round_key);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__mix_columns__7__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__mix_columns__7__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__shift_rows__8__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__shift_rows__8__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__sub_bytes__9__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__sub_bytes__9__state_in);
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__10__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__10__x;
    __Vfunc_aes_core__DOT__gf_mult2__10__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__11__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__11__x;
    __Vfunc_aes_core__DOT__gf_mult3__11__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__12__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__12__x;
    __Vfunc_aes_core__DOT__gf_mult2__12__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__13__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__13__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__13__x;
    __Vfunc_aes_core__DOT__gf_mult2__13__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__14__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__14__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__14__x;
    __Vfunc_aes_core__DOT__gf_mult3__14__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__15__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__15__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__15__x;
    __Vfunc_aes_core__DOT__gf_mult2__15__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__16__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__16__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__16__x;
    __Vfunc_aes_core__DOT__gf_mult2__16__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__17__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__17__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__17__x;
    __Vfunc_aes_core__DOT__gf_mult3__17__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__18__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__18__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__18__x;
    __Vfunc_aes_core__DOT__gf_mult2__18__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__19__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__19__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__19__x;
    __Vfunc_aes_core__DOT__gf_mult3__19__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__20__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__20__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__20__x;
    __Vfunc_aes_core__DOT__gf_mult2__20__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__21__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__21__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__21__x;
    __Vfunc_aes_core__DOT__gf_mult2__21__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__22__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__22__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__22__x;
    __Vfunc_aes_core__DOT__gf_mult2__22__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__23__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__23__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__23__x;
    __Vfunc_aes_core__DOT__gf_mult3__23__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__24__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__24__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__24__x;
    __Vfunc_aes_core__DOT__gf_mult2__24__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__25__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__25__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__25__x;
    __Vfunc_aes_core__DOT__gf_mult2__25__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__26__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__26__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__26__x;
    __Vfunc_aes_core__DOT__gf_mult3__26__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__27__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__27__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__27__x;
    __Vfunc_aes_core__DOT__gf_mult2__27__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__28__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__28__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__28__x;
    __Vfunc_aes_core__DOT__gf_mult2__28__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__29__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__29__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__29__x;
    __Vfunc_aes_core__DOT__gf_mult3__29__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__30__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__30__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__30__x;
    __Vfunc_aes_core__DOT__gf_mult2__30__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__31__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__31__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__31__x;
    __Vfunc_aes_core__DOT__gf_mult3__31__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__32__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__32__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__32__x;
    __Vfunc_aes_core__DOT__gf_mult2__32__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__33__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__33__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__33__x;
    __Vfunc_aes_core__DOT__gf_mult2__33__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__34__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__34__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__34__x;
    __Vfunc_aes_core__DOT__gf_mult2__34__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__35__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__35__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__35__x;
    __Vfunc_aes_core__DOT__gf_mult3__35__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__36__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__36__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__36__x;
    __Vfunc_aes_core__DOT__gf_mult2__36__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__37__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__37__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__37__x;
    __Vfunc_aes_core__DOT__gf_mult2__37__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__38__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__38__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__38__x;
    __Vfunc_aes_core__DOT__gf_mult3__38__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__39__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__39__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__39__x;
    __Vfunc_aes_core__DOT__gf_mult2__39__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__40__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__40__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__40__x;
    __Vfunc_aes_core__DOT__gf_mult2__40__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__41__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__41__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__41__x;
    __Vfunc_aes_core__DOT__gf_mult3__41__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__42__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__42__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__42__x;
    __Vfunc_aes_core__DOT__gf_mult2__42__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__43__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__43__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__43__x;
    __Vfunc_aes_core__DOT__gf_mult3__43__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__44__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__44__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__44__x;
    __Vfunc_aes_core__DOT__gf_mult2__44__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__45__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__45__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__45__x;
    __Vfunc_aes_core__DOT__gf_mult2__45__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__46__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__46__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__46__x;
    __Vfunc_aes_core__DOT__gf_mult2__46__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__47__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__47__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__47__x;
    __Vfunc_aes_core__DOT__gf_mult3__47__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__48__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__48__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__48__x;
    __Vfunc_aes_core__DOT__gf_mult2__48__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__49__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__49__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__49__x;
    __Vfunc_aes_core__DOT__gf_mult2__49__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__50__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__50__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__50__x;
    __Vfunc_aes_core__DOT__gf_mult3__50__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__51__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__51__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__51__x;
    __Vfunc_aes_core__DOT__gf_mult2__51__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__52__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__52__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__52__x;
    __Vfunc_aes_core__DOT__gf_mult2__52__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__53__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__53__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__53__x;
    __Vfunc_aes_core__DOT__gf_mult3__53__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__54__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__54__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__54__x;
    __Vfunc_aes_core__DOT__gf_mult2__54__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__55__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult3__55__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult3__55__x;
    __Vfunc_aes_core__DOT__gf_mult3__55__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__56__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__56__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__56__x;
    __Vfunc_aes_core__DOT__gf_mult2__56__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__57__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__57__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__57__x;
    __Vfunc_aes_core__DOT__gf_mult2__57__x = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__61__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__61__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__61__round_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__61__round_key);
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__62__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__62__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__62__x;
    __Vfunc_aes_core__DOT__gf_mult14__62__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__63__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__63__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__63__x;
    __Vfunc_aes_core__DOT__gf_mult2__63__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__64__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__64__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__64__x;
    __Vfunc_aes_core__DOT__gf_mult2__64__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__65__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__65__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__65__x;
    __Vfunc_aes_core__DOT__gf_mult2__65__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__66__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__66__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__66__x;
    __Vfunc_aes_core__DOT__gf_mult11__66__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__67__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__67__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__67__x;
    __Vfunc_aes_core__DOT__gf_mult2__67__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__68__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__68__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__68__x;
    __Vfunc_aes_core__DOT__gf_mult2__68__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__69__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__69__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__69__x;
    __Vfunc_aes_core__DOT__gf_mult13__69__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__70__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__70__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__70__x;
    __Vfunc_aes_core__DOT__gf_mult2__70__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__71__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__71__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__71__x;
    __Vfunc_aes_core__DOT__gf_mult2__71__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__72__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__72__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__72__x;
    __Vfunc_aes_core__DOT__gf_mult2__72__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__73__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__73__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__73__x;
    __Vfunc_aes_core__DOT__gf_mult9__73__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__74__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__74__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__74__x;
    __Vfunc_aes_core__DOT__gf_mult2__74__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__75__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__75__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__75__x;
    __Vfunc_aes_core__DOT__gf_mult2__75__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__76__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__76__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__76__x;
    __Vfunc_aes_core__DOT__gf_mult2__76__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__77__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__77__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__77__x;
    __Vfunc_aes_core__DOT__gf_mult9__77__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__78__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__78__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__78__x;
    __Vfunc_aes_core__DOT__gf_mult2__78__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__79__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__79__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__79__x;
    __Vfunc_aes_core__DOT__gf_mult2__79__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__80__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__80__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__80__x;
    __Vfunc_aes_core__DOT__gf_mult2__80__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__81__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__81__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__81__x;
    __Vfunc_aes_core__DOT__gf_mult14__81__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__82__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__82__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__82__x;
    __Vfunc_aes_core__DOT__gf_mult2__82__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__83__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__83__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__83__x;
    __Vfunc_aes_core__DOT__gf_mult2__83__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__84__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__84__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__84__x;
    __Vfunc_aes_core__DOT__gf_mult2__84__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__85__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__85__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__85__x;
    __Vfunc_aes_core__DOT__gf_mult11__85__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__86__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__86__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__86__x;
    __Vfunc_aes_core__DOT__gf_mult2__86__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__87__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__87__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__87__x;
    __Vfunc_aes_core__DOT__gf_mult2__87__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__88__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__88__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__88__x;
    __Vfunc_aes_core__DOT__gf_mult13__88__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__89__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__89__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__89__x;
    __Vfunc_aes_core__DOT__gf_mult2__89__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__90__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__90__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__90__x;
    __Vfunc_aes_core__DOT__gf_mult2__90__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__91__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__91__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__91__x;
    __Vfunc_aes_core__DOT__gf_mult2__91__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__92__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__92__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__92__x;
    __Vfunc_aes_core__DOT__gf_mult13__92__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__93__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__93__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__93__x;
    __Vfunc_aes_core__DOT__gf_mult2__93__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__94__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__94__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__94__x;
    __Vfunc_aes_core__DOT__gf_mult2__94__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__95__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__95__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__95__x;
    __Vfunc_aes_core__DOT__gf_mult2__95__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__96__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__96__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__96__x;
    __Vfunc_aes_core__DOT__gf_mult9__96__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__97__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__97__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__97__x;
    __Vfunc_aes_core__DOT__gf_mult2__97__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__98__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__98__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__98__x;
    __Vfunc_aes_core__DOT__gf_mult2__98__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__99__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__99__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__99__x;
    __Vfunc_aes_core__DOT__gf_mult2__99__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__100__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__100__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__100__x;
    __Vfunc_aes_core__DOT__gf_mult14__100__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__101__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__101__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__101__x;
    __Vfunc_aes_core__DOT__gf_mult2__101__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__102__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__102__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__102__x;
    __Vfunc_aes_core__DOT__gf_mult2__102__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__103__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__103__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__103__x;
    __Vfunc_aes_core__DOT__gf_mult2__103__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__104__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__104__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__104__x;
    __Vfunc_aes_core__DOT__gf_mult11__104__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__105__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__105__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__105__x;
    __Vfunc_aes_core__DOT__gf_mult2__105__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__106__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__106__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__106__x;
    __Vfunc_aes_core__DOT__gf_mult2__106__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__107__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__107__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__107__x;
    __Vfunc_aes_core__DOT__gf_mult11__107__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__108__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__108__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__108__x;
    __Vfunc_aes_core__DOT__gf_mult2__108__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__109__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__109__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__109__x;
    __Vfunc_aes_core__DOT__gf_mult2__109__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__110__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__110__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__110__x;
    __Vfunc_aes_core__DOT__gf_mult13__110__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__111__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__111__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__111__x;
    __Vfunc_aes_core__DOT__gf_mult2__111__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__112__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__112__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__112__x;
    __Vfunc_aes_core__DOT__gf_mult2__112__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__113__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__113__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__113__x;
    __Vfunc_aes_core__DOT__gf_mult2__113__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__114__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__114__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__114__x;
    __Vfunc_aes_core__DOT__gf_mult9__114__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__115__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__115__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__115__x;
    __Vfunc_aes_core__DOT__gf_mult2__115__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__116__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__116__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__116__x;
    __Vfunc_aes_core__DOT__gf_mult2__116__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__117__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__117__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__117__x;
    __Vfunc_aes_core__DOT__gf_mult2__117__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__118__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__118__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__118__x;
    __Vfunc_aes_core__DOT__gf_mult14__118__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__119__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__119__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__119__x;
    __Vfunc_aes_core__DOT__gf_mult2__119__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__120__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__120__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__120__x;
    __Vfunc_aes_core__DOT__gf_mult2__120__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__121__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__121__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__121__x;
    __Vfunc_aes_core__DOT__gf_mult2__121__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__122__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__122__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__122__x;
    __Vfunc_aes_core__DOT__gf_mult14__122__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__123__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__123__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__123__x;
    __Vfunc_aes_core__DOT__gf_mult2__123__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__124__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__124__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__124__x;
    __Vfunc_aes_core__DOT__gf_mult2__124__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__125__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__125__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__125__x;
    __Vfunc_aes_core__DOT__gf_mult2__125__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__126__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__126__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__126__x;
    __Vfunc_aes_core__DOT__gf_mult11__126__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__127__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__127__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__127__x;
    __Vfunc_aes_core__DOT__gf_mult2__127__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__128__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__128__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__128__x;
    __Vfunc_aes_core__DOT__gf_mult2__128__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__129__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__129__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__129__x;
    __Vfunc_aes_core__DOT__gf_mult13__129__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__130__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__130__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__130__x;
    __Vfunc_aes_core__DOT__gf_mult2__130__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__131__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__131__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__131__x;
    __Vfunc_aes_core__DOT__gf_mult2__131__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__132__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__132__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__132__x;
    __Vfunc_aes_core__DOT__gf_mult2__132__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__133__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__133__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__133__x;
    __Vfunc_aes_core__DOT__gf_mult9__133__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__134__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__134__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__134__x;
    __Vfunc_aes_core__DOT__gf_mult2__134__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__135__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__135__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__135__x;
    __Vfunc_aes_core__DOT__gf_mult2__135__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__136__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__136__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__136__x;
    __Vfunc_aes_core__DOT__gf_mult2__136__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__137__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__137__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__137__x;
    __Vfunc_aes_core__DOT__gf_mult9__137__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__138__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__138__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__138__x;
    __Vfunc_aes_core__DOT__gf_mult2__138__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__139__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__139__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__139__x;
    __Vfunc_aes_core__DOT__gf_mult2__139__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__140__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__140__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__140__x;
    __Vfunc_aes_core__DOT__gf_mult2__140__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__141__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__141__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__141__x;
    __Vfunc_aes_core__DOT__gf_mult14__141__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__142__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__142__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__142__x;
    __Vfunc_aes_core__DOT__gf_mult2__142__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__143__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__143__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__143__x;
    __Vfunc_aes_core__DOT__gf_mult2__143__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__144__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__144__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__144__x;
    __Vfunc_aes_core__DOT__gf_mult2__144__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__145__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__145__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__145__x;
    __Vfunc_aes_core__DOT__gf_mult11__145__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__146__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__146__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__146__x;
    __Vfunc_aes_core__DOT__gf_mult2__146__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__147__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__147__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__147__x;
    __Vfunc_aes_core__DOT__gf_mult2__147__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__148__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__148__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__148__x;
    __Vfunc_aes_core__DOT__gf_mult13__148__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__149__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__149__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__149__x;
    __Vfunc_aes_core__DOT__gf_mult2__149__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__150__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__150__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__150__x;
    __Vfunc_aes_core__DOT__gf_mult2__150__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__151__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__151__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__151__x;
    __Vfunc_aes_core__DOT__gf_mult2__151__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__152__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__152__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__152__x;
    __Vfunc_aes_core__DOT__gf_mult13__152__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__153__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__153__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__153__x;
    __Vfunc_aes_core__DOT__gf_mult2__153__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__154__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__154__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__154__x;
    __Vfunc_aes_core__DOT__gf_mult2__154__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__155__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__155__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__155__x;
    __Vfunc_aes_core__DOT__gf_mult2__155__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__156__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__156__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__156__x;
    __Vfunc_aes_core__DOT__gf_mult9__156__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__157__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__157__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__157__x;
    __Vfunc_aes_core__DOT__gf_mult2__157__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__158__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__158__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__158__x;
    __Vfunc_aes_core__DOT__gf_mult2__158__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__159__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__159__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__159__x;
    __Vfunc_aes_core__DOT__gf_mult2__159__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__160__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__160__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__160__x;
    __Vfunc_aes_core__DOT__gf_mult14__160__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__161__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__161__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__161__x;
    __Vfunc_aes_core__DOT__gf_mult2__161__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__162__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__162__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__162__x;
    __Vfunc_aes_core__DOT__gf_mult2__162__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__163__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__163__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__163__x;
    __Vfunc_aes_core__DOT__gf_mult2__163__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__164__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__164__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__164__x;
    __Vfunc_aes_core__DOT__gf_mult11__164__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__165__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__165__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__165__x;
    __Vfunc_aes_core__DOT__gf_mult2__165__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__166__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__166__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__166__x;
    __Vfunc_aes_core__DOT__gf_mult2__166__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__167__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__167__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__167__x;
    __Vfunc_aes_core__DOT__gf_mult11__167__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__168__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__168__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__168__x;
    __Vfunc_aes_core__DOT__gf_mult2__168__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__169__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__169__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__169__x;
    __Vfunc_aes_core__DOT__gf_mult2__169__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__170__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__170__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__170__x;
    __Vfunc_aes_core__DOT__gf_mult13__170__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__171__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__171__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__171__x;
    __Vfunc_aes_core__DOT__gf_mult2__171__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__172__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__172__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__172__x;
    __Vfunc_aes_core__DOT__gf_mult2__172__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__173__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__173__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__173__x;
    __Vfunc_aes_core__DOT__gf_mult2__173__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__174__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__174__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__174__x;
    __Vfunc_aes_core__DOT__gf_mult9__174__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__175__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__175__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__175__x;
    __Vfunc_aes_core__DOT__gf_mult2__175__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__176__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__176__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__176__x;
    __Vfunc_aes_core__DOT__gf_mult2__176__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__177__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__177__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__177__x;
    __Vfunc_aes_core__DOT__gf_mult2__177__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__178__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__178__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__178__x;
    __Vfunc_aes_core__DOT__gf_mult14__178__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__179__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__179__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__179__x;
    __Vfunc_aes_core__DOT__gf_mult2__179__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__180__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__180__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__180__x;
    __Vfunc_aes_core__DOT__gf_mult2__180__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__181__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__181__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__181__x;
    __Vfunc_aes_core__DOT__gf_mult2__181__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__182__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__182__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__182__x;
    __Vfunc_aes_core__DOT__gf_mult14__182__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__183__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__183__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__183__x;
    __Vfunc_aes_core__DOT__gf_mult2__183__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__184__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__184__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__184__x;
    __Vfunc_aes_core__DOT__gf_mult2__184__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__185__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__185__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__185__x;
    __Vfunc_aes_core__DOT__gf_mult2__185__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__186__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__186__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__186__x;
    __Vfunc_aes_core__DOT__gf_mult11__186__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__187__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__187__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__187__x;
    __Vfunc_aes_core__DOT__gf_mult2__187__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__188__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__188__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__188__x;
    __Vfunc_aes_core__DOT__gf_mult2__188__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__189__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__189__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__189__x;
    __Vfunc_aes_core__DOT__gf_mult13__189__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__190__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__190__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__190__x;
    __Vfunc_aes_core__DOT__gf_mult2__190__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__191__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__191__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__191__x;
    __Vfunc_aes_core__DOT__gf_mult2__191__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__192__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__192__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__192__x;
    __Vfunc_aes_core__DOT__gf_mult2__192__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__193__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__193__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__193__x;
    __Vfunc_aes_core__DOT__gf_mult9__193__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__194__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__194__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__194__x;
    __Vfunc_aes_core__DOT__gf_mult2__194__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__195__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__195__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__195__x;
    __Vfunc_aes_core__DOT__gf_mult2__195__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__196__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__196__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__196__x;
    __Vfunc_aes_core__DOT__gf_mult2__196__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__197__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__197__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__197__x;
    __Vfunc_aes_core__DOT__gf_mult9__197__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__198__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__198__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__198__x;
    __Vfunc_aes_core__DOT__gf_mult2__198__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__199__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__199__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__199__x;
    __Vfunc_aes_core__DOT__gf_mult2__199__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__200__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__200__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__200__x;
    __Vfunc_aes_core__DOT__gf_mult2__200__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__201__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__201__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__201__x;
    __Vfunc_aes_core__DOT__gf_mult14__201__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__202__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__202__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__202__x;
    __Vfunc_aes_core__DOT__gf_mult2__202__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__203__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__203__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__203__x;
    __Vfunc_aes_core__DOT__gf_mult2__203__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__204__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__204__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__204__x;
    __Vfunc_aes_core__DOT__gf_mult2__204__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__205__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__205__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__205__x;
    __Vfunc_aes_core__DOT__gf_mult11__205__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__206__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__206__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__206__x;
    __Vfunc_aes_core__DOT__gf_mult2__206__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__207__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__207__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__207__x;
    __Vfunc_aes_core__DOT__gf_mult2__207__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__208__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__208__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__208__x;
    __Vfunc_aes_core__DOT__gf_mult13__208__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__209__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__209__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__209__x;
    __Vfunc_aes_core__DOT__gf_mult2__209__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__210__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__210__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__210__x;
    __Vfunc_aes_core__DOT__gf_mult2__210__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__211__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__211__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__211__x;
    __Vfunc_aes_core__DOT__gf_mult2__211__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__212__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__212__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__212__x;
    __Vfunc_aes_core__DOT__gf_mult13__212__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__213__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__213__x;
    __Vfunc_aes_core__DOT__gf_mult2__213__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__214__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__214__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__214__x;
    __Vfunc_aes_core__DOT__gf_mult2__214__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__215__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__215__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__215__x;
    __Vfunc_aes_core__DOT__gf_mult2__215__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__216__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__216__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__216__x;
    __Vfunc_aes_core__DOT__gf_mult9__216__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__217__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__217__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__217__x;
    __Vfunc_aes_core__DOT__gf_mult2__217__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__218__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__218__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__218__x;
    __Vfunc_aes_core__DOT__gf_mult2__218__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__219__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__219__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__219__x;
    __Vfunc_aes_core__DOT__gf_mult2__219__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__220__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__220__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__220__x;
    __Vfunc_aes_core__DOT__gf_mult14__220__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__221__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__221__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__221__x;
    __Vfunc_aes_core__DOT__gf_mult2__221__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__222__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__222__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__222__x;
    __Vfunc_aes_core__DOT__gf_mult2__222__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__223__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__223__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__223__x;
    __Vfunc_aes_core__DOT__gf_mult2__223__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__224__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__224__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__224__x;
    __Vfunc_aes_core__DOT__gf_mult11__224__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__225__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__225__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__225__x;
    __Vfunc_aes_core__DOT__gf_mult2__225__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__226__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__226__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__226__x;
    __Vfunc_aes_core__DOT__gf_mult2__226__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__227__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__227__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__227__x;
    __Vfunc_aes_core__DOT__gf_mult11__227__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__228__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__228__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__228__x;
    __Vfunc_aes_core__DOT__gf_mult2__228__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__229__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__229__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__229__x;
    __Vfunc_aes_core__DOT__gf_mult2__229__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__230__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__230__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__230__x;
    __Vfunc_aes_core__DOT__gf_mult13__230__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__231__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__231__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__231__x;
    __Vfunc_aes_core__DOT__gf_mult2__231__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__232__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__232__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__232__x;
    __Vfunc_aes_core__DOT__gf_mult2__232__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__233__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__233__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__233__x;
    __Vfunc_aes_core__DOT__gf_mult2__233__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__234__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__234__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__234__x;
    __Vfunc_aes_core__DOT__gf_mult9__234__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__235__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__235__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__235__x;
    __Vfunc_aes_core__DOT__gf_mult2__235__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__236__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__236__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__236__x;
    __Vfunc_aes_core__DOT__gf_mult2__236__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__237__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__237__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__237__x;
    __Vfunc_aes_core__DOT__gf_mult2__237__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__238__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__238__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__238__x;
    __Vfunc_aes_core__DOT__gf_mult14__238__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__239__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__239__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__239__x;
    __Vfunc_aes_core__DOT__gf_mult2__239__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__240__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__240__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__240__x;
    __Vfunc_aes_core__DOT__gf_mult2__240__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__241__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__241__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__241__x;
    __Vfunc_aes_core__DOT__gf_mult2__241__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__242__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__242__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__242__x;
    __Vfunc_aes_core__DOT__gf_mult14__242__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__243__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__243__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__243__x;
    __Vfunc_aes_core__DOT__gf_mult2__243__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__244__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__244__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__244__x;
    __Vfunc_aes_core__DOT__gf_mult2__244__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__245__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__245__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__245__x;
    __Vfunc_aes_core__DOT__gf_mult2__245__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__246__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__246__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__246__x;
    __Vfunc_aes_core__DOT__gf_mult11__246__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__247__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__247__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__247__x;
    __Vfunc_aes_core__DOT__gf_mult2__247__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__248__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__248__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__248__x;
    __Vfunc_aes_core__DOT__gf_mult2__248__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__249__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__249__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__249__x;
    __Vfunc_aes_core__DOT__gf_mult13__249__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__250__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__250__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__250__x;
    __Vfunc_aes_core__DOT__gf_mult2__250__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__251__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__251__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__251__x;
    __Vfunc_aes_core__DOT__gf_mult2__251__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__252__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__252__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__252__x;
    __Vfunc_aes_core__DOT__gf_mult2__252__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__253__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__253__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__253__x;
    __Vfunc_aes_core__DOT__gf_mult9__253__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__254__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__254__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__254__x;
    __Vfunc_aes_core__DOT__gf_mult2__254__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__255__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__255__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__255__x;
    __Vfunc_aes_core__DOT__gf_mult2__255__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__256__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__256__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__256__x;
    __Vfunc_aes_core__DOT__gf_mult2__256__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__257__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__257__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__257__x;
    __Vfunc_aes_core__DOT__gf_mult9__257__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__258__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__258__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__258__x;
    __Vfunc_aes_core__DOT__gf_mult2__258__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__259__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__259__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__259__x;
    __Vfunc_aes_core__DOT__gf_mult2__259__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__260__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__260__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__260__x;
    __Vfunc_aes_core__DOT__gf_mult2__260__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__261__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__261__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__261__x;
    __Vfunc_aes_core__DOT__gf_mult14__261__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__262__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__262__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__262__x;
    __Vfunc_aes_core__DOT__gf_mult2__262__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__263__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__263__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__263__x;
    __Vfunc_aes_core__DOT__gf_mult2__263__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__264__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__264__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__264__x;
    __Vfunc_aes_core__DOT__gf_mult2__264__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__265__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__265__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__265__x;
    __Vfunc_aes_core__DOT__gf_mult11__265__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__266__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__266__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__266__x;
    __Vfunc_aes_core__DOT__gf_mult2__266__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__267__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__267__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__267__x;
    __Vfunc_aes_core__DOT__gf_mult2__267__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__268__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__268__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__268__x;
    __Vfunc_aes_core__DOT__gf_mult13__268__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__269__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__269__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__269__x;
    __Vfunc_aes_core__DOT__gf_mult2__269__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__270__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__270__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__270__x;
    __Vfunc_aes_core__DOT__gf_mult2__270__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__271__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__271__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__271__x;
    __Vfunc_aes_core__DOT__gf_mult2__271__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__272__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__272__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__272__x;
    __Vfunc_aes_core__DOT__gf_mult13__272__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__273__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__273__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__273__x;
    __Vfunc_aes_core__DOT__gf_mult2__273__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__274__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__274__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__274__x;
    __Vfunc_aes_core__DOT__gf_mult2__274__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__275__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__275__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__275__x;
    __Vfunc_aes_core__DOT__gf_mult2__275__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__276__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__276__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__276__x;
    __Vfunc_aes_core__DOT__gf_mult9__276__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__277__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__277__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__277__x;
    __Vfunc_aes_core__DOT__gf_mult2__277__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__278__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__278__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__278__x;
    __Vfunc_aes_core__DOT__gf_mult2__278__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__279__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__279__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__279__x;
    __Vfunc_aes_core__DOT__gf_mult2__279__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__280__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__280__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__280__x;
    __Vfunc_aes_core__DOT__gf_mult14__280__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__281__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__281__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__281__x;
    __Vfunc_aes_core__DOT__gf_mult2__281__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__282__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__282__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__282__x;
    __Vfunc_aes_core__DOT__gf_mult2__282__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__283__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__283__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__283__x;
    __Vfunc_aes_core__DOT__gf_mult2__283__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__284__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__284__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__284__x;
    __Vfunc_aes_core__DOT__gf_mult11__284__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__285__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__285__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__285__x;
    __Vfunc_aes_core__DOT__gf_mult2__285__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__286__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__286__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__286__x;
    __Vfunc_aes_core__DOT__gf_mult2__286__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__287__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult11__287__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult11__287__x;
    __Vfunc_aes_core__DOT__gf_mult11__287__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__288__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__288__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__288__x;
    __Vfunc_aes_core__DOT__gf_mult2__288__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__289__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__289__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__289__x;
    __Vfunc_aes_core__DOT__gf_mult2__289__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__290__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult13__290__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult13__290__x;
    __Vfunc_aes_core__DOT__gf_mult13__290__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__291__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__291__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__291__x;
    __Vfunc_aes_core__DOT__gf_mult2__291__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__292__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__292__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__292__x;
    __Vfunc_aes_core__DOT__gf_mult2__292__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__293__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__293__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__293__x;
    __Vfunc_aes_core__DOT__gf_mult2__293__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__294__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult9__294__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult9__294__x;
    __Vfunc_aes_core__DOT__gf_mult9__294__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__295__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__295__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__295__x;
    __Vfunc_aes_core__DOT__gf_mult2__295__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__296__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__296__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__296__x;
    __Vfunc_aes_core__DOT__gf_mult2__296__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__297__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__297__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__297__x;
    __Vfunc_aes_core__DOT__gf_mult2__297__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__298__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult14__298__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult14__298__x;
    __Vfunc_aes_core__DOT__gf_mult14__298__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__299__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__299__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__299__x;
    __Vfunc_aes_core__DOT__gf_mult2__299__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__300__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__300__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__300__x;
    __Vfunc_aes_core__DOT__gf_mult2__300__x = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__301__Vfuncout;
    __Vfunc_aes_core__DOT__gf_mult2__301__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_aes_core__DOT__gf_mult2__301__x;
    __Vfunc_aes_core__DOT__gf_mult2__301__x = 0;
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__302__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__302__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__302__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__302__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__302__round_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__302__round_key);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__303__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__303__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__303__state_in;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__303__state_in);
    VlWide<4>/*127:0*/ __Vfunc_aes_core__DOT__add_round_key__303__round_key;
    VL_ZERO_W(128, __Vfunc_aes_core__DOT__add_round_key__303__round_key);
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<4>/*127:0*/ __Vdly__aes_core__DOT__state_reg;
    VL_ZERO_W(128, __Vdly__aes_core__DOT__state_reg);
    CData/*3:0*/ __Vdly__aes_core__DOT__round_cnt;
    __Vdly__aes_core__DOT__round_cnt = 0;
    // Body
    __Vdly__aes_core__DOT__state_reg[0U] = vlSelfRef.aes_core__DOT__state_reg[0U];
    __Vdly__aes_core__DOT__state_reg[1U] = vlSelfRef.aes_core__DOT__state_reg[1U];
    __Vdly__aes_core__DOT__state_reg[2U] = vlSelfRef.aes_core__DOT__state_reg[2U];
    __Vdly__aes_core__DOT__state_reg[3U] = vlSelfRef.aes_core__DOT__state_reg[3U];
    __Vdly__aes_core__DOT__round_cnt = vlSelfRef.aes_core__DOT__round_cnt;
    if (vlSelfRef.rst_n) {
        if ((4U & (IData)(vlSelfRef.aes_core__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.aes_core__DOT__state))) {
                __Vdly__aes_core__DOT__state_reg[0U] 
                    = vlSelfRef.aes_core__DOT__state_reg[0U];
                __Vdly__aes_core__DOT__state_reg[1U] 
                    = vlSelfRef.aes_core__DOT__state_reg[1U];
                __Vdly__aes_core__DOT__state_reg[2U] 
                    = vlSelfRef.aes_core__DOT__state_reg[2U];
                __Vdly__aes_core__DOT__state_reg[3U] 
                    = vlSelfRef.aes_core__DOT__state_reg[3U];
            } else if ((1U & (IData)(vlSelfRef.aes_core__DOT__state))) {
                __Vdly__aes_core__DOT__state_reg[0U] 
                    = vlSelfRef.aes_core__DOT__state_reg[0U];
                __Vdly__aes_core__DOT__state_reg[1U] 
                    = vlSelfRef.aes_core__DOT__state_reg[1U];
                __Vdly__aes_core__DOT__state_reg[2U] 
                    = vlSelfRef.aes_core__DOT__state_reg[2U];
                __Vdly__aes_core__DOT__state_reg[3U] 
                    = vlSelfRef.aes_core__DOT__state_reg[3U];
            } else {
                vlSelfRef.data_out[0U] = vlSelfRef.aes_core__DOT__state_reg[0U];
                vlSelfRef.data_out[1U] = vlSelfRef.aes_core__DOT__state_reg[1U];
                vlSelfRef.data_out[2U] = vlSelfRef.aes_core__DOT__state_reg[2U];
                vlSelfRef.data_out[3U] = vlSelfRef.aes_core__DOT__state_reg[3U];
                vlSelfRef.done = 1U;
                vlSelfRef.busy = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.aes_core__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.aes_core__DOT__state))) {
                VL_COND_WIWW(128, __Vdly__aes_core__DOT__state_reg, (IData)(vlSelfRef.encrypt), 
                             ([&]() {
                            __Vfunc_aes_core__DOT__add_round_key__0__round_key[0U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0xaU][0U];
                            __Vfunc_aes_core__DOT__add_round_key__0__round_key[1U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0xaU][1U];
                            __Vfunc_aes_core__DOT__add_round_key__0__round_key[2U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0xaU][2U];
                            __Vfunc_aes_core__DOT__add_round_key__0__round_key[3U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0xaU][3U];
                            __Vfunc_aes_core__DOT__sub_bytes__2__state_in[0U] 
                                = vlSelfRef.aes_core__DOT__state_reg[0U];
                            __Vfunc_aes_core__DOT__sub_bytes__2__state_in[1U] 
                                = vlSelfRef.aes_core__DOT__state_reg[1U];
                            __Vfunc_aes_core__DOT__sub_bytes__2__state_in[2U] 
                                = vlSelfRef.aes_core__DOT__state_reg[2U];
                            __Vfunc_aes_core__DOT__sub_bytes__2__state_in[3U] 
                                = vlSelfRef.aes_core__DOT__state_reg[3U];
                            __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[0U] 
                                = (((vlSelfRef.aes_core__DOT__sbox
                                     [(__Vfunc_aes_core__DOT__sub_bytes__2__state_in[0U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[0U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[0U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__2__state_in[0U])]));
                            __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[1U] 
                                = (((vlSelfRef.aes_core__DOT__sbox
                                     [(__Vfunc_aes_core__DOT__sub_bytes__2__state_in[1U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[1U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[1U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__2__state_in[1U])]));
                            __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[2U] 
                                = (((vlSelfRef.aes_core__DOT__sbox
                                     [(__Vfunc_aes_core__DOT__sub_bytes__2__state_in[2U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[2U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[2U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__2__state_in[2U])]));
                            __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[3U] 
                                = (((vlSelfRef.aes_core__DOT__sbox
                                     [(__Vfunc_aes_core__DOT__sub_bytes__2__state_in[3U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[3U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__2__state_in[3U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__2__state_in[3U])]));
                            __Vfunc_aes_core__DOT__shift_rows__1__state_in[0U] 
                                = __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[0U];
                            __Vfunc_aes_core__DOT__shift_rows__1__state_in[1U] 
                                = __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[1U];
                            __Vfunc_aes_core__DOT__shift_rows__1__state_in[2U] 
                                = __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[2U];
                            __Vfunc_aes_core__DOT__shift_rows__1__state_in[3U] 
                                = __Vfunc_aes_core__DOT__sub_bytes__2__Vfuncout[3U];
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00 
                                = (__Vfunc_aes_core__DOT__shift_rows__1__state_in[3U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[3U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[3U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30 
                                = (0xffU & __Vfunc_aes_core__DOT__shift_rows__1__state_in[3U]);
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01 
                                = (__Vfunc_aes_core__DOT__shift_rows__1__state_in[2U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[2U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[2U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31 
                                = (0xffU & __Vfunc_aes_core__DOT__shift_rows__1__state_in[2U]);
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02 
                                = (__Vfunc_aes_core__DOT__shift_rows__1__state_in[1U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[1U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[1U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32 
                                = (0xffU & __Vfunc_aes_core__DOT__shift_rows__1__state_in[1U]);
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03 
                                = (__Vfunc_aes_core__DOT__shift_rows__1__state_in[0U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[0U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23 
                                = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__1__state_in[0U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33 
                                = (0xffU & __Vfunc_aes_core__DOT__shift_rows__1__state_in[0U]);
                            __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[0U] 
                                = (IData)((((QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32)))))));
                            __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[1U] 
                                = (IData)(((((QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03) 
                                                                 << 0x18U) 
                                                                | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10) 
                                                                   << 0x10U)) 
                                                               | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32)))))) 
                                           >> 0x20U));
                            __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[2U] 
                                = (IData)((((QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30)))))));
                            __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[3U] 
                                = (IData)(((((QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01) 
                                                                 << 0x18U) 
                                                                | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12) 
                                                                   << 0x10U)) 
                                                               | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30)))))) 
                                           >> 0x20U));
                            __Vfunc_aes_core__DOT__add_round_key__0__state_in[0U] 
                                = __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[0U];
                            __Vfunc_aes_core__DOT__add_round_key__0__state_in[1U] 
                                = __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[1U];
                            __Vfunc_aes_core__DOT__add_round_key__0__state_in[2U] 
                                = __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[2U];
                            __Vfunc_aes_core__DOT__add_round_key__0__state_in[3U] 
                                = __Vfunc_aes_core__DOT__shift_rows__1__Vfuncout[3U];
                            __Vfunc_aes_core__DOT__add_round_key__0__Vfuncout[0U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__0__state_in[0U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__0__round_key[0U]);
                            __Vfunc_aes_core__DOT__add_round_key__0__Vfuncout[1U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__0__state_in[1U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__0__round_key[1U]);
                            __Vfunc_aes_core__DOT__add_round_key__0__Vfuncout[2U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__0__state_in[2U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__0__round_key[2U]);
                            __Vfunc_aes_core__DOT__add_round_key__0__Vfuncout[3U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__0__state_in[3U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__0__round_key[3U]);
                        }(), __Vfunc_aes_core__DOT__add_round_key__0__Vfuncout), 
                             ([&]() {
                            __Vfunc_aes_core__DOT__add_round_key__3__round_key[0U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0U][0U];
                            __Vfunc_aes_core__DOT__add_round_key__3__round_key[1U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0U][1U];
                            __Vfunc_aes_core__DOT__add_round_key__3__round_key[2U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0U][2U];
                            __Vfunc_aes_core__DOT__add_round_key__3__round_key[3U] 
                                = vlSelfRef.aes_core__DOT__round_keys
                                [0U][3U];
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[0U] 
                                = vlSelfRef.aes_core__DOT__state_reg[0U];
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[1U] 
                                = vlSelfRef.aes_core__DOT__state_reg[1U];
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[2U] 
                                = vlSelfRef.aes_core__DOT__state_reg[2U];
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[3U] 
                                = vlSelfRef.aes_core__DOT__state_reg[3U];
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00 
                                = (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[3U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[3U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[3U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30 
                                = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[3U]);
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01 
                                = (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[2U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[2U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[2U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31 
                                = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[2U]);
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02 
                                = (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[1U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[1U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[1U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32 
                                = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[1U]);
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03 
                                = (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[0U] 
                                   >> 0x18U);
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[0U] 
                                            >> 0x10U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23 
                                = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[0U] 
                                            >> 8U));
                            vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33 
                                = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__5__state_in[0U]);
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[0U] 
                                = (IData)((((QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30)))))));
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[1U] 
                                = (IData)(((((QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03) 
                                                                 << 0x18U) 
                                                                | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12) 
                                                                   << 0x10U)) 
                                                               | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30)))))) 
                                           >> 0x20U));
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[2U] 
                                = (IData)((((QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32)))))));
                            __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[3U] 
                                = (IData)(((((QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01) 
                                                                 << 0x18U) 
                                                                | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10) 
                                                                   << 0x10U)) 
                                                               | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32)))))) 
                                           >> 0x20U));
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[0U] 
                                = __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[0U];
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[1U] 
                                = __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[1U];
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[2U] 
                                = __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[2U];
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[3U] 
                                = __Vfunc_aes_core__DOT__inv_shift_rows__5__Vfuncout[3U];
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[0U] 
                                = (((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[0U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__inv_sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[0U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[0U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__inv_sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[0U])]));
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[1U] 
                                = (((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[1U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__inv_sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[1U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[1U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__inv_sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[1U])]));
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[2U] 
                                = (((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[2U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__inv_sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[2U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[2U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__inv_sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[2U])]));
                            __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[3U] 
                                = (((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[3U] 
                                       >> 0x18U)] << 0x18U) 
                                    | (vlSelfRef.aes_core__DOT__inv_sbox
                                       [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[3U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
                                   ((vlSelfRef.aes_core__DOT__inv_sbox
                                     [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[3U] 
                                                >> 8U))] 
                                     << 8U) | vlSelfRef.aes_core__DOT__inv_sbox
                                    [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__4__state_in[3U])]));
                            __Vfunc_aes_core__DOT__add_round_key__3__state_in[0U] 
                                = __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[0U];
                            __Vfunc_aes_core__DOT__add_round_key__3__state_in[1U] 
                                = __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[1U];
                            __Vfunc_aes_core__DOT__add_round_key__3__state_in[2U] 
                                = __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[2U];
                            __Vfunc_aes_core__DOT__add_round_key__3__state_in[3U] 
                                = __Vfunc_aes_core__DOT__inv_sub_bytes__4__Vfuncout[3U];
                            __Vfunc_aes_core__DOT__add_round_key__3__Vfuncout[0U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__3__state_in[0U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__3__round_key[0U]);
                            __Vfunc_aes_core__DOT__add_round_key__3__Vfuncout[1U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__3__state_in[1U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__3__round_key[1U]);
                            __Vfunc_aes_core__DOT__add_round_key__3__Vfuncout[2U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__3__state_in[2U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__3__round_key[2U]);
                            __Vfunc_aes_core__DOT__add_round_key__3__Vfuncout[3U] 
                                = (__Vfunc_aes_core__DOT__add_round_key__3__state_in[3U] 
                                   ^ __Vfunc_aes_core__DOT__add_round_key__3__round_key[3U]);
                        }(), __Vfunc_aes_core__DOT__add_round_key__3__Vfuncout));
            } else if (vlSelfRef.encrypt) {
                if ((0xaU >= (IData)(vlSelfRef.aes_core__DOT__round_cnt))) {
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[0U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][0U];
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[1U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][1U];
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[2U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][2U];
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[3U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][3U];
                } else {
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[0U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[1U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[2U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__6__round_key[3U] = 0U;
                }
                __Vfunc_aes_core__DOT__sub_bytes__9__state_in[0U] 
                    = vlSelfRef.aes_core__DOT__state_reg[0U];
                __Vfunc_aes_core__DOT__sub_bytes__9__state_in[1U] 
                    = vlSelfRef.aes_core__DOT__state_reg[1U];
                __Vfunc_aes_core__DOT__sub_bytes__9__state_in[2U] 
                    = vlSelfRef.aes_core__DOT__state_reg[2U];
                __Vfunc_aes_core__DOT__sub_bytes__9__state_in[3U] 
                    = vlSelfRef.aes_core__DOT__state_reg[3U];
                __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[0U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__9__state_in[0U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[0U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[0U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__9__state_in[0U])]));
                __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[1U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__9__state_in[1U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[1U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[1U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__9__state_in[1U])]));
                __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[2U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__9__state_in[2U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[2U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[2U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__9__state_in[2U])]));
                __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[3U] 
                    = (((vlSelfRef.aes_core__DOT__sbox
                         [(__Vfunc_aes_core__DOT__sub_bytes__9__state_in[3U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[3U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__sub_bytes__9__state_in[3U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__sbox
                          [(0xffU & __Vfunc_aes_core__DOT__sub_bytes__9__state_in[3U])]));
                __Vfunc_aes_core__DOT__shift_rows__8__state_in[0U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[0U];
                __Vfunc_aes_core__DOT__shift_rows__8__state_in[1U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[1U];
                __Vfunc_aes_core__DOT__shift_rows__8__state_in[2U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[2U];
                __Vfunc_aes_core__DOT__shift_rows__8__state_in[3U] 
                    = __Vfunc_aes_core__DOT__sub_bytes__9__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00 
                    = (__Vfunc_aes_core__DOT__shift_rows__8__state_in[3U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[3U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[3U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30 
                    = (0xffU & __Vfunc_aes_core__DOT__shift_rows__8__state_in[3U]);
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01 
                    = (__Vfunc_aes_core__DOT__shift_rows__8__state_in[2U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[2U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[2U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31 
                    = (0xffU & __Vfunc_aes_core__DOT__shift_rows__8__state_in[2U]);
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02 
                    = (__Vfunc_aes_core__DOT__shift_rows__8__state_in[1U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[1U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[1U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32 
                    = (0xffU & __Vfunc_aes_core__DOT__shift_rows__8__state_in[1U]);
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03 
                    = (__Vfunc_aes_core__DOT__shift_rows__8__state_in[0U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[0U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23 
                    = (0xffU & (__Vfunc_aes_core__DOT__shift_rows__8__state_in[0U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33 
                    = (0xffU & __Vfunc_aes_core__DOT__shift_rows__8__state_in[0U]);
                __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[0U] 
                    = (IData)((((QData)((IData)(((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32)))))));
                __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[1U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32)))))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30)))))));
                __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30)))))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__mix_columns__7__state_in[0U] 
                    = __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[0U];
                __Vfunc_aes_core__DOT__mix_columns__7__state_in[1U] 
                    = __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[1U];
                __Vfunc_aes_core__DOT__mix_columns__7__state_in[2U] 
                    = __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[2U];
                __Vfunc_aes_core__DOT__mix_columns__7__state_in[3U] 
                    = __Vfunc_aes_core__DOT__shift_rows__8__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                    = __Vfunc_aes_core__DOT__mix_columns__7__state_in[3U];
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                    = __Vfunc_aes_core__DOT__mix_columns__7__state_in[2U];
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                    = __Vfunc_aes_core__DOT__mix_columns__7__state_in[1U];
                vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                    = __Vfunc_aes_core__DOT__mix_columns__7__state_in[0U];
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__10__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult2__10__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__10__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__10__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__10__Vfuncout)) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__11__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult3__11__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__12__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__11__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__12__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__12__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__12__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__12__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__11__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__11__Vfuncout))) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                              >> 8U)) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0)));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                             >> 0x18U) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__13__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult2__13__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__13__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__13__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__13__Vfuncout))) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult3__14__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult3__14__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__15__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult3__14__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__15__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__15__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__15__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__15__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__14__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__14__Vfuncout))) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0)));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                             >> 0x18U) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                               >> 0x10U)) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult2__16__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult2__16__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__16__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__16__x))
                                                   ? 0x1bU
                                                   : 0U));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__16__Vfuncout))) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult3__17__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0);
                                    __Vfunc_aes_core__DOT__gf_mult3__17__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__18__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult3__17__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__18__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__18__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__18__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__18__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__17__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__17__Vfuncout)))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__19__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult3__19__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__20__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__19__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__20__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__20__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__20__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__20__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__19__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__19__Vfuncout)) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                               >> 0x10U)) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0 
                                              >> 8U)) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult2__21__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0);
                                    __Vfunc_aes_core__DOT__gf_mult2__21__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__21__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__21__x))
                                               ? 0x1bU
                                               : 0U));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__21__Vfuncout)))));
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__22__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult2__22__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__22__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__22__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__22__Vfuncout)) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__23__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult3__23__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__24__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__23__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__24__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__24__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__24__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__24__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__23__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__23__Vfuncout))) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                              >> 8U)) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1)));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                             >> 0x18U) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__25__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult2__25__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__25__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__25__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__25__Vfuncout))) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult3__26__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult3__26__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__27__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult3__26__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__27__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__27__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__27__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__27__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__26__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__26__Vfuncout))) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1)));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                             >> 0x18U) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                               >> 0x10U)) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult2__28__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult2__28__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__28__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__28__x))
                                                   ? 0x1bU
                                                   : 0U));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__28__Vfuncout))) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult3__29__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1);
                                    __Vfunc_aes_core__DOT__gf_mult3__29__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__30__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult3__29__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__30__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__30__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__30__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__30__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__29__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__29__Vfuncout)))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__31__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult3__31__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__32__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__31__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__32__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__32__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__32__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__32__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__31__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__31__Vfuncout)) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                               >> 0x10U)) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1 
                                              >> 8U)) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult2__33__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1);
                                    __Vfunc_aes_core__DOT__gf_mult2__33__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__33__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__33__x))
                                               ? 0x1bU
                                               : 0U));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__33__Vfuncout)))));
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col2, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__34__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult2__34__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__34__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__34__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__34__Vfuncout)) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__35__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult3__35__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__36__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__35__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__36__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__36__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__36__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__36__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__35__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__35__Vfuncout))) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                              >> 8U)) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2)));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col2, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                             >> 0x18U) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__37__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult2__37__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__37__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__37__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__37__Vfuncout))) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult3__38__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult3__38__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__39__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult3__38__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__39__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__39__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__39__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__39__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__38__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__38__Vfuncout))) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2)));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col2, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                             >> 0x18U) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                               >> 0x10U)) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult2__40__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult2__40__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__40__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__40__x))
                                                   ? 0x1bU
                                                   : 0U));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__40__Vfuncout))) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult3__41__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2);
                                    __Vfunc_aes_core__DOT__gf_mult3__41__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__42__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult3__41__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__42__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__42__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__42__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__42__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__41__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__41__Vfuncout)))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col2, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__43__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult3__43__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__44__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__43__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__44__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__44__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__44__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__44__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__43__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__43__Vfuncout)) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                               >> 0x10U)) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2 
                                              >> 8U)) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult2__45__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2);
                                    __Vfunc_aes_core__DOT__gf_mult2__45__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__45__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__45__x))
                                               ? 0x1bU
                                               : 0U));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__45__Vfuncout)))));
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col3, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__46__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult2__46__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__46__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__46__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__46__Vfuncout)) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__47__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult3__47__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__48__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__47__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__48__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__48__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__48__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__48__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__47__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__47__Vfuncout))) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                              >> 8U)) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3)));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col3, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                             >> 0x18U) 
                                            ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__49__x 
                                                = (0xffU 
                                                   & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                                      >> 0x10U));
                                            __Vfunc_aes_core__DOT__gf_mult2__49__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__49__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__49__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__49__Vfuncout))) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult3__50__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult3__50__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__51__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult3__50__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__51__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__51__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__51__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__51__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__50__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__50__Vfuncout))) 
                                          ^ vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3)));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col3, 
                                (0xffU & ((((vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                             >> 0x18U) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                               >> 0x10U)) 
                                           ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult2__52__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                                  >> 8U));
                                        __Vfunc_aes_core__DOT__gf_mult2__52__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__52__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__52__x))
                                                   ? 0x1bU
                                                   : 0U));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__52__Vfuncout))) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult3__53__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3);
                                    __Vfunc_aes_core__DOT__gf_mult3__53__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__54__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult3__53__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__54__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__54__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__54__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__54__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__53__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__53__Vfuncout)))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col3, 
                                (0xffU & (((([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult3__55__x 
                                                = (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                                   >> 0x18U);
                                            __Vfunc_aes_core__DOT__gf_mult3__55__Vfuncout 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__56__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult3__55__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__56__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__56__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__56__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__56__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult3__55__x));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult3__55__Vfuncout)) 
                                            ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                               >> 0x10U)) 
                                           ^ (vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3 
                                              >> 8U)) 
                                          ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult2__57__x 
                                        = (0xffU & vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3);
                                    __Vfunc_aes_core__DOT__gf_mult2__57__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__57__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__57__x))
                                               ? 0x1bU
                                               : 0U));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__57__Vfuncout)))));
                __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col3;
                __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col2;
                __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1))));
                __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__add_round_key__6__state_in[0U] 
                    = __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[0U];
                __Vfunc_aes_core__DOT__add_round_key__6__state_in[1U] 
                    = __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[1U];
                __Vfunc_aes_core__DOT__add_round_key__6__state_in[2U] 
                    = __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[2U];
                __Vfunc_aes_core__DOT__add_round_key__6__state_in[3U] 
                    = __Vfunc_aes_core__DOT__mix_columns__7__Vfuncout[3U];
                __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[0U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__6__state_in[0U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__6__round_key[0U]);
                __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[1U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__6__state_in[1U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__6__round_key[1U]);
                __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[2U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__6__state_in[2U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__6__round_key[2U]);
                __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[3U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__6__state_in[3U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__6__round_key[3U]);
                __Vdly__aes_core__DOT__state_reg[0U] 
                    = __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[0U];
                __Vdly__aes_core__DOT__state_reg[1U] 
                    = __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[1U];
                __Vdly__aes_core__DOT__state_reg[2U] 
                    = __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[2U];
                __Vdly__aes_core__DOT__state_reg[3U] 
                    = __Vfunc_aes_core__DOT__add_round_key__6__Vfuncout[3U];
                __Vdly__aes_core__DOT__round_cnt = 
                    (0xfU & ((IData)(1U) + (IData)(vlSelfRef.aes_core__DOT__round_cnt)));
            } else {
                if ((0xaU >= (IData)(vlSelfRef.aes_core__DOT__round_cnt))) {
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[0U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][0U];
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[1U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][1U];
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[2U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][2U];
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[3U] 
                        = vlSelfRef.aes_core__DOT__round_keys
                        [vlSelfRef.aes_core__DOT__round_cnt][3U];
                } else {
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[0U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[1U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[2U] = 0U;
                    __Vfunc_aes_core__DOT__add_round_key__61__round_key[3U] = 0U;
                }
                __Vfunc_aes_core__DOT__add_round_key__61__state_in[0U] 
                    = vlSelfRef.aes_core__DOT__state_reg[0U];
                __Vfunc_aes_core__DOT__add_round_key__61__state_in[1U] 
                    = vlSelfRef.aes_core__DOT__state_reg[1U];
                __Vfunc_aes_core__DOT__add_round_key__61__state_in[2U] 
                    = vlSelfRef.aes_core__DOT__state_reg[2U];
                __Vfunc_aes_core__DOT__add_round_key__61__state_in[3U] 
                    = vlSelfRef.aes_core__DOT__state_reg[3U];
                __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[0U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__61__state_in[0U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__61__round_key[0U]);
                __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[1U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__61__state_in[1U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__61__round_key[1U]);
                __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[2U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__61__state_in[2U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__61__round_key[2U]);
                __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[3U] 
                    = (__Vfunc_aes_core__DOT__add_round_key__61__state_in[3U] 
                       ^ __Vfunc_aes_core__DOT__add_round_key__61__round_key[3U]);
                __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[0U] 
                    = __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[0U];
                __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[1U] 
                    = __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[1U];
                __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[2U] 
                    = __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[2U];
                __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[3U] 
                    = __Vfunc_aes_core__DOT__add_round_key__61__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[3U];
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[2U];
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[1U];
                vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__state_in[0U];
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__62__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult2__64__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__62__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__65__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__62__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__65__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__65__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__65__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__65__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__64__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__64__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__64__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__63__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__64__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__63__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__63__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__63__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__62__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__63__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__62__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__66__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult11__66__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__67__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__68__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__66__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__68__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__68__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__68__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__68__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__66__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__67__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__67__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__67__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__67__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__66__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__66__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult13__69__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult13__69__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__71__x 
                                                    = 
                                                    ((IData)(__Vfunc_aes_core__DOT__gf_mult13__69__x) 
                                                     ^ 
                                                     ([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__72__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult13__69__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__72__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__72__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__72__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__72__Vfuncout)));
                                                __Vfunc_aes_core__DOT__gf_mult2__71__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__71__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__71__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__70__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__71__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__70__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__70__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__70__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__70__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__69__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__69__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult9__73__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0);
                                __Vfunc_aes_core__DOT__gf_mult9__73__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__76__x 
                                                = __Vfunc_aes_core__DOT__gf_mult9__73__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__76__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__76__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__76__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__75__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__76__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__75__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__75__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__75__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__74__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__75__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__74__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__74__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__74__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__74__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__73__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__73__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__77__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult9__77__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__80__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__77__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__80__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__80__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__80__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__79__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__80__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__79__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__79__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__79__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__78__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__79__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__78__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__78__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__78__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__78__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__77__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__77__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__81__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult2__83__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__81__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__84__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__81__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__84__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__84__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__84__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__84__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__83__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__83__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__83__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__82__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__83__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__82__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__82__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__82__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__81__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__82__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__81__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult11__85__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult11__85__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__86__x 
                                                    = 
                                                    (([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__87__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult11__85__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__87__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__87__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__87__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__87__Vfuncout)) 
                                                     ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__85__x));
                                                __Vfunc_aes_core__DOT__gf_mult2__86__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__86__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__86__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__86__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__85__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__85__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult13__88__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0);
                                __Vfunc_aes_core__DOT__gf_mult13__88__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__90__x 
                                                = ((IData)(__Vfunc_aes_core__DOT__gf_mult13__88__x) 
                                                   ^ 
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__91__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult13__88__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__91__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__91__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__91__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__91__Vfuncout)));
                                            __Vfunc_aes_core__DOT__gf_mult2__90__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__90__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__90__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__89__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__90__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__89__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__89__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__89__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__89__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__88__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__88__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__92__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult13__92__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__94__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__92__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__95__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__92__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__95__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__95__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__95__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__95__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__94__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__94__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__94__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__93__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__94__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__93__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__93__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__93__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__93__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__92__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__92__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__96__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult9__96__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__99__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__96__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__99__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__99__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__99__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__98__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__99__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__98__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__98__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__98__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__97__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__98__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__97__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__97__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__97__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__97__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__96__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__96__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult14__100__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult2__102__x 
                                        = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__100__x) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__103__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult14__100__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__103__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__103__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__103__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__103__Vfuncout)));
                                    __Vfunc_aes_core__DOT__gf_mult2__102__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__102__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__102__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult2__101__x 
                                        = __Vfunc_aes_core__DOT__gf_mult2__102__Vfuncout;
                                    __Vfunc_aes_core__DOT__gf_mult2__101__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__101__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__101__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult14__100__Vfuncout 
                                        = __Vfunc_aes_core__DOT__gf_mult2__101__Vfuncout;
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__100__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult11__104__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0);
                                __Vfunc_aes_core__DOT__gf_mult11__104__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__105__x 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__106__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult11__104__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__106__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__106__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__106__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__106__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__104__x));
                                            __Vfunc_aes_core__DOT__gf_mult2__105__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__105__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__105__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__105__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__104__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__104__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__107__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult11__107__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__108__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__109__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__107__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__109__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__109__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__109__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__109__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__107__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__108__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__108__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__108__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__108__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__107__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__107__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__110__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult13__110__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__112__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__110__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__113__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__110__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__113__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__113__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__113__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__113__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__112__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__112__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__112__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__111__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__112__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__111__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__111__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__111__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__111__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__110__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__110__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult9__114__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult9__114__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__117__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult9__114__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__117__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__117__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__117__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__116__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__117__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__116__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__116__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__116__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__115__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__116__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__115__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__115__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__115__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__115__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__114__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__114__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult14__118__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0);
                                __Vfunc_aes_core__DOT__gf_mult2__120__x 
                                    = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__118__x) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__121__x 
                                                = __Vfunc_aes_core__DOT__gf_mult14__118__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__121__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__121__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__121__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__121__Vfuncout)));
                                __Vfunc_aes_core__DOT__gf_mult2__120__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__120__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__120__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult2__119__x 
                                    = __Vfunc_aes_core__DOT__gf_mult2__120__Vfuncout;
                                __Vfunc_aes_core__DOT__gf_mult2__119__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__119__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__119__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult14__118__Vfuncout 
                                    = __Vfunc_aes_core__DOT__gf_mult2__119__Vfuncout;
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__118__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__122__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult2__124__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__122__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__125__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__122__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__125__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__125__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__125__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__125__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__124__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__124__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__124__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__123__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__124__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__123__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__123__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__123__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__122__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__123__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__122__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__126__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult11__126__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__127__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__128__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__126__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__128__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__128__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__128__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__128__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__126__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__127__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__127__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__127__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__127__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__126__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__126__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult13__129__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult13__129__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__131__x 
                                                    = 
                                                    ((IData)(__Vfunc_aes_core__DOT__gf_mult13__129__x) 
                                                     ^ 
                                                     ([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__132__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult13__129__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__132__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__132__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__132__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__132__Vfuncout)));
                                                __Vfunc_aes_core__DOT__gf_mult2__131__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__131__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__131__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__130__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__131__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__130__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__130__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__130__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__130__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__129__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__129__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult9__133__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1);
                                __Vfunc_aes_core__DOT__gf_mult9__133__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__136__x 
                                                = __Vfunc_aes_core__DOT__gf_mult9__133__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__136__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__136__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__136__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__135__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__136__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__135__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__135__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__135__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__134__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__135__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__134__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__134__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__134__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__134__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__133__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__133__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__137__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult9__137__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__140__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__137__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__140__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__140__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__140__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__139__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__140__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__139__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__139__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__139__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__138__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__139__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__138__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__138__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__138__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__138__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__137__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__137__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__141__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult2__143__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__141__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__144__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__141__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__144__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__144__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__144__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__144__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__143__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__143__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__143__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__142__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__143__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__142__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__142__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__142__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__141__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__142__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__141__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult11__145__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult11__145__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__146__x 
                                                    = 
                                                    (([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__147__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult11__145__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__147__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__147__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__147__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__147__Vfuncout)) 
                                                     ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__145__x));
                                                __Vfunc_aes_core__DOT__gf_mult2__146__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__146__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__146__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__146__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__145__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__145__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult13__148__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1);
                                __Vfunc_aes_core__DOT__gf_mult13__148__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__150__x 
                                                = ((IData)(__Vfunc_aes_core__DOT__gf_mult13__148__x) 
                                                   ^ 
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__151__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult13__148__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__151__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__151__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__151__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__151__Vfuncout)));
                                            __Vfunc_aes_core__DOT__gf_mult2__150__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__150__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__150__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__149__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__150__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__149__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__149__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__149__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__149__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__148__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__148__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__152__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult13__152__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__154__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__152__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__155__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__152__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__155__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__155__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__155__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__155__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__154__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__154__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__154__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__153__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__154__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__153__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__153__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__153__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__153__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__152__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__152__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__156__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult9__156__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__159__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__156__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__159__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__159__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__159__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__158__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__159__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__158__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__158__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__158__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__157__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__158__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__157__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__157__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__157__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__157__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__156__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__156__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult14__160__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult2__162__x 
                                        = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__160__x) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__163__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult14__160__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__163__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__163__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__163__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__163__Vfuncout)));
                                    __Vfunc_aes_core__DOT__gf_mult2__162__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__162__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__162__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult2__161__x 
                                        = __Vfunc_aes_core__DOT__gf_mult2__162__Vfuncout;
                                    __Vfunc_aes_core__DOT__gf_mult2__161__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__161__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__161__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult14__160__Vfuncout 
                                        = __Vfunc_aes_core__DOT__gf_mult2__161__Vfuncout;
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__160__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult11__164__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1);
                                __Vfunc_aes_core__DOT__gf_mult11__164__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__165__x 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__166__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult11__164__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__166__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__166__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__166__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__166__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__164__x));
                                            __Vfunc_aes_core__DOT__gf_mult2__165__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__165__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__165__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__165__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__164__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__164__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__167__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult11__167__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__168__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__169__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__167__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__169__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__169__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__169__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__169__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__167__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__168__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__168__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__168__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__168__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__167__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__167__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__170__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult13__170__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__172__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__170__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__173__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__170__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__173__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__173__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__173__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__173__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__172__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__172__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__172__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__171__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__172__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__171__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__171__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__171__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__171__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__170__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__170__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult9__174__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult9__174__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__177__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult9__174__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__177__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__177__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__177__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__176__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__177__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__176__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__176__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__176__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__175__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__176__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__175__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__175__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__175__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__175__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__174__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__174__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult14__178__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1);
                                __Vfunc_aes_core__DOT__gf_mult2__180__x 
                                    = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__178__x) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__181__x 
                                                = __Vfunc_aes_core__DOT__gf_mult14__178__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__181__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__181__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__181__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__181__Vfuncout)));
                                __Vfunc_aes_core__DOT__gf_mult2__180__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__180__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__180__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult2__179__x 
                                    = __Vfunc_aes_core__DOT__gf_mult2__180__Vfuncout;
                                __Vfunc_aes_core__DOT__gf_mult2__179__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__179__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__179__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult14__178__Vfuncout 
                                    = __Vfunc_aes_core__DOT__gf_mult2__179__Vfuncout;
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__178__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col2, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__182__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult2__184__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__182__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__185__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__182__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__185__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__185__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__185__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__185__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__184__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__184__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__184__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__183__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__184__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__183__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__183__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__183__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__182__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__183__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__182__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__186__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult11__186__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__187__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__188__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__186__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__188__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__188__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__188__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__188__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__186__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__187__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__187__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__187__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__187__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__186__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__186__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult13__189__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult13__189__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__191__x 
                                                    = 
                                                    ((IData)(__Vfunc_aes_core__DOT__gf_mult13__189__x) 
                                                     ^ 
                                                     ([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__192__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult13__189__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__192__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__192__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__192__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__192__Vfuncout)));
                                                __Vfunc_aes_core__DOT__gf_mult2__191__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__191__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__191__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__190__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__191__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__190__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__190__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__190__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__190__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__189__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__189__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult9__193__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2);
                                __Vfunc_aes_core__DOT__gf_mult9__193__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__196__x 
                                                = __Vfunc_aes_core__DOT__gf_mult9__193__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__196__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__196__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__196__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__195__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__196__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__195__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__195__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__195__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__194__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__195__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__194__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__194__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__194__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__194__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__193__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__193__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col2, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__197__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult9__197__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__200__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__197__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__200__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__200__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__200__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__199__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__200__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__199__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__199__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__199__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__198__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__199__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__198__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__198__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__198__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__198__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__197__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__197__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__201__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult2__203__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__201__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__204__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__201__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__204__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__204__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__204__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__204__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__203__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__203__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__203__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__202__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__203__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__202__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__202__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__202__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__201__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__202__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__201__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult11__205__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult11__205__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__206__x 
                                                    = 
                                                    (([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__207__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult11__205__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__207__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__207__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__207__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__207__Vfuncout)) 
                                                     ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__205__x));
                                                __Vfunc_aes_core__DOT__gf_mult2__206__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__206__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__206__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__206__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__205__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__205__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult13__208__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2);
                                __Vfunc_aes_core__DOT__gf_mult13__208__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__210__x 
                                                = ((IData)(__Vfunc_aes_core__DOT__gf_mult13__208__x) 
                                                   ^ 
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__211__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult13__208__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__211__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__211__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__211__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__211__Vfuncout)));
                                            __Vfunc_aes_core__DOT__gf_mult2__210__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__210__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__210__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__209__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__210__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__209__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__209__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__209__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__209__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__208__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__208__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col2, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__212__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult13__212__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__214__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__212__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__215__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__212__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__215__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__215__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__215__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__215__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__214__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__214__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__214__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__213__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__214__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__213__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__213__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__213__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__213__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__212__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__212__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__216__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult9__216__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__219__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__216__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__219__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__219__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__219__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__218__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__219__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__218__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__218__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__218__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__217__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__218__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__217__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__217__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__217__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__217__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__216__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__216__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult14__220__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult2__222__x 
                                        = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__220__x) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__223__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult14__220__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__223__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__223__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__223__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__223__Vfuncout)));
                                    __Vfunc_aes_core__DOT__gf_mult2__222__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__222__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__222__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult2__221__x 
                                        = __Vfunc_aes_core__DOT__gf_mult2__222__Vfuncout;
                                    __Vfunc_aes_core__DOT__gf_mult2__221__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__221__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__221__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult14__220__Vfuncout 
                                        = __Vfunc_aes_core__DOT__gf_mult2__221__Vfuncout;
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__220__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult11__224__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2);
                                __Vfunc_aes_core__DOT__gf_mult11__224__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__225__x 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__226__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult11__224__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__226__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__226__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__226__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__226__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__224__x));
                                            __Vfunc_aes_core__DOT__gf_mult2__225__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__225__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__225__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__225__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__224__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__224__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col2, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__227__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult11__227__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__228__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__229__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__227__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__229__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__229__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__229__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__229__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__227__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__228__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__228__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__228__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__228__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__227__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__227__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__230__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult13__230__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__232__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__230__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__233__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__230__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__233__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__233__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__233__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__233__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__232__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__232__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__232__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__231__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__232__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__231__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__231__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__231__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__231__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__230__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__230__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult9__234__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult9__234__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__237__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult9__234__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__237__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__237__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__237__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__236__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__237__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__236__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__236__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__236__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__235__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__236__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__235__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__235__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__235__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__235__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__234__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__234__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult14__238__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2);
                                __Vfunc_aes_core__DOT__gf_mult2__240__x 
                                    = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__238__x) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__241__x 
                                                = __Vfunc_aes_core__DOT__gf_mult14__238__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__241__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__241__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__241__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__241__Vfuncout)));
                                __Vfunc_aes_core__DOT__gf_mult2__240__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__240__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__240__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult2__239__x 
                                    = __Vfunc_aes_core__DOT__gf_mult2__240__Vfuncout;
                                __Vfunc_aes_core__DOT__gf_mult2__239__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__239__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__239__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult14__238__Vfuncout 
                                    = __Vfunc_aes_core__DOT__gf_mult2__239__Vfuncout;
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__238__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col3, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__242__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult2__244__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__242__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__245__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__242__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__245__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__245__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__245__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__245__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__244__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__244__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__244__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__243__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__244__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__243__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__243__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__243__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__242__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__243__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__242__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__246__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult11__246__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__247__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__248__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__246__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__248__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__248__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__248__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__248__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__246__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__247__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__247__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__247__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__247__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__246__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__246__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult13__249__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult13__249__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__251__x 
                                                    = 
                                                    ((IData)(__Vfunc_aes_core__DOT__gf_mult13__249__x) 
                                                     ^ 
                                                     ([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__252__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult13__249__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__252__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__252__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__252__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__252__Vfuncout)));
                                                __Vfunc_aes_core__DOT__gf_mult2__251__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__251__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__251__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__250__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__251__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__250__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__250__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__250__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__250__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__249__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__249__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult9__253__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3);
                                __Vfunc_aes_core__DOT__gf_mult9__253__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__256__x 
                                                = __Vfunc_aes_core__DOT__gf_mult9__253__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__256__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__256__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__256__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__255__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__256__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__255__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__255__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__255__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__254__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__255__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__254__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__254__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__254__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__254__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__253__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__253__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col3, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__257__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult9__257__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__260__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__257__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__260__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__260__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__260__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__259__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__260__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__259__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__259__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__259__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__258__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__259__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__258__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__258__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__258__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__258__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__257__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__257__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult14__261__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult2__263__x 
                                            = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__261__x) 
                                               ^ ([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__264__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult14__261__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__264__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__264__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__264__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__264__Vfuncout)));
                                        __Vfunc_aes_core__DOT__gf_mult2__263__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__263__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__263__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult2__262__x 
                                            = __Vfunc_aes_core__DOT__gf_mult2__263__Vfuncout;
                                        __Vfunc_aes_core__DOT__gf_mult2__262__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__262__x) 
                                                   << 1U)) 
                                               ^ ((0x80U 
                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__262__x))
                                                   ? 0x1bU
                                                   : 0U));
                                        __Vfunc_aes_core__DOT__gf_mult14__261__Vfuncout 
                                            = __Vfunc_aes_core__DOT__gf_mult2__262__Vfuncout;
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__261__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult11__265__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult11__265__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__266__x 
                                                    = 
                                                    (([&]() {
                                                            __Vfunc_aes_core__DOT__gf_mult2__267__x 
                                                                = __Vfunc_aes_core__DOT__gf_mult11__265__x;
                                                            __Vfunc_aes_core__DOT__gf_mult2__267__Vfuncout 
                                                                = 
                                                                ((0xfeU 
                                                                  & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__267__x) 
                                                                     << 1U)) 
                                                                 ^ 
                                                                 ((0x80U 
                                                                   & (IData)(__Vfunc_aes_core__DOT__gf_mult2__267__x))
                                                                   ? 0x1bU
                                                                   : 0U));
                                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__267__Vfuncout)) 
                                                     ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__265__x));
                                                __Vfunc_aes_core__DOT__gf_mult2__266__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__266__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__266__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__266__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__265__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__265__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult13__268__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3);
                                __Vfunc_aes_core__DOT__gf_mult13__268__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__270__x 
                                                = ((IData)(__Vfunc_aes_core__DOT__gf_mult13__268__x) 
                                                   ^ 
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__271__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult13__268__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__271__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__271__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__271__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__271__Vfuncout)));
                                            __Vfunc_aes_core__DOT__gf_mult2__270__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__270__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__270__x))
                                                     ? 0x1bU
                                                     : 0U));
                                            __Vfunc_aes_core__DOT__gf_mult2__269__x 
                                                = __Vfunc_aes_core__DOT__gf_mult2__270__Vfuncout;
                                            __Vfunc_aes_core__DOT__gf_mult2__269__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__269__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__269__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__269__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__268__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__268__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col3, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__272__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult13__272__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__274__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__272__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__275__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__272__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__275__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__275__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__275__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__275__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__274__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__274__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__274__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__273__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__274__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__273__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__273__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__273__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__273__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__272__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__272__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult9__276__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult9__276__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__279__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult9__276__x;
                                                    __Vfunc_aes_core__DOT__gf_mult2__279__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__279__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__279__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__278__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__279__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__278__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__278__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__278__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__277__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__278__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__277__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__277__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__277__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__277__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__276__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__276__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult14__280__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult2__282__x 
                                        = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__280__x) 
                                           ^ ([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__283__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult14__280__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__283__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__283__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__283__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__283__Vfuncout)));
                                    __Vfunc_aes_core__DOT__gf_mult2__282__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__282__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__282__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult2__281__x 
                                        = __Vfunc_aes_core__DOT__gf_mult2__282__Vfuncout;
                                    __Vfunc_aes_core__DOT__gf_mult2__281__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(__Vfunc_aes_core__DOT__gf_mult2__281__x) 
                                             << 1U)) 
                                           ^ ((0x80U 
                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__281__x))
                                               ? 0x1bU
                                               : 0U));
                                    __Vfunc_aes_core__DOT__gf_mult14__280__Vfuncout 
                                        = __Vfunc_aes_core__DOT__gf_mult2__281__Vfuncout;
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__280__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult11__284__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3);
                                __Vfunc_aes_core__DOT__gf_mult11__284__Vfuncout 
                                    = (([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__285__x 
                                                = (
                                                   ([&]() {
                                                        __Vfunc_aes_core__DOT__gf_mult2__286__x 
                                                            = __Vfunc_aes_core__DOT__gf_mult11__284__x;
                                                        __Vfunc_aes_core__DOT__gf_mult2__286__Vfuncout 
                                                            = 
                                                            ((0xfeU 
                                                              & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__286__x) 
                                                                 << 1U)) 
                                                             ^ 
                                                             ((0x80U 
                                                               & (IData)(__Vfunc_aes_core__DOT__gf_mult2__286__x))
                                                               ? 0x1bU
                                                               : 0U));
                                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__286__Vfuncout)) 
                                                   ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__284__x));
                                            __Vfunc_aes_core__DOT__gf_mult2__285__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__285__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__285__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__285__Vfuncout)) 
                                       ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__284__x));
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__284__Vfuncout))));
                VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col3, 
                                (((([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult11__287__x 
                                            = (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                               >> 0x18U);
                                        __Vfunc_aes_core__DOT__gf_mult11__287__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__288__x 
                                                        = 
                                                        (([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__289__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult11__287__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__289__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__289__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__289__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__289__Vfuncout)) 
                                                         ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__287__x));
                                                    __Vfunc_aes_core__DOT__gf_mult2__288__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__288__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__288__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__288__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult11__287__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult11__287__Vfuncout)) 
                                   ^ ([&]() {
                                        __Vfunc_aes_core__DOT__gf_mult13__290__x 
                                            = (0xffU 
                                               & (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                                  >> 0x10U));
                                        __Vfunc_aes_core__DOT__gf_mult13__290__Vfuncout 
                                            = (([&]() {
                                                    __Vfunc_aes_core__DOT__gf_mult2__292__x 
                                                        = 
                                                        ((IData)(__Vfunc_aes_core__DOT__gf_mult13__290__x) 
                                                         ^ 
                                                         ([&]() {
                                                                __Vfunc_aes_core__DOT__gf_mult2__293__x 
                                                                    = __Vfunc_aes_core__DOT__gf_mult13__290__x;
                                                                __Vfunc_aes_core__DOT__gf_mult2__293__Vfuncout 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__293__x) 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((0x80U 
                                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__293__x))
                                                                       ? 0x1bU
                                                                       : 0U));
                                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__293__Vfuncout)));
                                                    __Vfunc_aes_core__DOT__gf_mult2__292__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__292__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__292__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                    __Vfunc_aes_core__DOT__gf_mult2__291__x 
                                                        = __Vfunc_aes_core__DOT__gf_mult2__292__Vfuncout;
                                                    __Vfunc_aes_core__DOT__gf_mult2__291__Vfuncout 
                                                        = 
                                                        ((0xfeU 
                                                          & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__291__x) 
                                                             << 1U)) 
                                                         ^ 
                                                         ((0x80U 
                                                           & (IData)(__Vfunc_aes_core__DOT__gf_mult2__291__x))
                                                           ? 0x1bU
                                                           : 0U));
                                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__291__Vfuncout)) 
                                               ^ (IData)(__Vfunc_aes_core__DOT__gf_mult13__290__x));
                                    }(), (IData)(__Vfunc_aes_core__DOT__gf_mult13__290__Vfuncout))) 
                                  ^ ([&]() {
                                    __Vfunc_aes_core__DOT__gf_mult9__294__x 
                                        = (0xffU & 
                                           (vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3 
                                            >> 8U));
                                    __Vfunc_aes_core__DOT__gf_mult9__294__Vfuncout 
                                        = (([&]() {
                                                __Vfunc_aes_core__DOT__gf_mult2__297__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult9__294__x;
                                                __Vfunc_aes_core__DOT__gf_mult2__297__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__297__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__297__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__296__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__297__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__296__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__296__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__296__x))
                                                       ? 0x1bU
                                                       : 0U));
                                                __Vfunc_aes_core__DOT__gf_mult2__295__x 
                                                    = __Vfunc_aes_core__DOT__gf_mult2__296__Vfuncout;
                                                __Vfunc_aes_core__DOT__gf_mult2__295__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__295__x) 
                                                         << 1U)) 
                                                     ^ 
                                                     ((0x80U 
                                                       & (IData)(__Vfunc_aes_core__DOT__gf_mult2__295__x))
                                                       ? 0x1bU
                                                       : 0U));
                                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__295__Vfuncout)) 
                                           ^ (IData)(__Vfunc_aes_core__DOT__gf_mult9__294__x));
                                }(), (IData)(__Vfunc_aes_core__DOT__gf_mult9__294__Vfuncout))) 
                                 ^ ([&]() {
                                __Vfunc_aes_core__DOT__gf_mult14__298__x 
                                    = (0xffU & vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3);
                                __Vfunc_aes_core__DOT__gf_mult2__300__x 
                                    = ((IData)(__Vfunc_aes_core__DOT__gf_mult14__298__x) 
                                       ^ ([&]() {
                                            __Vfunc_aes_core__DOT__gf_mult2__301__x 
                                                = __Vfunc_aes_core__DOT__gf_mult14__298__x;
                                            __Vfunc_aes_core__DOT__gf_mult2__301__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__301__x) 
                                                       << 1U)) 
                                                   ^ 
                                                   ((0x80U 
                                                     & (IData)(__Vfunc_aes_core__DOT__gf_mult2__301__x))
                                                     ? 0x1bU
                                                     : 0U));
                                        }(), (IData)(__Vfunc_aes_core__DOT__gf_mult2__301__Vfuncout)));
                                __Vfunc_aes_core__DOT__gf_mult2__300__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__300__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__300__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult2__299__x 
                                    = __Vfunc_aes_core__DOT__gf_mult2__300__Vfuncout;
                                __Vfunc_aes_core__DOT__gf_mult2__299__Vfuncout 
                                    = ((0xfeU & ((IData)(__Vfunc_aes_core__DOT__gf_mult2__299__x) 
                                                 << 1U)) 
                                       ^ ((0x80U & (IData)(__Vfunc_aes_core__DOT__gf_mult2__299__x))
                                           ? 0x1bU : 0U));
                                __Vfunc_aes_core__DOT__gf_mult14__298__Vfuncout 
                                    = __Vfunc_aes_core__DOT__gf_mult2__299__Vfuncout;
                            }(), (IData)(__Vfunc_aes_core__DOT__gf_mult14__298__Vfuncout))));
                __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[0U] 
                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col3;
                __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[1U] 
                    = vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col2;
                __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1))));
                __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[0U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[0U];
                __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[1U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[1U];
                __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[2U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[2U];
                __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[3U] 
                    = __Vfunc_aes_core__DOT__inv_mix_columns__60__Vfuncout[3U];
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00 
                    = (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[3U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[3U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[3U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[3U]);
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01 
                    = (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[2U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[2U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[2U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[2U]);
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02 
                    = (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[1U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[1U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[1U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[1U]);
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03 
                    = (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[0U] 
                       >> 0x18U);
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[0U] 
                                >> 0x10U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23 
                    = (0xffU & (__Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[0U] 
                                >> 8U));
                vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33 
                    = (0xffU & __Vfunc_aes_core__DOT__inv_shift_rows__59__state_in[0U]);
                __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[0U] 
                    = (IData)((((QData)((IData)(((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30)))))));
                __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[1U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30)))))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[2U] 
                    = (IData)((((QData)((IData)(((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01) 
                                                               << 0x18U) 
                                                              | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10) 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32)))))));
                __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[3U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32)))))) 
                               >> 0x20U));
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[0U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[0U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[1U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[1U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[2U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[2U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[3U] 
                    = __Vfunc_aes_core__DOT__inv_shift_rows__59__Vfuncout[3U];
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[0U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[0U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[0U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[0U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[0U])]));
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[1U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[1U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[1U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[1U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[1U])]));
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[2U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[2U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[2U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[2U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[2U])]));
                __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[3U] 
                    = (((vlSelfRef.aes_core__DOT__inv_sbox
                         [(__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[3U] 
                           >> 0x18U)] << 0x18U) | (
                                                   vlSelfRef.aes_core__DOT__inv_sbox
                                                   [
                                                   (0xffU 
                                                    & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[3U] 
                                                       >> 0x10U))] 
                                                   << 0x10U)) 
                       | ((vlSelfRef.aes_core__DOT__inv_sbox
                           [(0xffU & (__Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[3U] 
                                      >> 8U))] << 8U) 
                          | vlSelfRef.aes_core__DOT__inv_sbox
                          [(0xffU & __Vfunc_aes_core__DOT__inv_sub_bytes__58__state_in[3U])]));
                __Vdly__aes_core__DOT__state_reg[0U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[0U];
                __Vdly__aes_core__DOT__state_reg[1U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[1U];
                __Vdly__aes_core__DOT__state_reg[2U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[2U];
                __Vdly__aes_core__DOT__state_reg[3U] 
                    = __Vfunc_aes_core__DOT__inv_sub_bytes__58__Vfuncout[3U];
                __Vdly__aes_core__DOT__round_cnt = 
                    (0xfU & ((IData)(vlSelfRef.aes_core__DOT__round_cnt) 
                             - (IData)(1U)));
            }
        } else if ((1U & (IData)(vlSelfRef.aes_core__DOT__state))) {
            vlSelfRef.busy = 1U;
            VL_COND_WIWW(128, __Vdly__aes_core__DOT__state_reg, (IData)(vlSelfRef.encrypt), 
                         ([&]() {
                        __Vfunc_aes_core__DOT__add_round_key__302__round_key[0U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][0U];
                        __Vfunc_aes_core__DOT__add_round_key__302__round_key[1U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][1U];
                        __Vfunc_aes_core__DOT__add_round_key__302__round_key[2U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][2U];
                        __Vfunc_aes_core__DOT__add_round_key__302__round_key[3U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0U][3U];
                        __Vfunc_aes_core__DOT__add_round_key__302__state_in[0U] 
                            = vlSelfRef.data_in[0U];
                        __Vfunc_aes_core__DOT__add_round_key__302__state_in[1U] 
                            = vlSelfRef.data_in[1U];
                        __Vfunc_aes_core__DOT__add_round_key__302__state_in[2U] 
                            = vlSelfRef.data_in[2U];
                        __Vfunc_aes_core__DOT__add_round_key__302__state_in[3U] 
                            = vlSelfRef.data_in[3U];
                        __Vfunc_aes_core__DOT__add_round_key__302__Vfuncout[0U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__302__state_in[0U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__302__round_key[0U]);
                        __Vfunc_aes_core__DOT__add_round_key__302__Vfuncout[1U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__302__state_in[1U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__302__round_key[1U]);
                        __Vfunc_aes_core__DOT__add_round_key__302__Vfuncout[2U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__302__state_in[2U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__302__round_key[2U]);
                        __Vfunc_aes_core__DOT__add_round_key__302__Vfuncout[3U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__302__state_in[3U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__302__round_key[3U]);
                    }(), __Vfunc_aes_core__DOT__add_round_key__302__Vfuncout), 
                         ([&]() {
                        __Vfunc_aes_core__DOT__add_round_key__303__round_key[0U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][0U];
                        __Vfunc_aes_core__DOT__add_round_key__303__round_key[1U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][1U];
                        __Vfunc_aes_core__DOT__add_round_key__303__round_key[2U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][2U];
                        __Vfunc_aes_core__DOT__add_round_key__303__round_key[3U] 
                            = vlSelfRef.aes_core__DOT__round_keys
                            [0xaU][3U];
                        __Vfunc_aes_core__DOT__add_round_key__303__state_in[0U] 
                            = vlSelfRef.data_in[0U];
                        __Vfunc_aes_core__DOT__add_round_key__303__state_in[1U] 
                            = vlSelfRef.data_in[1U];
                        __Vfunc_aes_core__DOT__add_round_key__303__state_in[2U] 
                            = vlSelfRef.data_in[2U];
                        __Vfunc_aes_core__DOT__add_round_key__303__state_in[3U] 
                            = vlSelfRef.data_in[3U];
                        __Vfunc_aes_core__DOT__add_round_key__303__Vfuncout[0U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__303__state_in[0U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__303__round_key[0U]);
                        __Vfunc_aes_core__DOT__add_round_key__303__Vfuncout[1U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__303__state_in[1U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__303__round_key[1U]);
                        __Vfunc_aes_core__DOT__add_round_key__303__Vfuncout[2U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__303__state_in[2U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__303__round_key[2U]);
                        __Vfunc_aes_core__DOT__add_round_key__303__Vfuncout[3U] 
                            = (__Vfunc_aes_core__DOT__add_round_key__303__state_in[3U] 
                               ^ __Vfunc_aes_core__DOT__add_round_key__303__round_key[3U]);
                    }(), __Vfunc_aes_core__DOT__add_round_key__303__Vfuncout));
            __Vdly__aes_core__DOT__round_cnt = ((IData)(vlSelfRef.encrypt)
                                                 ? 1U
                                                 : 9U);
        } else {
            vlSelfRef.done = 0U;
            vlSelfRef.busy = 0U;
            __Vdly__aes_core__DOT__round_cnt = 0U;
        }
        vlSelfRef.aes_core__DOT__state = vlSelfRef.aes_core__DOT__next_state;
    } else {
        vlSelfRef.aes_core__DOT__state = 0U;
        __Vdly__aes_core__DOT__round_cnt = 0U;
        __Vdly__aes_core__DOT__state_reg[0U] = 0U;
        __Vdly__aes_core__DOT__state_reg[1U] = 0U;
        __Vdly__aes_core__DOT__state_reg[2U] = 0U;
        __Vdly__aes_core__DOT__state_reg[3U] = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.busy = 0U;
        vlSelfRef.data_out[0U] = 0U;
        vlSelfRef.data_out[1U] = 0U;
        vlSelfRef.data_out[2U] = 0U;
        vlSelfRef.data_out[3U] = 0U;
    }
    vlSelfRef.aes_core__DOT__state_reg[0U] = __Vdly__aes_core__DOT__state_reg[0U];
    vlSelfRef.aes_core__DOT__state_reg[1U] = __Vdly__aes_core__DOT__state_reg[1U];
    vlSelfRef.aes_core__DOT__state_reg[2U] = __Vdly__aes_core__DOT__state_reg[2U];
    vlSelfRef.aes_core__DOT__state_reg[3U] = __Vdly__aes_core__DOT__state_reg[3U];
    vlSelfRef.aes_core__DOT__round_cnt = __Vdly__aes_core__DOT__round_cnt;
    __Vtableidx1 = ((((IData)(vlSelfRef.start) << 8U) 
                     | ((IData)(vlSelfRef.aes_core__DOT__round_cnt) 
                        << 4U)) | (((IData)(vlSelfRef.encrypt) 
                                    << 3U) | (IData)(vlSelfRef.aes_core__DOT__state)));
    vlSelfRef.aes_core__DOT__next_state = Vaes_core__ConstPool__TABLE_hf4fd3c6c_0
        [__Vtableidx1];
}

void Vaes_core___024root___eval_triggers__act(Vaes_core___024root* vlSelf);

bool Vaes_core___024root___eval_phase__act(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_phase__act\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaes_core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaes_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vaes_core___024root___eval_phase__nba(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_phase__nba\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaes_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__ico(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__nba(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__act(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_core___024root___eval(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vaes_core___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("aes_core.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vaes_core___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaes_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("aes_core.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaes_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("aes_core.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaes_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaes_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaes_core___024root___eval_debug_assertions(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_debug_assertions\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.encrypt & 0xfeU)))) {
        Verilated::overWidthError("encrypt");}
}
#endif  // VL_DEBUG
