// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_dds__Syms.h"


void Vparameterized_dds___024root__trace_chg_0_sub_0(Vparameterized_dds___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vparameterized_dds___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_chg_0\n"); );
    // Init
    Vparameterized_dds___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_dds___024root*>(voidSelf);
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vparameterized_dds___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vparameterized_dds___024root__trace_chg_0_sub_0(Vparameterized_dds___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_chg_0_sub_0\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.parameterized_dds__DOT__phase_with_offset),24);
        bufp->chgCData(oldp+1,((3U & (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                      >> 0x16U))),2);
        bufp->chgSData(oldp+2,((0x3ffU & ((0x800000U 
                                           & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                           ? ((0x400000U 
                                               & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                               ? (~ 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0xcU))
                                               : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))
                                           : ((0x400000U 
                                               & vlSelfRef.parameterized_dds__DOT__phase_with_offset)
                                               ? (~ 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0xcU))
                                               : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))))),10);
        bufp->chgSData(oldp+3,((0x3ffU & ((2U & ((IData)(1U) 
                                                 + 
                                                 (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0x16U)))
                                           ? ((1U & 
                                               ((IData)(1U) 
                                                + (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0x16U)))
                                               ? (~ 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0xcU))
                                               : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))
                                           : ((1U & 
                                               ((IData)(1U) 
                                                + (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0x16U)))
                                               ? (~ 
                                                  (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                   >> 0xcU))
                                               : (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                                  >> 0xcU))))),10);
        bufp->chgCData(oldp+4,((3U & ((IData)(1U) + 
                                      (vlSelfRef.parameterized_dds__DOT__phase_with_offset 
                                       >> 0x16U)))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+5,(vlSelfRef.parameterized_dds__DOT__phase_acc),24);
        bufp->chgSData(oldp+6,(vlSelfRef.parameterized_dds__DOT__init_counter),10);
        bufp->chgSData(oldp+7,(vlSelfRef.parameterized_dds__DOT__center_val),12);
        bufp->chgSData(oldp+8,(vlSelfRef.parameterized_dds__DOT__scale_val),12);
    }
    bufp->chgBit(oldp+9,(vlSelfRef.clk));
    bufp->chgBit(oldp+10,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+11,(vlSelfRef.enable));
    bufp->chgIData(oldp+12,(vlSelfRef.fcw),24);
    bufp->chgIData(oldp+13,(vlSelfRef.phase_offset),24);
    bufp->chgSData(oldp+14,(vlSelfRef.sine_out),12);
    bufp->chgSData(oldp+15,(vlSelfRef.cosine_out),12);
    bufp->chgBit(oldp+16,(vlSelfRef.lut_initialized));
}

void Vparameterized_dds___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root__trace_cleanup\n"); );
    // Init
    Vparameterized_dds___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_dds___024root*>(voidSelf);
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
