// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsequence_detector_fsm.h for the primary calling header

#ifndef VERILATED_VSEQUENCE_DETECTOR_FSM___024ROOT_H_
#define VERILATED_VSEQUENCE_DETECTOR_FSM___024ROOT_H_  // guard

#include "verilated.h"


class Vsequence_detector_fsm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsequence_detector_fsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(serial_in,0,0);
    VL_IN8(config_pattern,3,0);
    VL_IN8(load_pattern,0,0);
    VL_OUT8(pattern_detected,0,0);
    CData/*0:0*/ sequence_detector_fsm__DOT__state;
    CData/*3:0*/ sequence_detector_fsm__DOT__pattern_reg;
    CData/*3:0*/ sequence_detector_fsm__DOT__shift_reg;
    CData/*2:0*/ sequence_detector_fsm__DOT__bit_count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsequence_detector_fsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsequence_detector_fsm___024root(Vsequence_detector_fsm__Syms* symsp, const char* v__name);
    ~Vsequence_detector_fsm___024root();
    VL_UNCOPYABLE(Vsequence_detector_fsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
