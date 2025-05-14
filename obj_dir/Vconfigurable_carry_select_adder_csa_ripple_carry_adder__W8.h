// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_carry_select_adder.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_CARRY_SELECT_ADDER_CSA_RIPPLE_CARRY_ADDER__W8_H_
#define VERILATED_VCONFIGURABLE_CARRY_SELECT_ADDER_CSA_RIPPLE_CARRY_ADDER__W8_H_  // guard

#include "verilated.h"


class Vconfigurable_carry_select_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,7,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ __Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
    CData/*0:0*/ __Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
    CData/*0:0*/ __Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
    CData/*0:0*/ __Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin;
    CData/*0:0*/ __Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin;
    CData/*0:0*/ __Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin;
    CData/*0:0*/ __Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin;

    // INTERNAL VARIABLES
    Vconfigurable_carry_select_adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8(Vconfigurable_carry_select_adder__Syms* symsp, const char* v__name);
    ~Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8();
    VL_UNCOPYABLE(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
