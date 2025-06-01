// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_fir_filter__Syms.h"


void Vconfigurable_fir_filter___024root__trace_chg_0_sub_0(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfigurable_fir_filter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_chg_0\n"); );
    // Init
    Vconfigurable_fir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fir_filter___024root*>(voidSelf);
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfigurable_fir_filter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfigurable_fir_filter___024root__trace_chg_0_sub_0(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_chg_0_sub_0\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[0]),16);
        bufp->chgSData(oldp+1,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[1]),16);
        bufp->chgSData(oldp+2,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[2]),16);
        bufp->chgSData(oldp+3,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[3]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[4]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[5]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[6]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[7]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+8,(vlSelfRef.configurable_fir_filter__DOT__delay_line[0]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.configurable_fir_filter__DOT__delay_line[1]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.configurable_fir_filter__DOT__delay_line[2]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.configurable_fir_filter__DOT__delay_line[3]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.configurable_fir_filter__DOT__delay_line[4]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.configurable_fir_filter__DOT__delay_line[5]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.configurable_fir_filter__DOT__delay_line[6]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.configurable_fir_filter__DOT__delay_line[7]),16);
        bufp->chgIData(oldp+16,(vlSelfRef.configurable_fir_filter__DOT__products[0]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.configurable_fir_filter__DOT__products[1]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.configurable_fir_filter__DOT__products[2]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.configurable_fir_filter__DOT__products[3]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.configurable_fir_filter__DOT__products[4]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.configurable_fir_filter__DOT__products[5]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.configurable_fir_filter__DOT__products[6]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.configurable_fir_filter__DOT__products[7]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.configurable_fir_filter__DOT__sum_temp),32);
        bufp->chgSData(oldp+25,(vlSelfRef.configurable_fir_filter__DOT__output_value),16);
        bufp->chgIData(oldp+26,(vlSelfRef.configurable_fir_filter__DOT__i),32);
    }
    bufp->chgBit(oldp+27,(vlSelfRef.clk));
    bufp->chgBit(oldp+28,(vlSelfRef.rst_n));
    bufp->chgSData(oldp+29,(vlSelfRef.data_in),16);
    bufp->chgBit(oldp+30,(vlSelfRef.data_valid));
    bufp->chgSData(oldp+31,(vlSelfRef.data_out),16);
    bufp->chgBit(oldp+32,(vlSelfRef.data_out_valid));
}

void Vconfigurable_fir_filter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_cleanup\n"); );
    // Init
    Vconfigurable_fir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fir_filter___024root*>(voidSelf);
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
