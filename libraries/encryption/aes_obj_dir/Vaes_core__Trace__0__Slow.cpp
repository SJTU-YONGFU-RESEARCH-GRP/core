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
    tracep->declBit(c+110,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"encrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+116,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+120,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+124,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("aes_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"encrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+116,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+120,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+124,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+129,0,"ROUNDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+131,0,"S_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"S_ROUNDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+133,0,"S_FINAL_ROUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+134,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+128,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"round_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+58,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("round_keys", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+12+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rcon", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+62,0,"shift_rows__Vstatic__s00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"shift_rows__Vstatic__s01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"shift_rows__Vstatic__s02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"shift_rows__Vstatic__s03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"shift_rows__Vstatic__s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"shift_rows__Vstatic__s11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"shift_rows__Vstatic__s12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"shift_rows__Vstatic__s13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"shift_rows__Vstatic__s20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"shift_rows__Vstatic__s21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"shift_rows__Vstatic__s22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"shift_rows__Vstatic__s23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"shift_rows__Vstatic__s30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"shift_rows__Vstatic__s31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"shift_rows__Vstatic__s32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"shift_rows__Vstatic__s33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"inv_shift_rows__Vstatic__s00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"inv_shift_rows__Vstatic__s01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"inv_shift_rows__Vstatic__s02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"inv_shift_rows__Vstatic__s03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"inv_shift_rows__Vstatic__s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"inv_shift_rows__Vstatic__s11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"inv_shift_rows__Vstatic__s12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"inv_shift_rows__Vstatic__s13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"inv_shift_rows__Vstatic__s20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"inv_shift_rows__Vstatic__s21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"inv_shift_rows__Vstatic__s22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"inv_shift_rows__Vstatic__s23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"inv_shift_rows__Vstatic__s30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"inv_shift_rows__Vstatic__s31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"inv_shift_rows__Vstatic__s32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"inv_shift_rows__Vstatic__s33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"mix_columns__Vstatic__col0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"mix_columns__Vstatic__col1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"mix_columns__Vstatic__col2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"mix_columns__Vstatic__col3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"mix_columns__Vstatic__new_col0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"mix_columns__Vstatic__new_col1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"mix_columns__Vstatic__new_col2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"mix_columns__Vstatic__new_col3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"inv_mix_columns__Vstatic__col0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"inv_mix_columns__Vstatic__col1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"inv_mix_columns__Vstatic__col2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"inv_mix_columns__Vstatic__col3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"inv_mix_columns__Vstatic__new_col0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"inv_mix_columns__Vstatic__new_col1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"inv_mix_columns__Vstatic__new_col2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"inv_mix_columns__Vstatic__new_col3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+129,(0xaU),32);
    bufp->fullCData(oldp+130,(0U),3);
    bufp->fullCData(oldp+131,(1U),3);
    bufp->fullCData(oldp+132,(2U),3);
    bufp->fullCData(oldp+133,(3U),3);
    bufp->fullCData(oldp+134,(4U),3);
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
    bufp->fullCData(oldp+1,(vlSelfRef.aes_core__DOT__rcon[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.aes_core__DOT__rcon[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.aes_core__DOT__rcon[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.aes_core__DOT__rcon[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.aes_core__DOT__rcon[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.aes_core__DOT__rcon[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.aes_core__DOT__rcon[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.aes_core__DOT__rcon[7]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.aes_core__DOT__rcon[8]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.aes_core__DOT__rcon[9]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.aes_core__DOT__rcon[10]),8);
    bufp->fullWData(oldp+12,(vlSelfRef.aes_core__DOT__round_keys[0]),128);
    bufp->fullWData(oldp+16,(vlSelfRef.aes_core__DOT__round_keys[1]),128);
    bufp->fullWData(oldp+20,(vlSelfRef.aes_core__DOT__round_keys[2]),128);
    bufp->fullWData(oldp+24,(vlSelfRef.aes_core__DOT__round_keys[3]),128);
    bufp->fullWData(oldp+28,(vlSelfRef.aes_core__DOT__round_keys[4]),128);
    bufp->fullWData(oldp+32,(vlSelfRef.aes_core__DOT__round_keys[5]),128);
    bufp->fullWData(oldp+36,(vlSelfRef.aes_core__DOT__round_keys[6]),128);
    bufp->fullWData(oldp+40,(vlSelfRef.aes_core__DOT__round_keys[7]),128);
    bufp->fullWData(oldp+44,(vlSelfRef.aes_core__DOT__round_keys[8]),128);
    bufp->fullWData(oldp+48,(vlSelfRef.aes_core__DOT__round_keys[9]),128);
    bufp->fullWData(oldp+52,(vlSelfRef.aes_core__DOT__round_keys[10]),128);
    bufp->fullCData(oldp+56,(vlSelfRef.aes_core__DOT__state),3);
    bufp->fullCData(oldp+57,(vlSelfRef.aes_core__DOT__round_cnt),4);
    bufp->fullWData(oldp+58,(vlSelfRef.aes_core__DOT__state_reg),128);
    bufp->fullCData(oldp+62,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00),8);
    bufp->fullCData(oldp+63,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01),8);
    bufp->fullCData(oldp+64,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02),8);
    bufp->fullCData(oldp+65,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03),8);
    bufp->fullCData(oldp+66,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10),8);
    bufp->fullCData(oldp+67,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11),8);
    bufp->fullCData(oldp+68,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12),8);
    bufp->fullCData(oldp+69,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13),8);
    bufp->fullCData(oldp+70,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20),8);
    bufp->fullCData(oldp+71,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21),8);
    bufp->fullCData(oldp+72,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22),8);
    bufp->fullCData(oldp+73,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23),8);
    bufp->fullCData(oldp+74,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30),8);
    bufp->fullCData(oldp+75,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31),8);
    bufp->fullCData(oldp+76,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32),8);
    bufp->fullCData(oldp+77,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33),8);
    bufp->fullCData(oldp+78,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00),8);
    bufp->fullCData(oldp+79,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01),8);
    bufp->fullCData(oldp+80,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02),8);
    bufp->fullCData(oldp+81,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03),8);
    bufp->fullCData(oldp+82,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10),8);
    bufp->fullCData(oldp+83,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11),8);
    bufp->fullCData(oldp+84,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12),8);
    bufp->fullCData(oldp+85,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13),8);
    bufp->fullCData(oldp+86,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20),8);
    bufp->fullCData(oldp+87,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21),8);
    bufp->fullCData(oldp+88,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22),8);
    bufp->fullCData(oldp+89,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23),8);
    bufp->fullCData(oldp+90,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30),8);
    bufp->fullCData(oldp+91,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31),8);
    bufp->fullCData(oldp+92,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32),8);
    bufp->fullCData(oldp+93,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33),8);
    bufp->fullIData(oldp+94,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0),32);
    bufp->fullIData(oldp+95,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1),32);
    bufp->fullIData(oldp+96,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2),32);
    bufp->fullIData(oldp+97,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3),32);
    bufp->fullIData(oldp+98,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0),32);
    bufp->fullIData(oldp+99,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1),32);
    bufp->fullIData(oldp+100,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col2),32);
    bufp->fullIData(oldp+101,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col3),32);
    bufp->fullIData(oldp+102,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0),32);
    bufp->fullIData(oldp+103,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1),32);
    bufp->fullIData(oldp+104,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2),32);
    bufp->fullIData(oldp+105,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3),32);
    bufp->fullIData(oldp+106,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0),32);
    bufp->fullIData(oldp+107,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1),32);
    bufp->fullIData(oldp+108,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col2),32);
    bufp->fullIData(oldp+109,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col3),32);
    bufp->fullBit(oldp+110,(vlSelfRef.clk));
    bufp->fullBit(oldp+111,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+112,(vlSelfRef.start));
    bufp->fullBit(oldp+113,(vlSelfRef.encrypt));
    bufp->fullBit(oldp+114,(vlSelfRef.done));
    bufp->fullBit(oldp+115,(vlSelfRef.busy));
    bufp->fullWData(oldp+116,(vlSelfRef.data_in),128);
    bufp->fullWData(oldp+120,(vlSelfRef.key),128);
    bufp->fullWData(oldp+124,(vlSelfRef.data_out),128);
    bufp->fullCData(oldp+128,(vlSelfRef.aes_core__DOT__next_state),3);
}
