// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaes_core__Syms.h"


VL_ATTR_COLD void Vaes_core___024root__trace_init_sub__TOP__0(Vaes_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_init_sub__TOP__0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+101,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"encrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("aes_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"encrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+120,0,"ROUNDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"S_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+123,0,"S_ROUNDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"S_FINAL_ROUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+125,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+119,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"round_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+23,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+13,0,"formatted_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+17,0,"formatted_key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("round_keys", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+27+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+71,0,"key_expansion__Vstatic__w0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"key_expansion__Vstatic__w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"key_expansion__Vstatic__w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key_expansion__Vstatic__w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"key_expansion__Vstatic__temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+76,0,"mix_columns__Vstatic__col0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"mix_columns__Vstatic__col1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"mix_columns__Vstatic__col2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"mix_columns__Vstatic__col3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"mix_columns__Vstatic__s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"mix_columns__Vstatic__s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"mix_columns__Vstatic__s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"mix_columns__Vstatic__s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"mix_columns__Vstatic__t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"mix_columns__Vstatic__t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"mix_columns__Vstatic__t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"mix_columns__Vstatic__t3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"inv_mix_columns__Vstatic__col0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"inv_mix_columns__Vstatic__col1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"inv_mix_columns__Vstatic__col2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"inv_mix_columns__Vstatic__col3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"inv_mix_columns__Vstatic__s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"inv_mix_columns__Vstatic__s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"inv_mix_columns__Vstatic__s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"inv_mix_columns__Vstatic__s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"inv_mix_columns__Vstatic__t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"inv_mix_columns__Vstatic__t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"inv_mix_columns__Vstatic__t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"inv_mix_columns__Vstatic__t3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("rcon", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+100,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+126,0,"key_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_core___024root__trace_init_top(Vaes_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_init_top\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaes_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaes_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaes_core___024root__trace_register(Vaes_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_register\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaes_core___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vaes_core___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vaes_core___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vaes_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaes_core___024root__trace_const_0_sub_0(Vaes_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaes_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_const_0\n"); );
    // Init
    Vaes_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_core___024root*>(voidSelf);
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaes_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaes_core___024root__trace_const_0_sub_0(Vaes_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_const_0_sub_0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+120,(0xaU),4);
    bufp->fullCData(oldp+121,(0U),3);
    bufp->fullCData(oldp+122,(1U),3);
    bufp->fullCData(oldp+123,(2U),3);
    bufp->fullCData(oldp+124,(3U),3);
    bufp->fullCData(oldp+125,(4U),3);
    bufp->fullCData(oldp+126,(vlSelfRef.aes_core__DOT__key_round),4);
}

