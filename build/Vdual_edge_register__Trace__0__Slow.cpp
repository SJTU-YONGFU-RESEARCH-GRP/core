// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_edge_register__Syms.h"


VL_ATTR_COLD void Vdual_edge_register___024root__trace_init_sub__TOP__0(Vdual_edge_register___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_init_sub__TOP__0\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dual_edge_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"posedge_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"negedge_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdual_edge_register___024root__trace_init_top(Vdual_edge_register___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_init_top\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdual_edge_register___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdual_edge_register___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdual_edge_register___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdual_edge_register___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdual_edge_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdual_edge_register___024root__trace_register(Vdual_edge_register___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_register\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdual_edge_register___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdual_edge_register___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdual_edge_register___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdual_edge_register___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdual_edge_register___024root__trace_const_0_sub_0(Vdual_edge_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdual_edge_register___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_const_0\n"); );
    // Init
    Vdual_edge_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_edge_register___024root*>(voidSelf);
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdual_edge_register___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdual_edge_register___024root__trace_const_0_sub_0(Vdual_edge_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_const_0_sub_0\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+8,(8U),32);
}

VL_ATTR_COLD void Vdual_edge_register___024root__trace_full_0_sub_0(Vdual_edge_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdual_edge_register___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_full_0\n"); );
    // Init
    Vdual_edge_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_edge_register___024root*>(voidSelf);
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdual_edge_register___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdual_edge_register___024root__trace_full_0_sub_0(Vdual_edge_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_full_0_sub_0\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.enable));
    bufp->fullCData(oldp+4,(vlSelfRef.data_in),8);
    bufp->fullCData(oldp+5,(vlSelfRef.data_out),8);
    bufp->fullCData(oldp+6,(vlSelfRef.dual_edge_register__DOT__posedge_reg),8);
    bufp->fullCData(oldp+7,(vlSelfRef.dual_edge_register__DOT__negedge_reg),8);
}
