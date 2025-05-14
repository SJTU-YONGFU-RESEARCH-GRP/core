// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdual_port_ram.h for the primary calling header

#ifndef VERILATED_VDUAL_PORT_RAM___024ROOT_H_
#define VERILATED_VDUAL_PORT_RAM___024ROOT_H_  // guard

#include "verilated.h"


class Vdual_port_ram__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdual_port_ram___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(addr_a,3,0);
    VL_IN8(data_a,7,0);
    VL_IN8(we_a,0,0);
    VL_OUT8(q_a,7,0);
    VL_IN8(addr_b,3,0);
    VL_IN8(data_b,7,0);
    VL_IN8(we_b,0,0);
    VL_OUT8(q_b,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> dual_port_ram__DOT__ram;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdual_port_ram__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdual_port_ram___024root(Vdual_port_ram__Syms* symsp, const char* v__name);
    ~Vdual_port_ram___024root();
    VL_UNCOPYABLE(Vdual_port_ram___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
