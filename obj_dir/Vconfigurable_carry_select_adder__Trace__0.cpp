// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_carry_select_adder__Syms.h"


void Vconfigurable_carry_select_adder___024root__trace_chg_0_sub_0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfigurable_carry_select_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_chg_0\n"); );
    // Init
    Vconfigurable_carry_select_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_carry_select_adder___024root*>(voidSelf);
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfigurable_carry_select_adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfigurable_carry_select_adder___024root__trace_chg_0_sub_0(Vconfigurable_carry_select_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.cout));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.cout));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.cout));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.cout));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.cout));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.cout));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.cout));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.cout));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.cout));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.cout));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.cout));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.cout));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.cout));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.cout));
        bufp->chgSData(oldp+14,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.cout) 
                                  << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                            << 2U) 
                                                           | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U))))))))),9);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+22,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.cout) 
                                        << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                   << 7U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                      << 6U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                         << 5U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                            << 4U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))))))))),9);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+30,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.cout) 
                                  << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                            << 2U) 
                                                           | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U))))))))),9);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+38,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.cout) 
                                        << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                   << 7U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                      << 6U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                         << 5U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                            << 4U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))))))))),9);
        bufp->chgBit(oldp+39,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+46,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.cout) 
                                  << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                            << 2U) 
                                                           | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U))))))))),9);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+54,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.cout) 
                                        << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                   << 7U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                      << 6U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                         << 5U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                            << 4U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))))))))),9);
        bufp->chgBit(oldp+55,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+62,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.cout) 
                                  << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                            << 2U) 
                                                           | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U))))))))),9);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+70,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.cout) 
                                        << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                   << 7U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                      << 6U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                         << 5U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                            << 4U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))))))))),9);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+78,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.cout) 
                                  << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                            << 2U) 
                                                           | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U))))))))),9);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+86,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.cout) 
                                        << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                   << 7U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                      << 6U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                         << 5U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                            << 4U) 
                                                           | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                    << 1U)))))))))),9);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+94,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.cout) 
                                  << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                            << 2U) 
                                                           | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                              << 1U))))))))),9);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+102,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.cout) 
                                         << 8U) | (
                                                   ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                    << 7U) 
                                                   | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                       << 6U) 
                                                      | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                          << 5U) 
                                                         | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                             << 4U) 
                                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                << 3U) 
                                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                   << 2U) 
                                                                  | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                     << 1U)))))))))),9);
        bufp->chgBit(oldp+103,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+110,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.cout) 
                                   << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                              << 7U) 
                                             | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                 << 6U) 
                                                | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                       << 4U) 
                                                      | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                          << 3U) 
                                                         | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                             << 2U) 
                                                            | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                               << 1U))))))))),9);
        bufp->chgBit(oldp+111,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgSData(oldp+118,((1U | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.cout) 
                                         << 8U) | (
                                                   ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                                    << 7U) 
                                                   | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                       << 6U) 
                                                      | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                          << 5U) 
                                                         | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                             << 4U) 
                                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                                << 3U) 
                                                               | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                                   << 2U) 
                                                                  | ((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                     << 1U)))))))))),9);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+126,(vlSelf->configurable_carry_select_adder__DOT__block_carry),9);
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                      >> 1U))));
        bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                      >> 2U))));
        bufp->chgBit(oldp+129,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                      >> 3U))));
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                      >> 6U))));
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                      >> 7U))));
        bufp->chgBit(oldp+134,((1U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.cout));
        bufp->chgSData(oldp+136,((((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.cout) 
                                   << 8U) | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin) 
                                              << 7U) 
                                             | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin) 
                                                 << 6U) 
                                                | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin) 
                                                       << 4U) 
                                                      | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                          << 3U) 
                                                         | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                             << 2U) 
                                                            | (((IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))))))))),9);
        bufp->chgBit(oldp+137,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin));
    }
    bufp->chgQData(oldp+144,(vlSelf->a),64);
    bufp->chgQData(oldp+146,(vlSelf->b),64);
    bufp->chgBit(oldp+148,(vlSelf->cin));
    bufp->chgQData(oldp+149,(vlSelf->sum),64);
    bufp->chgBit(oldp+151,(vlSelf->cout));
    bufp->chgCData(oldp+152,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 7U)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 7U)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 6U)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 6U)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 5U)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 5U)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 4U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 4U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 3U)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 3U)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 2U)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 2U)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 1U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 1U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(vlSelf->a) 
                                                                        ^ 
                                                                        ((IData)(vlSelf->b) 
                                                                         ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry)))))))))))),8);
    bufp->chgCData(oldp+153,((0xffU & (IData)((vlSelf->a 
                                               >> 8U)))),8);
    bufp->chgCData(oldp+154,((0xffU & (IData)((vlSelf->b 
                                               >> 8U)))),8);
    bufp->chgCData(oldp+155,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0xfU)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0xfU)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0xeU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0xeU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0xdU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0xdU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0xcU)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0xcU)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0xbU)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0xbU)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0xaU)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0xaU)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 9U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 9U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 8U)) 
                                                                        ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 8U)))))))))))),8);
    bufp->chgCData(oldp+156,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0xfU)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0xfU)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0xeU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0xeU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0xdU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0xdU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0xcU)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0xcU)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0xbU)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0xbU)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0xaU)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0xaU)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 9U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 9U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 8U)) 
                                                                        ^ 
                                                                        (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 8U))))))))))))),8);
    bufp->chgCData(oldp+157,((0xffU & (IData)((vlSelf->a 
                                               >> 0x10U)))),8);
    bufp->chgCData(oldp+158,((0xffU & (IData)((vlSelf->b 
                                               >> 0x10U)))),8);
    bufp->chgCData(oldp+159,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x17U)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x17U)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x16U)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x16U)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x15U)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x15U)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x14U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x14U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x13U)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x13U)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x12U)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x12U)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x11U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x11U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x10U)) 
                                                                        ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x10U)))))))))))),8);
    bufp->chgCData(oldp+160,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x17U)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x17U)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x16U)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x16U)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x15U)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x15U)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x14U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x14U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x13U)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x13U)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x12U)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x12U)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x11U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x11U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x10U)) 
                                                                        ^ 
                                                                        (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x10U))))))))))))),8);
    bufp->chgCData(oldp+161,((0xffU & (IData)((vlSelf->a 
                                               >> 0x18U)))),8);
    bufp->chgCData(oldp+162,((0xffU & (IData)((vlSelf->b 
                                               >> 0x18U)))),8);
    bufp->chgCData(oldp+163,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x1fU)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x1fU)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x1eU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x1eU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x1dU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x1dU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x1cU)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x1cU)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x1bU)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x1bU)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x1aU)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x1aU)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x19U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x19U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x18U)) 
                                                                        ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x18U)))))))))))),8);
    bufp->chgCData(oldp+164,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x1fU)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x1fU)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x1eU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x1eU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x1dU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x1dU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x1cU)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x1cU)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x1bU)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x1bU)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x1aU)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x1aU)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x19U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x19U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x18U)) 
                                                                        ^ 
                                                                        (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x18U))))))))))))),8);
    bufp->chgCData(oldp+165,((0xffU & (IData)((vlSelf->a 
                                               >> 0x20U)))),8);
    bufp->chgCData(oldp+166,((0xffU & (IData)((vlSelf->b 
                                               >> 0x20U)))),8);
    bufp->chgCData(oldp+167,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x27U)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x27U)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x26U)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x26U)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x25U)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x25U)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x24U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x24U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x23U)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x23U)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x22U)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x22U)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x21U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x21U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x20U)) 
                                                                        ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x20U)))))))))))),8);
    bufp->chgCData(oldp+168,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x27U)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x27U)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x26U)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x26U)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x25U)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x25U)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x24U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x24U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x23U)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x23U)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x22U)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x22U)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x21U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x21U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x20U)) 
                                                                        ^ 
                                                                        (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x20U))))))))))))),8);
    bufp->chgCData(oldp+169,((0xffU & (IData)((vlSelf->a 
                                               >> 0x28U)))),8);
    bufp->chgCData(oldp+170,((0xffU & (IData)((vlSelf->b 
                                               >> 0x28U)))),8);
    bufp->chgCData(oldp+171,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x2fU)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x2fU)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x2eU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x2eU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x2dU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x2cU)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x2cU)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x2bU)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x2bU)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x2aU)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x2aU)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x29U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x29U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x28U)) 
                                                                        ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x28U)))))))))))),8);
    bufp->chgCData(oldp+172,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x2fU)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x2fU)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x2eU)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x2eU)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x2dU)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x2cU)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x2cU)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x2bU)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x2bU)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x2aU)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x2aU)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x29U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x29U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x28U)) 
                                                                        ^ 
                                                                        (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x28U))))))))))))),8);
    bufp->chgCData(oldp+173,((0xffU & (IData)((vlSelf->a 
                                               >> 0x30U)))),8);
    bufp->chgCData(oldp+174,((0xffU & (IData)((vlSelf->b 
                                               >> 0x30U)))),8);
    bufp->chgCData(oldp+175,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x37U)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x37U)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x36U)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x36U)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x35U)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x35U)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x34U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x34U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x33U)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x33U)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x32U)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x32U)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x31U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x31U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x30U)) 
                                                                        ^ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x30U)))))))))))),8);
    bufp->chgCData(oldp+176,(((0x80U & (((IData)((vlSelf->a 
                                                  >> 0x37U)) 
                                         ^ ((IData)(
                                                    (vlSelf->b 
                                                     >> 0x37U)) 
                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & (((IData)(
                                                                (vlSelf->a 
                                                                 >> 0x36U)) 
                                                        ^ 
                                                        ((IData)(
                                                                 (vlSelf->b 
                                                                  >> 0x36U)) 
                                                         ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((IData)(
                                                                   (vlSelf->a 
                                                                    >> 0x35U)) 
                                                           ^ 
                                                           ((IData)(
                                                                    (vlSelf->b 
                                                                     >> 0x35U)) 
                                                            ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x34U)) 
                                                              ^ 
                                                              ((IData)(
                                                                       (vlSelf->b 
                                                                        >> 0x34U)) 
                                                               ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelf->a 
                                                                          >> 0x33U)) 
                                                                 ^ 
                                                                 ((IData)(
                                                                          (vlSelf->b 
                                                                           >> 0x33U)) 
                                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((IData)(
                                                                            (vlSelf->a 
                                                                             >> 0x32U)) 
                                                                    ^ 
                                                                    ((IData)(
                                                                             (vlSelf->b 
                                                                              >> 0x32U)) 
                                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((IData)(
                                                                               (vlSelf->a 
                                                                                >> 0x31U)) 
                                                                       ^ 
                                                                       ((IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x31U)) 
                                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x30U)) 
                                                                        ^ 
                                                                        (~ (IData)(
                                                                                (vlSelf->b 
                                                                                >> 0x30U))))))))))))),8);
    bufp->chgCData(oldp+177,((0xffU & (IData)((vlSelf->a 
                                               >> 0x38U)))),8);
    bufp->chgCData(oldp+178,((0xffU & (IData)((vlSelf->b 
                                               >> 0x38U)))),8);
    bufp->chgCData(oldp+179,((((IData)((((vlSelf->a 
                                          ^ vlSelf->b) 
                                         >> 0x3fU) 
                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                               << 7U) | ((0x40U & (
                                                   ((IData)(
                                                            (vlSelf->a 
                                                             >> 0x3eU)) 
                                                    ^ 
                                                    ((IData)(
                                                             (vlSelf->b 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((IData)(
                                                         (vlSelf->a 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x3dU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & (((IData)(
                                                            (vlSelf->a 
                                                             >> 0x3cU)) 
                                                    ^ 
                                                    ((IData)(
                                                             (vlSelf->b 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & (((IData)(
                                                               (vlSelf->a 
                                                                >> 0x3bU)) 
                                                       ^ 
                                                       ((IData)(
                                                                (vlSelf->b 
                                                                 >> 0x3bU)) 
                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & (((IData)(
                                                                  (vlSelf->a 
                                                                   >> 0x3aU)) 
                                                          ^ 
                                                          ((IData)(
                                                                   (vlSelf->b 
                                                                    >> 0x3aU)) 
                                                           ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & (((IData)(
                                                                     (vlSelf->a 
                                                                      >> 0x39U)) 
                                                             ^ 
                                                             ((IData)(
                                                                      (vlSelf->b 
                                                                       >> 0x39U)) 
                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x38U)) 
                                                              ^ (IData)(
                                                                        (vlSelf->b 
                                                                         >> 0x38U)))))))))))),8);
    bufp->chgCData(oldp+180,((((IData)((((vlSelf->a 
                                          ^ vlSelf->b) 
                                         >> 0x3fU) 
                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))) 
                               << 7U) | ((0x40U & (
                                                   ((IData)(
                                                            (vlSelf->a 
                                                             >> 0x3eU)) 
                                                    ^ 
                                                    ((IData)(
                                                             (vlSelf->b 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((IData)(
                                                         (vlSelf->a 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->b 
                                                           >> 0x3dU)) 
                                                  ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & (((IData)(
                                                            (vlSelf->a 
                                                             >> 0x3cU)) 
                                                    ^ 
                                                    ((IData)(
                                                             (vlSelf->b 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & (((IData)(
                                                               (vlSelf->a 
                                                                >> 0x3bU)) 
                                                       ^ 
                                                       ((IData)(
                                                                (vlSelf->b 
                                                                 >> 0x3bU)) 
                                                        ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & (((IData)(
                                                                  (vlSelf->a 
                                                                   >> 0x3aU)) 
                                                          ^ 
                                                          ((IData)(
                                                                   (vlSelf->b 
                                                                    >> 0x3aU)) 
                                                           ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & (((IData)(
                                                                     (vlSelf->a 
                                                                      >> 0x39U)) 
                                                             ^ 
                                                             ((IData)(
                                                                      (vlSelf->b 
                                                                       >> 0x39U)) 
                                                              ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((IData)(
                                                                      (vlSelf->a 
                                                                       >> 0x38U)) 
                                                              ^ 
                                                              (~ (IData)(
                                                                         (vlSelf->b 
                                                                          >> 0x38U))))))))))))),8);
    bufp->chgCData(oldp+181,((0xffU & (IData)(vlSelf->a))),8);
    bufp->chgCData(oldp+182,((0xffU & (IData)(vlSelf->b))),8);
    bufp->chgBit(oldp+183,((1U & (IData)(vlSelf->a))));
    bufp->chgBit(oldp+184,((1U & (IData)(vlSelf->b))));
    bufp->chgBit(oldp+185,((1U & ((IData)(vlSelf->a) 
                                  ^ ((IData)(vlSelf->b) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))));
    bufp->chgBit(oldp+186,((1U & (IData)((vlSelf->a 
                                          >> 1U)))));
    bufp->chgBit(oldp+187,((1U & (IData)((vlSelf->b 
                                          >> 1U)))));
    bufp->chgBit(oldp+188,((1U & ((IData)((vlSelf->a 
                                           >> 1U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 1U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+189,((1U & (IData)((vlSelf->a 
                                          >> 2U)))));
    bufp->chgBit(oldp+190,((1U & (IData)((vlSelf->b 
                                          >> 2U)))));
    bufp->chgBit(oldp+191,((1U & ((IData)((vlSelf->a 
                                           >> 2U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 2U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+192,((1U & (IData)((vlSelf->a 
                                          >> 3U)))));
    bufp->chgBit(oldp+193,((1U & (IData)((vlSelf->b 
                                          >> 3U)))));
    bufp->chgBit(oldp+194,((1U & ((IData)((vlSelf->a 
                                           >> 3U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 3U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+195,((1U & (IData)((vlSelf->a 
                                          >> 4U)))));
    bufp->chgBit(oldp+196,((1U & (IData)((vlSelf->b 
                                          >> 4U)))));
    bufp->chgBit(oldp+197,((1U & ((IData)((vlSelf->a 
                                           >> 4U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 4U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+198,((1U & (IData)((vlSelf->a 
                                          >> 5U)))));
    bufp->chgBit(oldp+199,((1U & (IData)((vlSelf->b 
                                          >> 5U)))));
    bufp->chgBit(oldp+200,((1U & ((IData)((vlSelf->a 
                                           >> 5U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 5U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+201,((1U & (IData)((vlSelf->a 
                                          >> 6U)))));
    bufp->chgBit(oldp+202,((1U & (IData)((vlSelf->b 
                                          >> 6U)))));
    bufp->chgBit(oldp+203,((1U & ((IData)((vlSelf->a 
                                           >> 6U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 6U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+204,((1U & (IData)((vlSelf->a 
                                          >> 7U)))));
    bufp->chgBit(oldp+205,((1U & (IData)((vlSelf->b 
                                          >> 7U)))));
    bufp->chgBit(oldp+206,((1U & ((IData)((vlSelf->a 
                                           >> 7U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 7U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__first_block.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+207,((1U & (IData)((vlSelf->a 
                                          >> 8U)))));
    bufp->chgBit(oldp+208,((1U & (IData)((vlSelf->b 
                                          >> 8U)))));
    bufp->chgBit(oldp+209,((1U & ((IData)((vlSelf->a 
                                           >> 8U)) 
                                  ^ (IData)((vlSelf->b 
                                             >> 8U))))));
    bufp->chgBit(oldp+210,((1U & (IData)((vlSelf->a 
                                          >> 9U)))));
    bufp->chgBit(oldp+211,((1U & (IData)((vlSelf->b 
                                          >> 9U)))));
    bufp->chgBit(oldp+212,((1U & ((IData)((vlSelf->a 
                                           >> 9U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 9U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+213,((1U & (IData)((vlSelf->a 
                                          >> 0xaU)))));
    bufp->chgBit(oldp+214,((1U & (IData)((vlSelf->b 
                                          >> 0xaU)))));
    bufp->chgBit(oldp+215,((1U & ((IData)((vlSelf->a 
                                           >> 0xaU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xaU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+216,((1U & (IData)((vlSelf->a 
                                          >> 0xbU)))));
    bufp->chgBit(oldp+217,((1U & (IData)((vlSelf->b 
                                          >> 0xbU)))));
    bufp->chgBit(oldp+218,((1U & ((IData)((vlSelf->a 
                                           >> 0xbU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xbU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+219,((1U & (IData)((vlSelf->a 
                                          >> 0xcU)))));
    bufp->chgBit(oldp+220,((1U & (IData)((vlSelf->b 
                                          >> 0xcU)))));
    bufp->chgBit(oldp+221,((1U & ((IData)((vlSelf->a 
                                           >> 0xcU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xcU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+222,((1U & (IData)((vlSelf->a 
                                          >> 0xdU)))));
    bufp->chgBit(oldp+223,((1U & (IData)((vlSelf->b 
                                          >> 0xdU)))));
    bufp->chgBit(oldp+224,((1U & ((IData)((vlSelf->a 
                                           >> 0xdU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xdU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+225,((1U & (IData)((vlSelf->a 
                                          >> 0xeU)))));
    bufp->chgBit(oldp+226,((1U & (IData)((vlSelf->b 
                                          >> 0xeU)))));
    bufp->chgBit(oldp+227,((1U & ((IData)((vlSelf->a 
                                           >> 0xeU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xeU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+228,((1U & (IData)((vlSelf->a 
                                          >> 0xfU)))));
    bufp->chgBit(oldp+229,((1U & (IData)((vlSelf->b 
                                          >> 0xfU)))));
    bufp->chgBit(oldp+230,((1U & ((IData)((vlSelf->a 
                                           >> 0xfU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xfU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+231,((1U & ((IData)((vlSelf->a 
                                           >> 8U)) 
                                  ^ (~ (IData)((vlSelf->b 
                                                >> 8U)))))));
    bufp->chgBit(oldp+232,((1U & ((IData)((vlSelf->a 
                                           >> 9U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 9U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+233,((1U & ((IData)((vlSelf->a 
                                           >> 0xaU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xaU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+234,((1U & ((IData)((vlSelf->a 
                                           >> 0xbU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xbU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+235,((1U & ((IData)((vlSelf->a 
                                           >> 0xcU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xcU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+236,((1U & ((IData)((vlSelf->a 
                                           >> 0xdU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xdU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+237,((1U & ((IData)((vlSelf->a 
                                           >> 0xeU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xeU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+238,((1U & ((IData)((vlSelf->a 
                                           >> 0xfU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0xfU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+239,((1U & (IData)((vlSelf->a 
                                          >> 0x10U)))));
    bufp->chgBit(oldp+240,((1U & (IData)((vlSelf->b 
                                          >> 0x10U)))));
    bufp->chgBit(oldp+241,((1U & ((IData)((vlSelf->a 
                                           >> 0x10U)) 
                                  ^ (IData)((vlSelf->b 
                                             >> 0x10U))))));
    bufp->chgBit(oldp+242,((1U & (IData)((vlSelf->a 
                                          >> 0x11U)))));
    bufp->chgBit(oldp+243,((1U & (IData)((vlSelf->b 
                                          >> 0x11U)))));
    bufp->chgBit(oldp+244,((1U & ((IData)((vlSelf->a 
                                           >> 0x11U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x11U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+245,((1U & (IData)((vlSelf->a 
                                          >> 0x12U)))));
    bufp->chgBit(oldp+246,((1U & (IData)((vlSelf->b 
                                          >> 0x12U)))));
    bufp->chgBit(oldp+247,((1U & ((IData)((vlSelf->a 
                                           >> 0x12U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x12U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+248,((1U & (IData)((vlSelf->a 
                                          >> 0x13U)))));
    bufp->chgBit(oldp+249,((1U & (IData)((vlSelf->b 
                                          >> 0x13U)))));
    bufp->chgBit(oldp+250,((1U & ((IData)((vlSelf->a 
                                           >> 0x13U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x13U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+251,((1U & (IData)((vlSelf->a 
                                          >> 0x14U)))));
    bufp->chgBit(oldp+252,((1U & (IData)((vlSelf->b 
                                          >> 0x14U)))));
    bufp->chgBit(oldp+253,((1U & ((IData)((vlSelf->a 
                                           >> 0x14U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x14U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+254,((1U & (IData)((vlSelf->a 
                                          >> 0x15U)))));
    bufp->chgBit(oldp+255,((1U & (IData)((vlSelf->b 
                                          >> 0x15U)))));
    bufp->chgBit(oldp+256,((1U & ((IData)((vlSelf->a 
                                           >> 0x15U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x15U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+257,((1U & (IData)((vlSelf->a 
                                          >> 0x16U)))));
    bufp->chgBit(oldp+258,((1U & (IData)((vlSelf->b 
                                          >> 0x16U)))));
    bufp->chgBit(oldp+259,((1U & ((IData)((vlSelf->a 
                                           >> 0x16U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x16U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+260,((1U & (IData)((vlSelf->a 
                                          >> 0x17U)))));
    bufp->chgBit(oldp+261,((1U & (IData)((vlSelf->b 
                                          >> 0x17U)))));
    bufp->chgBit(oldp+262,((1U & ((IData)((vlSelf->a 
                                           >> 0x17U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x17U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+263,((1U & ((IData)((vlSelf->a 
                                           >> 0x10U)) 
                                  ^ (~ (IData)((vlSelf->b 
                                                >> 0x10U)))))));
    bufp->chgBit(oldp+264,((1U & ((IData)((vlSelf->a 
                                           >> 0x11U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x11U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+265,((1U & ((IData)((vlSelf->a 
                                           >> 0x12U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x12U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+266,((1U & ((IData)((vlSelf->a 
                                           >> 0x13U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x13U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+267,((1U & ((IData)((vlSelf->a 
                                           >> 0x14U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x14U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+268,((1U & ((IData)((vlSelf->a 
                                           >> 0x15U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x15U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+269,((1U & ((IData)((vlSelf->a 
                                           >> 0x16U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x16U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+270,((1U & ((IData)((vlSelf->a 
                                           >> 0x17U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x17U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+271,((1U & (IData)((vlSelf->a 
                                          >> 0x18U)))));
    bufp->chgBit(oldp+272,((1U & (IData)((vlSelf->b 
                                          >> 0x18U)))));
    bufp->chgBit(oldp+273,((1U & ((IData)((vlSelf->a 
                                           >> 0x18U)) 
                                  ^ (IData)((vlSelf->b 
                                             >> 0x18U))))));
    bufp->chgBit(oldp+274,((1U & (IData)((vlSelf->a 
                                          >> 0x19U)))));
    bufp->chgBit(oldp+275,((1U & (IData)((vlSelf->b 
                                          >> 0x19U)))));
    bufp->chgBit(oldp+276,((1U & ((IData)((vlSelf->a 
                                           >> 0x19U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x19U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+277,((1U & (IData)((vlSelf->a 
                                          >> 0x1aU)))));
    bufp->chgBit(oldp+278,((1U & (IData)((vlSelf->b 
                                          >> 0x1aU)))));
    bufp->chgBit(oldp+279,((1U & ((IData)((vlSelf->a 
                                           >> 0x1aU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1aU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+280,((1U & (IData)((vlSelf->a 
                                          >> 0x1bU)))));
    bufp->chgBit(oldp+281,((1U & (IData)((vlSelf->b 
                                          >> 0x1bU)))));
    bufp->chgBit(oldp+282,((1U & ((IData)((vlSelf->a 
                                           >> 0x1bU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1bU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+283,((1U & (IData)((vlSelf->a 
                                          >> 0x1cU)))));
    bufp->chgBit(oldp+284,((1U & (IData)((vlSelf->b 
                                          >> 0x1cU)))));
    bufp->chgBit(oldp+285,((1U & ((IData)((vlSelf->a 
                                           >> 0x1cU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1cU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+286,((1U & (IData)((vlSelf->a 
                                          >> 0x1dU)))));
    bufp->chgBit(oldp+287,((1U & (IData)((vlSelf->b 
                                          >> 0x1dU)))));
    bufp->chgBit(oldp+288,((1U & ((IData)((vlSelf->a 
                                           >> 0x1dU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1dU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+289,((1U & (IData)((vlSelf->a 
                                          >> 0x1eU)))));
    bufp->chgBit(oldp+290,((1U & (IData)((vlSelf->b 
                                          >> 0x1eU)))));
    bufp->chgBit(oldp+291,((1U & ((IData)((vlSelf->a 
                                           >> 0x1eU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1eU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+292,((1U & (IData)((vlSelf->a 
                                          >> 0x1fU)))));
    bufp->chgBit(oldp+293,((1U & (IData)((vlSelf->b 
                                          >> 0x1fU)))));
    bufp->chgBit(oldp+294,((1U & ((IData)((vlSelf->a 
                                           >> 0x1fU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1fU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+295,((1U & ((IData)((vlSelf->a 
                                           >> 0x18U)) 
                                  ^ (~ (IData)((vlSelf->b 
                                                >> 0x18U)))))));
    bufp->chgBit(oldp+296,((1U & ((IData)((vlSelf->a 
                                           >> 0x19U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x19U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+297,((1U & ((IData)((vlSelf->a 
                                           >> 0x1aU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1aU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+298,((1U & ((IData)((vlSelf->a 
                                           >> 0x1bU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1bU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+299,((1U & ((IData)((vlSelf->a 
                                           >> 0x1cU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1cU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+300,((1U & ((IData)((vlSelf->a 
                                           >> 0x1dU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1dU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+301,((1U & ((IData)((vlSelf->a 
                                           >> 0x1eU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1eU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+302,((1U & ((IData)((vlSelf->a 
                                           >> 0x1fU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x1fU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+303,((1U & (IData)((vlSelf->a 
                                          >> 0x20U)))));
    bufp->chgBit(oldp+304,((1U & (IData)((vlSelf->b 
                                          >> 0x20U)))));
    bufp->chgBit(oldp+305,((1U & ((IData)((vlSelf->a 
                                           >> 0x20U)) 
                                  ^ (IData)((vlSelf->b 
                                             >> 0x20U))))));
    bufp->chgBit(oldp+306,((1U & (IData)((vlSelf->a 
                                          >> 0x21U)))));
    bufp->chgBit(oldp+307,((1U & (IData)((vlSelf->b 
                                          >> 0x21U)))));
    bufp->chgBit(oldp+308,((1U & ((IData)((vlSelf->a 
                                           >> 0x21U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x21U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+309,((1U & (IData)((vlSelf->a 
                                          >> 0x22U)))));
    bufp->chgBit(oldp+310,((1U & (IData)((vlSelf->b 
                                          >> 0x22U)))));
    bufp->chgBit(oldp+311,((1U & ((IData)((vlSelf->a 
                                           >> 0x22U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x22U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+312,((1U & (IData)((vlSelf->a 
                                          >> 0x23U)))));
    bufp->chgBit(oldp+313,((1U & (IData)((vlSelf->b 
                                          >> 0x23U)))));
    bufp->chgBit(oldp+314,((1U & ((IData)((vlSelf->a 
                                           >> 0x23U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x23U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+315,((1U & (IData)((vlSelf->a 
                                          >> 0x24U)))));
    bufp->chgBit(oldp+316,((1U & (IData)((vlSelf->b 
                                          >> 0x24U)))));
    bufp->chgBit(oldp+317,((1U & ((IData)((vlSelf->a 
                                           >> 0x24U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x24U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+318,((1U & (IData)((vlSelf->a 
                                          >> 0x25U)))));
    bufp->chgBit(oldp+319,((1U & (IData)((vlSelf->b 
                                          >> 0x25U)))));
    bufp->chgBit(oldp+320,((1U & ((IData)((vlSelf->a 
                                           >> 0x25U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x25U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+321,((1U & (IData)((vlSelf->a 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+322,((1U & (IData)((vlSelf->b 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+323,((1U & ((IData)((vlSelf->a 
                                           >> 0x26U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x26U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+324,((1U & (IData)((vlSelf->a 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+325,((1U & (IData)((vlSelf->b 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+326,((1U & ((IData)((vlSelf->a 
                                           >> 0x27U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x27U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+327,((1U & ((IData)((vlSelf->a 
                                           >> 0x20U)) 
                                  ^ (~ (IData)((vlSelf->b 
                                                >> 0x20U)))))));
    bufp->chgBit(oldp+328,((1U & ((IData)((vlSelf->a 
                                           >> 0x21U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x21U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+329,((1U & ((IData)((vlSelf->a 
                                           >> 0x22U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x22U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+330,((1U & ((IData)((vlSelf->a 
                                           >> 0x23U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x23U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+331,((1U & ((IData)((vlSelf->a 
                                           >> 0x24U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x24U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+332,((1U & ((IData)((vlSelf->a 
                                           >> 0x25U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x25U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+333,((1U & ((IData)((vlSelf->a 
                                           >> 0x26U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x26U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+334,((1U & ((IData)((vlSelf->a 
                                           >> 0x27U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x27U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+335,((1U & (IData)((vlSelf->a 
                                          >> 0x28U)))));
    bufp->chgBit(oldp+336,((1U & (IData)((vlSelf->b 
                                          >> 0x28U)))));
    bufp->chgBit(oldp+337,((1U & ((IData)((vlSelf->a 
                                           >> 0x28U)) 
                                  ^ (IData)((vlSelf->b 
                                             >> 0x28U))))));
    bufp->chgBit(oldp+338,((1U & (IData)((vlSelf->a 
                                          >> 0x29U)))));
    bufp->chgBit(oldp+339,((1U & (IData)((vlSelf->b 
                                          >> 0x29U)))));
    bufp->chgBit(oldp+340,((1U & ((IData)((vlSelf->a 
                                           >> 0x29U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x29U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+341,((1U & (IData)((vlSelf->a 
                                          >> 0x2aU)))));
    bufp->chgBit(oldp+342,((1U & (IData)((vlSelf->b 
                                          >> 0x2aU)))));
    bufp->chgBit(oldp+343,((1U & ((IData)((vlSelf->a 
                                           >> 0x2aU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2aU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+344,((1U & (IData)((vlSelf->a 
                                          >> 0x2bU)))));
    bufp->chgBit(oldp+345,((1U & (IData)((vlSelf->b 
                                          >> 0x2bU)))));
    bufp->chgBit(oldp+346,((1U & ((IData)((vlSelf->a 
                                           >> 0x2bU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2bU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+347,((1U & (IData)((vlSelf->a 
                                          >> 0x2cU)))));
    bufp->chgBit(oldp+348,((1U & (IData)((vlSelf->b 
                                          >> 0x2cU)))));
    bufp->chgBit(oldp+349,((1U & ((IData)((vlSelf->a 
                                           >> 0x2cU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2cU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+350,((1U & (IData)((vlSelf->a 
                                          >> 0x2dU)))));
    bufp->chgBit(oldp+351,((1U & (IData)((vlSelf->b 
                                          >> 0x2dU)))));
    bufp->chgBit(oldp+352,((1U & ((IData)((vlSelf->a 
                                           >> 0x2dU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2dU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+353,((1U & (IData)((vlSelf->a 
                                          >> 0x2eU)))));
    bufp->chgBit(oldp+354,((1U & (IData)((vlSelf->b 
                                          >> 0x2eU)))));
    bufp->chgBit(oldp+355,((1U & ((IData)((vlSelf->a 
                                           >> 0x2eU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2eU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+356,((1U & (IData)((vlSelf->a 
                                          >> 0x2fU)))));
    bufp->chgBit(oldp+357,((1U & (IData)((vlSelf->b 
                                          >> 0x2fU)))));
    bufp->chgBit(oldp+358,((1U & ((IData)((vlSelf->a 
                                           >> 0x2fU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2fU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+359,((1U & ((IData)((vlSelf->a 
                                           >> 0x28U)) 
                                  ^ (~ (IData)((vlSelf->b 
                                                >> 0x28U)))))));
    bufp->chgBit(oldp+360,((1U & ((IData)((vlSelf->a 
                                           >> 0x29U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x29U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+361,((1U & ((IData)((vlSelf->a 
                                           >> 0x2aU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2aU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+362,((1U & ((IData)((vlSelf->a 
                                           >> 0x2bU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2bU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+363,((1U & ((IData)((vlSelf->a 
                                           >> 0x2cU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2cU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+364,((1U & ((IData)((vlSelf->a 
                                           >> 0x2dU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2dU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+365,((1U & ((IData)((vlSelf->a 
                                           >> 0x2eU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2eU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+366,((1U & ((IData)((vlSelf->a 
                                           >> 0x2fU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x2fU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+367,((1U & (IData)((vlSelf->a 
                                          >> 0x30U)))));
    bufp->chgBit(oldp+368,((1U & (IData)((vlSelf->b 
                                          >> 0x30U)))));
    bufp->chgBit(oldp+369,((1U & ((IData)((vlSelf->a 
                                           >> 0x30U)) 
                                  ^ (IData)((vlSelf->b 
                                             >> 0x30U))))));
    bufp->chgBit(oldp+370,((1U & (IData)((vlSelf->a 
                                          >> 0x31U)))));
    bufp->chgBit(oldp+371,((1U & (IData)((vlSelf->b 
                                          >> 0x31U)))));
    bufp->chgBit(oldp+372,((1U & ((IData)((vlSelf->a 
                                           >> 0x31U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x31U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+373,((1U & (IData)((vlSelf->a 
                                          >> 0x32U)))));
    bufp->chgBit(oldp+374,((1U & (IData)((vlSelf->b 
                                          >> 0x32U)))));
    bufp->chgBit(oldp+375,((1U & ((IData)((vlSelf->a 
                                           >> 0x32U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x32U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+376,((1U & (IData)((vlSelf->a 
                                          >> 0x33U)))));
    bufp->chgBit(oldp+377,((1U & (IData)((vlSelf->b 
                                          >> 0x33U)))));
    bufp->chgBit(oldp+378,((1U & ((IData)((vlSelf->a 
                                           >> 0x33U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x33U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+379,((1U & (IData)((vlSelf->a 
                                          >> 0x34U)))));
    bufp->chgBit(oldp+380,((1U & (IData)((vlSelf->b 
                                          >> 0x34U)))));
    bufp->chgBit(oldp+381,((1U & ((IData)((vlSelf->a 
                                           >> 0x34U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x34U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+382,((1U & (IData)((vlSelf->a 
                                          >> 0x35U)))));
    bufp->chgBit(oldp+383,((1U & (IData)((vlSelf->b 
                                          >> 0x35U)))));
    bufp->chgBit(oldp+384,((1U & ((IData)((vlSelf->a 
                                           >> 0x35U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x35U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+385,((1U & (IData)((vlSelf->a 
                                          >> 0x36U)))));
    bufp->chgBit(oldp+386,((1U & (IData)((vlSelf->b 
                                          >> 0x36U)))));
    bufp->chgBit(oldp+387,((1U & ((IData)((vlSelf->a 
                                           >> 0x36U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x36U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+388,((1U & (IData)((vlSelf->a 
                                          >> 0x37U)))));
    bufp->chgBit(oldp+389,((1U & (IData)((vlSelf->b 
                                          >> 0x37U)))));
    bufp->chgBit(oldp+390,((1U & ((IData)((vlSelf->a 
                                           >> 0x37U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x37U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+391,((1U & ((IData)((vlSelf->a 
                                           >> 0x30U)) 
                                  ^ (~ (IData)((vlSelf->b 
                                                >> 0x30U)))))));
    bufp->chgBit(oldp+392,((1U & ((IData)((vlSelf->a 
                                           >> 0x31U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x31U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+393,((1U & ((IData)((vlSelf->a 
                                           >> 0x32U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x32U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+394,((1U & ((IData)((vlSelf->a 
                                           >> 0x33U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x33U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+395,((1U & ((IData)((vlSelf->a 
                                           >> 0x34U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x34U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+396,((1U & ((IData)((vlSelf->a 
                                           >> 0x35U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x35U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+397,((1U & ((IData)((vlSelf->a 
                                           >> 0x36U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x36U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+398,((1U & ((IData)((vlSelf->a 
                                           >> 0x37U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x37U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+399,((1U & (IData)((vlSelf->a 
                                          >> 0x38U)))));
    bufp->chgBit(oldp+400,((1U & (IData)((vlSelf->b 
                                          >> 0x38U)))));
    bufp->chgBit(oldp+401,((1U & ((IData)((vlSelf->a 
                                           >> 0x38U)) 
                                  ^ (IData)((vlSelf->b 
                                             >> 0x38U))))));
    bufp->chgBit(oldp+402,((1U & (IData)((vlSelf->a 
                                          >> 0x39U)))));
    bufp->chgBit(oldp+403,((1U & (IData)((vlSelf->b 
                                          >> 0x39U)))));
    bufp->chgBit(oldp+404,((1U & ((IData)((vlSelf->a 
                                           >> 0x39U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x39U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+405,((1U & (IData)((vlSelf->a 
                                          >> 0x3aU)))));
    bufp->chgBit(oldp+406,((1U & (IData)((vlSelf->b 
                                          >> 0x3aU)))));
    bufp->chgBit(oldp+407,((1U & ((IData)((vlSelf->a 
                                           >> 0x3aU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3aU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+408,((1U & (IData)((vlSelf->a 
                                          >> 0x3bU)))));
    bufp->chgBit(oldp+409,((1U & (IData)((vlSelf->b 
                                          >> 0x3bU)))));
    bufp->chgBit(oldp+410,((1U & ((IData)((vlSelf->a 
                                           >> 0x3bU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3bU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+411,((1U & (IData)((vlSelf->a 
                                          >> 0x3cU)))));
    bufp->chgBit(oldp+412,((1U & (IData)((vlSelf->b 
                                          >> 0x3cU)))));
    bufp->chgBit(oldp+413,((1U & ((IData)((vlSelf->a 
                                           >> 0x3cU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3cU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+414,((1U & (IData)((vlSelf->a 
                                          >> 0x3dU)))));
    bufp->chgBit(oldp+415,((1U & (IData)((vlSelf->b 
                                          >> 0x3dU)))));
    bufp->chgBit(oldp+416,((1U & ((IData)((vlSelf->a 
                                           >> 0x3dU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3dU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+417,((1U & (IData)((vlSelf->a 
                                          >> 0x3eU)))));
    bufp->chgBit(oldp+418,((1U & (IData)((vlSelf->b 
                                          >> 0x3eU)))));
    bufp->chgBit(oldp+419,((1U & ((IData)((vlSelf->a 
                                           >> 0x3eU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3eU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+420,((1U & (IData)((vlSelf->a 
                                          >> 0x3fU)))));
    bufp->chgBit(oldp+421,((1U & (IData)((vlSelf->b 
                                          >> 0x3fU)))));
    bufp->chgBit(oldp+422,((IData)((((vlSelf->a ^ vlSelf->b) 
                                     >> 0x3fU) ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin)))));
    bufp->chgBit(oldp+423,((1U & ((IData)((vlSelf->a 
                                           >> 0x38U)) 
                                  ^ (~ (IData)((vlSelf->b 
                                                >> 0x38U)))))));
    bufp->chgBit(oldp+424,((1U & ((IData)((vlSelf->a 
                                           >> 0x39U)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x39U)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+425,((1U & ((IData)((vlSelf->a 
                                           >> 0x3aU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3aU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+426,((1U & ((IData)((vlSelf->a 
                                           >> 0x3bU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3bU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+427,((1U & ((IData)((vlSelf->a 
                                           >> 0x3cU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3cU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+428,((1U & ((IData)((vlSelf->a 
                                           >> 0x3dU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3dU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+429,((1U & ((IData)((vlSelf->a 
                                           >> 0x3eU)) 
                                  ^ ((IData)((vlSelf->b 
                                              >> 0x3eU)) 
                                     ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+430,((IData)((((vlSelf->a ^ vlSelf->b) 
                                     >> 0x3fU) ^ (IData)(vlSymsp->TOP__configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1.__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin)))));
}

void Vconfigurable_carry_select_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root__trace_cleanup\n"); );
    // Init
    Vconfigurable_carry_select_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_carry_select_adder___024root*>(voidSelf);
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
