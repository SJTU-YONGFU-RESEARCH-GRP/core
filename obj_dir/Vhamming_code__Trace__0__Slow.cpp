// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhamming_code__Syms.h"


VL_ATTR_COLD void Vhamming_code___024root__trace_init_sub__TOP__0(Vhamming_code___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"encoded_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,0,"received_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"single_bit_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"corrected_code",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("hamming_code", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"encoded_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,0,"received_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"single_bit_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"corrected_code",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+7,0,"p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"syndrome",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,0,"error_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhamming_code___024root__trace_init_top(Vhamming_code___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_init_top\n"); );
    // Body
    Vhamming_code___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhamming_code___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhamming_code___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhamming_code___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhamming_code___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhamming_code___024root__trace_register(Vhamming_code___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vhamming_code___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vhamming_code___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vhamming_code___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vhamming_code___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhamming_code___024root__trace_const_0_sub_0(Vhamming_code___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhamming_code___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_const_0\n"); );
    // Init
    Vhamming_code___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_code___024root*>(voidSelf);
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhamming_code___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhamming_code___024root__trace_const_0_sub_0(Vhamming_code___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+15,(4U),32);
}

VL_ATTR_COLD void Vhamming_code___024root__trace_full_0_sub_0(Vhamming_code___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhamming_code___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_full_0\n"); );
    // Init
    Vhamming_code___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_code___024root*>(voidSelf);
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhamming_code___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhamming_code___024root__trace_full_0_sub_0(Vhamming_code___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->data_in),4);
    bufp->fullCData(oldp+2,(vlSelf->encoded_out),7);
    bufp->fullCData(oldp+3,(vlSelf->received_in),7);
    bufp->fullCData(oldp+4,(vlSelf->data_out),4);
    bufp->fullBit(oldp+5,(vlSelf->single_bit_error));
    bufp->fullCData(oldp+6,(vlSelf->corrected_code),7);
    bufp->fullBit(oldp+7,((1U & VL_REDXOR_4((0xbU & (IData)(vlSelf->data_in))))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->data_in) 
                                 ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0)))));
    bufp->fullBit(oldp+9,((1U & (((IData)(vlSelf->data_in) 
                                  >> 1U) ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_ha636b47d__0)))));
    bufp->fullBit(oldp+10,((1U & VL_REDXOR_8((0x55U 
                                              & (IData)(vlSelf->received_in))))));
    bufp->fullBit(oldp+11,((1U & (VL_REDXOR_4((6U & (IData)(vlSelf->received_in))) 
                                  ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0)))));
    bufp->fullBit(oldp+12,((1U & (VL_REDXOR_8((0x18U 
                                               & (IData)(vlSelf->received_in))) 
                                  ^ (IData)(vlSelf->hamming_code__DOT____VdfgTmp_h3624b32f__0)))));
    bufp->fullCData(oldp+13,(vlSelf->hamming_code__DOT__syndrome),3);
    bufp->fullCData(oldp+14,(((1U == (IData)(vlSelf->hamming_code__DOT__syndrome))
                               ? 1U : ((2U == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                        ? 2U : ((3U 
                                                 == (IData)(vlSelf->hamming_code__DOT__syndrome))
                                                 ? 4U
                                                 : 
                                                ((4U 
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
