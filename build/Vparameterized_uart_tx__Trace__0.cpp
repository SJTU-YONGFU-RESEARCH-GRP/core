// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_uart_tx__Syms.h"


void Vparameterized_uart_tx___024root__trace_chg_0_sub_0(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vparameterized_uart_tx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_chg_0\n"); );
    // Init
    Vparameterized_uart_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_uart_tx___024root*>(voidSelf);
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vparameterized_uart_tx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vparameterized_uart_tx___024root__trace_chg_0_sub_0(Vparameterized_uart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->parameterized_uart_tx__DOT__state),3);
        bufp->chgSData(oldp+1,(vlSelf->parameterized_uart_tx__DOT__bit_timer),9);
        bufp->chgCData(oldp+2,(vlSelf->parameterized_uart_tx__DOT__bit_counter),3);
        bufp->chgCData(oldp+3,(vlSelf->parameterized_uart_tx__DOT__data_reg),8);
        bufp->chgBit(oldp+4,(vlSelf->parameterized_uart_tx__DOT__parity_bit));
        bufp->chgBit(oldp+5,(vlSelf->parameterized_uart_tx__DOT__stop_bit_counter));
    }
    bufp->chgBit(oldp+6,(vlSelf->clk));
    bufp->chgBit(oldp+7,(vlSelf->rst_n));
    bufp->chgCData(oldp+8,(vlSelf->data_in),8);
    bufp->chgBit(oldp+9,(vlSelf->tx_start));
    bufp->chgBit(oldp+10,(vlSelf->tx));
    bufp->chgBit(oldp+11,(vlSelf->tx_busy));
}

void Vparameterized_uart_tx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root__trace_cleanup\n"); );
    // Init
    Vparameterized_uart_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_uart_tx___024root*>(voidSelf);
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
