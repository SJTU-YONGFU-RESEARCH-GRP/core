// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_barrel_rotator__Syms.h"


VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_init_sub__TOP__0(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rotate_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"direction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("parameterized_barrel_rotator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"SHIFT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rotate_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"direction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"temp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2,0,"extended_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"effective_rotate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_init_top(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_init_top\n"); );
    // Body
    Vparameterized_barrel_rotator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_barrel_rotator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_barrel_rotator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_register(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vparameterized_barrel_rotator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vparameterized_barrel_rotator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vparameterized_barrel_rotator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vparameterized_barrel_rotator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_const_0_sub_0(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_const_0\n"); );
    // Init
    Vparameterized_barrel_rotator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_barrel_rotator___024root*>(voidSelf);
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_barrel_rotator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_const_0_sub_0(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+9,(0x20U),32);
    bufp->fullIData(oldp+10,(5U),32);
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_full_0_sub_0(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_full_0\n"); );
    // Init
    Vparameterized_barrel_rotator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_barrel_rotator___024root*>(voidSelf);
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_barrel_rotator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root__trace_full_0_sub_0(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->parameterized_barrel_rotator__DOT__temp_data),32);
    bufp->fullQData(oldp+2,(vlSelf->parameterized_barrel_rotator__DOT__extended_data),64);
    bufp->fullCData(oldp+4,(vlSelf->parameterized_barrel_rotator__DOT__effective_rotate),5);
    bufp->fullIData(oldp+5,(vlSelf->data_in),32);
    bufp->fullCData(oldp+6,(vlSelf->rotate_amount),5);
    bufp->fullBit(oldp+7,(vlSelf->direction));
    bufp->fullIData(oldp+8,(vlSelf->data_out),32);
}