VL_ATTR_COLD void Vaes_core___024root__trace_full_0_sub_0(Vaes_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaes_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_full_0\n"); );
    // Init
    Vaes_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_core___024root*>(voidSelf);
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaes_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaes_core___024root__trace_full_0_sub_0(Vaes_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_full_0_sub_0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.aes_core__DOT__i),32);
    bufp->fullCData(oldp+2,(vlSelfRef.aes_core__DOT__rcon[0]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.aes_core__DOT__rcon[1]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.aes_core__DOT__rcon[2]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.aes_core__DOT__rcon[3]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.aes_core__DOT__rcon[4]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.aes_core__DOT__rcon[5]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.aes_core__DOT__rcon[6]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.aes_core__DOT__rcon[7]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.aes_core__DOT__rcon[8]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.aes_core__DOT__rcon[9]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.aes_core__DOT__rcon[10]),8);
    bufp->fullWData(oldp+13,(vlSelfRef.aes_core__DOT__formatted_data_in),128);
    bufp->fullWData(oldp+17,(vlSelfRef.aes_core__DOT__formatted_key),128);
    bufp->fullCData(oldp+21,(vlSelfRef.aes_core__DOT__state),3);
    bufp->fullCData(oldp+22,(vlSelfRef.aes_core__DOT__round_cnt),4);
    bufp->fullWData(oldp+23,(vlSelfRef.aes_core__DOT__state_reg),128);
    bufp->fullWData(oldp+27,(vlSelfRef.aes_core__DOT__round_keys[0]),128);
    bufp->fullWData(oldp+31,(vlSelfRef.aes_core__DOT__round_keys[1]),128);
    bufp->fullWData(oldp+35,(vlSelfRef.aes_core__DOT__round_keys[2]),128);
    bufp->fullWData(oldp+39,(vlSelfRef.aes_core__DOT__round_keys[3]),128);
    bufp->fullWData(oldp+43,(vlSelfRef.aes_core__DOT__round_keys[4]),128);
    bufp->fullWData(oldp+47,(vlSelfRef.aes_core__DOT__round_keys[5]),128);
    bufp->fullWData(oldp+51,(vlSelfRef.aes_core__DOT__round_keys[6]),128);
    bufp->fullWData(oldp+55,(vlSelfRef.aes_core__DOT__round_keys[7]),128);
    bufp->fullWData(oldp+59,(vlSelfRef.aes_core__DOT__round_keys[8]),128);
    bufp->fullWData(oldp+63,(vlSelfRef.aes_core__DOT__round_keys[9]),128);
    bufp->fullWData(oldp+67,(vlSelfRef.aes_core__DOT__round_keys[10]),128);
    bufp->fullIData(oldp+71,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0),32);
    bufp->fullIData(oldp+72,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1),32);
    bufp->fullIData(oldp+73,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2),32);
    bufp->fullIData(oldp+74,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3),32);
    bufp->fullIData(oldp+75,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp),32);
    bufp->fullIData(oldp+76,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0),32);
    bufp->fullIData(oldp+77,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1),32);
    bufp->fullIData(oldp+78,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2),32);
    bufp->fullIData(oldp+79,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3),32);
    bufp->fullCData(oldp+80,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0),8);
    bufp->fullCData(oldp+81,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1),8);
    bufp->fullCData(oldp+82,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2),8);
    bufp->fullCData(oldp+83,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3),8);
    bufp->fullCData(oldp+84,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0),8);
    bufp->fullCData(oldp+85,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1),8);
    bufp->fullCData(oldp+86,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2),8);
    bufp->fullCData(oldp+87,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3),8);
    bufp->fullIData(oldp+88,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0),32);
    bufp->fullIData(oldp+89,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1),32);
    bufp->fullIData(oldp+90,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2),32);
    bufp->fullIData(oldp+91,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3),32);
    bufp->fullCData(oldp+92,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0),8);
    bufp->fullCData(oldp+93,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1),8);
    bufp->fullCData(oldp+94,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2),8);
    bufp->fullCData(oldp+95,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3),8);
    bufp->fullCData(oldp+96,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0),8);
    bufp->fullCData(oldp+97,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1),8);
    bufp->fullCData(oldp+98,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2),8);
    bufp->fullCData(oldp+99,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3),8);
    bufp->fullIData(oldp+100,(vlSelfRef.aes_core__DOT__j),32);
    bufp->fullBit(oldp+101,(vlSelfRef.clk));
    bufp->fullBit(oldp+102,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+103,(vlSelfRef.start));
    bufp->fullBit(oldp+104,(vlSelfRef.encrypt));
    bufp->fullBit(oldp+105,(vlSelfRef.done));
    bufp->fullBit(oldp+106,(vlSelfRef.busy));
    bufp->fullIData(oldp+107,(vlSelfRef.data_in[0]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.data_in[1]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.data_in[2]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.data_in[3]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.key[0]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.key[1]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.key[2]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.key[3]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.data_out[0]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.data_out[1]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.data_out[2]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.data_out[3]),32);
    bufp->fullCData(oldp+119,(vlSelfRef.aes_core__DOT__next_state),3);
}
