// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_barrel_rotator__Syms.h"


void Vparameterized_barrel_rotator___024root__trace_chg_0_sub_0(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vparameterized_barrel_rotator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_chg_0\n"); );
    // Init
    Vparameterized_barrel_rotator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_barrel_rotator___024root*>(voidSelf);
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vparameterized_barrel_rotator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vparameterized_barrel_rotator___024root__trace_chg_0_sub_0(Vparameterized_barrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->parameterized_barrel_rotator__DOT__temp_data),32);
        bufp->chgQData(oldp+1,(vlSelf->parameterized_barrel_rotator__DOT__extended_data),64);
        bufp->chgCData(oldp+3,(vlSelf->parameterized_barrel_rotator__DOT__effective_rotate),5);
    }
    bufp->chgIData(oldp+4,(vlSelf->data_in),32);
    bufp->chgCData(oldp+5,(vlSelf->rotate_amount),5);
    bufp->chgBit(oldp+6,(vlSelf->direction));
    bufp->chgIData(oldp+7,(vlSelf->data_out),32);
}

void Vparameterized_barrel_rotator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root__trace_cleanup\n"); );
    // Init
    Vparameterized_barrel_rotator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_barrel_rotator___024root*>(voidSelf);
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
