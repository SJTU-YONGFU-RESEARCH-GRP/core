// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_core.h for the primary calling header

#include "Vaes_core__pch.h"
#include "Vaes_core___024root.h"

VL_ATTR_COLD void Vaes_core___024root___eval_static(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_static\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__aes_core__DOT__w__0 
        = vlSelfRef.aes_core__DOT__w;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_core__DOT__w__1 
        = vlSelfRef.aes_core__DOT__w;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vaes_core___024root___eval_initial__TOP(Vaes_core___024root* vlSelf);
VL_ATTR_COLD void Vaes_core___024root____Vm_traceActivitySetAll(Vaes_core___024root* vlSelf);

VL_ATTR_COLD void Vaes_core___024root___eval_initial(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_initial\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_core___024root___eval_initial__TOP(vlSelf);
    Vaes_core___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vaes_core___024root___eval_initial__TOP(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_initial__TOP\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_core__DOT__sbox[0U] = 0x63U;
    vlSelfRef.aes_core__DOT__sbox[1U] = 0x7cU;
    vlSelfRef.aes_core__DOT__sbox[2U] = 0x77U;
    vlSelfRef.aes_core__DOT__sbox[3U] = 0x7bU;
    vlSelfRef.aes_core__DOT__sbox[4U] = 0xf2U;
    vlSelfRef.aes_core__DOT__sbox[5U] = 0x6bU;
    vlSelfRef.aes_core__DOT__sbox[6U] = 0x6fU;
    vlSelfRef.aes_core__DOT__sbox[7U] = 0xc5U;
    vlSelfRef.aes_core__DOT__sbox[8U] = 0x30U;
    vlSelfRef.aes_core__DOT__sbox[9U] = 1U;
    vlSelfRef.aes_core__DOT__sbox[0xaU] = 0x67U;
    vlSelfRef.aes_core__DOT__sbox[0xbU] = 0x2bU;
    vlSelfRef.aes_core__DOT__sbox[0xcU] = 0xfeU;
    vlSelfRef.aes_core__DOT__sbox[0xdU] = 0xd7U;
    vlSelfRef.aes_core__DOT__sbox[0xeU] = 0xabU;
    vlSelfRef.aes_core__DOT__sbox[0xfU] = 0x76U;
    vlSelfRef.aes_core__DOT__sbox[0x10U] = 0xcaU;
    vlSelfRef.aes_core__DOT__sbox[0x11U] = 0x82U;
    vlSelfRef.aes_core__DOT__sbox[0x12U] = 0xc9U;
    vlSelfRef.aes_core__DOT__sbox[0x13U] = 0x7dU;
    vlSelfRef.aes_core__DOT__sbox[0x14U] = 0xfaU;
    vlSelfRef.aes_core__DOT__sbox[0x15U] = 0x59U;
    vlSelfRef.aes_core__DOT__sbox[0x16U] = 0x47U;
    vlSelfRef.aes_core__DOT__sbox[0x17U] = 0xf0U;
    vlSelfRef.aes_core__DOT__sbox[0x18U] = 0xadU;
    vlSelfRef.aes_core__DOT__sbox[0x19U] = 0xd4U;
    vlSelfRef.aes_core__DOT__sbox[0x1aU] = 0xa2U;
    vlSelfRef.aes_core__DOT__sbox[0x1bU] = 0xafU;
    vlSelfRef.aes_core__DOT__sbox[0x1cU] = 0x9cU;
    vlSelfRef.aes_core__DOT__sbox[0x1dU] = 0xa4U;
    vlSelfRef.aes_core__DOT__sbox[0x1eU] = 0x72U;
    vlSelfRef.aes_core__DOT__sbox[0x1fU] = 0xc0U;
    vlSelfRef.aes_core__DOT__sbox[0x20U] = 0xb7U;
    vlSelfRef.aes_core__DOT__sbox[0x21U] = 0xfdU;
    vlSelfRef.aes_core__DOT__sbox[0x22U] = 0x93U;
    vlSelfRef.aes_core__DOT__sbox[0x23U] = 0x26U;
    vlSelfRef.aes_core__DOT__sbox[0x24U] = 0x36U;
    vlSelfRef.aes_core__DOT__sbox[0x25U] = 0x3fU;
    vlSelfRef.aes_core__DOT__sbox[0x26U] = 0xf7U;
    vlSelfRef.aes_core__DOT__sbox[0x27U] = 0xccU;
    vlSelfRef.aes_core__DOT__sbox[0x28U] = 0x34U;
    vlSelfRef.aes_core__DOT__sbox[0x29U] = 0xa5U;
    vlSelfRef.aes_core__DOT__sbox[0x2aU] = 0xe5U;
    vlSelfRef.aes_core__DOT__sbox[0x2bU] = 0xf1U;
    vlSelfRef.aes_core__DOT__sbox[0x2cU] = 0x71U;
    vlSelfRef.aes_core__DOT__sbox[0x2dU] = 0xd8U;
    vlSelfRef.aes_core__DOT__sbox[0x2eU] = 0x31U;
    vlSelfRef.aes_core__DOT__sbox[0x2fU] = 0x15U;
    vlSelfRef.aes_core__DOT__sbox[0x30U] = 4U;
    vlSelfRef.aes_core__DOT__sbox[0x31U] = 0xc7U;
    vlSelfRef.aes_core__DOT__sbox[0x32U] = 0x23U;
    vlSelfRef.aes_core__DOT__sbox[0x33U] = 0xc3U;
    vlSelfRef.aes_core__DOT__sbox[0x34U] = 0x18U;
    vlSelfRef.aes_core__DOT__sbox[0x35U] = 0x96U;
    vlSelfRef.aes_core__DOT__sbox[0x36U] = 5U;
    vlSelfRef.aes_core__DOT__sbox[0x37U] = 0x9aU;
    vlSelfRef.aes_core__DOT__sbox[0x38U] = 7U;
    vlSelfRef.aes_core__DOT__sbox[0x39U] = 0x12U;
    vlSelfRef.aes_core__DOT__sbox[0x3aU] = 0x80U;
    vlSelfRef.aes_core__DOT__sbox[0x3bU] = 0xe2U;
    vlSelfRef.aes_core__DOT__sbox[0x3cU] = 0xebU;
    vlSelfRef.aes_core__DOT__sbox[0x3dU] = 0x27U;
    vlSelfRef.aes_core__DOT__sbox[0x3eU] = 0xb2U;
    vlSelfRef.aes_core__DOT__sbox[0x3fU] = 0x75U;
    vlSelfRef.aes_core__DOT__sbox[0x40U] = 9U;
    vlSelfRef.aes_core__DOT__sbox[0x41U] = 0x83U;
    vlSelfRef.aes_core__DOT__sbox[0x42U] = 0x2cU;
    vlSelfRef.aes_core__DOT__sbox[0x43U] = 0x1aU;
    vlSelfRef.aes_core__DOT__sbox[0x44U] = 0x1bU;
    vlSelfRef.aes_core__DOT__sbox[0x45U] = 0x6eU;
    vlSelfRef.aes_core__DOT__sbox[0x46U] = 0x5aU;
    vlSelfRef.aes_core__DOT__sbox[0x47U] = 0xa0U;
    vlSelfRef.aes_core__DOT__sbox[0x48U] = 0x52U;
    vlSelfRef.aes_core__DOT__sbox[0x49U] = 0x3bU;
    vlSelfRef.aes_core__DOT__sbox[0x4aU] = 0xd6U;
    vlSelfRef.aes_core__DOT__sbox[0x4bU] = 0xb3U;
    vlSelfRef.aes_core__DOT__sbox[0x4cU] = 0x29U;
    vlSelfRef.aes_core__DOT__sbox[0x4dU] = 0xe3U;
    vlSelfRef.aes_core__DOT__sbox[0x4eU] = 0x2fU;
    vlSelfRef.aes_core__DOT__sbox[0x4fU] = 0x84U;
    vlSelfRef.aes_core__DOT__sbox[0x50U] = 0x53U;
    vlSelfRef.aes_core__DOT__sbox[0x51U] = 0xd1U;
    vlSelfRef.aes_core__DOT__sbox[0x52U] = 0U;
    vlSelfRef.aes_core__DOT__sbox[0x53U] = 0xedU;
    vlSelfRef.aes_core__DOT__sbox[0x54U] = 0x20U;
    vlSelfRef.aes_core__DOT__sbox[0x55U] = 0xfcU;
    vlSelfRef.aes_core__DOT__sbox[0x56U] = 0xb1U;
    vlSelfRef.aes_core__DOT__sbox[0x57U] = 0x5bU;
    vlSelfRef.aes_core__DOT__sbox[0x58U] = 0x6aU;
    vlSelfRef.aes_core__DOT__sbox[0x59U] = 0xcbU;
    vlSelfRef.aes_core__DOT__sbox[0x5aU] = 0xbeU;
    vlSelfRef.aes_core__DOT__sbox[0x5bU] = 0x39U;
    vlSelfRef.aes_core__DOT__sbox[0x5cU] = 0x4aU;
    vlSelfRef.aes_core__DOT__sbox[0x5dU] = 0x4cU;
    vlSelfRef.aes_core__DOT__sbox[0x5eU] = 0x58U;
    vlSelfRef.aes_core__DOT__sbox[0x5fU] = 0xcfU;
    vlSelfRef.aes_core__DOT__sbox[0x60U] = 0xd0U;
    vlSelfRef.aes_core__DOT__sbox[0x61U] = 0xefU;
    vlSelfRef.aes_core__DOT__sbox[0x62U] = 0xaaU;
    vlSelfRef.aes_core__DOT__sbox[0x63U] = 0xfbU;
    vlSelfRef.aes_core__DOT__sbox[0x64U] = 0x43U;
    vlSelfRef.aes_core__DOT__sbox[0x65U] = 0x4dU;
    vlSelfRef.aes_core__DOT__sbox[0x66U] = 0x33U;
    vlSelfRef.aes_core__DOT__sbox[0x67U] = 0x85U;
    vlSelfRef.aes_core__DOT__sbox[0x68U] = 0x45U;
    vlSelfRef.aes_core__DOT__sbox[0x69U] = 0xf9U;
    vlSelfRef.aes_core__DOT__sbox[0x6aU] = 2U;
    vlSelfRef.aes_core__DOT__sbox[0x6bU] = 0x7fU;
    vlSelfRef.aes_core__DOT__sbox[0x6cU] = 0x50U;
    vlSelfRef.aes_core__DOT__sbox[0x6dU] = 0x3cU;
    vlSelfRef.aes_core__DOT__sbox[0x6eU] = 0x9fU;
    vlSelfRef.aes_core__DOT__sbox[0x6fU] = 0xa8U;
    vlSelfRef.aes_core__DOT__sbox[0x70U] = 0x51U;
    vlSelfRef.aes_core__DOT__sbox[0x71U] = 0xa3U;
    vlSelfRef.aes_core__DOT__sbox[0x72U] = 0x40U;
    vlSelfRef.aes_core__DOT__sbox[0x73U] = 0x8fU;
    vlSelfRef.aes_core__DOT__sbox[0x74U] = 0x92U;
    vlSelfRef.aes_core__DOT__sbox[0x75U] = 0x9dU;
    vlSelfRef.aes_core__DOT__sbox[0x76U] = 0x38U;
    vlSelfRef.aes_core__DOT__sbox[0x77U] = 0xf5U;
    vlSelfRef.aes_core__DOT__sbox[0x78U] = 0xbcU;
    vlSelfRef.aes_core__DOT__sbox[0x79U] = 0xb6U;
    vlSelfRef.aes_core__DOT__sbox[0x7aU] = 0xdaU;
    vlSelfRef.aes_core__DOT__sbox[0x7bU] = 0x21U;
    vlSelfRef.aes_core__DOT__sbox[0x7cU] = 0x10U;
    vlSelfRef.aes_core__DOT__sbox[0x7dU] = 0xffU;
    vlSelfRef.aes_core__DOT__sbox[0x7eU] = 0xf3U;
    vlSelfRef.aes_core__DOT__sbox[0x7fU] = 0xd2U;
    vlSelfRef.aes_core__DOT__sbox[0x80U] = 0xcdU;
    vlSelfRef.aes_core__DOT__sbox[0x81U] = 0xcU;
    vlSelfRef.aes_core__DOT__sbox[0x82U] = 0x13U;
    vlSelfRef.aes_core__DOT__sbox[0x83U] = 0xecU;
    vlSelfRef.aes_core__DOT__sbox[0x84U] = 0x5fU;
    vlSelfRef.aes_core__DOT__sbox[0x85U] = 0x97U;
    vlSelfRef.aes_core__DOT__sbox[0x86U] = 0x44U;
    vlSelfRef.aes_core__DOT__sbox[0x87U] = 0x17U;
    vlSelfRef.aes_core__DOT__sbox[0x88U] = 0xc4U;
    vlSelfRef.aes_core__DOT__sbox[0x89U] = 0xa7U;
    vlSelfRef.aes_core__DOT__sbox[0x8aU] = 0x7eU;
    vlSelfRef.aes_core__DOT__sbox[0x8bU] = 0x3dU;
    vlSelfRef.aes_core__DOT__sbox[0x8cU] = 0x64U;
    vlSelfRef.aes_core__DOT__sbox[0x8dU] = 0x5dU;
    vlSelfRef.aes_core__DOT__sbox[0x8eU] = 0x19U;
    vlSelfRef.aes_core__DOT__sbox[0x8fU] = 0x73U;
    vlSelfRef.aes_core__DOT__sbox[0x90U] = 0x60U;
    vlSelfRef.aes_core__DOT__sbox[0x91U] = 0x81U;
    vlSelfRef.aes_core__DOT__sbox[0x92U] = 0x4fU;
    vlSelfRef.aes_core__DOT__sbox[0x93U] = 0xdcU;
    vlSelfRef.aes_core__DOT__sbox[0x94U] = 0x22U;
    vlSelfRef.aes_core__DOT__sbox[0x95U] = 0x2aU;
    vlSelfRef.aes_core__DOT__sbox[0x96U] = 0x90U;
    vlSelfRef.aes_core__DOT__sbox[0x97U] = 0x88U;
    vlSelfRef.aes_core__DOT__sbox[0x98U] = 0x46U;
    vlSelfRef.aes_core__DOT__sbox[0x99U] = 0xeeU;
    vlSelfRef.aes_core__DOT__sbox[0x9aU] = 0xb8U;
    vlSelfRef.aes_core__DOT__sbox[0x9bU] = 0x14U;
    vlSelfRef.aes_core__DOT__sbox[0x9cU] = 0xdeU;
    vlSelfRef.aes_core__DOT__sbox[0x9dU] = 0x5eU;
    vlSelfRef.aes_core__DOT__sbox[0x9eU] = 0xbU;
    vlSelfRef.aes_core__DOT__sbox[0x9fU] = 0xdbU;
    vlSelfRef.aes_core__DOT__sbox[0xa0U] = 0xe0U;
    vlSelfRef.aes_core__DOT__sbox[0xa1U] = 0x32U;
    vlSelfRef.aes_core__DOT__sbox[0xa2U] = 0x3aU;
    vlSelfRef.aes_core__DOT__sbox[0xa3U] = 0xaU;
    vlSelfRef.aes_core__DOT__sbox[0xa4U] = 0x49U;
    vlSelfRef.aes_core__DOT__sbox[0xa5U] = 6U;
    vlSelfRef.aes_core__DOT__sbox[0xa6U] = 0x24U;
    vlSelfRef.aes_core__DOT__sbox[0xa7U] = 0x5cU;
    vlSelfRef.aes_core__DOT__sbox[0xa8U] = 0xc2U;
    vlSelfRef.aes_core__DOT__sbox[0xa9U] = 0xd3U;
    vlSelfRef.aes_core__DOT__sbox[0xaaU] = 0xacU;
    vlSelfRef.aes_core__DOT__sbox[0xabU] = 0x62U;
    vlSelfRef.aes_core__DOT__sbox[0xacU] = 0x91U;
    vlSelfRef.aes_core__DOT__sbox[0xadU] = 0x95U;
    vlSelfRef.aes_core__DOT__sbox[0xaeU] = 0xe4U;
    vlSelfRef.aes_core__DOT__sbox[0xafU] = 0x79U;
    vlSelfRef.aes_core__DOT__sbox[0xb0U] = 0xe7U;
    vlSelfRef.aes_core__DOT__sbox[0xb1U] = 0xc8U;
    vlSelfRef.aes_core__DOT__sbox[0xb2U] = 0x37U;
    vlSelfRef.aes_core__DOT__sbox[0xb3U] = 0x6dU;
    vlSelfRef.aes_core__DOT__sbox[0xb4U] = 0x8dU;
    vlSelfRef.aes_core__DOT__sbox[0xb5U] = 0xd5U;
    vlSelfRef.aes_core__DOT__sbox[0xb6U] = 0x4eU;
    vlSelfRef.aes_core__DOT__sbox[0xb7U] = 0xa9U;
    vlSelfRef.aes_core__DOT__sbox[0xb8U] = 0x6cU;
    vlSelfRef.aes_core__DOT__sbox[0xb9U] = 0x56U;
    vlSelfRef.aes_core__DOT__sbox[0xbaU] = 0xf4U;
    vlSelfRef.aes_core__DOT__sbox[0xbbU] = 0xeaU;
    vlSelfRef.aes_core__DOT__sbox[0xbcU] = 0x65U;
    vlSelfRef.aes_core__DOT__sbox[0xbdU] = 0x7aU;
    vlSelfRef.aes_core__DOT__sbox[0xbeU] = 0xaeU;
    vlSelfRef.aes_core__DOT__sbox[0xbfU] = 8U;
    vlSelfRef.aes_core__DOT__sbox[0xc0U] = 0xbaU;
    vlSelfRef.aes_core__DOT__sbox[0xc1U] = 0x78U;
    vlSelfRef.aes_core__DOT__sbox[0xc2U] = 0x25U;
    vlSelfRef.aes_core__DOT__sbox[0xc3U] = 0x2eU;
    vlSelfRef.aes_core__DOT__sbox[0xc4U] = 0x1cU;
    vlSelfRef.aes_core__DOT__sbox[0xc5U] = 0xa6U;
    vlSelfRef.aes_core__DOT__sbox[0xc6U] = 0xb4U;
    vlSelfRef.aes_core__DOT__sbox[0xc7U] = 0xc6U;
    vlSelfRef.aes_core__DOT__sbox[0xc8U] = 0xe8U;
    vlSelfRef.aes_core__DOT__sbox[0xc9U] = 0xddU;
    vlSelfRef.aes_core__DOT__sbox[0xcaU] = 0x74U;
    vlSelfRef.aes_core__DOT__sbox[0xcbU] = 0x1fU;
    vlSelfRef.aes_core__DOT__sbox[0xccU] = 0x4bU;
    vlSelfRef.aes_core__DOT__sbox[0xcdU] = 0xbdU;
    vlSelfRef.aes_core__DOT__sbox[0xceU] = 0x8bU;
    vlSelfRef.aes_core__DOT__sbox[0xcfU] = 0x8aU;
    vlSelfRef.aes_core__DOT__sbox[0xd0U] = 0x70U;
    vlSelfRef.aes_core__DOT__sbox[0xd1U] = 0x3eU;
    vlSelfRef.aes_core__DOT__sbox[0xd2U] = 0xb5U;
    vlSelfRef.aes_core__DOT__sbox[0xd3U] = 0x66U;
    vlSelfRef.aes_core__DOT__sbox[0xd4U] = 0x48U;
    vlSelfRef.aes_core__DOT__sbox[0xd5U] = 3U;
    vlSelfRef.aes_core__DOT__sbox[0xd6U] = 0xf6U;
    vlSelfRef.aes_core__DOT__sbox[0xd7U] = 0xeU;
    vlSelfRef.aes_core__DOT__sbox[0xd8U] = 0x61U;
    vlSelfRef.aes_core__DOT__sbox[0xd9U] = 0x35U;
    vlSelfRef.aes_core__DOT__sbox[0xdaU] = 0x57U;
    vlSelfRef.aes_core__DOT__sbox[0xdbU] = 0xb9U;
    vlSelfRef.aes_core__DOT__sbox[0xdcU] = 0x86U;
    vlSelfRef.aes_core__DOT__sbox[0xddU] = 0xc1U;
    vlSelfRef.aes_core__DOT__sbox[0xdeU] = 0x1dU;
    vlSelfRef.aes_core__DOT__sbox[0xdfU] = 0x9eU;
    vlSelfRef.aes_core__DOT__sbox[0xe0U] = 0xe1U;
    vlSelfRef.aes_core__DOT__sbox[0xe1U] = 0xf8U;
    vlSelfRef.aes_core__DOT__sbox[0xe2U] = 0x98U;
    vlSelfRef.aes_core__DOT__sbox[0xe3U] = 0x11U;
    vlSelfRef.aes_core__DOT__sbox[0xe4U] = 0x69U;
    vlSelfRef.aes_core__DOT__sbox[0xe5U] = 0xd9U;
    vlSelfRef.aes_core__DOT__sbox[0xe6U] = 0x8eU;
    vlSelfRef.aes_core__DOT__sbox[0xe7U] = 0x94U;
    vlSelfRef.aes_core__DOT__sbox[0xe8U] = 0x9bU;
    vlSelfRef.aes_core__DOT__sbox[0xe9U] = 0x1eU;
    vlSelfRef.aes_core__DOT__sbox[0xeaU] = 0x87U;
    vlSelfRef.aes_core__DOT__sbox[0xebU] = 0xe9U;
    vlSelfRef.aes_core__DOT__sbox[0xecU] = 0xceU;
    vlSelfRef.aes_core__DOT__sbox[0xedU] = 0x55U;
    vlSelfRef.aes_core__DOT__sbox[0xeeU] = 0x28U;
    vlSelfRef.aes_core__DOT__sbox[0xefU] = 0xdfU;
    vlSelfRef.aes_core__DOT__sbox[0xf0U] = 0x8cU;
    vlSelfRef.aes_core__DOT__sbox[0xf1U] = 0xa1U;
    vlSelfRef.aes_core__DOT__sbox[0xf2U] = 0x89U;
    vlSelfRef.aes_core__DOT__sbox[0xf3U] = 0xdU;
    vlSelfRef.aes_core__DOT__sbox[0xf4U] = 0xbfU;
    vlSelfRef.aes_core__DOT__sbox[0xf5U] = 0xe6U;
    vlSelfRef.aes_core__DOT__sbox[0xf6U] = 0x42U;
    vlSelfRef.aes_core__DOT__sbox[0xf7U] = 0x68U;
    vlSelfRef.aes_core__DOT__sbox[0xf8U] = 0x41U;
    vlSelfRef.aes_core__DOT__sbox[0xf9U] = 0x99U;
    vlSelfRef.aes_core__DOT__sbox[0xfaU] = 0x2dU;
    vlSelfRef.aes_core__DOT__sbox[0xfbU] = 0xfU;
    vlSelfRef.aes_core__DOT__sbox[0xfcU] = 0xb0U;
    vlSelfRef.aes_core__DOT__sbox[0xfdU] = 0x54U;
    vlSelfRef.aes_core__DOT__sbox[0xfeU] = 0xbbU;
    vlSelfRef.aes_core__DOT__sbox[0xffU] = 0x16U;
    vlSelfRef.aes_core__DOT__inv_sbox[0U] = 0x52U;
    vlSelfRef.aes_core__DOT__inv_sbox[1U] = 9U;
    vlSelfRef.aes_core__DOT__inv_sbox[2U] = 0x6aU;
    vlSelfRef.aes_core__DOT__inv_sbox[3U] = 0xd5U;
    vlSelfRef.aes_core__DOT__inv_sbox[4U] = 0x30U;
    vlSelfRef.aes_core__DOT__inv_sbox[5U] = 0x36U;
    vlSelfRef.aes_core__DOT__inv_sbox[6U] = 0xa5U;
    vlSelfRef.aes_core__DOT__inv_sbox[7U] = 0x38U;
    vlSelfRef.aes_core__DOT__inv_sbox[8U] = 0xbfU;
    vlSelfRef.aes_core__DOT__inv_sbox[9U] = 0x40U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xaU] = 0xa3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xbU] = 0x9eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xcU] = 0x81U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xdU] = 0xf3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xeU] = 0xd7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xfU] = 0xfbU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x10U] = 0x7cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x11U] = 0xe3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x12U] = 0x39U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x13U] = 0x82U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x14U] = 0x9bU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x15U] = 0x2fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x16U] = 0xffU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x17U] = 0x87U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x18U] = 0x34U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x19U] = 0x8eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x1aU] = 0x43U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x1bU] = 0x44U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x1cU] = 0xc4U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x1dU] = 0xdeU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x1eU] = 0xe9U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x1fU] = 0xcbU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x20U] = 0x3fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x21U] = 0x94U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x22U] = 0x2eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x23U] = 0x2aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x24U] = 0x74U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x25U] = 0xc2U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x26U] = 0xb4U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x27U] = 0x68U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x28U] = 0xcU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x29U] = 0x64U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x2aU] = 0x5bU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x2bU] = 0x17U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x2cU] = 0x95U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x2dU] = 0xfaU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x2eU] = 0xc3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x2fU] = 0x60U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x30U] = 0xb0U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x31U] = 0x57U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x32U] = 0xabU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x33U] = 0xfU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x34U] = 0x28U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x35U] = 0x6eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x36U] = 0xbaU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x37U] = 1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x38U] = 0xeaU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x39U] = 0xa0U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x3aU] = 0x65U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x3bU] = 0x72U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x3cU] = 0x1eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x3dU] = 0x56U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x3eU] = 0x62U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x3fU] = 0xdU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x40U] = 0x73U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x41U] = 0xe6U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x42U] = 0x85U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x43U] = 0xe8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x44U] = 0x1bU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x45U] = 0xc8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x46U] = 0xaU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x47U] = 0xf7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x48U] = 0x4cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x49U] = 0x10U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x4aU] = 0x5dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x4bU] = 0xccU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x4cU] = 0x5aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x4dU] = 0xa4U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x4eU] = 0x70U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x4fU] = 0x4eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x50U] = 8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x51U] = 0x59U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x52U] = 3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x53U] = 0x3aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x54U] = 0x1cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x55U] = 0x69U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x56U] = 0xd7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x57U] = 0x47U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x58U] = 0xf1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x59U] = 0xadU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x5aU] = 0x6aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x5bU] = 0x71U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x5cU] = 0x78U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x5dU] = 7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x5eU] = 0x2bU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x5fU] = 0x27U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x60U] = 0x5dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x61U] = 0x67U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x62U] = 0x35U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x63U] = 0x51U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x64U] = 0xeU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x65U] = 0x2dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x66U] = 0x75U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x67U] = 0xe4U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x68U] = 0x33U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x69U] = 0xf5U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x6aU] = 0x45U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x6bU] = 0xbeU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x6cU] = 0x55U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x6dU] = 0x8aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x6eU] = 0xecU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x6fU] = 0xb7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x70U] = 0x83U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x71U] = 0x58U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x72U] = 0x8fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x73U] = 0xf8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x74U] = 0x80U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x75U] = 0xaeU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x76U] = 0xdfU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x77U] = 0xedU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x78U] = 0xe1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x79U] = 0xcaU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x7aU] = 0xc1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x7bU] = 0x93U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x7cU] = 0x25U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x7dU] = 0x54U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x7eU] = 6U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x7fU] = 0xbU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x80U] = 0xdaU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x81U] = 0x9cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x82U] = 0x49U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x83U] = 0x9fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x84U] = 0x6bU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x85U] = 0x67U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x86U] = 0x32U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x87U] = 0xa7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x88U] = 0x5fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x89U] = 0xfdU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x8aU] = 0x42U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x8bU] = 0xa8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x8cU] = 0x8cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x8dU] = 0x2cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x8eU] = 0x30U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x8fU] = 0x98U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x90U] = 0x96U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x91U] = 0x4fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x92U] = 0x41U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x93U] = 0xa5U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x94U] = 0xa6U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x95U] = 0x2cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x96U] = 0x29U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x97U] = 0x16U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x98U] = 0x1aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x99U] = 0xe6U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x9aU] = 0x12U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x9bU] = 0x4cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x9cU] = 0x55U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x9dU] = 0x86U;
    vlSelfRef.aes_core__DOT__inv_sbox[0x9eU] = 0x9dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0x9fU] = 0x8dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa0U] = 0x6fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa1U] = 0x31U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa2U] = 0xb1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa3U] = 0x1fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa4U] = 0x84U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa5U] = 0x24U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa6U] = 0x7aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa7U] = 0x43U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa8U] = 0xb8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xa9U] = 0x18U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xaaU] = 0x4eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xabU] = 3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xacU] = 0x2eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xadU] = 0xb3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xaeU] = 0x46U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xafU] = 0x14U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb0U] = 0xc7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb1U] = 0x87U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb2U] = 0xa3U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb3U] = 0x7fU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb4U] = 0x61U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb5U] = 0x8bU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb6U] = 0x13U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb7U] = 0xe0U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb8U] = 0x63U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xb9U] = 0x33U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xbaU] = 0xc9U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xbbU] = 0x99U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xbcU] = 0x97U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xbdU] = 0xc8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xbeU] = 0xe1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xbfU] = 0xf0U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc0U] = 0xb9U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc1U] = 0x8dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc2U] = 0x9aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc3U] = 0x7cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc4U] = 0xa9U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc5U] = 0x7dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc6U] = 0xa1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc7U] = 0x89U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc8U] = 0xa8U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xc9U] = 0x91U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xcaU] = 0x8aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xcbU] = 0xb0U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xccU] = 0x4dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xcdU] = 4U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xceU] = 0xe5U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xcfU] = 0x6cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd0U] = 0x77U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd1U] = 0x15U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd2U] = 0x5cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd3U] = 0xd1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd4U] = 0x21U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd5U] = 0x23U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd6U] = 0x1dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd7U] = 0xc6U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd8U] = 0xf9U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xd9U] = 0xeeU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xdaU] = 0xfcU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xdbU] = 0x53U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xdcU] = 0xc0U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xddU] = 0x9dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xdeU] = 0x9cU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xdfU] = 0xbfU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe0U] = 0xefU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe1U] = 0x26U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe2U] = 0x37U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe3U] = 0x22U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe4U] = 0x79U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe5U] = 0xdcU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe6U] = 0xafU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe7U] = 0x5eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe8U] = 0xa1U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xe9U] = 0xcU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xeaU] = 2U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xebU] = 0x20U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xecU] = 0x50U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xedU] = 0xc7U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xeeU] = 0x92U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xefU] = 2U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf0U] = 0x66U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf1U] = 0x11U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf2U] = 0x39U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf3U] = 0x5eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf4U] = 0x2aU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf5U] = 0xf4U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf6U] = 0xbbU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf7U] = 0x80U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf8U] = 0x8eU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xf9U] = 0xdU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xfaU] = 0x76U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xfbU] = 0xfU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xfcU] = 0x6dU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xfdU] = 0x90U;
    vlSelfRef.aes_core__DOT__inv_sbox[0xfeU] = 0xbcU;
    vlSelfRef.aes_core__DOT__inv_sbox[0xffU] = 0xb6U;
    vlSelfRef.aes_core__DOT__rcon[0U] = 1U;
    vlSelfRef.aes_core__DOT__rcon[1U] = 2U;
    vlSelfRef.aes_core__DOT__rcon[2U] = 4U;
    vlSelfRef.aes_core__DOT__rcon[3U] = 8U;
    vlSelfRef.aes_core__DOT__rcon[4U] = 0x10U;
    vlSelfRef.aes_core__DOT__rcon[5U] = 0x20U;
    vlSelfRef.aes_core__DOT__rcon[6U] = 0x40U;
    vlSelfRef.aes_core__DOT__rcon[7U] = 0x80U;
    vlSelfRef.aes_core__DOT__rcon[8U] = 0x1bU;
    vlSelfRef.aes_core__DOT__rcon[9U] = 0x36U;
    vlSelfRef.aes_core__DOT__rcon[0xaU] = 0U;
}

