// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_mesh_router__Syms.h"


void Vconfigurable_mesh_router___024root__trace_chg_0_sub_0(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfigurable_mesh_router___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_chg_0\n"); );
    // Init
    Vconfigurable_mesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_mesh_router___024root*>(voidSelf);
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfigurable_mesh_router___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfigurable_mesh_router___024root__trace_chg_0_sub_0(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_chg_0_sub_0\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.configurable_mesh_router__DOT__k),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgQData(oldp+1,(vlSelfRef.configurable_mesh_router__DOT__packet_i[0]),40);
        bufp->chgQData(oldp+3,(vlSelfRef.configurable_mesh_router__DOT__packet_i[1]),40);
        bufp->chgQData(oldp+5,(vlSelfRef.configurable_mesh_router__DOT__packet_i[2]),40);
        bufp->chgQData(oldp+7,(vlSelfRef.configurable_mesh_router__DOT__packet_i[3]),40);
        bufp->chgQData(oldp+9,(vlSelfRef.configurable_mesh_router__DOT__packet_i[4]),40);
        bufp->chgCData(oldp+11,(vlSelfRef.configurable_mesh_router__DOT__ready_i),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+12,(vlSelfRef.configurable_mesh_router__DOT__output_grant_0),5);
        bufp->chgCData(oldp+13,(vlSelfRef.configurable_mesh_router__DOT__output_grant_1),5);
        bufp->chgCData(oldp+14,(vlSelfRef.configurable_mesh_router__DOT__output_grant_2),5);
        bufp->chgCData(oldp+15,(vlSelfRef.configurable_mesh_router__DOT__output_grant_3),5);
        bufp->chgCData(oldp+16,(vlSelfRef.configurable_mesh_router__DOT__output_grant_4),5);
        bufp->chgCData(oldp+17,(vlSelfRef.configurable_mesh_router__DOT__output_request_0),5);
        bufp->chgCData(oldp+18,(vlSelfRef.configurable_mesh_router__DOT__output_request_1),5);
        bufp->chgCData(oldp+19,(vlSelfRef.configurable_mesh_router__DOT__output_request_2),5);
        bufp->chgCData(oldp+20,(vlSelfRef.configurable_mesh_router__DOT__output_request_3),5);
        bufp->chgCData(oldp+21,(vlSelfRef.configurable_mesh_router__DOT__output_request_4),5);
        bufp->chgBit(oldp+22,(vlSelfRef.configurable_mesh_router__DOT__found_grant_0));
        bufp->chgBit(oldp+23,(vlSelfRef.configurable_mesh_router__DOT__found_grant_1));
        bufp->chgBit(oldp+24,(vlSelfRef.configurable_mesh_router__DOT__found_grant_2));
        bufp->chgBit(oldp+25,(vlSelfRef.configurable_mesh_router__DOT__found_grant_3));
        bufp->chgBit(oldp+26,(vlSelfRef.configurable_mesh_router__DOT__found_grant_4));
        bufp->chgCData(oldp+27,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0),3);
        bufp->chgCData(oldp+28,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1),3);
        bufp->chgCData(oldp+29,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2),3);
        bufp->chgCData(oldp+30,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3),3);
        bufp->chgCData(oldp+31,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4),3);
        bufp->chgCData(oldp+32,(vlSelfRef.configurable_mesh_router__DOT__route_port_0),3);
        bufp->chgCData(oldp+33,(vlSelfRef.configurable_mesh_router__DOT__route_port_1),3);
        bufp->chgCData(oldp+34,(vlSelfRef.configurable_mesh_router__DOT__route_port_2),3);
        bufp->chgCData(oldp+35,(vlSelfRef.configurable_mesh_router__DOT__route_port_3),3);
        bufp->chgCData(oldp+36,(vlSelfRef.configurable_mesh_router__DOT__route_port_4),3);
        bufp->chgCData(oldp+37,(((((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__) 
                                   << 4U) | (((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__) 
                                                << 2U))) 
                                 | (((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__) 
                                     << 1U) | (IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__)))),5);
        bufp->chgIData(oldp+38,(vlSelfRef.configurable_mesh_router__DOT__data_o_0),32);
        bufp->chgIData(oldp+39,(vlSelfRef.configurable_mesh_router__DOT__data_o_1),32);
        bufp->chgIData(oldp+40,(vlSelfRef.configurable_mesh_router__DOT__data_o_2),32);
        bufp->chgIData(oldp+41,(vlSelfRef.configurable_mesh_router__DOT__data_o_3),32);
        bufp->chgIData(oldp+42,(vlSelfRef.configurable_mesh_router__DOT__data_o_4),32);
        bufp->chgCData(oldp+43,(vlSelfRef.configurable_mesh_router__DOT__addr_o_0),8);
        bufp->chgCData(oldp+44,(vlSelfRef.configurable_mesh_router__DOT__addr_o_1),8);
        bufp->chgCData(oldp+45,(vlSelfRef.configurable_mesh_router__DOT__addr_o_2),8);
        bufp->chgCData(oldp+46,(vlSelfRef.configurable_mesh_router__DOT__addr_o_3),8);
        bufp->chgCData(oldp+47,(vlSelfRef.configurable_mesh_router__DOT__addr_o_4),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+48,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[0]),40);
        bufp->chgQData(oldp+50,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[1]),40);
        bufp->chgQData(oldp+52,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[2]),40);
        bufp->chgQData(oldp+54,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[3]),40);
        bufp->chgQData(oldp+56,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[0]),40);
        bufp->chgQData(oldp+58,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[1]),40);
        bufp->chgQData(oldp+60,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[2]),40);
        bufp->chgQData(oldp+62,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[3]),40);
        bufp->chgQData(oldp+64,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[0]),40);
        bufp->chgQData(oldp+66,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[1]),40);
        bufp->chgQData(oldp+68,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[2]),40);
        bufp->chgQData(oldp+70,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[3]),40);
        bufp->chgQData(oldp+72,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[0]),40);
        bufp->chgQData(oldp+74,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[1]),40);
        bufp->chgQData(oldp+76,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[2]),40);
        bufp->chgQData(oldp+78,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[3]),40);
        bufp->chgQData(oldp+80,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[0]),40);
        bufp->chgQData(oldp+82,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[1]),40);
        bufp->chgQData(oldp+84,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[2]),40);
        bufp->chgQData(oldp+86,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[3]),40);
        bufp->chgCData(oldp+88,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0),4);
        bufp->chgCData(oldp+89,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1),4);
        bufp->chgCData(oldp+90,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2),4);
        bufp->chgCData(oldp+91,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3),4);
        bufp->chgCData(oldp+92,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4),4);
        bufp->chgCData(oldp+93,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_0),2);
        bufp->chgCData(oldp+94,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_1),2);
        bufp->chgCData(oldp+95,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_2),2);
        bufp->chgCData(oldp+96,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_3),2);
        bufp->chgCData(oldp+97,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_4),2);
        bufp->chgCData(oldp+98,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_0),2);
        bufp->chgCData(oldp+99,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_1),2);
        bufp->chgCData(oldp+100,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_2),2);
        bufp->chgCData(oldp+101,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_3),2);
        bufp->chgCData(oldp+102,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_4),2);
        bufp->chgCData(oldp+103,(vlSelfRef.configurable_mesh_router__DOT__fifo_empty),5);
        bufp->chgCData(oldp+104,(vlSelfRef.configurable_mesh_router__DOT__fifo_full),5);
        bufp->chgCData(oldp+105,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0),3);
        bufp->chgCData(oldp+106,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1),3);
        bufp->chgCData(oldp+107,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2),3);
        bufp->chgCData(oldp+108,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3),3);
        bufp->chgCData(oldp+109,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4),3);
        bufp->chgQData(oldp+110,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                                 [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0]),40);
        bufp->chgQData(oldp+112,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                                 [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1]),40);
        bufp->chgQData(oldp+114,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                                 [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2]),40);
        bufp->chgQData(oldp+116,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                                 [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3]),40);
        bufp->chgQData(oldp+118,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                                 [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4]),40);
        bufp->chgCData(oldp+120,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_0),8);
        bufp->chgCData(oldp+121,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_1),8);
        bufp->chgCData(oldp+122,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_2),8);
        bufp->chgCData(oldp+123,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_3),8);
        bufp->chgCData(oldp+124,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_4),8);
        bufp->chgIData(oldp+125,(vlSelfRef.configurable_mesh_router__DOT__payload_0),32);
        bufp->chgIData(oldp+126,(vlSelfRef.configurable_mesh_router__DOT__payload_1),32);
        bufp->chgIData(oldp+127,(vlSelfRef.configurable_mesh_router__DOT__payload_2),32);
        bufp->chgIData(oldp+128,(vlSelfRef.configurable_mesh_router__DOT__payload_3),32);
        bufp->chgIData(oldp+129,(vlSelfRef.configurable_mesh_router__DOT__payload_4),32);
        bufp->chgIData(oldp+130,(vlSelfRef.configurable_mesh_router__DOT__j),32);
        bufp->chgCData(oldp+131,((0x1fU & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full)))),5);
        bufp->chgCData(oldp+132,(vlSelfRef.configurable_mesh_router__DOT__dest_x_0),4);
        bufp->chgCData(oldp+133,(vlSelfRef.configurable_mesh_router__DOT__dest_y_0),4);
        bufp->chgCData(oldp+134,(vlSelfRef.configurable_mesh_router__DOT__dest_x_1),4);
        bufp->chgCData(oldp+135,(vlSelfRef.configurable_mesh_router__DOT__dest_y_1),4);
        bufp->chgCData(oldp+136,(vlSelfRef.configurable_mesh_router__DOT__dest_x_2),4);
        bufp->chgCData(oldp+137,(vlSelfRef.configurable_mesh_router__DOT__dest_y_2),4);
        bufp->chgCData(oldp+138,(vlSelfRef.configurable_mesh_router__DOT__dest_x_3),4);
        bufp->chgCData(oldp+139,(vlSelfRef.configurable_mesh_router__DOT__dest_y_3),4);
        bufp->chgCData(oldp+140,(vlSelfRef.configurable_mesh_router__DOT__dest_x_4),4);
        bufp->chgCData(oldp+141,(vlSelfRef.configurable_mesh_router__DOT__dest_y_4),4);
    }
    bufp->chgBit(oldp+142,(vlSelfRef.clk));
    bufp->chgBit(oldp+143,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+144,(vlSelfRef.local_x_addr),4);
    bufp->chgCData(oldp+145,(vlSelfRef.local_y_addr),4);
    bufp->chgBit(oldp+146,(vlSelfRef.north_valid_i));
    bufp->chgIData(oldp+147,(vlSelfRef.north_data_i),32);
    bufp->chgCData(oldp+148,(vlSelfRef.north_addr_i),8);
    bufp->chgBit(oldp+149,(vlSelfRef.north_ready_o));
    bufp->chgBit(oldp+150,(vlSelfRef.north_valid_o));
    bufp->chgIData(oldp+151,(vlSelfRef.north_data_o),32);
    bufp->chgCData(oldp+152,(vlSelfRef.north_addr_o),8);
    bufp->chgBit(oldp+153,(vlSelfRef.north_ready_i));
    bufp->chgBit(oldp+154,(vlSelfRef.east_valid_i));
    bufp->chgIData(oldp+155,(vlSelfRef.east_data_i),32);
    bufp->chgCData(oldp+156,(vlSelfRef.east_addr_i),8);
    bufp->chgBit(oldp+157,(vlSelfRef.east_ready_o));
    bufp->chgBit(oldp+158,(vlSelfRef.east_valid_o));
    bufp->chgIData(oldp+159,(vlSelfRef.east_data_o),32);
    bufp->chgCData(oldp+160,(vlSelfRef.east_addr_o),8);
    bufp->chgBit(oldp+161,(vlSelfRef.east_ready_i));
    bufp->chgBit(oldp+162,(vlSelfRef.south_valid_i));
    bufp->chgIData(oldp+163,(vlSelfRef.south_data_i),32);
    bufp->chgCData(oldp+164,(vlSelfRef.south_addr_i),8);
    bufp->chgBit(oldp+165,(vlSelfRef.south_ready_o));
    bufp->chgBit(oldp+166,(vlSelfRef.south_valid_o));
    bufp->chgIData(oldp+167,(vlSelfRef.south_data_o),32);
    bufp->chgCData(oldp+168,(vlSelfRef.south_addr_o),8);
    bufp->chgBit(oldp+169,(vlSelfRef.south_ready_i));
    bufp->chgBit(oldp+170,(vlSelfRef.west_valid_i));
    bufp->chgIData(oldp+171,(vlSelfRef.west_data_i),32);
    bufp->chgCData(oldp+172,(vlSelfRef.west_addr_i),8);
    bufp->chgBit(oldp+173,(vlSelfRef.west_ready_o));
    bufp->chgBit(oldp+174,(vlSelfRef.west_valid_o));
    bufp->chgIData(oldp+175,(vlSelfRef.west_data_o),32);
    bufp->chgCData(oldp+176,(vlSelfRef.west_addr_o),8);
    bufp->chgBit(oldp+177,(vlSelfRef.west_ready_i));
    bufp->chgBit(oldp+178,(vlSelfRef.local_valid_i));
    bufp->chgIData(oldp+179,(vlSelfRef.local_data_i),32);
    bufp->chgCData(oldp+180,(vlSelfRef.local_addr_i),8);
    bufp->chgBit(oldp+181,(vlSelfRef.local_ready_o));
    bufp->chgBit(oldp+182,(vlSelfRef.local_valid_o));
    bufp->chgIData(oldp+183,(vlSelfRef.local_data_o),32);
    bufp->chgCData(oldp+184,(vlSelfRef.local_addr_o),8);
    bufp->chgBit(oldp+185,(vlSelfRef.local_ready_i));
    bufp->chgCData(oldp+186,(((((IData)(vlSelfRef.local_valid_i) 
                                << 4U) | (((IData)(vlSelfRef.west_valid_i) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.south_valid_i) 
                                           << 2U))) 
                              | (((IData)(vlSelfRef.east_valid_i) 
                                  << 1U) | (IData)(vlSelfRef.north_valid_i)))),5);
}

void Vconfigurable_mesh_router___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_cleanup\n"); );
    // Init
    Vconfigurable_mesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_mesh_router___024root*>(voidSelf);
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
