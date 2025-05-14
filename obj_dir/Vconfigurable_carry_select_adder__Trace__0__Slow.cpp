// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_carry_select_adder__Syms.h"


VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__first_block__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+145,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+147,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+149,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+150,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+152,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("configurable_carry_select_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+145,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+147,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+149,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+150,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+152,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"NUM_BLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"block_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+153,0,"first_block_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("first_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__first_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+128,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+159,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+129,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+165,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+130,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+131,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+132,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+133,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("carry_select_blocks[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"CURRENT_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"START_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+446,0,"END_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"block_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"block_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"sum_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"sum_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"cout_cin_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"cout_cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+134,0,"select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__first_block__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__first_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+135,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+187,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+196,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+199,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+202,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+205,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+208,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+211,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+214,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+217,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+220,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+223,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+226,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+229,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+208,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+211,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+214,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+217,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+220,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+223,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+226,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+229,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+159,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+240,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+243,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+249,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+252,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+258,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+261,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+159,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+240,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+243,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+249,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+252,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+258,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+261,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+272,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+275,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+278,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+281,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+284,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+287,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+293,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+6,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+272,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+275,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+278,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+281,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+284,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+287,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+293,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+304,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+307,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+310,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+313,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+316,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+319,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+322,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+325,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+304,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+307,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+310,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+313,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+316,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+319,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+322,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+325,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+336,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+339,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+345,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+351,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+354,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+357,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+336,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+339,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+345,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+351,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+354,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+357,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+368,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+371,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+377,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+380,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+383,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+368,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+371,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+377,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+380,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+383,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+400,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+406,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+409,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+412,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+415,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+418,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+421,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_init_sub__TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("full_adders[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+400,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+403,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+406,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+409,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+412,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+415,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+418,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full_adders[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+421,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullIData(oldp+432,(0x40U),32);
    bufp->fullIData(oldp+433,(8U),32);
    bufp->fullIData(oldp+434,(0xfU),32);
    bufp->fullIData(oldp+435,(0x10U),32);
    bufp->fullIData(oldp+436,(0x17U),32);
    bufp->fullIData(oldp+437,(0x18U),32);
    bufp->fullIData(oldp+438,(0x1fU),32);
    bufp->fullIData(oldp+439,(0x20U),32);
    bufp->fullIData(oldp+440,(0x27U),32);
    bufp->fullIData(oldp+441,(0x28U),32);
    bufp->fullIData(oldp+442,(0x2fU),32);
    bufp->fullIData(oldp+443,(0x30U),32);
    bufp->fullIData(oldp+444,(0x37U),32);
    bufp->fullIData(oldp+445,(0x38U),32);
    bufp->fullIData(oldp+446,(0x3fU),32);
    bufp->fullBit(oldp+447,(0U));
    bufp->fullBit(oldp+448,(1U));
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.cout));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.cout));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.cout));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.cout));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.cout));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.cout));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.cout));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.cout));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.cout));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.cout));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.cout));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.cout));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.cout));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.cout));
    bufp->fullSData(oldp+15,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.cout) 
                               << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                       << 1U))))))))),9);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+23,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.cout) 
                                     << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                << 7U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                               << 2U) 
                                                              | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))))))))),9);
    bufp->fullBit(oldp+24,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+31,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.cout) 
                               << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                       << 1U))))))))),9);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+39,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.cout) 
                                     << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                << 7U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                               << 2U) 
                                                              | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))))))))),9);
    bufp->fullBit(oldp+40,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+47,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.cout) 
                               << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                       << 1U))))))))),9);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+55,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.cout) 
                                     << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                << 7U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                               << 2U) 
                                                              | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))))))))),9);
    bufp->fullBit(oldp+56,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+63,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.cout) 
                               << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                       << 1U))))))))),9);
    bufp->fullBit(oldp+64,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+71,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.cout) 
                                     << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                << 7U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                               << 2U) 
                                                              | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))))))))),9);
    bufp->fullBit(oldp+72,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+79,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.cout) 
                               << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                       << 1U))))))))),9);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+87,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.cout) 
                                     << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                << 7U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                               << 2U) 
                                                              | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                 << 1U)))))))))),9);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+95,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.cout) 
                               << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                       << 1U))))))))),9);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+103,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.cout) 
                                      << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                 << 7U) 
                                                | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                    << 6U) 
                                                   | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                       << 5U) 
                                                      | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                          << 4U) 
                                                         | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                << 2U) 
                                                               | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                  << 1U)))))))))),9);
    bufp->fullBit(oldp+104,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+111,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.cout) 
                                << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                           << 7U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                            << 6U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                               << 5U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                  << 4U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                     << 3U) 
                                                    | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                        << 2U) 
                                                       | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                          << 1U))))))))),9);
    bufp->fullBit(oldp+112,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+119,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.cout) 
                                      << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                 << 7U) 
                                                | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                    << 6U) 
                                                   | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                       << 5U) 
                                                      | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                          << 4U) 
                                                         | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                << 2U) 
                                                               | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                  << 1U)))))))))),9);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullSData(oldp+127,(vlSelf->configurable_carry_select_adder__DOT__block_carry),9);
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                   >> 1U))));
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                   >> 2U))));
    bufp->fullBit(oldp+130,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                   >> 3U))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                   >> 4U))));
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                   >> 5U))));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                   >> 6U))));
    bufp->fullBit(oldp+134,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                   >> 7U))));
    bufp->fullBit(oldp+135,((1U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.cout));
    bufp->fullSData(oldp+137,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.cout) 
                                << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                           << 7U) | 
                                          (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                            << 6U) 
                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                               << 5U) 
                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                  << 4U) 
                                                 | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                     << 3U) 
                                                    | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                        << 2U) 
                                                       | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))))))))),9);
    bufp->fullBit(oldp+138,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    bufp->fullQData(oldp+145,(vlSelf->a),64);
    bufp->fullQData(oldp+147,(vlSelf->b),64);
    bufp->fullBit(oldp+149,(vlSelf->cin));
    bufp->fullQData(oldp+150,(vlSelf->sum),64);
    bufp->fullBit(oldp+152,(vlSelf->cout));
    bufp->fullCData(oldp+153,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 7U)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 7U)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 6U)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 6U)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 5U)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 4U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 4U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 3U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 3U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 2U)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 2U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 1U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 1U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->a) 
                                                   ^ 
                                                   ((IData)(vlSelf->b) 
                                                    ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry)))))))))))),8);
    bufp->fullCData(oldp+154,((0xffU & (IData)((vlSelf->a 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+155,((0xffU & (IData)((vlSelf->b 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+156,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0xfU)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0xfU)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0xeU)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0xeU)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0xdU)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0xcU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0xcU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0xbU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0xbU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0xaU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0xaU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 9U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 9U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 8U)) 
                                                   ^ (IData)(
                                                             (vlSelf->b 
                                                              >> 8U)))))))))))),8);
    bufp->fullCData(oldp+157,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0xfU)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0xfU)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0xeU)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0xeU)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0xdU)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0xcU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0xcU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0xbU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0xbU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0xaU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0xaU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 9U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 9U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 8U)) 
                                                   ^ 
                                                   (~ (IData)(
                                                              (vlSelf->b 
                                                               >> 8U))))))))))))),8);
    bufp->fullCData(oldp+158,((0xffU & (IData)((vlSelf->a 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+159,((0xffU & (IData)((vlSelf->b 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+160,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x17U)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x17U)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x16U)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x16U)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x15U)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x14U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x14U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x13U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x13U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x12U)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x12U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x11U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x11U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSelf->b 
                                                              >> 0x10U)))))))))))),8);
    bufp->fullCData(oldp+161,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x17U)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x17U)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x16U)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x16U)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x15U)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x14U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x14U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x13U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x13U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x12U)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x12U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x11U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x11U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x10U)) 
                                                   ^ 
                                                   (~ (IData)(
                                                              (vlSelf->b 
                                                               >> 0x10U))))))))))))),8);
    bufp->fullCData(oldp+162,((0xffU & (IData)((vlSelf->a 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+163,((0xffU & (IData)((vlSelf->b 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+164,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x1fU)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x1fU)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x1eU)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x1eU)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x1dU)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x1cU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x1cU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x1bU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x1aU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x1aU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x19U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x19U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x18U)) 
                                                   ^ (IData)(
                                                             (vlSelf->b 
                                                              >> 0x18U)))))))))))),8);
    bufp->fullCData(oldp+165,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x1fU)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x1fU)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x1eU)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x1eU)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x1dU)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x1cU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x1cU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x1bU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x1aU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x1aU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x19U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x19U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x18U)) 
                                                   ^ 
                                                   (~ (IData)(
                                                              (vlSelf->b 
                                                               >> 0x18U))))))))))))),8);
    bufp->fullCData(oldp+166,((0xffU & (IData)((vlSelf->a 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+167,((0xffU & (IData)((vlSelf->b 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+168,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x27U)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x27U)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x26U)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x26U)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x25U)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x24U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x24U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x23U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x23U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x22U)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x22U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x21U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x21U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x20U)) 
                                                   ^ (IData)(
                                                             (vlSelf->b 
                                                              >> 0x20U)))))))))))),8);
    bufp->fullCData(oldp+169,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x27U)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x27U)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x26U)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x26U)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x25U)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x24U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x24U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x23U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x23U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x22U)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x22U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x21U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x21U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x20U)) 
                                                   ^ 
                                                   (~ (IData)(
                                                              (vlSelf->b 
                                                               >> 0x20U))))))))))))),8);
    bufp->fullCData(oldp+170,((0xffU & (IData)((vlSelf->a 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+171,((0xffU & (IData)((vlSelf->b 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+172,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x2fU)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x2fU)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x2eU)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x2eU)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x2dU)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x2cU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x2cU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x2bU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x2bU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x2aU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x2aU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x29U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x29U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x28U)) 
                                                   ^ (IData)(
                                                             (vlSelf->b 
                                                              >> 0x28U)))))))))))),8);
    bufp->fullCData(oldp+173,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x2fU)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x2fU)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x2eU)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x2eU)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x2dU)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x2cU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x2cU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x2bU)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x2bU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x2aU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x2aU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x29U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x29U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x28U)) 
                                                   ^ 
                                                   (~ (IData)(
                                                              (vlSelf->b 
                                                               >> 0x28U))))))))))))),8);
    bufp->fullCData(oldp+174,((0xffU & (IData)((vlSelf->a 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+175,((0xffU & (IData)((vlSelf->b 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+176,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x37U)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x37U)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x36U)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x36U)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x35U)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x34U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x34U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x33U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x33U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x32U)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x32U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x31U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x31U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSelf->b 
                                                              >> 0x30U)))))))))))),8);
    bufp->fullCData(oldp+177,(((0x80U & (((IData)((vlSelf->a 
                                                   >> 0x37U)) 
                                          ^ ((IData)(
                                                     (vlSelf->b 
                                                      >> 0x37U)) 
                                             ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                         << 7U)) | 
                               ((0x40U & (((IData)(
                                                   (vlSelf->a 
                                                    >> 0x36U)) 
                                           ^ ((IData)(
                                                      (vlSelf->b 
                                                       >> 0x36U)) 
                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(
                                                    (vlSelf->a 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->b 
                                                        >> 0x35U)) 
                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x34U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x34U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(
                                                       (vlSelf->a 
                                                        >> 0x33U)) 
                                               ^ ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x33U)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x32U)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x32U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(
                                                        (vlSelf->a 
                                                         >> 0x31U)) 
                                                ^ ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x31U)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(
                                                           (vlSelf->a 
                                                            >> 0x30U)) 
                                                   ^ 
                                                   (~ (IData)(
                                                              (vlSelf->b 
                                                               >> 0x30U))))))))))))),8);
    bufp->fullCData(oldp+178,((0xffU & (IData)((vlSelf->a 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+179,((0xffU & (IData)((vlSelf->b 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+180,((((IData)((((vlSelf->a 
                                           ^ vlSelf->b) 
                                          >> 0x3fU) 
                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                << 7U) | ((0x40U & 
                                           (((IData)(
                                                     (vlSelf->a 
                                                      >> 0x3eU)) 
                                             ^ ((IData)(
                                                        (vlSelf->b 
                                                         >> 0x3eU)) 
                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x3dU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x3dU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (((IData)(
                                                             (vlSelf->a 
                                                              >> 0x3cU)) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSelf->b 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x3bU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x3bU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x3aU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x3aU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x39U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x39U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(
                                                                       (vlSelf->a 
                                                                        >> 0x38U)) 
                                                               ^ (IData)(
                                                                         (vlSelf->b 
                                                                          >> 0x38U)))))))))))),8);
    bufp->fullCData(oldp+181,((((IData)((((vlSelf->a 
                                           ^ vlSelf->b) 
                                          >> 0x3fU) 
                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                << 7U) | ((0x40U & 
                                           (((IData)(
                                                     (vlSelf->a 
                                                      >> 0x3eU)) 
                                             ^ ((IData)(
                                                        (vlSelf->b 
                                                         >> 0x3eU)) 
                                                ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (((IData)(
                                                          (vlSelf->a 
                                                           >> 0x3dU)) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->b 
                                                            >> 0x3dU)) 
                                                   ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (((IData)(
                                                             (vlSelf->a 
                                                              >> 0x3cU)) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSelf->b 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x3bU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x3bU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x3aU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x3aU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x39U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x39U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(
                                                                       (vlSelf->a 
                                                                        >> 0x38U)) 
                                                               ^ 
                                                               (~ (IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x38U))))))))))))),8);
    bufp->fullCData(oldp+182,((0xffU & (IData)(vlSelf->a))),8);
    bufp->fullCData(oldp+183,((0xffU & (IData)(vlSelf->b))),8);
    bufp->fullBit(oldp+184,((1U & (IData)(vlSelf->a))));
    bufp->fullBit(oldp+185,((1U & (IData)(vlSelf->b))));
    bufp->fullBit(oldp+186,((1U & ((IData)(vlSelf->a) 
                                   ^ ((IData)(vlSelf->b) 
                                      ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))));
    bufp->fullBit(oldp+187,((1U & (IData)((vlSelf->a 
                                           >> 1U)))));
    bufp->fullBit(oldp+188,((1U & (IData)((vlSelf->b 
                                           >> 1U)))));
    bufp->fullBit(oldp+189,((1U & ((IData)((vlSelf->a 
                                            >> 1U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 1U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+190,((1U & (IData)((vlSelf->a 
                                           >> 2U)))));
    bufp->fullBit(oldp+191,((1U & (IData)((vlSelf->b 
                                           >> 2U)))));
    bufp->fullBit(oldp+192,((1U & ((IData)((vlSelf->a 
                                            >> 2U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 2U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+193,((1U & (IData)((vlSelf->a 
                                           >> 3U)))));
    bufp->fullBit(oldp+194,((1U & (IData)((vlSelf->b 
                                           >> 3U)))));
    bufp->fullBit(oldp+195,((1U & ((IData)((vlSelf->a 
                                            >> 3U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 3U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+196,((1U & (IData)((vlSelf->a 
                                           >> 4U)))));
    bufp->fullBit(oldp+197,((1U & (IData)((vlSelf->b 
                                           >> 4U)))));
    bufp->fullBit(oldp+198,((1U & ((IData)((vlSelf->a 
                                            >> 4U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 4U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+199,((1U & (IData)((vlSelf->a 
                                           >> 5U)))));
    bufp->fullBit(oldp+200,((1U & (IData)((vlSelf->b 
                                           >> 5U)))));
    bufp->fullBit(oldp+201,((1U & ((IData)((vlSelf->a 
                                            >> 5U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 5U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+202,((1U & (IData)((vlSelf->a 
                                           >> 6U)))));
    bufp->fullBit(oldp+203,((1U & (IData)((vlSelf->b 
                                           >> 6U)))));
    bufp->fullBit(oldp+204,((1U & ((IData)((vlSelf->a 
                                            >> 6U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 6U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+205,((1U & (IData)((vlSelf->a 
                                           >> 7U)))));
    bufp->fullBit(oldp+206,((1U & (IData)((vlSelf->b 
                                           >> 7U)))));
    bufp->fullBit(oldp+207,((1U & ((IData)((vlSelf->a 
                                            >> 7U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 7U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+208,((1U & (IData)((vlSelf->a 
                                           >> 8U)))));
    bufp->fullBit(oldp+209,((1U & (IData)((vlSelf->b 
                                           >> 8U)))));
    bufp->fullBit(oldp+210,((1U & ((IData)((vlSelf->a 
                                            >> 8U)) 
                                   ^ (IData)((vlSelf->b 
                                              >> 8U))))));
    bufp->fullBit(oldp+211,((1U & (IData)((vlSelf->a 
                                           >> 9U)))));
    bufp->fullBit(oldp+212,((1U & (IData)((vlSelf->b 
                                           >> 9U)))));
    bufp->fullBit(oldp+213,((1U & ((IData)((vlSelf->a 
                                            >> 9U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 9U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+214,((1U & (IData)((vlSelf->a 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+215,((1U & (IData)((vlSelf->b 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+216,((1U & ((IData)((vlSelf->a 
                                            >> 0xaU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xaU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+217,((1U & (IData)((vlSelf->a 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+218,((1U & (IData)((vlSelf->b 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+219,((1U & ((IData)((vlSelf->a 
                                            >> 0xbU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xbU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+220,((1U & (IData)((vlSelf->a 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+221,((1U & (IData)((vlSelf->b 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+222,((1U & ((IData)((vlSelf->a 
                                            >> 0xcU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xcU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+223,((1U & (IData)((vlSelf->a 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+224,((1U & (IData)((vlSelf->b 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+225,((1U & ((IData)((vlSelf->a 
                                            >> 0xdU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xdU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+226,((1U & (IData)((vlSelf->a 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+227,((1U & (IData)((vlSelf->b 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+228,((1U & ((IData)((vlSelf->a 
                                            >> 0xeU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xeU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+229,((1U & (IData)((vlSelf->a 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+230,((1U & (IData)((vlSelf->b 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+231,((1U & ((IData)((vlSelf->a 
                                            >> 0xfU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xfU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+232,((1U & ((IData)((vlSelf->a 
                                            >> 8U)) 
                                   ^ (~ (IData)((vlSelf->b 
                                                 >> 8U)))))));
    bufp->fullBit(oldp+233,((1U & ((IData)((vlSelf->a 
                                            >> 9U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 9U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+234,((1U & ((IData)((vlSelf->a 
                                            >> 0xaU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xaU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+235,((1U & ((IData)((vlSelf->a 
                                            >> 0xbU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xbU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+236,((1U & ((IData)((vlSelf->a 
                                            >> 0xcU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xcU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+237,((1U & ((IData)((vlSelf->a 
                                            >> 0xdU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xdU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+238,((1U & ((IData)((vlSelf->a 
                                            >> 0xeU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xeU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+239,((1U & ((IData)((vlSelf->a 
                                            >> 0xfU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0xfU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+240,((1U & (IData)((vlSelf->a 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+241,((1U & (IData)((vlSelf->b 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+242,((1U & ((IData)((vlSelf->a 
                                            >> 0x10U)) 
                                   ^ (IData)((vlSelf->b 
                                              >> 0x10U))))));
    bufp->fullBit(oldp+243,((1U & (IData)((vlSelf->a 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+244,((1U & (IData)((vlSelf->b 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+245,((1U & ((IData)((vlSelf->a 
                                            >> 0x11U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x11U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+246,((1U & (IData)((vlSelf->a 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+247,((1U & (IData)((vlSelf->b 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+248,((1U & ((IData)((vlSelf->a 
                                            >> 0x12U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x12U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+249,((1U & (IData)((vlSelf->a 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+250,((1U & (IData)((vlSelf->b 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+251,((1U & ((IData)((vlSelf->a 
                                            >> 0x13U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x13U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+252,((1U & (IData)((vlSelf->a 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+253,((1U & (IData)((vlSelf->b 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+254,((1U & ((IData)((vlSelf->a 
                                            >> 0x14U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x14U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+255,((1U & (IData)((vlSelf->a 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+256,((1U & (IData)((vlSelf->b 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+257,((1U & ((IData)((vlSelf->a 
                                            >> 0x15U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x15U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+258,((1U & (IData)((vlSelf->a 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+259,((1U & (IData)((vlSelf->b 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+260,((1U & ((IData)((vlSelf->a 
                                            >> 0x16U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x16U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+261,((1U & (IData)((vlSelf->a 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+262,((1U & (IData)((vlSelf->b 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+263,((1U & ((IData)((vlSelf->a 
                                            >> 0x17U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x17U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+264,((1U & ((IData)((vlSelf->a 
                                            >> 0x10U)) 
                                   ^ (~ (IData)((vlSelf->b 
                                                 >> 0x10U)))))));
    bufp->fullBit(oldp+265,((1U & ((IData)((vlSelf->a 
                                            >> 0x11U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x11U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+266,((1U & ((IData)((vlSelf->a 
                                            >> 0x12U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x12U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+267,((1U & ((IData)((vlSelf->a 
                                            >> 0x13U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x13U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+268,((1U & ((IData)((vlSelf->a 
                                            >> 0x14U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x14U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+269,((1U & ((IData)((vlSelf->a 
                                            >> 0x15U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x15U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+270,((1U & ((IData)((vlSelf->a 
                                            >> 0x16U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x16U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+271,((1U & ((IData)((vlSelf->a 
                                            >> 0x17U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x17U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+272,((1U & (IData)((vlSelf->a 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+273,((1U & (IData)((vlSelf->b 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+274,((1U & ((IData)((vlSelf->a 
                                            >> 0x18U)) 
                                   ^ (IData)((vlSelf->b 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+275,((1U & (IData)((vlSelf->a 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+276,((1U & (IData)((vlSelf->b 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+277,((1U & ((IData)((vlSelf->a 
                                            >> 0x19U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x19U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+278,((1U & (IData)((vlSelf->a 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+279,((1U & (IData)((vlSelf->b 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+280,((1U & ((IData)((vlSelf->a 
                                            >> 0x1aU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1aU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+281,((1U & (IData)((vlSelf->a 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+282,((1U & (IData)((vlSelf->b 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+283,((1U & ((IData)((vlSelf->a 
                                            >> 0x1bU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1bU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+284,((1U & (IData)((vlSelf->a 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+285,((1U & (IData)((vlSelf->b 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+286,((1U & ((IData)((vlSelf->a 
                                            >> 0x1cU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1cU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+287,((1U & (IData)((vlSelf->a 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+288,((1U & (IData)((vlSelf->b 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+289,((1U & ((IData)((vlSelf->a 
                                            >> 0x1dU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1dU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+290,((1U & (IData)((vlSelf->a 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+291,((1U & (IData)((vlSelf->b 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+292,((1U & ((IData)((vlSelf->a 
                                            >> 0x1eU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1eU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+293,((1U & (IData)((vlSelf->a 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+294,((1U & (IData)((vlSelf->b 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+295,((1U & ((IData)((vlSelf->a 
                                            >> 0x1fU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1fU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+296,((1U & ((IData)((vlSelf->a 
                                            >> 0x18U)) 
                                   ^ (~ (IData)((vlSelf->b 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+297,((1U & ((IData)((vlSelf->a 
                                            >> 0x19U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x19U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+298,((1U & ((IData)((vlSelf->a 
                                            >> 0x1aU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1aU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+299,((1U & ((IData)((vlSelf->a 
                                            >> 0x1bU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1bU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+300,((1U & ((IData)((vlSelf->a 
                                            >> 0x1cU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1cU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+301,((1U & ((IData)((vlSelf->a 
                                            >> 0x1dU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1dU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+302,((1U & ((IData)((vlSelf->a 
                                            >> 0x1eU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1eU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+303,((1U & ((IData)((vlSelf->a 
                                            >> 0x1fU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x1fU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+304,((1U & (IData)((vlSelf->a 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+305,((1U & (IData)((vlSelf->b 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+306,((1U & ((IData)((vlSelf->a 
                                            >> 0x20U)) 
                                   ^ (IData)((vlSelf->b 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+307,((1U & (IData)((vlSelf->a 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+308,((1U & (IData)((vlSelf->b 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+309,((1U & ((IData)((vlSelf->a 
                                            >> 0x21U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x21U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+310,((1U & (IData)((vlSelf->a 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+311,((1U & (IData)((vlSelf->b 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+312,((1U & ((IData)((vlSelf->a 
                                            >> 0x22U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x22U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+313,((1U & (IData)((vlSelf->a 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+314,((1U & (IData)((vlSelf->b 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+315,((1U & ((IData)((vlSelf->a 
                                            >> 0x23U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x23U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+316,((1U & (IData)((vlSelf->a 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+317,((1U & (IData)((vlSelf->b 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+318,((1U & ((IData)((vlSelf->a 
                                            >> 0x24U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x24U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+319,((1U & (IData)((vlSelf->a 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+320,((1U & (IData)((vlSelf->b 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+321,((1U & ((IData)((vlSelf->a 
                                            >> 0x25U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x25U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+322,((1U & (IData)((vlSelf->a 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+323,((1U & (IData)((vlSelf->b 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+324,((1U & ((IData)((vlSelf->a 
                                            >> 0x26U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x26U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+325,((1U & (IData)((vlSelf->a 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+326,((1U & (IData)((vlSelf->b 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+327,((1U & ((IData)((vlSelf->a 
                                            >> 0x27U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x27U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+328,((1U & ((IData)((vlSelf->a 
                                            >> 0x20U)) 
                                   ^ (~ (IData)((vlSelf->b 
                                                 >> 0x20U)))))));
    bufp->fullBit(oldp+329,((1U & ((IData)((vlSelf->a 
                                            >> 0x21U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x21U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+330,((1U & ((IData)((vlSelf->a 
                                            >> 0x22U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x22U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+331,((1U & ((IData)((vlSelf->a 
                                            >> 0x23U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x23U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+332,((1U & ((IData)((vlSelf->a 
                                            >> 0x24U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x24U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+333,((1U & ((IData)((vlSelf->a 
                                            >> 0x25U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x25U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+334,((1U & ((IData)((vlSelf->a 
                                            >> 0x26U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x26U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+335,((1U & ((IData)((vlSelf->a 
                                            >> 0x27U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x27U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+336,((1U & (IData)((vlSelf->a 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+337,((1U & (IData)((vlSelf->b 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+338,((1U & ((IData)((vlSelf->a 
                                            >> 0x28U)) 
                                   ^ (IData)((vlSelf->b 
                                              >> 0x28U))))));
    bufp->fullBit(oldp+339,((1U & (IData)((vlSelf->a 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+340,((1U & (IData)((vlSelf->b 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+341,((1U & ((IData)((vlSelf->a 
                                            >> 0x29U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x29U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+342,((1U & (IData)((vlSelf->a 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+343,((1U & (IData)((vlSelf->b 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+344,((1U & ((IData)((vlSelf->a 
                                            >> 0x2aU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2aU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+345,((1U & (IData)((vlSelf->a 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+346,((1U & (IData)((vlSelf->b 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+347,((1U & ((IData)((vlSelf->a 
                                            >> 0x2bU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2bU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+348,((1U & (IData)((vlSelf->a 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+349,((1U & (IData)((vlSelf->b 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+350,((1U & ((IData)((vlSelf->a 
                                            >> 0x2cU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2cU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+351,((1U & (IData)((vlSelf->a 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+352,((1U & (IData)((vlSelf->b 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+353,((1U & ((IData)((vlSelf->a 
                                            >> 0x2dU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2dU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+354,((1U & (IData)((vlSelf->a 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+355,((1U & (IData)((vlSelf->b 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+356,((1U & ((IData)((vlSelf->a 
                                            >> 0x2eU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2eU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+357,((1U & (IData)((vlSelf->a 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+358,((1U & (IData)((vlSelf->b 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+359,((1U & ((IData)((vlSelf->a 
                                            >> 0x2fU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2fU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+360,((1U & ((IData)((vlSelf->a 
                                            >> 0x28U)) 
                                   ^ (~ (IData)((vlSelf->b 
                                                 >> 0x28U)))))));
    bufp->fullBit(oldp+361,((1U & ((IData)((vlSelf->a 
                                            >> 0x29U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x29U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+362,((1U & ((IData)((vlSelf->a 
                                            >> 0x2aU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2aU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+363,((1U & ((IData)((vlSelf->a 
                                            >> 0x2bU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2bU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+364,((1U & ((IData)((vlSelf->a 
                                            >> 0x2cU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2cU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+365,((1U & ((IData)((vlSelf->a 
                                            >> 0x2dU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2dU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+366,((1U & ((IData)((vlSelf->a 
                                            >> 0x2eU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2eU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+367,((1U & ((IData)((vlSelf->a 
                                            >> 0x2fU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x2fU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+368,((1U & (IData)((vlSelf->a 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+369,((1U & (IData)((vlSelf->b 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+370,((1U & ((IData)((vlSelf->a 
                                            >> 0x30U)) 
                                   ^ (IData)((vlSelf->b 
                                              >> 0x30U))))));
    bufp->fullBit(oldp+371,((1U & (IData)((vlSelf->a 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+372,((1U & (IData)((vlSelf->b 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+373,((1U & ((IData)((vlSelf->a 
                                            >> 0x31U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x31U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+374,((1U & (IData)((vlSelf->a 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+375,((1U & (IData)((vlSelf->b 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+376,((1U & ((IData)((vlSelf->a 
                                            >> 0x32U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x32U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+377,((1U & (IData)((vlSelf->a 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+378,((1U & (IData)((vlSelf->b 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+379,((1U & ((IData)((vlSelf->a 
                                            >> 0x33U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x33U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+380,((1U & (IData)((vlSelf->a 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+381,((1U & (IData)((vlSelf->b 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+382,((1U & ((IData)((vlSelf->a 
                                            >> 0x34U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x34U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+383,((1U & (IData)((vlSelf->a 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+384,((1U & (IData)((vlSelf->b 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+385,((1U & ((IData)((vlSelf->a 
                                            >> 0x35U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x35U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+386,((1U & (IData)((vlSelf->a 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+387,((1U & (IData)((vlSelf->b 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+388,((1U & ((IData)((vlSelf->a 
                                            >> 0x36U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x36U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+389,((1U & (IData)((vlSelf->a 
                                           >> 0x37U)))));
    bufp->fullBit(oldp+390,((1U & (IData)((vlSelf->b 
                                           >> 0x37U)))));
    bufp->fullBit(oldp+391,((1U & ((IData)((vlSelf->a 
                                            >> 0x37U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x37U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+392,((1U & ((IData)((vlSelf->a 
                                            >> 0x30U)) 
                                   ^ (~ (IData)((vlSelf->b 
                                                 >> 0x30U)))))));
    bufp->fullBit(oldp+393,((1U & ((IData)((vlSelf->a 
                                            >> 0x31U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x31U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+394,((1U & ((IData)((vlSelf->a 
                                            >> 0x32U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x32U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+395,((1U & ((IData)((vlSelf->a 
                                            >> 0x33U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x33U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+396,((1U & ((IData)((vlSelf->a 
                                            >> 0x34U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x34U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+397,((1U & ((IData)((vlSelf->a 
                                            >> 0x35U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x35U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+398,((1U & ((IData)((vlSelf->a 
                                            >> 0x36U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x36U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+399,((1U & ((IData)((vlSelf->a 
                                            >> 0x37U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x37U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+400,((1U & (IData)((vlSelf->a 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+401,((1U & (IData)((vlSelf->b 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+402,((1U & ((IData)((vlSelf->a 
                                            >> 0x38U)) 
                                   ^ (IData)((vlSelf->b 
                                              >> 0x38U))))));
    bufp->fullBit(oldp+403,((1U & (IData)((vlSelf->a 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+404,((1U & (IData)((vlSelf->b 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+405,((1U & ((IData)((vlSelf->a 
                                            >> 0x39U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x39U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+406,((1U & (IData)((vlSelf->a 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+407,((1U & (IData)((vlSelf->b 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+408,((1U & ((IData)((vlSelf->a 
                                            >> 0x3aU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3aU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+409,((1U & (IData)((vlSelf->a 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+410,((1U & (IData)((vlSelf->b 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+411,((1U & ((IData)((vlSelf->a 
                                            >> 0x3bU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3bU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+412,((1U & (IData)((vlSelf->a 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+413,((1U & (IData)((vlSelf->b 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+414,((1U & ((IData)((vlSelf->a 
                                            >> 0x3cU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3cU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+415,((1U & (IData)((vlSelf->a 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+416,((1U & (IData)((vlSelf->b 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+417,((1U & ((IData)((vlSelf->a 
                                            >> 0x3dU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3dU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+418,((1U & (IData)((vlSelf->a 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+419,((1U & (IData)((vlSelf->b 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+420,((1U & ((IData)((vlSelf->a 
                                            >> 0x3eU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3eU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+421,((1U & (IData)((vlSelf->a 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+422,((1U & (IData)((vlSelf->b 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+423,((IData)((((vlSelf->a ^ vlSelf->b) 
                                      >> 0x3fU) ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin)))));
    bufp->fullBit(oldp+424,((1U & ((IData)((vlSelf->a 
                                            >> 0x38U)) 
                                   ^ (~ (IData)((vlSelf->b 
                                                 >> 0x38U)))))));
    bufp->fullBit(oldp+425,((1U & ((IData)((vlSelf->a 
                                            >> 0x39U)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x39U)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+426,((1U & ((IData)((vlSelf->a 
                                            >> 0x3aU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3aU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+427,((1U & ((IData)((vlSelf->a 
                                            >> 0x3bU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3bU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+428,((1U & ((IData)((vlSelf->a 
                                            >> 0x3cU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3cU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+429,((1U & ((IData)((vlSelf->a 
                                            >> 0x3dU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3dU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+430,((1U & ((IData)((vlSelf->a 
                                            >> 0x3eU)) 
                                   ^ ((IData)((vlSelf->b 
                                               >> 0x3eU)) 
                                      ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->fullBit(oldp+431,((IData)((((vlSelf->a ^ vlSelf->b) 
                                      >> 0x3fU) ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin)))));
}
