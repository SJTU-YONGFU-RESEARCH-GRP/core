// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsequence_detector_fsm__Syms.h"


void Vsequence_detector_fsm___024root__trace_chg_0_sub_0(Vsequence_detector_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsequence_detector_fsm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root__trace_chg_0\n"); );
    // Init
    Vsequence_detector_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsequence_detector_fsm___024root*>(voidSelf);
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsequence_detector_fsm___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsequence_detector_fsm___024root__trace_chg_0_sub_0(Vsequence_detector_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->sequence_detector_fsm__DOT__state));
        bufp->chgCData(oldp+1,(vlSelf->sequence_detector_fsm__DOT__pattern_reg),4);
        bufp->chgCData(oldp+2,(vlSelf->sequence_detector_fsm__DOT__shift_reg),4);
        bufp->chgCData(oldp+3,(vlSelf->sequence_detector_fsm__DOT__bit_count),3);
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->rst_n));
    bufp->chgBit(oldp+6,(vlSelf->enable));
    bufp->chgBit(oldp+7,(vlSelf->serial_in));
    bufp->chgCData(oldp+8,(vlSelf->config_pattern),4);
    bufp->chgBit(oldp+9,(vlSelf->load_pattern));
    bufp->chgBit(oldp+10,(vlSelf->pattern_detected));
}

void Vsequence_detector_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_fsm___024root__trace_cleanup\n"); );
    // Init
    Vsequence_detector_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsequence_detector_fsm___024root*>(voidSelf);
    Vsequence_detector_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
