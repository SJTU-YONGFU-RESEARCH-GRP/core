// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_carry_select_adder__Syms.h"


VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+85,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("configurable_carry_select_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"NUM_BLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"block_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+90,0,"first_block_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("carry_select_blocks[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+93,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+94,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+104,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+104,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+115,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+115,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+133,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+21,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+21,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+141,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+141,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+152,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+153,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+154,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+152,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+158,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+152,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+32,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+158,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+172,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+41,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+172,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+41,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+181,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+172,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+181,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+51,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+51,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+195,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+198,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+204,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+52,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+195,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+198,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+204,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+214,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+61,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+61,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+224,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+62,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+224,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("first_block", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+232,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+79,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+233,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+236,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+239,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+242,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_top(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_top\n"); );
    // Body
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_carry_select_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_carry_select_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_register(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vconfigurable_carry_select_adder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconfigurable_carry_select_adder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconfigurable_carry_select_adder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconfigurable_carry_select_adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_const_0_sub_0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_const_0\n"); );
    // Init
    Vconfigurable_carry_select_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_carry_select_adder___024root*>(voidSelf);
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_carry_select_adder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_const_0_sub_0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+245,(0x20U),32);
    bufp->fullIData(oldp+246,(4U),32);
    bufp->fullIData(oldp+247,(8U),32);
    bufp->fullIData(oldp+248,(7U),32);
    bufp->fullBit(oldp+249,(0U));
    bufp->fullBit(oldp+250,(1U));
    bufp->fullIData(oldp+251,(0xbU),32);
    bufp->fullIData(oldp+252,(0xcU),32);
    bufp->fullIData(oldp+253,(0xfU),32);
    bufp->fullIData(oldp+254,(0x10U),32);
    bufp->fullIData(oldp+255,(0x13U),32);
    bufp->fullIData(oldp+256,(0x14U),32);
    bufp->fullIData(oldp+257,(0x17U),32);
    bufp->fullIData(oldp+258,(0x18U),32);
    bufp->fullIData(oldp+259,(0x1bU),32);
    bufp->fullIData(oldp+260,(0x1cU),32);
    bufp->fullIData(oldp+261,(0x1fU),32);
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_full_0_sub_0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_full_0\n"); );
    // Init
    Vconfigurable_carry_select_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_carry_select_adder___024root*>(voidSelf);
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_carry_select_adder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_full_0_sub_0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0));
    bufp->fullBit(oldp+2,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1));
    bufp->fullCData(oldp+3,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0) 
                              << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                      << 1U))))),5);
    bufp->fullBit(oldp+4,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+5,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+6,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullCData(oldp+7,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1) 
                                    << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                               << 3U) 
                                              | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                    << 1U)))))),5);
    bufp->fullBit(oldp+8,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+9,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+10,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+11,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0));
    bufp->fullBit(oldp+12,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1));
    bufp->fullCData(oldp+13,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0) 
                               << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                           << 2U) | 
                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                           << 1U))))),5);
    bufp->fullBit(oldp+14,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+15,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+16,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullCData(oldp+17,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1) 
                                     << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                << 3U) 
                                               | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))))),5);
    bufp->fullBit(oldp+18,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+19,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+20,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+21,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0));
    bufp->fullBit(oldp+22,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1));
    bufp->fullCData(oldp+23,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0) 
                               << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                           << 2U) | 
                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                           << 1U))))),5);
    bufp->fullBit(oldp+24,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+25,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+26,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullCData(oldp+27,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1) 
                                     << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                << 3U) 
                                               | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))))),5);
    bufp->fullBit(oldp+28,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+29,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+30,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+31,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0));
    bufp->fullBit(oldp+32,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1));
    bufp->fullCData(oldp+33,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0) 
                               << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                           << 2U) | 
                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                           << 1U))))),5);
    bufp->fullBit(oldp+34,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+35,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+36,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullCData(oldp+37,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1) 
                                     << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                << 3U) 
                                               | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))))),5);
    bufp->fullBit(oldp+38,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+39,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+40,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+41,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0));
    bufp->fullBit(oldp+42,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1));
    bufp->fullCData(oldp+43,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0) 
                               << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                           << 2U) | 
                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                           << 1U))))),5);
    bufp->fullBit(oldp+44,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+45,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+46,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullCData(oldp+47,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1) 
                                     << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                << 3U) 
                                               | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))))),5);
    bufp->fullBit(oldp+48,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+49,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+50,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+51,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0));
    bufp->fullBit(oldp+52,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1));
    bufp->fullCData(oldp+53,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0) 
                               << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                           << 2U) | 
                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                           << 1U))))),5);
    bufp->fullBit(oldp+54,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+55,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+56,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullCData(oldp+57,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1) 
                                     << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                << 3U) 
                                               | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))))),5);
    bufp->fullBit(oldp+58,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+59,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+60,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+61,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0));
    bufp->fullBit(oldp+62,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1));
    bufp->fullCData(oldp+63,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0) 
                               << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                           << 2U) | 
                                          ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                           << 1U))))),5);
    bufp->fullBit(oldp+64,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+65,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+66,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullCData(oldp+67,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1) 
                                     << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                << 3U) 
                                               | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))))),5);
    bufp->fullBit(oldp+68,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+69,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+70,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullSData(oldp+71,(vlSelf->configurable_carry_select_adder__DOT__block_carry),9);
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                  >> 1U))));
    bufp->fullBit(oldp+73,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                  >> 2U))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                  >> 3U))));
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                  >> 4U))));
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                  >> 5U))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                  >> 6U))));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                  >> 7U))));
    bufp->fullBit(oldp+79,((1U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))));
    bufp->fullBit(oldp+80,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout));
    bufp->fullCData(oldp+81,((((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout) 
                               << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout) 
                                          << 3U) | 
                                         (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout) 
                                           << 2U) | 
                                          (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))))),5);
    bufp->fullBit(oldp+82,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout));
    bufp->fullBit(oldp+83,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout));
    bufp->fullBit(oldp+84,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout));
    bufp->fullIData(oldp+85,(vlSelf->a),32);
    bufp->fullIData(oldp+86,(vlSelf->b),32);
    bufp->fullBit(oldp+87,(vlSelf->cin));
    bufp->fullIData(oldp+88,(vlSelf->sum),32);
    bufp->fullBit(oldp+89,(vlSelf->cout));
    bufp->fullCData(oldp+90,(((8U & ((0xfffffff8U & vlSelf->a) 
                                     ^ ((0xfffffff8U 
                                         & vlSelf->b) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout) 
                                           << 3U)))) 
                              | ((4U & ((0xfffffffcU 
                                         & vlSelf->a) 
                                        ^ ((0xfffffffcU 
                                            & vlSelf->b) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout) 
                                              << 2U)))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->a) 
                                           ^ ((0xfffffffeU 
                                               & vlSelf->b) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout) 
                                                 << 1U)))) 
                                    | (1U & (vlSelf->a 
                                             ^ (vlSelf->b 
                                                ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry)))))))),4);
    bufp->fullCData(oldp+91,((0xfU & (vlSelf->a >> 4U))),4);
    bufp->fullCData(oldp+92,((0xfU & (vlSelf->b >> 4U))),4);
    bufp->fullCData(oldp+93,(((8U & ((0xffffff8U & 
                                      (vlSelf->a >> 4U)) 
                                     ^ ((0xffffff8U 
                                         & (vlSelf->b 
                                            >> 4U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xffffffcU 
                                         & (vlSelf->a 
                                            >> 4U)) 
                                        ^ ((0xffffffcU 
                                            & (vlSelf->b 
                                               >> 4U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xffffffeU 
                                            & (vlSelf->a 
                                               >> 4U)) 
                                           ^ ((0xffffffeU 
                                               & (vlSelf->b 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((vlSelf->a 
                                              ^ vlSelf->b) 
                                             >> 4U)))))),4);
    bufp->fullCData(oldp+94,(((8U & ((0xffffff8U & 
                                      (vlSelf->a >> 4U)) 
                                     ^ ((0xffffff8U 
                                         & (vlSelf->b 
                                            >> 4U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xffffffcU 
                                         & (vlSelf->a 
                                            >> 4U)) 
                                        ^ ((0xffffffcU 
                                            & (vlSelf->b 
                                               >> 4U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xffffffeU 
                                            & (vlSelf->a 
                                               >> 4U)) 
                                           ^ ((0xffffffeU 
                                               & (vlSelf->b 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((~ (vlSelf->b 
                                                 >> 4U)) 
                                             ^ (vlSelf->a 
                                                >> 4U))))))),4);
    bufp->fullBit(oldp+95,((1U & (vlSelf->a >> 4U))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->b >> 4U))));
    bufp->fullBit(oldp+97,((1U & ((vlSelf->a ^ vlSelf->b) 
                                  >> 4U))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->a >> 5U))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->b >> 5U))));
    bufp->fullBit(oldp+100,((1U & ((vlSelf->a >> 5U) 
                                   ^ ((vlSelf->b >> 5U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->a >> 6U))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->b >> 6U))));
    bufp->fullBit(oldp+103,((1U & ((vlSelf->a >> 6U) 
                                   ^ ((vlSelf->b >> 6U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->a >> 7U))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->b >> 7U))));
    bufp->fullBit(oldp+106,((1U & ((vlSelf->a >> 7U) 
                                   ^ ((vlSelf->b >> 7U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+107,((1U & ((~ (vlSelf->b >> 4U)) 
                                   ^ (vlSelf->a >> 4U)))));
    bufp->fullBit(oldp+108,((1U & ((vlSelf->a >> 5U) 
                                   ^ ((vlSelf->b >> 5U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+109,((1U & ((vlSelf->a >> 6U) 
                                   ^ ((vlSelf->b >> 6U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+110,((1U & ((vlSelf->a >> 7U) 
                                   ^ ((vlSelf->b >> 7U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullCData(oldp+111,((0xfU & (vlSelf->a >> 8U))),4);
    bufp->fullCData(oldp+112,((0xfU & (vlSelf->b >> 8U))),4);
    bufp->fullCData(oldp+113,(((8U & ((0xfffff8U & 
                                       (vlSelf->a >> 8U)) 
                                      ^ ((0xfffff8U 
                                          & (vlSelf->b 
                                             >> 8U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xfffffcU 
                                          & (vlSelf->a 
                                             >> 8U)) 
                                         ^ ((0xfffffcU 
                                             & (vlSelf->b 
                                                >> 8U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xfffffeU 
                                             & (vlSelf->a 
                                                >> 8U)) 
                                            ^ ((0xfffffeU 
                                                & (vlSelf->b 
                                                   >> 8U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->a 
                                               ^ vlSelf->b) 
                                              >> 8U)))))),4);
    bufp->fullCData(oldp+114,(((8U & ((0xfffff8U & 
                                       (vlSelf->a >> 8U)) 
                                      ^ ((0xfffff8U 
                                          & (vlSelf->b 
                                             >> 8U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xfffffcU 
                                          & (vlSelf->a 
                                             >> 8U)) 
                                         ^ ((0xfffffcU 
                                             & (vlSelf->b 
                                                >> 8U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xfffffeU 
                                             & (vlSelf->a 
                                                >> 8U)) 
                                            ^ ((0xfffffeU 
                                                & (vlSelf->b 
                                                   >> 8U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((~ (vlSelf->b 
                                                  >> 8U)) 
                                              ^ (vlSelf->a 
                                                 >> 8U))))))),4);
    bufp->fullBit(oldp+115,((1U & (vlSelf->a >> 8U))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->b >> 8U))));
    bufp->fullBit(oldp+117,((1U & ((vlSelf->a ^ vlSelf->b) 
                                   >> 8U))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->a >> 9U))));
    bufp->fullBit(oldp+119,((1U & (vlSelf->b >> 9U))));
    bufp->fullBit(oldp+120,((1U & ((vlSelf->a >> 9U) 
                                   ^ ((vlSelf->b >> 9U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->a >> 0xaU))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->b >> 0xaU))));
    bufp->fullBit(oldp+123,((1U & ((vlSelf->a >> 0xaU) 
                                   ^ ((vlSelf->b >> 0xaU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+124,((1U & (vlSelf->a >> 0xbU))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->b >> 0xbU))));
    bufp->fullBit(oldp+126,((1U & ((vlSelf->a >> 0xbU) 
                                   ^ ((vlSelf->b >> 0xbU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+127,((1U & ((~ (vlSelf->b >> 8U)) 
                                   ^ (vlSelf->a >> 8U)))));
    bufp->fullBit(oldp+128,((1U & ((vlSelf->a >> 9U) 
                                   ^ ((vlSelf->b >> 9U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+129,((1U & ((vlSelf->a >> 0xaU) 
                                   ^ ((vlSelf->b >> 0xaU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+130,((1U & ((vlSelf->a >> 0xbU) 
                                   ^ ((vlSelf->b >> 0xbU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullCData(oldp+131,((0xfU & (vlSelf->a >> 0xcU))),4);
    bufp->fullCData(oldp+132,((0xfU & (vlSelf->b >> 0xcU))),4);
    bufp->fullCData(oldp+133,(((8U & ((0xffff8U & (vlSelf->a 
                                                   >> 0xcU)) 
                                      ^ ((0xffff8U 
                                          & (vlSelf->b 
                                             >> 0xcU)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xffffcU 
                                          & (vlSelf->a 
                                             >> 0xcU)) 
                                         ^ ((0xffffcU 
                                             & (vlSelf->b 
                                                >> 0xcU)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xffffeU 
                                             & (vlSelf->a 
                                                >> 0xcU)) 
                                            ^ ((0xffffeU 
                                                & (vlSelf->b 
                                                   >> 0xcU)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->a 
                                               ^ vlSelf->b) 
                                              >> 0xcU)))))),4);
    bufp->fullCData(oldp+134,(((8U & ((0xffff8U & (vlSelf->a 
                                                   >> 0xcU)) 
                                      ^ ((0xffff8U 
                                          & (vlSelf->b 
                                             >> 0xcU)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xffffcU 
                                          & (vlSelf->a 
                                             >> 0xcU)) 
                                         ^ ((0xffffcU 
                                             & (vlSelf->b 
                                                >> 0xcU)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xffffeU 
                                             & (vlSelf->a 
                                                >> 0xcU)) 
                                            ^ ((0xffffeU 
                                                & (vlSelf->b 
                                                   >> 0xcU)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((~ (vlSelf->b 
                                                  >> 0xcU)) 
                                              ^ (vlSelf->a 
                                                 >> 0xcU))))))),4);
    bufp->fullBit(oldp+135,((1U & (vlSelf->a >> 0xcU))));
    bufp->fullBit(oldp+136,((1U & (vlSelf->b >> 0xcU))));
    bufp->fullBit(oldp+137,((1U & ((vlSelf->a ^ vlSelf->b) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+138,((1U & (vlSelf->a >> 0xdU))));
    bufp->fullBit(oldp+139,((1U & (vlSelf->b >> 0xdU))));
    bufp->fullBit(oldp+140,((1U & ((vlSelf->a >> 0xdU) 
                                   ^ ((vlSelf->b >> 0xdU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->a >> 0xeU))));
    bufp->fullBit(oldp+142,((1U & (vlSelf->b >> 0xeU))));
    bufp->fullBit(oldp+143,((1U & ((vlSelf->a >> 0xeU) 
                                   ^ ((vlSelf->b >> 0xeU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->a >> 0xfU))));
    bufp->fullBit(oldp+145,((1U & (vlSelf->b >> 0xfU))));
    bufp->fullBit(oldp+146,((1U & ((vlSelf->a >> 0xfU) 
                                   ^ ((vlSelf->b >> 0xfU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+147,((1U & ((~ (vlSelf->b >> 0xcU)) 
                                   ^ (vlSelf->a >> 0xcU)))));
    bufp->fullBit(oldp+148,((1U & ((vlSelf->a >> 0xdU) 
                                   ^ ((vlSelf->b >> 0xdU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+149,((1U & ((vlSelf->a >> 0xeU) 
                                   ^ ((vlSelf->b >> 0xeU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+150,((1U & ((vlSelf->a >> 0xfU) 
                                   ^ ((vlSelf->b >> 0xfU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullCData(oldp+151,((0xfU & (vlSelf->a >> 0x10U))),4);
    bufp->fullCData(oldp+152,((0xfU & (vlSelf->b >> 0x10U))),4);
    bufp->fullCData(oldp+153,(((8U & ((0xfff8U & (vlSelf->a 
                                                  >> 0x10U)) 
                                      ^ ((0xfff8U & 
                                          (vlSelf->b 
                                           >> 0x10U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xfffcU & 
                                          (vlSelf->a 
                                           >> 0x10U)) 
                                         ^ ((0xfffcU 
                                             & (vlSelf->b 
                                                >> 0x10U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xfffeU 
                                             & (vlSelf->a 
                                                >> 0x10U)) 
                                            ^ ((0xfffeU 
                                                & (vlSelf->b 
                                                   >> 0x10U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->a 
                                               ^ vlSelf->b) 
                                              >> 0x10U)))))),4);
    bufp->fullCData(oldp+154,(((8U & ((0xfff8U & (vlSelf->a 
                                                  >> 0x10U)) 
                                      ^ ((0xfff8U & 
                                          (vlSelf->b 
                                           >> 0x10U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xfffcU & 
                                          (vlSelf->a 
                                           >> 0x10U)) 
                                         ^ ((0xfffcU 
                                             & (vlSelf->b 
                                                >> 0x10U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xfffeU 
                                             & (vlSelf->a 
                                                >> 0x10U)) 
                                            ^ ((0xfffeU 
                                                & (vlSelf->b 
                                                   >> 0x10U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((~ (vlSelf->b 
                                                  >> 0x10U)) 
                                              ^ (vlSelf->a 
                                                 >> 0x10U))))))),4);
    bufp->fullBit(oldp+155,((1U & (vlSelf->a >> 0x10U))));
    bufp->fullBit(oldp+156,((1U & (vlSelf->b >> 0x10U))));
    bufp->fullBit(oldp+157,((1U & ((vlSelf->a ^ vlSelf->b) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->a >> 0x11U))));
    bufp->fullBit(oldp+159,((1U & (vlSelf->b >> 0x11U))));
    bufp->fullBit(oldp+160,((1U & ((vlSelf->a >> 0x11U) 
                                   ^ ((vlSelf->b >> 0x11U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+161,((1U & (vlSelf->a >> 0x12U))));
    bufp->fullBit(oldp+162,((1U & (vlSelf->b >> 0x12U))));
    bufp->fullBit(oldp+163,((1U & ((vlSelf->a >> 0x12U) 
                                   ^ ((vlSelf->b >> 0x12U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+164,((1U & (vlSelf->a >> 0x13U))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->b >> 0x13U))));
    bufp->fullBit(oldp+166,((1U & ((vlSelf->a >> 0x13U) 
                                   ^ ((vlSelf->b >> 0x13U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+167,((1U & ((~ (vlSelf->b >> 0x10U)) 
                                   ^ (vlSelf->a >> 0x10U)))));
    bufp->fullBit(oldp+168,((1U & ((vlSelf->a >> 0x11U) 
                                   ^ ((vlSelf->b >> 0x11U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+169,((1U & ((vlSelf->a >> 0x12U) 
                                   ^ ((vlSelf->b >> 0x12U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+170,((1U & ((vlSelf->a >> 0x13U) 
                                   ^ ((vlSelf->b >> 0x13U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullCData(oldp+171,((0xfU & (vlSelf->a >> 0x14U))),4);
    bufp->fullCData(oldp+172,((0xfU & (vlSelf->b >> 0x14U))),4);
    bufp->fullCData(oldp+173,(((8U & ((0xff8U & (vlSelf->a 
                                                 >> 0x14U)) 
                                      ^ ((0xff8U & 
                                          (vlSelf->b 
                                           >> 0x14U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xffcU & 
                                          (vlSelf->a 
                                           >> 0x14U)) 
                                         ^ ((0xffcU 
                                             & (vlSelf->b 
                                                >> 0x14U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xffeU 
                                             & (vlSelf->a 
                                                >> 0x14U)) 
                                            ^ ((0xffeU 
                                                & (vlSelf->b 
                                                   >> 0x14U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->a 
                                               ^ vlSelf->b) 
                                              >> 0x14U)))))),4);
    bufp->fullCData(oldp+174,(((8U & ((0xff8U & (vlSelf->a 
                                                 >> 0x14U)) 
                                      ^ ((0xff8U & 
                                          (vlSelf->b 
                                           >> 0x14U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xffcU & 
                                          (vlSelf->a 
                                           >> 0x14U)) 
                                         ^ ((0xffcU 
                                             & (vlSelf->b 
                                                >> 0x14U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xffeU 
                                             & (vlSelf->a 
                                                >> 0x14U)) 
                                            ^ ((0xffeU 
                                                & (vlSelf->b 
                                                   >> 0x14U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((~ (vlSelf->b 
                                                  >> 0x14U)) 
                                              ^ (vlSelf->a 
                                                 >> 0x14U))))))),4);
    bufp->fullBit(oldp+175,((1U & (vlSelf->a >> 0x14U))));
    bufp->fullBit(oldp+176,((1U & (vlSelf->b >> 0x14U))));
    bufp->fullBit(oldp+177,((1U & ((vlSelf->a ^ vlSelf->b) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+178,((1U & (vlSelf->a >> 0x15U))));
    bufp->fullBit(oldp+179,((1U & (vlSelf->b >> 0x15U))));
    bufp->fullBit(oldp+180,((1U & ((vlSelf->a >> 0x15U) 
                                   ^ ((vlSelf->b >> 0x15U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+181,((1U & (vlSelf->a >> 0x16U))));
    bufp->fullBit(oldp+182,((1U & (vlSelf->b >> 0x16U))));
    bufp->fullBit(oldp+183,((1U & ((vlSelf->a >> 0x16U) 
                                   ^ ((vlSelf->b >> 0x16U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+184,((1U & (vlSelf->a >> 0x17U))));
    bufp->fullBit(oldp+185,((1U & (vlSelf->b >> 0x17U))));
    bufp->fullBit(oldp+186,((1U & ((vlSelf->a >> 0x17U) 
                                   ^ ((vlSelf->b >> 0x17U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+187,((1U & ((~ (vlSelf->b >> 0x14U)) 
                                   ^ (vlSelf->a >> 0x14U)))));
    bufp->fullBit(oldp+188,((1U & ((vlSelf->a >> 0x15U) 
                                   ^ ((vlSelf->b >> 0x15U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+189,((1U & ((vlSelf->a >> 0x16U) 
                                   ^ ((vlSelf->b >> 0x16U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+190,((1U & ((vlSelf->a >> 0x17U) 
                                   ^ ((vlSelf->b >> 0x17U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullCData(oldp+191,((0xfU & (vlSelf->a >> 0x18U))),4);
    bufp->fullCData(oldp+192,((0xfU & (vlSelf->b >> 0x18U))),4);
    bufp->fullCData(oldp+193,(((8U & ((0xf8U & (vlSelf->a 
                                                >> 0x18U)) 
                                      ^ ((0xf8U & (vlSelf->b 
                                                   >> 0x18U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xfcU & (vlSelf->a 
                                                   >> 0x18U)) 
                                         ^ ((0xfcU 
                                             & (vlSelf->b 
                                                >> 0x18U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xfeU 
                                             & (vlSelf->a 
                                                >> 0x18U)) 
                                            ^ ((0xfeU 
                                                & (vlSelf->b 
                                                   >> 0x18U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->a 
                                               ^ vlSelf->b) 
                                              >> 0x18U)))))),4);
    bufp->fullCData(oldp+194,(((8U & ((0xf8U & (vlSelf->a 
                                                >> 0x18U)) 
                                      ^ ((0xf8U & (vlSelf->b 
                                                   >> 0x18U)) 
                                         ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U)))) 
                               | ((4U & ((0xfcU & (vlSelf->a 
                                                   >> 0x18U)) 
                                         ^ ((0xfcU 
                                             & (vlSelf->b 
                                                >> 0x18U)) 
                                            ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U)))) 
                                  | ((2U & ((0xfeU 
                                             & (vlSelf->a 
                                                >> 0x18U)) 
                                            ^ ((0xfeU 
                                                & (vlSelf->b 
                                                   >> 0x18U)) 
                                               ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U)))) 
                                     | (1U & ((~ (vlSelf->b 
                                                  >> 0x18U)) 
                                              ^ (vlSelf->a 
                                                 >> 0x18U))))))),4);
    bufp->fullBit(oldp+195,((1U & (vlSelf->a >> 0x18U))));
    bufp->fullBit(oldp+196,((1U & (vlSelf->b >> 0x18U))));
    bufp->fullBit(oldp+197,((1U & ((vlSelf->a ^ vlSelf->b) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+198,((1U & (vlSelf->a >> 0x19U))));
    bufp->fullBit(oldp+199,((1U & (vlSelf->b >> 0x19U))));
    bufp->fullBit(oldp+200,((1U & ((vlSelf->a >> 0x19U) 
                                   ^ ((vlSelf->b >> 0x19U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->a >> 0x1aU))));
    bufp->fullBit(oldp+202,((1U & (vlSelf->b >> 0x1aU))));
    bufp->fullBit(oldp+203,((1U & ((vlSelf->a >> 0x1aU) 
                                   ^ ((vlSelf->b >> 0x1aU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+204,((1U & (vlSelf->a >> 0x1bU))));
    bufp->fullBit(oldp+205,((1U & (vlSelf->b >> 0x1bU))));
    bufp->fullBit(oldp+206,((1U & ((vlSelf->a >> 0x1bU) 
                                   ^ ((vlSelf->b >> 0x1bU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+207,((1U & ((~ (vlSelf->b >> 0x18U)) 
                                   ^ (vlSelf->a >> 0x18U)))));
    bufp->fullBit(oldp+208,((1U & ((vlSelf->a >> 0x19U) 
                                   ^ ((vlSelf->b >> 0x19U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+209,((1U & ((vlSelf->a >> 0x1aU) 
                                   ^ ((vlSelf->b >> 0x1aU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+210,((1U & ((vlSelf->a >> 0x1bU) 
                                   ^ ((vlSelf->b >> 0x1bU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullCData(oldp+211,((vlSelf->a >> 0x1cU)),4);
    bufp->fullCData(oldp+212,((vlSelf->b >> 0x1cU)),4);
    bufp->fullCData(oldp+213,((((8U & ((vlSelf->a ^ vlSelf->b) 
                                       >> 0x1cU)) ^ 
                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                 << 3U)) | ((4U & (
                                                   (0xcU 
                                                    & (vlSelf->a 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((0xcU 
                                                     & (vlSelf->b 
                                                        >> 0x1cU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U)))) 
                                            | ((2U 
                                                & ((0xeU 
                                                    & (vlSelf->a 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((0xeU 
                                                     & (vlSelf->b 
                                                        >> 0x1cU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))) 
                                               | (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b) 
                                                     >> 0x1cU)))))),4);
    bufp->fullCData(oldp+214,((((8U & ((vlSelf->a ^ vlSelf->b) 
                                       >> 0x1cU)) ^ 
                                ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                 << 3U)) | ((4U & (
                                                   (0xcU 
                                                    & (vlSelf->a 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((0xcU 
                                                     & (vlSelf->b 
                                                        >> 0x1cU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U)))) 
                                            | ((2U 
                                                & ((0xeU 
                                                    & (vlSelf->a 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((0xeU 
                                                     & (vlSelf->b 
                                                        >> 0x1cU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                     << 1U)))) 
                                               | (1U 
                                                  & ((~ 
                                                      (vlSelf->b 
                                                       >> 0x1cU)) 
                                                     ^ 
                                                     (vlSelf->a 
                                                      >> 0x1cU))))))),4);
    bufp->fullBit(oldp+215,((1U & (vlSelf->a >> 0x1cU))));
    bufp->fullBit(oldp+216,((1U & (vlSelf->b >> 0x1cU))));
    bufp->fullBit(oldp+217,((1U & ((vlSelf->a ^ vlSelf->b) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+218,((1U & (vlSelf->a >> 0x1dU))));
    bufp->fullBit(oldp+219,((1U & (vlSelf->b >> 0x1dU))));
    bufp->fullBit(oldp+220,((1U & ((vlSelf->a >> 0x1dU) 
                                   ^ ((vlSelf->b >> 0x1dU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+221,((1U & (vlSelf->a >> 0x1eU))));
    bufp->fullBit(oldp+222,((1U & (vlSelf->b >> 0x1eU))));
    bufp->fullBit(oldp+223,((1U & ((vlSelf->a >> 0x1eU) 
                                   ^ ((vlSelf->b >> 0x1eU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+224,((vlSelf->a >> 0x1fU)));
    bufp->fullBit(oldp+225,((vlSelf->b >> 0x1fU)));
    bufp->fullBit(oldp+226,((((vlSelf->a ^ vlSelf->b) 
                              >> 0x1fU) ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    bufp->fullBit(oldp+227,((1U & ((~ (vlSelf->b >> 0x1cU)) 
                                   ^ (vlSelf->a >> 0x1cU)))));
    bufp->fullBit(oldp+228,((1U & ((vlSelf->a >> 0x1dU) 
                                   ^ ((vlSelf->b >> 0x1dU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+229,((1U & ((vlSelf->a >> 0x1eU) 
                                   ^ ((vlSelf->b >> 0x1eU) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+230,((((vlSelf->a ^ vlSelf->b) 
                              >> 0x1fU) ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    bufp->fullCData(oldp+231,((0xfU & vlSelf->a)),4);
    bufp->fullCData(oldp+232,((0xfU & vlSelf->b)),4);
    bufp->fullBit(oldp+233,((1U & vlSelf->a)));
    bufp->fullBit(oldp+234,((1U & vlSelf->b)));
    bufp->fullBit(oldp+235,((1U & (vlSelf->a ^ (vlSelf->b 
                                                ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))));
    bufp->fullBit(oldp+236,((1U & (vlSelf->a >> 1U))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->b >> 1U))));
    bufp->fullBit(oldp+238,((1U & ((vlSelf->a >> 1U) 
                                   ^ ((vlSelf->b >> 1U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout))))));
    bufp->fullBit(oldp+239,((1U & (vlSelf->a >> 2U))));
    bufp->fullBit(oldp+240,((1U & (vlSelf->b >> 2U))));
    bufp->fullBit(oldp+241,((1U & ((vlSelf->a >> 2U) 
                                   ^ ((vlSelf->b >> 2U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout))))));
    bufp->fullBit(oldp+242,((1U & (vlSelf->a >> 3U))));
    bufp->fullBit(oldp+243,((1U & (vlSelf->b >> 3U))));
    bufp->fullBit(oldp+244,((1U & ((vlSelf->a >> 3U) 
                                   ^ ((vlSelf->b >> 3U) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout))))));
}
