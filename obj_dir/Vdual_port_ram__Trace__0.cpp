// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_port_ram__Syms.h"


void Vdual_port_ram___024root__trace_chg_0_sub_0(Vdual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdual_port_ram___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_chg_0\n"); );
    // Init
    Vdual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_port_ram___024root*>(voidSelf);
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdual_port_ram___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdual_port_ram___024root__trace_chg_0_sub_0(Vdual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->dual_port_ram__DOT__ram[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->dual_port_ram__DOT__ram[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->dual_port_ram__DOT__ram[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->dual_port_ram__DOT__ram[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->dual_port_ram__DOT__ram[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->dual_port_ram__DOT__ram[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->dual_port_ram__DOT__ram[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->dual_port_ram__DOT__ram[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->dual_port_ram__DOT__ram[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->dual_port_ram__DOT__ram[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->dual_port_ram__DOT__ram[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->dual_port_ram__DOT__ram[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->dual_port_ram__DOT__ram[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->dual_port_ram__DOT__ram[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->dual_port_ram__DOT__ram[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->dual_port_ram__DOT__ram[15]),8);
    }
    bufp->chgBit(oldp+16,(vlSelf->clk));
    bufp->chgCData(oldp+17,(vlSelf->addr_a),4);
    bufp->chgCData(oldp+18,(vlSelf->data_a),8);
    bufp->chgBit(oldp+19,(vlSelf->we_a));
    bufp->chgCData(oldp+20,(vlSelf->q_a),8);
    bufp->chgCData(oldp+21,(vlSelf->addr_b),4);
    bufp->chgCData(oldp+22,(vlSelf->data_b),8);
    bufp->chgBit(oldp+23,(vlSelf->we_b));
    bufp->chgCData(oldp+24,(vlSelf->q_b),8);
}

void Vdual_port_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root__trace_cleanup\n"); );
    // Init
    Vdual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_port_ram___024root*>(voidSelf);
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
