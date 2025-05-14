// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_carry_select_adder.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_CARRY_SELECT_ADDER___024ROOT_H_
#define VERILATED_VCONFIGURABLE_CARRY_SELECT_ADDER___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_carry_select_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_carry_select_adder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        VL_OUT8(cout,0,0);
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__select;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__select;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__select;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__select;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__select;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__select;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__select;
        CData/*0:0*/ configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout;
        CData/*0:0*/ configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout;
        CData/*0:0*/ configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout;
        CData/*0:0*/ configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
    };
    struct {
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ configurable_carry_select_adder__DOT__block_carry;
        SData/*8:0*/ __Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__0;
        SData/*8:0*/ __Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__1;
        SData/*8:0*/ __Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__2;
        VL_IN(a,31,0);
        VL_IN(b,31,0);
        VL_OUT(sum,31,0);
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_carry_select_adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_carry_select_adder___024root(Vconfigurable_carry_select_adder__Syms* symsp, const char* v__name);
    ~Vconfigurable_carry_select_adder___024root();
    VL_UNCOPYABLE(Vconfigurable_carry_select_adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
