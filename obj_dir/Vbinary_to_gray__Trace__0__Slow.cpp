// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbinary_to_gray__Syms.h"


VL_ATTR_COLD void Vbinary_to_gray___024root__trace_init_sub__TOP__0(Vbinary_to_gray___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"binary_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"gray_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("binary_to_gray", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"binary_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"gray_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_init_top(Vbinary_to_gray___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root__trace_init_top\n"); );
    // Body
    Vbinary_to_gray___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbinary_to_gray___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbinary_to_gray___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbinary_to_gray___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_register(Vbinary_to_gray___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vbinary_to_gray___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbinary_to_gray___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbinary_to_gray___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbinary_to_gray___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_const_0_sub_0(Vbinary_to_gray___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root__trace_const_0\n"); );
    // Init
    Vbinary_to_gray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbinary_to_gray___024root*>(voidSelf);
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbinary_to_gray___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_const_0_sub_0(Vbinary_to_gray___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+3,(4U),32);
}

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_full_0_sub_0(Vbinary_to_gray___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root__trace_full_0\n"); );
    // Init
    Vbinary_to_gray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbinary_to_gray___024root*>(voidSelf);
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbinary_to_gray___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbinary_to_gray___024root__trace_full_0_sub_0(Vbinary_to_gray___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->binary_in),4);
    bufp->fullCData(oldp+2,(vlSelf->gray_out),4);
}
