// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfir_filter__Syms.h"


VL_ATTR_COLD void Vfir_filter___024root__trace_init_sub__TOP__0(Vfir_filter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+17,0,"data_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fir_filter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"COEFF_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"TAP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+17,0,"data_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("coeffs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("delay_line", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+9,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+10,0,"mac_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+11,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfir_filter___024root__trace_init_top(Vfir_filter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_init_top\n"); );
    // Body
    Vfir_filter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfir_filter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfir_filter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfir_filter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfir_filter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfir_filter___024root__trace_register(Vfir_filter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfir_filter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfir_filter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfir_filter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfir_filter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfir_filter___024root__trace_const_0_sub_0(Vfir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfir_filter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_const_0\n"); );
    // Init
    Vfir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir_filter___024root*>(voidSelf);
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfir_filter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfir_filter___024root__trace_const_0_sub_0(Vfir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(8U),32);
    bufp->fullIData(oldp+19,(0x13U),32);
    bufp->fullIData(oldp+20,(4U),32);
}

VL_ATTR_COLD void Vfir_filter___024root__trace_full_0_sub_0(Vfir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfir_filter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_full_0\n"); );
    // Init
    Vfir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir_filter___024root*>(voidSelf);
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfir_filter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfir_filter___024root__trace_full_0_sub_0(Vfir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->fir_filter__DOT__coeffs[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->fir_filter__DOT__coeffs[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->fir_filter__DOT__coeffs[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->fir_filter__DOT__coeffs[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->fir_filter__DOT__delay_line[0]),8);
    bufp->fullCData(oldp+6,(vlSelf->fir_filter__DOT__delay_line[1]),8);
    bufp->fullCData(oldp+7,(vlSelf->fir_filter__DOT__delay_line[2]),8);
    bufp->fullCData(oldp+8,(vlSelf->fir_filter__DOT__delay_line[3]),8);
    bufp->fullIData(oldp+9,(vlSelf->fir_filter__DOT__result),19);
    bufp->fullIData(oldp+10,((0x7ffffU & (VL_MULS_III(19, 
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
                                                + VL_MULS_III(19, 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__delay_line
                                                                               [3U])), 
                                                              (0x7ffffU 
                                                               & VL_EXTENDS_II(19,8, 
                                                                               vlSelf->fir_filter__DOT__coeffs
                                                                               [3U])))))))),19);
    bufp->fullIData(oldp+11,(vlSelf->fir_filter__DOT__i),32);
    bufp->fullBit(oldp+12,(vlSelf->clk));
    bufp->fullBit(oldp+13,(vlSelf->rst_n));
    bufp->fullCData(oldp+14,(vlSelf->data_in),8);
    bufp->fullBit(oldp+15,(vlSelf->data_valid));
    bufp->fullIData(oldp+16,(vlSelf->data_out),19);
    bufp->fullBit(oldp+17,(vlSelf->data_out_valid));
}
