// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhamming_code__Syms.h"


void Vhamming_code___024root__trace_chg_0_sub_0(Vhamming_code___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhamming_code___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_chg_0\n"); );
    // Init
    Vhamming_code___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_code___024root*>(voidSelf);
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhamming_code___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhamming_code___024root__trace_chg_0_sub_0(Vhamming_code___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->data_in),4);
    bufp->chgCData(oldp+1,(vlSelf->encoded_out),7);
    bufp->chgCData(oldp+2,(vlSelf->received_in),7);
    bufp->chgCData(oldp+3,(vlSelf->data_out),4);
    bufp->chgBit(oldp+4,(vlSelf->single_bit_error));
    bufp->chgCData(oldp+5,(vlSelf->corrected_code),7);
    bufp->chgBit(oldp+6,((1U & VL_REDXOR_4((0xbU & (IData)(vlSelf->data_in))))));
    bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->data_in) 
                                ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0)))));
    bufp->chgBit(oldp+8,((1U & (((IData)(vlSelf->data_in) 
                                 >> 1U) ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0)))));
    bufp->chgBit(oldp+9,((1U & VL_REDXOR_8((0x55U & (IData)(vlSelf->received_in))))));
    bufp->chgBit(oldp+10,((1U & (VL_REDXOR_4((6U & (IData)(vlSelf->received_in))) 
                                 ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0)))));
    bufp->chgBit(oldp+11,((1U & (VL_REDXOR_8((0x18U 
                                              & (IData)(vlSelf->received_in))) 
                                 ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0)))));
    bufp->chgCData(oldp+12,(vlSelf->hamming_code__DOT__syndrome),3);
    bufp->chgCData(oldp+13,(((1U == (IData)(vlSelf->hamming_code__DOT__syndrome))
                              ? 1U : ((2U == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                       ? 2U : ((3U 
                                                == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                     ? 0x10U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                      ? 0x20U
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                       ? 0x40U
                                                       : 0U)))))))),7);
}

void Vhamming_code___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_cleanup\n"); );
    // Init
    Vhamming_code___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_code___024root*>(voidSelf);
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
