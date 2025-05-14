// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vleading_zero_counter__Syms.h"


VL_ATTR_COLD void Vleading_zero_counter___024root__trace_init_sub__TOP__0(Vleading_zero_counter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"zero_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+3,0,"valid_input",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("leading_zero_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"zero_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+3,0,"valid_input",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_init_top(Vleading_zero_counter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_init_top\n"); );
    // Body
    Vleading_zero_counter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vleading_zero_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vleading_zero_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vleading_zero_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_register(Vleading_zero_counter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vleading_zero_counter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vleading_zero_counter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vleading_zero_counter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vleading_zero_counter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_const_0_sub_0(Vleading_zero_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_const_0\n"); );
    // Init
    Vleading_zero_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vleading_zero_counter___024root*>(voidSelf);
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vleading_zero_counter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_const_0_sub_0(Vleading_zero_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+5,(0x20U),32);
    bufp->fullIData(oldp+6,(6U),32);
}

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_full_0_sub_0(Vleading_zero_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_full_0\n"); );
    // Init
    Vleading_zero_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vleading_zero_counter___024root*>(voidSelf);
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vleading_zero_counter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vleading_zero_counter___024root__trace_full_0_sub_0(Vleading_zero_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->data_in),32);
    bufp->fullCData(oldp+2,(vlSelf->zero_count),6);
    bufp->fullBit(oldp+3,(vlSelf->valid_input));
    bufp->fullIData(oldp+4,(vlSelf->leading_zero_counter__DOT__i),32);
}
