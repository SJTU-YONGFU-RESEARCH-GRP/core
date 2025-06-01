// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_dds__Syms.h"


VL_ATTR_COLD void Vparameterized_dds___024root__trace_init_sub__TOP__0(Vparameterized_dds___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_init_sub__TOP__0\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"fcw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+14,0,"phase_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+15,0,"sine_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+16,0,"cosine_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+17,0,"lut_initialized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("parameterized_dds", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"PHASE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"LUT_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"USE_QUARTER_SINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"fcw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+14,0,"phase_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+15,0,"sine_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+16,0,"cosine_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+17,0,"lut_initialized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"phase_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1,0,"phase_with_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+22,0,"lut_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2,0,"quadrant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"sine_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+3,0,"sine_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+7,0,"init_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+8,0,"center_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+9,0,"scale_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+4,0,"cosine_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+5,0,"cos_quadrant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("cos_quarter_impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"adj_quadrant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"cos_addr_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("quarter_sine_impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"addr_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_dds___024root__trace_init_top(Vparameterized_dds___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_init_top\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vparameterized_dds___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vparameterized_dds___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vparameterized_dds___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_dds___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_dds___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vparameterized_dds___024root__trace_register(Vparameterized_dds___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_register\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vparameterized_dds___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vparameterized_dds___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vparameterized_dds___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vparameterized_dds___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vparameterized_dds___024root__trace_const_0_sub_0(Vparameterized_dds___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_dds___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_const_0\n"); );
    // Init
    Vparameterized_dds___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_dds___024root*>(voidSelf);
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_dds___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_dds___024root__trace_const_0_sub_0(Vparameterized_dds___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_const_0_sub_0\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(0x18U),32);
    bufp->fullIData(oldp+19,(0xcU),32);
    bufp->fullIData(oldp+20,(0xaU),32);
    bufp->fullIData(oldp+21,(1U),32);
    bufp->fullSData(oldp+22,(vlSelfRef.parameterized_dds__DOT__lut_addr),10);
    bufp->fullSData(oldp+23,(vlSelfRef.parameterized_dds__DOT__sine_value),12);
}

VL_ATTR_COLD void Vparameterized_dds___024root__trace_full_0_sub_0(Vparameterized_dds___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_dds___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_full_0\n"); );
    // Init
    Vparameterized_dds___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_dds___024root*>(voidSelf);
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_dds___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_dds___024root__trace_full_0_sub_0(Vparameterized_dds___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_full_0_sub_0\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.parameterized_dds__DOT__phase_with_offset),24);
    bufp->fullCData(oldp+2,((3U & (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                   >> 0x16U))),2);
    bufp->fullSData(oldp+3,((0x3ffU & ((0x800000U & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                        ? ((0x400000U 
                                            & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                            ? (~ (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))
                                            : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                               >> 0xcU))
                                        : ((0x400000U 
                                            & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                            ? (~ (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))
                                            : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                               >> 0xcU))))),10);
    bufp->fullSData(oldp+4,((0x3ffU & ((2U & ((IData)(1U) 
                                              + (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                 >> 0x16U)))
                                        ? ((1U & ((IData)(1U) 
                                                  + 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0x16U)))
                                            ? (~ (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))
                                            : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                               >> 0xcU))
                                        : ((1U & ((IData)(1U) 
                                                  + 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0x16U)))
                                            ? (~ (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))
                                            : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                               >> 0xcU))))),10);
    bufp->fullCData(oldp+5,((3U & ((IData)(1U) + (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0x16U)))),2);
    bufp->fullIData(oldp+6,(vlSelfRef.parameterized_dds__DOT__phase_acc),24);
    bufp->fullSData(oldp+7,(vlSelfRef.parameterized_dds__DOT__init_counter),10);
    bufp->fullSData(oldp+8,(vlSelfRef.parameterized_dds__DOT__center_val),12);
    bufp->fullSData(oldp+9,(vlSelfRef.parameterized_dds__DOT__scale_val),12);
    bufp->fullBit(oldp+10,(vlSelfRef.clk));
    bufp->fullBit(oldp+11,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+12,(vlSelfRef.enable));
    bufp->fullIData(oldp+13,(vlSelfRef.fcw),24);
    bufp->fullIData(oldp+14,(vlSelfRef.phase_offset),24);
    bufp->fullSData(oldp+15,(vlSelfRef.sine_out),12);
    bufp->fullSData(oldp+16,(vlSelfRef.cosine_out),12);
    bufp->fullBit(oldp+17,(vlSelfRef.lut_initialized));
}
