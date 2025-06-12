// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgpio_controller__Syms.h"


void Vgpio_controller___024root__trace_chg_0_sub_0(Vgpio_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vgpio_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root__trace_chg_0\n"); );
    // Init
    Vgpio_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio_controller___024root*>(voidSelf);
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vgpio_controller___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vgpio_controller___024root__trace_chg_0_sub_0(Vgpio_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root__trace_chg_0_sub_0\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.gpio_controller__DOT__gpio_in_sync1),32);
        bufp->chgIData(oldp+1,(vlSelfRef.gpio_controller__DOT__gpio_in_sync2),32);
        bufp->chgIData(oldp+2,(vlSelfRef.gpio_controller__DOT__gpio_in_prev),32);
        bufp->chgIData(oldp+3,(vlSelfRef.gpio_controller__DOT__int_status_reg),32);
        bufp->chgIData(oldp+4,(vlSelfRef.gpio_controller__DOT__j),32);
        bufp->chgIData(oldp+5,(vlSelfRef.gpio_controller__DOT__rising_edge),32);
        bufp->chgIData(oldp+6,(vlSelfRef.gpio_controller__DOT__falling_edge),32);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.clk));
    bufp->chgBit(oldp+8,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+9,(vlSelfRef.gpio_pins),32);
    bufp->chgIData(oldp+10,(vlSelfRef.gpio_dir),32);
    bufp->chgIData(oldp+11,(vlSelfRef.gpio_out),32);
    bufp->chgIData(oldp+12,(vlSelfRef.gpio_in),32);
    bufp->chgIData(oldp+13,(vlSelfRef.int_enable),32);
    bufp->chgIData(oldp+14,(vlSelfRef.int_type),32);
    bufp->chgIData(oldp+15,(vlSelfRef.int_polarity),32);
    bufp->chgIData(oldp+16,(vlSelfRef.int_status),32);
    bufp->chgIData(oldp+17,(vlSelfRef.int_clear),32);
    bufp->chgBit(oldp+18,(vlSelfRef.int_out));
}

void Vgpio_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root__trace_cleanup\n"); );
    // Init
    Vgpio_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio_controller___024root*>(voidSelf);
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
