// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpwm_generator__Syms.h"


void Vpwm_generator___024root__trace_chg_0_sub_0(Vpwm_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpwm_generator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root__trace_chg_0\n"); );
    // Init
    Vpwm_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpwm_generator___024root*>(voidSelf);
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpwm_generator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpwm_generator___024root__trace_chg_0_sub_0(Vpwm_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->pwm_generator__DOT__counter),8);
        bufp->chgCData(oldp+1,(vlSelf->pwm_generator__DOT__duty_reg),8);
        bufp->chgCData(oldp+2,(vlSelf->pwm_generator__DOT__period_reg),8);
    }
    bufp->chgBit(oldp+3,(vlSelf->clk));
    bufp->chgBit(oldp+4,(vlSelf->rst_n));
    bufp->chgBit(oldp+5,(vlSelf->enable));
    bufp->chgCData(oldp+6,(vlSelf->duty_cycle),8);
    bufp->chgCData(oldp+7,(vlSelf->period),8);
    bufp->chgBit(oldp+8,(vlSelf->pwm_out));
}

void Vpwm_generator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root__trace_cleanup\n"); );
    // Init
    Vpwm_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpwm_generator___024root*>(voidSelf);
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
