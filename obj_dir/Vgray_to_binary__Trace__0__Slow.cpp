// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgray_to_binary__Syms.h"


VL_ATTR_COLD void Vgray_to_binary___024root__trace_init_sub__TOP__0(Vgray_to_binary___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"gray_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"binary_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gray_to_binary", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"gray_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"binary_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vgray_to_binary___024root__trace_init_top(Vgray_to_binary___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root__trace_init_top\n"); );
    // Body
    Vgray_to_binary___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vgray_to_binary___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vgray_to_binary___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vgray_to_binary___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vgray_to_binary___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vgray_to_binary___024root__trace_register(Vgray_to_binary___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vgray_to_binary___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vgray_to_binary___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vgray_to_binary___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vgray_to_binary___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vgray_to_binary___024root__trace_const_0_sub_0(Vgray_to_binary___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vgray_to_binary___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root__trace_const_0\n"); );
    // Init
    Vgray_to_binary___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgray_to_binary___024root*>(voidSelf);
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vgray_to_binary___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vgray_to_binary___024root__trace_const_0_sub_0(Vgray_to_binary___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+3,(4U),32);
    bufp->fullIData(oldp+4,(0xffffffffU),32);
}

VL_ATTR_COLD void Vgray_to_binary___024root__trace_full_0_sub_0(Vgray_to_binary___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vgray_to_binary___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root__trace_full_0\n"); );
    // Init
    Vgray_to_binary___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgray_to_binary___024root*>(voidSelf);
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vgray_to_binary___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vgray_to_binary___024root__trace_full_0_sub_0(Vgray_to_binary___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->gray_in),4);
    bufp->fullCData(oldp+2,(vlSelf->binary_out),4);
}
