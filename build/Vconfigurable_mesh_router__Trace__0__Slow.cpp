// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_mesh_router__Syms.h"


VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_init_sub__TOP__0(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_init_sub__TOP__0\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+143,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"local_x_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"local_y_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+147,0,"north_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"north_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"north_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+150,0,"north_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"north_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"north_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"north_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+154,0,"north_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"east_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"east_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"east_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+158,0,"east_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"east_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"east_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"east_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+162,0,"east_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"south_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"south_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"south_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+166,0,"south_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"south_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"south_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"south_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+170,0,"south_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"west_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"west_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"west_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+174,0,"west_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"west_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"west_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"west_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+178,0,"west_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"local_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"local_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"local_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+182,0,"local_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"local_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"local_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"local_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+186,0,"local_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("configurable_mesh_router", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+188,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"X_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"Y_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"local_x_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"local_y_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+147,0,"north_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"north_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"north_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+150,0,"north_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"north_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"north_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"north_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+154,0,"north_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"east_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"east_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"east_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+158,0,"east_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"east_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"east_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"east_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+162,0,"east_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"south_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"south_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"south_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+166,0,"south_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"south_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"south_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"south_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+170,0,"south_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"west_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"west_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"west_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+174,0,"west_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"west_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"west_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"west_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+178,0,"west_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"local_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"local_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"local_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+182,0,"local_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"local_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"local_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"local_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+186,0,"local_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"NORTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"EAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"SOUTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"WEST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"LOCAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"NUM_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"PACKET_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("input_fifo_0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+49+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo_1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+57+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo_2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+65+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+73+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo_4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+81+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+89,0,"fifo_count_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+90,0,"fifo_count_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+91,0,"fifo_count_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"fifo_count_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+93,0,"fifo_count_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+94,0,"read_ptr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"read_ptr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"read_ptr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"read_ptr_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"read_ptr_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"write_ptr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"write_ptr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+101,0,"write_ptr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+102,0,"write_ptr_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+103,0,"write_ptr_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"output_grant_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"output_grant_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"output_grant_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"output_grant_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"output_grant_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"output_request_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"output_request_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"output_request_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"output_request_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"output_request_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,0,"arb_ptr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"arb_ptr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+108,0,"arb_ptr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"arb_ptr_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"arb_ptr_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+23,0,"found_grant_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"found_grant_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"found_grant_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"found_grant_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"found_grant_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"arb_idx_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"arb_idx_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"arb_idx_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"arb_idx_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"arb_idx_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+111,0,"fifo_head_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+113,0,"fifo_head_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+115,0,"fifo_head_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+117,0,"fifo_head_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+119,0,"fifo_head_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+121,0,"dest_addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+122,0,"dest_addr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"dest_addr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"dest_addr_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"dest_addr_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"payload_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"payload_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"payload_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"payload_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"payload_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"route_port_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"route_port_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"route_port_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"route_port_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"route_port_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"valid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"data_o_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"data_o_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"data_o_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"data_o_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"data_o_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"addr_o_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"addr_o_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"addr_o_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"addr_o_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"addr_o_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+187,0,"valid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("packet_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+2+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+132,0,"ready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"ready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+133,0,"dest_x_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"dest_y_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"dest_x_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"dest_y_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"dest_x_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"dest_y_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"dest_x_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+140,0,"dest_y_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"dest_x_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+142,0,"dest_y_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_init_top(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_init_top\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconfigurable_mesh_router___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_mesh_router___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_mesh_router___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_register(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_register\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconfigurable_mesh_router___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconfigurable_mesh_router___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconfigurable_mesh_router___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconfigurable_mesh_router___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_const_0_sub_0(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_const_0\n"); );
    // Init
    Vconfigurable_mesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_mesh_router___024root*>(voidSelf);
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_mesh_router___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_const_0_sub_0(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_const_0_sub_0\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+188,(0x20U),32);
    bufp->fullIData(oldp+189,(8U),32);
    bufp->fullIData(oldp+190,(4U),32);
    bufp->fullIData(oldp+191,(0U),32);
    bufp->fullIData(oldp+192,(1U),32);
    bufp->fullIData(oldp+193,(2U),32);
    bufp->fullIData(oldp+194,(3U),32);
    bufp->fullIData(oldp+195,(5U),32);
    bufp->fullIData(oldp+196,(0x28U),32);
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_full_0_sub_0(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_full_0\n"); );
    // Init
    Vconfigurable_mesh_router___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_mesh_router___024root*>(voidSelf);
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_mesh_router___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root__trace_full_0_sub_0(Vconfigurable_mesh_router___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root__trace_full_0_sub_0\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.configurable_mesh_router__DOT__k),32);
    bufp->fullQData(oldp+2,(vlSelfRef.configurable_mesh_router__DOT__packet_i[0]),40);
    bufp->fullQData(oldp+4,(vlSelfRef.configurable_mesh_router__DOT__packet_i[1]),40);
    bufp->fullQData(oldp+6,(vlSelfRef.configurable_mesh_router__DOT__packet_i[2]),40);
    bufp->fullQData(oldp+8,(vlSelfRef.configurable_mesh_router__DOT__packet_i[3]),40);
    bufp->fullQData(oldp+10,(vlSelfRef.configurable_mesh_router__DOT__packet_i[4]),40);
    bufp->fullCData(oldp+12,(vlSelfRef.configurable_mesh_router__DOT__ready_i),5);
    bufp->fullCData(oldp+13,(vlSelfRef.configurable_mesh_router__DOT__output_grant_0),5);
    bufp->fullCData(oldp+14,(vlSelfRef.configurable_mesh_router__DOT__output_grant_1),5);
    bufp->fullCData(oldp+15,(vlSelfRef.configurable_mesh_router__DOT__output_grant_2),5);
    bufp->fullCData(oldp+16,(vlSelfRef.configurable_mesh_router__DOT__output_grant_3),5);
    bufp->fullCData(oldp+17,(vlSelfRef.configurable_mesh_router__DOT__output_grant_4),5);
    bufp->fullCData(oldp+18,(vlSelfRef.configurable_mesh_router__DOT__output_request_0),5);
    bufp->fullCData(oldp+19,(vlSelfRef.configurable_mesh_router__DOT__output_request_1),5);
    bufp->fullCData(oldp+20,(vlSelfRef.configurable_mesh_router__DOT__output_request_2),5);
    bufp->fullCData(oldp+21,(vlSelfRef.configurable_mesh_router__DOT__output_request_3),5);
    bufp->fullCData(oldp+22,(vlSelfRef.configurable_mesh_router__DOT__output_request_4),5);
    bufp->fullBit(oldp+23,(vlSelfRef.configurable_mesh_router__DOT__found_grant_0));
    bufp->fullBit(oldp+24,(vlSelfRef.configurable_mesh_router__DOT__found_grant_1));
    bufp->fullBit(oldp+25,(vlSelfRef.configurable_mesh_router__DOT__found_grant_2));
    bufp->fullBit(oldp+26,(vlSelfRef.configurable_mesh_router__DOT__found_grant_3));
    bufp->fullBit(oldp+27,(vlSelfRef.configurable_mesh_router__DOT__found_grant_4));
    bufp->fullCData(oldp+28,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0),3);
    bufp->fullCData(oldp+29,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1),3);
    bufp->fullCData(oldp+30,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2),3);
    bufp->fullCData(oldp+31,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3),3);
    bufp->fullCData(oldp+32,(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4),3);
    bufp->fullCData(oldp+33,(vlSelfRef.configurable_mesh_router__DOT__route_port_0),3);
    bufp->fullCData(oldp+34,(vlSelfRef.configurable_mesh_router__DOT__route_port_1),3);
    bufp->fullCData(oldp+35,(vlSelfRef.configurable_mesh_router__DOT__route_port_2),3);
    bufp->fullCData(oldp+36,(vlSelfRef.configurable_mesh_router__DOT__route_port_3),3);
    bufp->fullCData(oldp+37,(vlSelfRef.configurable_mesh_router__DOT__route_port_4),3);
    bufp->fullCData(oldp+38,(((((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__) 
                                << 4U) | (((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__) 
                                           << 2U))) 
                              | (((IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__) 
                                  << 1U) | (IData)(vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__)))),5);
    bufp->fullIData(oldp+39,(vlSelfRef.configurable_mesh_router__DOT__data_o_0),32);
    bufp->fullIData(oldp+40,(vlSelfRef.configurable_mesh_router__DOT__data_o_1),32);
    bufp->fullIData(oldp+41,(vlSelfRef.configurable_mesh_router__DOT__data_o_2),32);
    bufp->fullIData(oldp+42,(vlSelfRef.configurable_mesh_router__DOT__data_o_3),32);
    bufp->fullIData(oldp+43,(vlSelfRef.configurable_mesh_router__DOT__data_o_4),32);
    bufp->fullCData(oldp+44,(vlSelfRef.configurable_mesh_router__DOT__addr_o_0),8);
    bufp->fullCData(oldp+45,(vlSelfRef.configurable_mesh_router__DOT__addr_o_1),8);
    bufp->fullCData(oldp+46,(vlSelfRef.configurable_mesh_router__DOT__addr_o_2),8);
    bufp->fullCData(oldp+47,(vlSelfRef.configurable_mesh_router__DOT__addr_o_3),8);
    bufp->fullCData(oldp+48,(vlSelfRef.configurable_mesh_router__DOT__addr_o_4),8);
    bufp->fullQData(oldp+49,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[0]),40);
    bufp->fullQData(oldp+51,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[1]),40);
    bufp->fullQData(oldp+53,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[2]),40);
    bufp->fullQData(oldp+55,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[3]),40);
    bufp->fullQData(oldp+57,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[0]),40);
    bufp->fullQData(oldp+59,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[1]),40);
    bufp->fullQData(oldp+61,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[2]),40);
    bufp->fullQData(oldp+63,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[3]),40);
    bufp->fullQData(oldp+65,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[0]),40);
    bufp->fullQData(oldp+67,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[1]),40);
    bufp->fullQData(oldp+69,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[2]),40);
    bufp->fullQData(oldp+71,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[3]),40);
    bufp->fullQData(oldp+73,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[0]),40);
    bufp->fullQData(oldp+75,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[1]),40);
    bufp->fullQData(oldp+77,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[2]),40);
    bufp->fullQData(oldp+79,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[3]),40);
    bufp->fullQData(oldp+81,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[0]),40);
    bufp->fullQData(oldp+83,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[1]),40);
    bufp->fullQData(oldp+85,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[2]),40);
    bufp->fullQData(oldp+87,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[3]),40);
    bufp->fullCData(oldp+89,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0),4);
    bufp->fullCData(oldp+90,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1),4);
    bufp->fullCData(oldp+91,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2),4);
    bufp->fullCData(oldp+92,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3),4);
    bufp->fullCData(oldp+93,(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4),4);
    bufp->fullCData(oldp+94,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_0),2);
    bufp->fullCData(oldp+95,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_1),2);
    bufp->fullCData(oldp+96,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_2),2);
    bufp->fullCData(oldp+97,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_3),2);
    bufp->fullCData(oldp+98,(vlSelfRef.configurable_mesh_router__DOT__read_ptr_4),2);
    bufp->fullCData(oldp+99,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_0),2);
    bufp->fullCData(oldp+100,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_1),2);
    bufp->fullCData(oldp+101,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_2),2);
    bufp->fullCData(oldp+102,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_3),2);
    bufp->fullCData(oldp+103,(vlSelfRef.configurable_mesh_router__DOT__write_ptr_4),2);
    bufp->fullCData(oldp+104,(vlSelfRef.configurable_mesh_router__DOT__fifo_empty),5);
    bufp->fullCData(oldp+105,(vlSelfRef.configurable_mesh_router__DOT__fifo_full),5);
    bufp->fullCData(oldp+106,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0),3);
    bufp->fullCData(oldp+107,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1),3);
    bufp->fullCData(oldp+108,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2),3);
    bufp->fullCData(oldp+109,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3),3);
    bufp->fullCData(oldp+110,(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4),3);
    bufp->fullQData(oldp+111,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                              [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0]),40);
    bufp->fullQData(oldp+113,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                              [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1]),40);
    bufp->fullQData(oldp+115,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                              [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2]),40);
    bufp->fullQData(oldp+117,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                              [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3]),40);
    bufp->fullQData(oldp+119,(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                              [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4]),40);
    bufp->fullCData(oldp+121,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_0),8);
    bufp->fullCData(oldp+122,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_1),8);
    bufp->fullCData(oldp+123,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_2),8);
    bufp->fullCData(oldp+124,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_3),8);
    bufp->fullCData(oldp+125,(vlSelfRef.configurable_mesh_router__DOT__dest_addr_4),8);
    bufp->fullIData(oldp+126,(vlSelfRef.configurable_mesh_router__DOT__payload_0),32);
    bufp->fullIData(oldp+127,(vlSelfRef.configurable_mesh_router__DOT__payload_1),32);
    bufp->fullIData(oldp+128,(vlSelfRef.configurable_mesh_router__DOT__payload_2),32);
    bufp->fullIData(oldp+129,(vlSelfRef.configurable_mesh_router__DOT__payload_3),32);
    bufp->fullIData(oldp+130,(vlSelfRef.configurable_mesh_router__DOT__payload_4),32);
    bufp->fullIData(oldp+131,(vlSelfRef.configurable_mesh_router__DOT__j),32);
    bufp->fullCData(oldp+132,((0x1fU & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full)))),5);
    bufp->fullCData(oldp+133,(vlSelfRef.configurable_mesh_router__DOT__dest_x_0),4);
    bufp->fullCData(oldp+134,(vlSelfRef.configurable_mesh_router__DOT__dest_y_0),4);
    bufp->fullCData(oldp+135,(vlSelfRef.configurable_mesh_router__DOT__dest_x_1),4);
    bufp->fullCData(oldp+136,(vlSelfRef.configurable_mesh_router__DOT__dest_y_1),4);
    bufp->fullCData(oldp+137,(vlSelfRef.configurable_mesh_router__DOT__dest_x_2),4);
    bufp->fullCData(oldp+138,(vlSelfRef.configurable_mesh_router__DOT__dest_y_2),4);
    bufp->fullCData(oldp+139,(vlSelfRef.configurable_mesh_router__DOT__dest_x_3),4);
    bufp->fullCData(oldp+140,(vlSelfRef.configurable_mesh_router__DOT__dest_y_3),4);
    bufp->fullCData(oldp+141,(vlSelfRef.configurable_mesh_router__DOT__dest_x_4),4);
    bufp->fullCData(oldp+142,(vlSelfRef.configurable_mesh_router__DOT__dest_y_4),4);
    bufp->fullBit(oldp+143,(vlSelfRef.clk));
    bufp->fullBit(oldp+144,(vlSelfRef.rst_n));
    bufp->fullCData(oldp+145,(vlSelfRef.local_x_addr),4);
    bufp->fullCData(oldp+146,(vlSelfRef.local_y_addr),4);
    bufp->fullBit(oldp+147,(vlSelfRef.north_valid_i));
    bufp->fullIData(oldp+148,(vlSelfRef.north_data_i),32);
    bufp->fullCData(oldp+149,(vlSelfRef.north_addr_i),8);
    bufp->fullBit(oldp+150,(vlSelfRef.north_ready_o));
    bufp->fullBit(oldp+151,(vlSelfRef.north_valid_o));
    bufp->fullIData(oldp+152,(vlSelfRef.north_data_o),32);
    bufp->fullCData(oldp+153,(vlSelfRef.north_addr_o),8);
    bufp->fullBit(oldp+154,(vlSelfRef.north_ready_i));
    bufp->fullBit(oldp+155,(vlSelfRef.east_valid_i));
    bufp->fullIData(oldp+156,(vlSelfRef.east_data_i),32);
    bufp->fullCData(oldp+157,(vlSelfRef.east_addr_i),8);
    bufp->fullBit(oldp+158,(vlSelfRef.east_ready_o));
    bufp->fullBit(oldp+159,(vlSelfRef.east_valid_o));
    bufp->fullIData(oldp+160,(vlSelfRef.east_data_o),32);
    bufp->fullCData(oldp+161,(vlSelfRef.east_addr_o),8);
    bufp->fullBit(oldp+162,(vlSelfRef.east_ready_i));
    bufp->fullBit(oldp+163,(vlSelfRef.south_valid_i));
    bufp->fullIData(oldp+164,(vlSelfRef.south_data_i),32);
    bufp->fullCData(oldp+165,(vlSelfRef.south_addr_i),8);
    bufp->fullBit(oldp+166,(vlSelfRef.south_ready_o));
    bufp->fullBit(oldp+167,(vlSelfRef.south_valid_o));
    bufp->fullIData(oldp+168,(vlSelfRef.south_data_o),32);
    bufp->fullCData(oldp+169,(vlSelfRef.south_addr_o),8);
    bufp->fullBit(oldp+170,(vlSelfRef.south_ready_i));
    bufp->fullBit(oldp+171,(vlSelfRef.west_valid_i));
    bufp->fullIData(oldp+172,(vlSelfRef.west_data_i),32);
    bufp->fullCData(oldp+173,(vlSelfRef.west_addr_i),8);
    bufp->fullBit(oldp+174,(vlSelfRef.west_ready_o));
    bufp->fullBit(oldp+175,(vlSelfRef.west_valid_o));
    bufp->fullIData(oldp+176,(vlSelfRef.west_data_o),32);
    bufp->fullCData(oldp+177,(vlSelfRef.west_addr_o),8);
    bufp->fullBit(oldp+178,(vlSelfRef.west_ready_i));
    bufp->fullBit(oldp+179,(vlSelfRef.local_valid_i));
    bufp->fullIData(oldp+180,(vlSelfRef.local_data_i),32);
    bufp->fullCData(oldp+181,(vlSelfRef.local_addr_i),8);
    bufp->fullBit(oldp+182,(vlSelfRef.local_ready_o));
    bufp->fullBit(oldp+183,(vlSelfRef.local_valid_o));
    bufp->fullIData(oldp+184,(vlSelfRef.local_data_o),32);
    bufp->fullCData(oldp+185,(vlSelfRef.local_addr_o),8);
    bufp->fullBit(oldp+186,(vlSelfRef.local_ready_i));
    bufp->fullCData(oldp+187,(((((IData)(vlSelfRef.local_valid_i) 
                                 << 4U) | (((IData)(vlSelfRef.west_valid_i) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.south_valid_i) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.east_valid_i) 
                                   << 1U) | (IData)(vlSelfRef.north_valid_i)))),5);
}
