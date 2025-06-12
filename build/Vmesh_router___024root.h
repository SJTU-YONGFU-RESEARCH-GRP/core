// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmesh_router.h for the primary calling header

#ifndef VERILATED_VMESH_ROUTER___024ROOT_H_
#define VERILATED_VMESH_ROUTER___024ROOT_H_  // guard

#include "verilated.h"


class Vmesh_router__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmesh_router___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(north_in_valid,0,0);
    VL_OUT8(north_in_ready,0,0);
    VL_OUT8(north_out_valid,0,0);
    VL_IN8(north_out_ready,0,0);
    VL_IN8(east_in_valid,0,0);
    VL_OUT8(east_in_ready,0,0);
    VL_OUT8(east_out_valid,0,0);
    VL_IN8(east_out_ready,0,0);
    VL_IN8(south_in_valid,0,0);
    VL_OUT8(south_in_ready,0,0);
    VL_OUT8(south_out_valid,0,0);
    VL_IN8(south_out_ready,0,0);
    VL_IN8(west_in_valid,0,0);
    VL_OUT8(west_in_ready,0,0);
    VL_OUT8(west_out_valid,0,0);
    VL_IN8(west_out_ready,0,0);
    VL_IN8(local_in_valid,0,0);
    VL_OUT8(local_in_ready,0,0);
    VL_OUT8(local_out_valid,0,0);
    VL_IN8(local_out_ready,0,0);
    CData/*4:0*/ mesh_router__DOT__input_buffer_valid;
    CData/*4:0*/ mesh_router__DOT__output_valid;
    CData/*4:0*/ mesh_router__DOT__output_ready;
    CData/*0:0*/ mesh_router__DOT____Vlvbound_hd4bd47f4__0;
    CData/*0:0*/ mesh_router__DOT____Vlvbound_hbafd1025__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(north_in_data,31,0);
    VL_OUT(north_out_data,31,0);
    VL_IN(east_in_data,31,0);
    VL_OUT(east_out_data,31,0);
    VL_IN(south_in_data,31,0);
    VL_OUT(south_out_data,31,0);
    VL_IN(west_in_data,31,0);
    VL_OUT(west_out_data,31,0);
    VL_IN(local_in_data,31,0);
    VL_OUT(local_out_data,31,0);
    IData/*31:0*/ mesh_router__DOT__j;
    IData/*31:0*/ mesh_router__DOT__calc_idx;
    IData/*31:0*/ mesh_router__DOT____Vlvbound_h2afa5cb1__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 5> mesh_router__DOT__input_buffer;
    VlUnpacked<IData/*31:0*/, 5> mesh_router__DOT__output_data;
    VlUnpacked<CData/*7:0*/, 5> mesh_router__DOT__dest_id;
    VlUnpacked<CData/*2:0*/, 5> mesh_router__DOT__output_port;
    VlUnpacked<CData/*4:0*/, 5> mesh_router__DOT__grant;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmesh_router__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmesh_router___024root(Vmesh_router__Syms* symsp, const char* v__name);
    ~Vmesh_router___024root();
    VL_UNCOPYABLE(Vmesh_router___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
