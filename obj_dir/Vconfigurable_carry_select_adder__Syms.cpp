// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder.h"
#include "Vconfigurable_carry_select_adder___024root.h"
#include "Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8.h"

// FUNCTIONS
Vconfigurable_carry_select_adder__Syms::~Vconfigurable_carry_select_adder__Syms()
{
}

Vconfigurable_carry_select_adder__Syms::Vconfigurable_carry_select_adder__Syms(VerilatedContext* contextp, const char* namep, Vconfigurable_carry_select_adder* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[1].adder_0")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[1].adder_1")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[2].adder_0")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[2].adder_1")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[3].adder_0")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[3].adder_1")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[4].adder_0")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[4].adder_1")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[5].adder_0")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[5].adder_1")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[6].adder_0")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[6].adder_1")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[7].adder_0")}
    , TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1{this, Verilated::catName(namep, "configurable_carry_select_adder.carry_select_blocks[7].adder_1")}
    , TOP__configurable_carry_select_adder__DOT__first_block{this, Verilated::catName(namep, "configurable_carry_select_adder.first_block")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0;
    TOP.__PVT__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1 = &TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1;
    TOP.__PVT__configurable_carry_select_adder__DOT__first_block = &TOP__configurable_carry_select_adder__DOT__first_block;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vconfigure(true);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vconfigure(false);
    TOP__configurable_carry_select_adder__DOT__first_block.__Vconfigure(false);
}
