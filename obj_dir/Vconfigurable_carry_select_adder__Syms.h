// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONFIGURABLE_CARRY_SELECT_ADDER__SYMS_H_
#define VERILATED_VCONFIGURABLE_CARRY_SELECT_ADDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vconfigurable_carry_select_adder.h"

// INCLUDE MODULE CLASSES
#include "Vconfigurable_carry_select_adder___024root.h"
#include "Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vconfigurable_carry_select_adder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconfigurable_carry_select_adder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconfigurable_carry_select_adder___024root TOP;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1;
    Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8 TOP__configurable_carry_select_adder__DOT__first_block;

    // CONSTRUCTORS
    Vconfigurable_carry_select_adder__Syms(VerilatedContext* contextp, const char* namep, Vconfigurable_carry_select_adder* modelp);
    ~Vconfigurable_carry_select_adder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