VL_ATTR_COLD void Vaes_core___024root___eval_final(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_final\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__stl(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaes_core___024root___eval_phase__stl(Vaes_core___024root* vlSelf);

VL_ATTR_COLD void Vaes_core___024root___eval_settle(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_settle\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vaes_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("aes_core.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vaes_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__stl(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___dump_triggers__stl\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] aes_core.w)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes_core___024root___stl_sequent__TOP__0(Vaes_core___024root* vlSelf);
VL_ATTR_COLD void Vaes_core___024root___stl_sequent__TOP__1(Vaes_core___024root* vlSelf);
VL_ATTR_COLD void Vaes_core___024root___stl_comb__TOP__0(Vaes_core___024root* vlSelf);

VL_ATTR_COLD void Vaes_core___024root___eval_stl(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_stl\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vaes_core___024root___stl_sequent__TOP__0(vlSelf);
        Vaes_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vaes_core___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vaes_core___024root___stl_comb__TOP__0(vlSelf);
        Vaes_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 512> Vaes_core__ConstPool__TABLE_hf4fd3c6c_0;

VL_ATTR_COLD void Vaes_core___024root___stl_sequent__TOP__0(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___stl_sequent__TOP__0\n"); );
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
}

VL_ATTR_COLD void Vaes_core___024root___stl_sequent__TOP__1(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___stl_sequent__TOP__1\n"); );
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
}

VL_ATTR_COLD void Vaes_core___024root___stl_comb__TOP__0(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___stl_comb__TOP__0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vaes_core___024root___eval_triggers__stl(Vaes_core___024root* vlSelf);

VL_ATTR_COLD bool Vaes_core___024root___eval_phase__stl(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_phase__stl\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaes_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vaes_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__ico(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___dump_triggers__ico\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__act(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___dump_triggers__act\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] aes_core.w)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__nba(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___dump_triggers__nba\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] aes_core.w)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes_core___024root____Vm_traceActivitySetAll(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root____Vm_traceActivitySetAll\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vaes_core___024root___ctor_var_reset(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___ctor_var_reset\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->encrypt = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->busy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->data_in);
    VL_RAND_RESET_W(128, vlSelf->key);
    VL_RAND_RESET_W(128, vlSelf->data_out);
    vlSelf->aes_core__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->aes_core__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->aes_core__DOT__round_cnt = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->aes_core__DOT__state_reg);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->aes_core__DOT__round_keys[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->aes_core__DOT__sbox[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->aes_core__DOT__inv_sbox[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->aes_core__DOT__rcon[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 44; ++__Vi0) {
        vlSelf->aes_core__DOT__w[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s00 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s01 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s02 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s03 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s10 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s11 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s12 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s13 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s20 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s21 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s22 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s23 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s30 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s31 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s32 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__shift_rows__Vstatic__s33 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s00 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s01 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s02 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s03 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s10 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s11 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s12 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s13 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s20 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s21 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s22 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s23 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s30 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s31 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s32 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__inv_shift_rows__Vstatic__s33 = VL_RAND_RESET_I(8);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__col0 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__col1 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__col2 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__col3 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__new_col0 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__new_col1 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__new_col2 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__mix_columns__Vstatic__new_col3 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__col0 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__col1 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__col2 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__col3 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__new_col0 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__new_col1 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__new_col2 = VL_RAND_RESET_I(32);
    vlSelf->aes_core__DOT__inv_mix_columns__Vstatic__new_col3 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 44; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__aes_core__DOT__w__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 44; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__aes_core__DOT__w__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
