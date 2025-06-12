// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmesh_router__Syms.h"


void Vmesh_router___024root__trace_chg_0_sub_0(Vmesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmesh_router___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root__trace_chg_0\n"); );
    // Init
    Vmesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmesh_router___024root*>(voidSelf);
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmesh_router___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmesh_router___024root__trace_chg_0_sub_0(Vmesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root__trace_chg_0_sub_0\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.mesh_router__DOT__calc_idx),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+1,(vlSelfRef.mesh_router__DOT__input_buffer[0]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.mesh_router__DOT__input_buffer[1]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.mesh_router__DOT__input_buffer[2]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.mesh_router__DOT__input_buffer[3]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.mesh_router__DOT__input_buffer[4]),32);
        bufp->chgCData(oldp+6,(vlSelfRef.mesh_router__DOT__input_buffer_valid),5);
        bufp->chgIData(oldp+7,(vlSelfRef.mesh_router__DOT__output_data[0]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.mesh_router__DOT__output_data[1]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.mesh_router__DOT__output_data[2]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.mesh_router__DOT__output_data[3]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.mesh_router__DOT__output_data[4]),32);
        bufp->chgCData(oldp+12,(vlSelfRef.mesh_router__DOT__output_valid),5);
        bufp->chgCData(oldp+13,(vlSelfRef.mesh_router__DOT__dest_id[0]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.mesh_router__DOT__dest_id[1]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.mesh_router__DOT__dest_id[2]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.mesh_router__DOT__dest_id[3]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.mesh_router__DOT__dest_id[4]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.mesh_router__DOT__output_port[0]),3);
        bufp->chgCData(oldp+19,(vlSelfRef.mesh_router__DOT__output_port[1]),3);
        bufp->chgCData(oldp+20,(vlSelfRef.mesh_router__DOT__output_port[2]),3);
        bufp->chgCData(oldp+21,(vlSelfRef.mesh_router__DOT__output_port[3]),3);
        bufp->chgCData(oldp+22,(vlSelfRef.mesh_router__DOT__output_port[4]),3);
        bufp->chgCData(oldp+23,(vlSelfRef.mesh_router__DOT__grant[0]),5);
        bufp->chgCData(oldp+24,(vlSelfRef.mesh_router__DOT__grant[1]),5);
        bufp->chgCData(oldp+25,(vlSelfRef.mesh_router__DOT__grant[2]),5);
        bufp->chgCData(oldp+26,(vlSelfRef.mesh_router__DOT__grant[3]),5);
        bufp->chgCData(oldp+27,(vlSelfRef.mesh_router__DOT__grant[4]),5);
        bufp->chgIData(oldp+28,(vlSelfRef.mesh_router__DOT__j),32);
    }
    bufp->chgBit(oldp+29,(vlSelfRef.clk));
    bufp->chgBit(oldp+30,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+31,(vlSelfRef.north_in_data),32);
    bufp->chgBit(oldp+32,(vlSelfRef.north_in_valid));
    bufp->chgBit(oldp+33,(vlSelfRef.north_in_ready));
    bufp->chgIData(oldp+34,(vlSelfRef.north_out_data),32);
    bufp->chgBit(oldp+35,(vlSelfRef.north_out_valid));
    bufp->chgBit(oldp+36,(vlSelfRef.north_out_ready));
    bufp->chgIData(oldp+37,(vlSelfRef.east_in_data),32);
    bufp->chgBit(oldp+38,(vlSelfRef.east_in_valid));
    bufp->chgBit(oldp+39,(vlSelfRef.east_in_ready));
    bufp->chgIData(oldp+40,(vlSelfRef.east_out_data),32);
    bufp->chgBit(oldp+41,(vlSelfRef.east_out_valid));
    bufp->chgBit(oldp+42,(vlSelfRef.east_out_ready));
    bufp->chgIData(oldp+43,(vlSelfRef.south_in_data),32);
    bufp->chgBit(oldp+44,(vlSelfRef.south_in_valid));
    bufp->chgBit(oldp+45,(vlSelfRef.south_in_ready));
    bufp->chgIData(oldp+46,(vlSelfRef.south_out_data),32);
    bufp->chgBit(oldp+47,(vlSelfRef.south_out_valid));
    bufp->chgBit(oldp+48,(vlSelfRef.south_out_ready));
    bufp->chgIData(oldp+49,(vlSelfRef.west_in_data),32);
    bufp->chgBit(oldp+50,(vlSelfRef.west_in_valid));
    bufp->chgBit(oldp+51,(vlSelfRef.west_in_ready));
    bufp->chgIData(oldp+52,(vlSelfRef.west_out_data),32);
    bufp->chgBit(oldp+53,(vlSelfRef.west_out_valid));
    bufp->chgBit(oldp+54,(vlSelfRef.west_out_ready));
    bufp->chgIData(oldp+55,(vlSelfRef.local_in_data),32);
    bufp->chgBit(oldp+56,(vlSelfRef.local_in_valid));
    bufp->chgBit(oldp+57,(vlSelfRef.local_in_ready));
    bufp->chgIData(oldp+58,(vlSelfRef.local_out_data),32);
    bufp->chgBit(oldp+59,(vlSelfRef.local_out_valid));
    bufp->chgBit(oldp+60,(vlSelfRef.local_out_ready));
    bufp->chgCData(oldp+61,(vlSelfRef.mesh_router__DOT__output_ready),5);
}

void Vmesh_router___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root__trace_cleanup\n"); );
    // Init
    Vmesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmesh_router___024root*>(voidSelf);
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
