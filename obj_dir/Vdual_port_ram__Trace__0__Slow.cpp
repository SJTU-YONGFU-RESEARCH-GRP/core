// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_port_ram__Syms.h"


VL_ATTR_COLD void Vdual_port_ram___024root__trace_init_sub__TOP__0(Vdual_port_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dual_port_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"we_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"we_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdual_port_ram___024root__trace_init_top(Vdual_port_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_init_top\n"); );
    // Body
    Vdual_port_ram___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdual_port_ram___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdual_port_ram___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdual_port_ram___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdual_port_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdual_port_ram___024root__trace_register(Vdual_port_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdual_port_ram___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdual_port_ram___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdual_port_ram___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdual_port_ram___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdual_port_ram___024root__trace_const_0_sub_0(Vdual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdual_port_ram___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_const_0\n"); );
    // Init
    Vdual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_port_ram___024root*>(voidSelf);
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdual_port_ram___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdual_port_ram___024root__trace_const_0_sub_0(Vdual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+26,(8U),32);
    bufp->fullIData(oldp+27,(4U),32);
    bufp->fullIData(oldp+28,(0x10U),32);
}

VL_ATTR_COLD void Vdual_port_ram___024root__trace_full_0_sub_0(Vdual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdual_port_ram___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_full_0\n"); );
    // Init
    Vdual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_port_ram___024root*>(voidSelf);
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdual_port_ram___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdual_port_ram___024root__trace_full_0_sub_0(Vdual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->dual_port_ram__DOT__ram[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->dual_port_ram__DOT__ram[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->dual_port_ram__DOT__ram[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->dual_port_ram__DOT__ram[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->dual_port_ram__DOT__ram[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->dual_port_ram__DOT__ram[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->dual_port_ram__DOT__ram[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->dual_port_ram__DOT__ram[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->dual_port_ram__DOT__ram[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->dual_port_ram__DOT__ram[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->dual_port_ram__DOT__ram[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->dual_port_ram__DOT__ram[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->dual_port_ram__DOT__ram[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->dual_port_ram__DOT__ram[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->dual_port_ram__DOT__ram[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->dual_port_ram__DOT__ram[15]),8);
    bufp->fullBit(oldp+17,(vlSelf->clk));
    bufp->fullCData(oldp+18,(vlSelf->addr_a),4);
    bufp->fullCData(oldp+19,(vlSelf->data_a),8);
    bufp->fullBit(oldp+20,(vlSelf->we_a));
    bufp->fullCData(oldp+21,(vlSelf->q_a),8);
    bufp->fullCData(oldp+22,(vlSelf->addr_b),4);
    bufp->fullCData(oldp+23,(vlSelf->data_b),8);
    bufp->fullBit(oldp+24,(vlSelf->we_b));
    bufp->fullCData(oldp+25,(vlSelf->q_b),8);
}
