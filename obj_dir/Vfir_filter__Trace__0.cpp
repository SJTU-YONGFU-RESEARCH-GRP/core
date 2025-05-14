// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfir_filter__Syms.h"


void Vfir_filter___024root__trace_chg_0_sub_0(Vfir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfir_filter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_chg_0\n"); );
    // Init
    Vfir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir_filter___024root*>(voidSelf);
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfir_filter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfir_filter___024root__trace_chg_0_sub_0(Vfir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->fir_filter__DOT__coeffs[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->fir_filter__DOT__coeffs[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->fir_filter__DOT__coeffs[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->fir_filter__DOT__coeffs[3]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+4,(vlSelf->fir_filter__DOT__delay_line[0]),8);
        bufp->chgCData(oldp+5,(vlSelf->fir_filter__DOT__delay_line[1]),8);
        bufp->chgCData(oldp+6,(vlSelf->fir_filter__DOT__delay_line[2]),8);
        bufp->chgCData(oldp+7,(vlSelf->fir_filter__DOT__delay_line[3]),8);
        bufp->chgIData(oldp+8,(vlSelf->fir_filter__DOT__result),19);
        bufp->chgIData(oldp+9,((0x7ffffU & (VL_MULS_III(19, 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,8, 
                                                                         vlSelf->fir_filter__DOT__delay_line
                                                                         [0U])), 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,8, 
                                                                         vlSelf->fir_filter__DOT__coeffs
                                                                         [0U]))) 
                                            + (VL_MULS_III(19, 
                                                           (0x7ffffU 
                                                            & VL_EXTENDS_II(19,8, 
                                                                            vlSelf->fir_filter__DOT__delay_line
                                                                            [1U])), 
                                                           (0x7ffffU 
                                                            & VL_EXTENDS_II(19,8, 
                                                                            vlSelf->fir_filter__DOT__coeffs
                                                                            [1U]))) 
                                               + (VL_MULS_III(19, 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__delay_line
                                                                               [2U])), 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__coeffs
                                                                               [2U]))) 
                                                  + 
                                                  VL_MULS_III(19, 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__delay_line
                                                                               [3U])), 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__coeffs
                                                                               [3U])))))))),19);
        bufp->chgIData(oldp+10,(vlSelf->fir_filter__DOT__i),32);
    }
    bufp->chgBit(oldp+11,(vlSelf->clk));
    bufp->chgBit(oldp+12,(vlSelf->rst_n));
    bufp->chgCData(oldp+13,(vlSelf->data_in),8);
    bufp->chgBit(oldp+14,(vlSelf->data_valid));
    bufp->chgIData(oldp+15,(vlSelf->data_out),19);
    bufp->chgBit(oldp+16,(vlSelf->data_out_valid));
}

void Vfir_filter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_cleanup\n"); );
    // Init
    Vfir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir_filter___024root*>(voidSelf);
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
