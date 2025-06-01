// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_mesh_router.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_MESH_ROUTER___024ROOT_H_
#define VERILATED_VCONFIGURABLE_MESH_ROUTER___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_mesh_router__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_mesh_router___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(local_x_addr,3,0);
        VL_IN8(local_y_addr,3,0);
        VL_IN8(north_valid_i,0,0);
        VL_IN8(north_addr_i,7,0);
        VL_OUT8(north_ready_o,0,0);
        VL_OUT8(north_valid_o,0,0);
        VL_OUT8(north_addr_o,7,0);
        VL_IN8(north_ready_i,0,0);
        VL_IN8(east_valid_i,0,0);
        VL_IN8(east_addr_i,7,0);
        VL_OUT8(east_ready_o,0,0);
        VL_OUT8(east_valid_o,0,0);
        VL_OUT8(east_addr_o,7,0);
        VL_IN8(east_ready_i,0,0);
        VL_IN8(south_valid_i,0,0);
        VL_IN8(south_addr_i,7,0);
        VL_OUT8(south_ready_o,0,0);
        VL_OUT8(south_valid_o,0,0);
        VL_OUT8(south_addr_o,7,0);
        VL_IN8(south_ready_i,0,0);
        VL_IN8(west_valid_i,0,0);
        VL_IN8(west_addr_i,7,0);
        VL_OUT8(west_ready_o,0,0);
        VL_OUT8(west_valid_o,0,0);
        VL_OUT8(west_addr_o,7,0);
        VL_IN8(west_ready_i,0,0);
        VL_IN8(local_valid_i,0,0);
        VL_IN8(local_addr_i,7,0);
        VL_OUT8(local_ready_o,0,0);
        VL_OUT8(local_valid_o,0,0);
        VL_OUT8(local_addr_o,7,0);
        VL_IN8(local_ready_i,0,0);
        CData/*3:0*/ configurable_mesh_router__DOT__fifo_count_0;
        CData/*3:0*/ configurable_mesh_router__DOT__fifo_count_1;
        CData/*3:0*/ configurable_mesh_router__DOT__fifo_count_2;
        CData/*3:0*/ configurable_mesh_router__DOT__fifo_count_3;
        CData/*3:0*/ configurable_mesh_router__DOT__fifo_count_4;
        CData/*1:0*/ configurable_mesh_router__DOT__read_ptr_0;
        CData/*1:0*/ configurable_mesh_router__DOT__read_ptr_1;
        CData/*1:0*/ configurable_mesh_router__DOT__read_ptr_2;
        CData/*1:0*/ configurable_mesh_router__DOT__read_ptr_3;
        CData/*1:0*/ configurable_mesh_router__DOT__read_ptr_4;
        CData/*1:0*/ configurable_mesh_router__DOT__write_ptr_0;
        CData/*1:0*/ configurable_mesh_router__DOT__write_ptr_1;
        CData/*1:0*/ configurable_mesh_router__DOT__write_ptr_2;
        CData/*1:0*/ configurable_mesh_router__DOT__write_ptr_3;
        CData/*1:0*/ configurable_mesh_router__DOT__write_ptr_4;
        CData/*4:0*/ configurable_mesh_router__DOT__fifo_empty;
        CData/*4:0*/ configurable_mesh_router__DOT__fifo_full;
        CData/*4:0*/ configurable_mesh_router__DOT__output_grant_0;
        CData/*4:0*/ configurable_mesh_router__DOT__output_grant_1;
        CData/*4:0*/ configurable_mesh_router__DOT__output_grant_2;
        CData/*4:0*/ configurable_mesh_router__DOT__output_grant_3;
        CData/*4:0*/ configurable_mesh_router__DOT__output_grant_4;
        CData/*4:0*/ configurable_mesh_router__DOT__output_request_0;
        CData/*4:0*/ configurable_mesh_router__DOT__output_request_1;
        CData/*4:0*/ configurable_mesh_router__DOT__output_request_2;
        CData/*4:0*/ configurable_mesh_router__DOT__output_request_3;
        CData/*4:0*/ configurable_mesh_router__DOT__output_request_4;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_ptr_0;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_ptr_1;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_ptr_2;
    };
    struct {
        CData/*2:0*/ configurable_mesh_router__DOT__arb_ptr_3;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_ptr_4;
        CData/*0:0*/ configurable_mesh_router__DOT__found_grant_0;
        CData/*0:0*/ configurable_mesh_router__DOT__found_grant_1;
        CData/*0:0*/ configurable_mesh_router__DOT__found_grant_2;
        CData/*0:0*/ configurable_mesh_router__DOT__found_grant_3;
        CData/*0:0*/ configurable_mesh_router__DOT__found_grant_4;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_idx_0;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_idx_1;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_idx_2;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_idx_3;
        CData/*2:0*/ configurable_mesh_router__DOT__arb_idx_4;
        CData/*7:0*/ configurable_mesh_router__DOT__dest_addr_0;
        CData/*7:0*/ configurable_mesh_router__DOT__dest_addr_1;
        CData/*7:0*/ configurable_mesh_router__DOT__dest_addr_2;
        CData/*7:0*/ configurable_mesh_router__DOT__dest_addr_3;
        CData/*7:0*/ configurable_mesh_router__DOT__dest_addr_4;
        CData/*2:0*/ configurable_mesh_router__DOT__route_port_0;
        CData/*2:0*/ configurable_mesh_router__DOT__route_port_1;
        CData/*2:0*/ configurable_mesh_router__DOT__route_port_2;
        CData/*2:0*/ configurable_mesh_router__DOT__route_port_3;
        CData/*2:0*/ configurable_mesh_router__DOT__route_port_4;
        CData/*0:0*/ configurable_mesh_router__DOT__valid_o__BRA__4__KET__;
        CData/*0:0*/ configurable_mesh_router__DOT__valid_o__BRA__3__KET__;
        CData/*0:0*/ configurable_mesh_router__DOT__valid_o__BRA__2__KET__;
        CData/*0:0*/ configurable_mesh_router__DOT__valid_o__BRA__1__KET__;
        CData/*0:0*/ configurable_mesh_router__DOT__valid_o__BRA__0__KET__;
        CData/*7:0*/ configurable_mesh_router__DOT__addr_o_0;
        CData/*7:0*/ configurable_mesh_router__DOT__addr_o_1;
        CData/*7:0*/ configurable_mesh_router__DOT__addr_o_2;
        CData/*7:0*/ configurable_mesh_router__DOT__addr_o_3;
        CData/*7:0*/ configurable_mesh_router__DOT__addr_o_4;
        CData/*4:0*/ configurable_mesh_router__DOT__ready_i;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_x_0;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_y_0;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_x_1;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_y_1;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_x_2;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_y_2;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_x_3;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_y_3;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_x_4;
        CData/*3:0*/ configurable_mesh_router__DOT__dest_y_4;
        CData/*0:0*/ configurable_mesh_router__DOT____Vlvbound_h4b54da76__0;
        CData/*0:0*/ configurable_mesh_router__DOT____Vlvbound_hb449bd47__0;
        CData/*0:0*/ configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0;
        CData/*0:0*/ configurable_mesh_router__DOT____Vlvbound_h58040ba2__0;
        CData/*0:0*/ configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(north_data_i,31,0);
        VL_OUT(north_data_o,31,0);
        VL_IN(east_data_i,31,0);
        VL_OUT(east_data_o,31,0);
        VL_IN(south_data_i,31,0);
        VL_OUT(south_data_o,31,0);
        VL_IN(west_data_i,31,0);
        VL_OUT(west_data_o,31,0);
        VL_IN(local_data_i,31,0);
        VL_OUT(local_data_o,31,0);
        IData/*31:0*/ configurable_mesh_router__DOT__payload_0;
    };
    struct {
        IData/*31:0*/ configurable_mesh_router__DOT__payload_1;
        IData/*31:0*/ configurable_mesh_router__DOT__payload_2;
        IData/*31:0*/ configurable_mesh_router__DOT__payload_3;
        IData/*31:0*/ configurable_mesh_router__DOT__payload_4;
        IData/*31:0*/ configurable_mesh_router__DOT__data_o_0;
        IData/*31:0*/ configurable_mesh_router__DOT__data_o_1;
        IData/*31:0*/ configurable_mesh_router__DOT__data_o_2;
        IData/*31:0*/ configurable_mesh_router__DOT__data_o_3;
        IData/*31:0*/ configurable_mesh_router__DOT__data_o_4;
        IData/*31:0*/ configurable_mesh_router__DOT__j;
        IData/*31:0*/ configurable_mesh_router__DOT__k;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*39:0*/, 4> configurable_mesh_router__DOT__input_fifo_0;
        VlUnpacked<QData/*39:0*/, 4> configurable_mesh_router__DOT__input_fifo_1;
        VlUnpacked<QData/*39:0*/, 4> configurable_mesh_router__DOT__input_fifo_2;
        VlUnpacked<QData/*39:0*/, 4> configurable_mesh_router__DOT__input_fifo_3;
        VlUnpacked<QData/*39:0*/, 4> configurable_mesh_router__DOT__input_fifo_4;
        VlUnpacked<QData/*39:0*/, 5> configurable_mesh_router__DOT__packet_i;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_mesh_router__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_mesh_router___024root(Vconfigurable_mesh_router__Syms* symsp, const char* v__name);
    ~Vconfigurable_mesh_router___024root();
    VL_UNCOPYABLE(Vconfigurable_mesh_router___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
