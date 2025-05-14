// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_priority_encoder__Syms.h"


VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_init_sub__TOP__0(Vconfigurable_priority_encoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"grant_index",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("configurable_priority_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"INPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"grant_index",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_init_top(Vconfigurable_priority_encoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root__trace_init_top\n"); );
    // Body
    Vconfigurable_priority_encoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_priority_encoder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_priority_encoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_register(Vconfigurable_priority_encoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vconfigurable_priority_encoder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconfigurable_priority_encoder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconfigurable_priority_encoder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconfigurable_priority_encoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_const_0_sub_0(Vconfigurable_priority_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root__trace_const_0\n"); );
    // Init
    Vconfigurable_priority_encoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_priority_encoder___024root*>(voidSelf);
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_priority_encoder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_const_0_sub_0(Vconfigurable_priority_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+5,(8U),32);
    bufp->fullIData(oldp+6,(3U),32);
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_full_0_sub_0(Vconfigurable_priority_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root__trace_full_0\n"); );
    // Init
    Vconfigurable_priority_encoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_priority_encoder___024root*>(voidSelf);
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_priority_encoder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_priority_encoder___024root__trace_full_0_sub_0(Vconfigurable_priority_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->request),8);
    bufp->fullCData(oldp+2,(vlSelf->grant_index),3);
    bufp->fullBit(oldp+3,(vlSelf->valid));
    bufp->fullIData(oldp+4,(vlSelf->configurable_priority_encoder__DOT__i),32);
}
