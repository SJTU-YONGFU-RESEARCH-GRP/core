// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Varbiter_rr__Syms.h"


VL_ATTR_COLD void Varbiter_rr___024root__trace_init_sub__TOP__0(Varbiter_rr___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"grant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("arbiter_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"NUM_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"PRIORITY_SCHEME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"grant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"priority_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"check_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+5,0,"granted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Varbiter_rr___024root__trace_init_top(Varbiter_rr___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_init_top\n"); );
    // Body
    Varbiter_rr___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Varbiter_rr___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Varbiter_rr___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Varbiter_rr___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Varbiter_rr___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Varbiter_rr___024root__trace_register(Varbiter_rr___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Varbiter_rr___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Varbiter_rr___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Varbiter_rr___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Varbiter_rr___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Varbiter_rr___024root__trace_const_0_sub_0(Varbiter_rr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Varbiter_rr___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_const_0\n"); );
    // Init
    Varbiter_rr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varbiter_rr___024root*>(voidSelf);
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Varbiter_rr___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Varbiter_rr___024root__trace_const_0_sub_0(Varbiter_rr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+11,(4U),32);
    bufp->fullIData(oldp+12,(1U),32);
}

VL_ATTR_COLD void Varbiter_rr___024root__trace_full_0_sub_0(Varbiter_rr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Varbiter_rr___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_full_0\n"); );
    // Init
    Varbiter_rr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varbiter_rr___024root*>(voidSelf);
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Varbiter_rr___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Varbiter_rr___024root__trace_full_0_sub_0(Varbiter_rr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->arbiter_rr__DOT__priority_ptr),2);
    bufp->fullIData(oldp+2,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx),32);
    bufp->fullIData(oldp+4,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__ptr),32);
    bufp->fullBit(oldp+5,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted));
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->rst_n));
    bufp->fullCData(oldp+8,(vlSelf->request),4);
    bufp->fullCData(oldp+9,(vlSelf->grant),4);
    bufp->fullBit(oldp+10,(vlSelf->active));
}
