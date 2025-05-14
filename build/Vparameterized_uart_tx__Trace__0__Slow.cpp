// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_uart_tx__Syms.h"


VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_init_sub__TOP__0(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"tx_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"tx_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("parameterized_uart_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"PARITY_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"PARITY_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"STOP_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"CLOCK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"tx_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"tx_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,0,"START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"PARITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"bit_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+3,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"parity_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"stop_bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+24,0,"CLKS_PER_BIT_M1_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+25,0,"DATA_WIDTH_M1_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"reverse_bits__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+27,0,"parity_calc__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_init_top(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_init_top\n"); );
    // Body
    Vparameterized_uart_tx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_uart_tx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_uart_tx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_register(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vparameterized_uart_tx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vparameterized_uart_tx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vparameterized_uart_tx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vparameterized_uart_tx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_const_0_sub_0(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_const_0\n"); );
    // Init
    Vparameterized_uart_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_uart_tx___024root*>(voidSelf);
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_uart_tx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_const_0_sub_0(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+13,(8U),32);
    bufp->fullIData(oldp+14,(0U),32);
    bufp->fullIData(oldp+15,(1U),32);
    bufp->fullIData(oldp+16,(0x2faf080U),32);
    bufp->fullIData(oldp+17,(0x1c200U),32);
    bufp->fullIData(oldp+18,(0x1b2U),32);
    bufp->fullCData(oldp+19,(0U),3);
    bufp->fullCData(oldp+20,(1U),3);
    bufp->fullCData(oldp+21,(2U),3);
    bufp->fullCData(oldp+22,(3U),3);
    bufp->fullCData(oldp+23,(4U),3);
    bufp->fullSData(oldp+24,(0x1b1U),9);
    bufp->fullCData(oldp+25,(7U),3);
    bufp->fullIData(oldp+26,(vlSelf->parameterized_uart_tx__DOT__reverse_bits__Vstatic__i),32);
    bufp->fullIData(oldp+27,(vlSelf->parameterized_uart_tx__DOT__parity_calc__Vstatic__i),32);
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_full_0_sub_0(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_full_0\n"); );
    // Init
    Vparameterized_uart_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_uart_tx___024root*>(voidSelf);
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_uart_tx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_uart_tx___024root__trace_full_0_sub_0(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->parameterized_uart_tx__DOT__state),3);
    bufp->fullSData(oldp+2,(vlSelf->parameterized_uart_tx__DOT__bit_timer),9);
    bufp->fullCData(oldp+3,(vlSelf->parameterized_uart_tx__DOT__bit_counter),3);
    bufp->fullCData(oldp+4,(vlSelf->parameterized_uart_tx__DOT__data_reg),8);
    bufp->fullBit(oldp+5,(vlSelf->parameterized_uart_tx__DOT__parity_bit));
    bufp->fullBit(oldp+6,(vlSelf->parameterized_uart_tx__DOT__stop_bit_counter));
    bufp->fullBit(oldp+7,(vlSelf->clk));
    bufp->fullBit(oldp+8,(vlSelf->rst_n));
    bufp->fullCData(oldp+9,(vlSelf->data_in),8);
    bufp->fullBit(oldp+10,(vlSelf->tx_start));
    bufp->fullBit(oldp+11,(vlSelf->tx));
    bufp->fullBit(oldp+12,(vlSelf->tx_busy));
}
