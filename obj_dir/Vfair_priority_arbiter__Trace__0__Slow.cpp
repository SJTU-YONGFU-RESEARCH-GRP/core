// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfair_priority_arbiter__Syms.h"


VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_init_sub__TOP__0(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"priorities",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"grant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fair_priority_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"NUM_REQUESTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"PRIORITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"priorities",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"grant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"last_grant_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("priority_values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"highest_priority",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"highest_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"current_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"loop_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_init_top(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_init_top\n"); );
    // Body
    Vfair_priority_arbiter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfair_priority_arbiter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfair_priority_arbiter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_register(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfair_priority_arbiter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfair_priority_arbiter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfair_priority_arbiter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfair_priority_arbiter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_const_0_sub_0(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_const_0\n"); );
    // Init
    Vfair_priority_arbiter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfair_priority_arbiter___024root*>(voidSelf);
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfair_priority_arbiter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_const_0_sub_0(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(4U),32);
    bufp->fullIData(oldp+19,(2U),32);
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_full_0_sub_0(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_full_0\n"); );
    // Init
    Vfair_priority_arbiter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfair_priority_arbiter___024root*>(voidSelf);
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfair_priority_arbiter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfair_priority_arbiter___024root__trace_full_0_sub_0(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->fair_priority_arbiter__DOT__priority_values[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->fair_priority_arbiter__DOT__priority_values[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->fair_priority_arbiter__DOT__priority_values[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->fair_priority_arbiter__DOT__priority_values[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->fair_priority_arbiter__DOT__last_grant_idx),2);
    bufp->fullCData(oldp+6,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority),2);
    bufp->fullCData(oldp+7,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx),2);
    bufp->fullBit(oldp+8,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found));
    bufp->fullCData(oldp+9,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx),2);
    bufp->fullIData(oldp+10,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__unnamedblk3__DOT__loop_j),32);
    bufp->fullBit(oldp+11,(vlSelf->clk));
    bufp->fullBit(oldp+12,(vlSelf->rst_n));
    bufp->fullCData(oldp+13,(vlSelf->request),4);
    bufp->fullCData(oldp+14,(vlSelf->priorities),8);
    bufp->fullCData(oldp+15,(vlSelf->grant),4);
    bufp->fullCData(oldp+16,(vlSelf->grant_idx),2);
    bufp->fullBit(oldp+17,(vlSelf->valid));
}
