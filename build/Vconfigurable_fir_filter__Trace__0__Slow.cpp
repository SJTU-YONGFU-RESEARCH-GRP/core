// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_fir_filter__Syms.h"


VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_init_sub__TOP__0(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_init_sub__TOP__0\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+31,0,"data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"data_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("configurable_fir_filter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"COEFF_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"NUM_TAPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"FILTER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+37,0,"COEFFICIENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+31,0,"data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"data_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("delay_line", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("products", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+25,0,"sum_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"output_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"MAX_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"MIN_NEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("coeff_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+27,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_init_top(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_init_top\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconfigurable_fir_filter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_fir_filter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_fir_filter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_register(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_register\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconfigurable_fir_filter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconfigurable_fir_filter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconfigurable_fir_filter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconfigurable_fir_filter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_const_0_sub_0(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_const_0\n"); );
    // Init
    Vconfigurable_fir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fir_filter___024root*>(voidSelf);
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_fir_filter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_const_0_sub_0(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_const_0_sub_0\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+34,(0x10U),32);
    bufp->fullIData(oldp+35,(8U),32);
    bufp->fullIData(oldp+36,(0U),32);
    __Vtemp_1[0U] = 0x8000400U;
    __Vtemp_1[1U] = 0x10000c00U;
    __Vtemp_1[2U] = 0xc001000U;
    __Vtemp_1[3U] = 0x4000800U;
    bufp->fullWData(oldp+37,(__Vtemp_1),128);
    bufp->fullIData(oldp+41,(0x7fffU),32);
    bufp->fullIData(oldp+42,(0xffff8000U),32);
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_full_0_sub_0(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_full_0\n"); );
    // Init
    Vconfigurable_fir_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fir_filter___024root*>(voidSelf);
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_fir_filter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root__trace_full_0_sub_0(Vconfigurable_fir_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root__trace_full_0_sub_0\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[0]),16);
    bufp->fullSData(oldp+2,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[1]),16);
    bufp->fullSData(oldp+3,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[2]),16);
    bufp->fullSData(oldp+4,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[3]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[4]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[5]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[6]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.configurable_fir_filter__DOT__coeff_array[7]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.configurable_fir_filter__DOT__delay_line[0]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.configurable_fir_filter__DOT__delay_line[1]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.configurable_fir_filter__DOT__delay_line[2]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.configurable_fir_filter__DOT__delay_line[3]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.configurable_fir_filter__DOT__delay_line[4]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.configurable_fir_filter__DOT__delay_line[5]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.configurable_fir_filter__DOT__delay_line[6]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.configurable_fir_filter__DOT__delay_line[7]),16);
    bufp->fullIData(oldp+17,(vlSelfRef.configurable_fir_filter__DOT__products[0]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.configurable_fir_filter__DOT__products[1]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.configurable_fir_filter__DOT__products[2]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.configurable_fir_filter__DOT__products[3]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.configurable_fir_filter__DOT__products[4]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.configurable_fir_filter__DOT__products[5]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.configurable_fir_filter__DOT__products[6]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.configurable_fir_filter__DOT__products[7]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.configurable_fir_filter__DOT__sum_temp),32);
    bufp->fullSData(oldp+26,(vlSelfRef.configurable_fir_filter__DOT__output_value),16);
    bufp->fullIData(oldp+27,(vlSelfRef.configurable_fir_filter__DOT__i),32);
    bufp->fullBit(oldp+28,(vlSelfRef.clk));
    bufp->fullBit(oldp+29,(vlSelfRef.rst_n));
    bufp->fullSData(oldp+30,(vlSelfRef.data_in),16);
    bufp->fullBit(oldp+31,(vlSelfRef.data_valid));
    bufp->fullSData(oldp+32,(vlSelfRef.data_out),16);
    bufp->fullBit(oldp+33,(vlSelfRef.data_out_valid));
}
