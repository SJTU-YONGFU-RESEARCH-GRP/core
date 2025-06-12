// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_clock_gating__Syms.h"


VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_init_sub__TOP__0(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_init_sub__TOP__0\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"test_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"clk_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("parameterized_clock_gating", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"LATCH_BASED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"ENABLE_ACTIVE_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"test_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"clk_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"enable_synced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"enable_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"enable_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"enable_sync_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_init_top(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_init_top\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vparameterized_clock_gating___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_clock_gating___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_clock_gating___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_register(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_register\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vparameterized_clock_gating___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vparameterized_clock_gating___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vparameterized_clock_gating___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vparameterized_clock_gating___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_const_0_sub_0(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_const_0\n"); );
    // Init
    Vparameterized_clock_gating___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_clock_gating___024root*>(voidSelf);
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_clock_gating___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_const_0_sub_0(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_const_0_sub_0\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+8,(2U),32);
    bufp->fullIData(oldp+9,(1U),32);
    bufp->fullIData(oldp+10,(0U),32);
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_full_0_sub_0(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_full_0\n"); );
    // Init
    Vparameterized_clock_gating___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_clock_gating___024root*>(voidSelf);
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_clock_gating___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_clock_gating___024root__trace_full_0_sub_0(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_full_0_sub_0\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk_in));
    bufp->fullBit(oldp+2,(vlSelfRef.enable));
    bufp->fullBit(oldp+3,(vlSelfRef.test_mode));
    bufp->fullBit(oldp+4,(vlSelfRef.clk_out));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg) 
                                 >> 1U))));
    bufp->fullBit(oldp+6,(vlSelfRef.parameterized_clock_gating__DOT__enable_latch));
    bufp->fullCData(oldp+7,(vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg),2);
}
