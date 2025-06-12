// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnon_restoring_divider__Syms.h"


VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_init_sub__TOP__0(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_init_sub__TOP__0\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"dividend",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"divisor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"remainder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("non_restoring_divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"dividend",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"divisor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"remainder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"DIVIDE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"div_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"quot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"iter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_init_top(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_init_top\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnon_restoring_divider___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnon_restoring_divider___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnon_restoring_divider___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_register(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_register\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vnon_restoring_divider___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vnon_restoring_divider___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vnon_restoring_divider___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vnon_restoring_divider___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_const_0_sub_0(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_const_0\n"); );
    // Init
    Vnon_restoring_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnon_restoring_divider___024root*>(voidSelf);
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnon_restoring_divider___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_const_0_sub_0(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_const_0_sub_0\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+16,(8U),32);
    bufp->fullIData(oldp+17,(0U),32);
    bufp->fullIData(oldp+18,(1U),32);
    bufp->fullIData(oldp+19,(2U),32);
    bufp->fullIData(oldp+20,(4U),32);
}

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_full_0_sub_0(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_full_0\n"); );
    // Init
    Vnon_restoring_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnon_restoring_divider___024root*>(voidSelf);
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnon_restoring_divider___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnon_restoring_divider___024root__trace_full_0_sub_0(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_full_0_sub_0\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.non_restoring_divider__DOT__state),2);
    bufp->fullCData(oldp+2,(vlSelfRef.non_restoring_divider__DOT__div_reg),8);
    bufp->fullCData(oldp+3,(vlSelfRef.non_restoring_divider__DOT__quot),8);
    bufp->fullCData(oldp+4,(vlSelfRef.non_restoring_divider__DOT__rem),8);
    bufp->fullCData(oldp+5,(vlSelfRef.non_restoring_divider__DOT__iter),4);
    bufp->fullBit(oldp+6,(vlSelfRef.clk));
    bufp->fullBit(oldp+7,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+8,(vlSelfRef.start));
    bufp->fullCData(oldp+9,(vlSelfRef.dividend),8);
    bufp->fullCData(oldp+10,(vlSelfRef.divisor),8);
    bufp->fullCData(oldp+11,(vlSelfRef.quotient),8);
    bufp->fullCData(oldp+12,(vlSelfRef.remainder),8);
    bufp->fullBit(oldp+13,(vlSelfRef.valid));
    bufp->fullBit(oldp+14,(vlSelfRef.busy));
    bufp->fullBit(oldp+15,(vlSelfRef.error));
}
