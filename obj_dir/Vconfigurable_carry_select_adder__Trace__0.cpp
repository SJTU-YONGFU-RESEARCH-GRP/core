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
        bufp->chgBit(oldp+0,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0));
        bufp->chgBit(oldp+1,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1));
        bufp->chgCData(oldp+2,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0) 
                                 << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                            << 3U) 
                                           | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                               << 2U) 
                                              | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U))))),5);
        bufp->chgBit(oldp+3,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+4,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+5,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgCData(oldp+6,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1) 
                                       << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                     << 2U) 
                                                    | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                       << 1U)))))),5);
        bufp->chgBit(oldp+7,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+8,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+9,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+10,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0));
        bufp->chgBit(oldp+11,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1));
        bufp->chgCData(oldp+12,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0) 
                                  << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                             << 3U) 
                                            | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                << 2U) 
                                               | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U))))),5);
        bufp->chgBit(oldp+13,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+14,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+15,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgCData(oldp+16,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1) 
                                        << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                        << 1U)))))),5);
        bufp->chgBit(oldp+17,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+18,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+19,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+20,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0));
        bufp->chgBit(oldp+21,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1));
        bufp->chgCData(oldp+22,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0) 
                                  << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                             << 3U) 
                                            | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                << 2U) 
                                               | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U))))),5);
        bufp->chgBit(oldp+23,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+24,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+25,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgCData(oldp+26,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1) 
                                        << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                        << 1U)))))),5);
        bufp->chgBit(oldp+27,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+28,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+29,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+30,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0));
        bufp->chgBit(oldp+31,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1));
        bufp->chgCData(oldp+32,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0) 
                                  << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                             << 3U) 
                                            | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                << 2U) 
                                               | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U))))),5);
        bufp->chgBit(oldp+33,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+34,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+35,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgCData(oldp+36,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1) 
                                        << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                        << 1U)))))),5);
        bufp->chgBit(oldp+37,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+38,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+39,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+40,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0));
        bufp->chgBit(oldp+41,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1));
        bufp->chgCData(oldp+42,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0) 
                                  << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                             << 3U) 
                                            | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                << 2U) 
                                               | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U))))),5);
        bufp->chgBit(oldp+43,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+44,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+45,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgCData(oldp+46,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1) 
                                        << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                        << 1U)))))),5);
        bufp->chgBit(oldp+47,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+48,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+49,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+50,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0));
        bufp->chgBit(oldp+51,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1));
        bufp->chgCData(oldp+52,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0) 
                                  << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                             << 3U) 
                                            | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                << 2U) 
                                               | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U))))),5);
        bufp->chgBit(oldp+53,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+54,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+55,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgCData(oldp+56,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1) 
                                        << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                        << 1U)))))),5);
        bufp->chgBit(oldp+57,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+58,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+59,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+60,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0));
        bufp->chgBit(oldp+61,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1));
        bufp->chgCData(oldp+62,((((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0) 
                                  << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                             << 3U) 
                                            | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                << 2U) 
                                               | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                  << 1U))))),5);
        bufp->chgBit(oldp+63,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+64,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+65,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgCData(oldp+66,((1U | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1) 
                                        << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                        << 1U)))))),5);
        bufp->chgBit(oldp+67,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+68,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+69,(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+70,(vlSelf->configurable_carry_select_adder__DOT__block_carry),9);
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+73,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     >> 6U))));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     >> 7U))));
        bufp->chgBit(oldp+78,((1U & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))));
        bufp->chgBit(oldp+79,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout));
        bufp->chgCData(oldp+80,((((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout) 
                                  << 4U) | (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout) 
                                             << 3U) 
                                            | (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout) 
                                                << 2U) 
                                               | (((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))))),5);
        bufp->chgBit(oldp+81,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout));
        bufp->chgBit(oldp+82,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout));
        bufp->chgBit(oldp+83,(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout));
    }
    bufp->chgIData(oldp+84,(vlSelf->a),32);
    bufp->chgIData(oldp+85,(vlSelf->b),32);
    bufp->chgBit(oldp+86,(vlSelf->cin));
    bufp->chgIData(oldp+87,(vlSelf->sum),32);
    bufp->chgBit(oldp+88,(vlSelf->cout));
    bufp->chgCData(oldp+89,(((8U & ((0xfffffff8U & vlSelf->a) 
                                    ^ ((0xfffffff8U 
                                        & vlSelf->b) 
                                       ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout) 
                                          << 3U)))) 
                             | ((4U & ((0xfffffffcU 
                                        & vlSelf->a) 
                                       ^ ((0xfffffffcU 
                                           & vlSelf->b) 
                                          ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout) 
                                             << 2U)))) 
                                | ((2U & ((0xfffffffeU 
                                           & vlSelf->a) 
                                          ^ ((0xfffffffeU 
                                              & vlSelf->b) 
                                             ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout) 
                                                << 1U)))) 
                                   | (1U & (vlSelf->a 
                                            ^ (vlSelf->b 
                                               ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry)))))))),4);
    bufp->chgCData(oldp+90,((0xfU & (vlSelf->a >> 4U))),4);
    bufp->chgCData(oldp+91,((0xfU & (vlSelf->b >> 4U))),4);
    bufp->chgCData(oldp+92,(((8U & ((0xffffff8U & (vlSelf->a 
                                                   >> 4U)) 
                                    ^ ((0xffffff8U 
                                        & (vlSelf->b 
                                           >> 4U)) 
                                       ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U)))) 
                             | ((4U & ((0xffffffcU 
                                        & (vlSelf->a 
                                           >> 4U)) 
                                       ^ ((0xffffffcU 
                                           & (vlSelf->b 
                                              >> 4U)) 
                                          ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                             << 2U)))) 
                                | ((2U & ((0xffffffeU 
                                           & (vlSelf->a 
                                              >> 4U)) 
                                          ^ ((0xffffffeU 
                                              & (vlSelf->b 
                                                 >> 4U)) 
                                             ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                << 1U)))) 
                                   | (1U & ((vlSelf->a 
                                             ^ vlSelf->b) 
                                            >> 4U)))))),4);
    bufp->chgCData(oldp+93,(((8U & ((0xffffff8U & (vlSelf->a 
                                                   >> 4U)) 
                                    ^ ((0xffffff8U 
                                        & (vlSelf->b 
                                           >> 4U)) 
                                       ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                          << 3U)))) 
                             | ((4U & ((0xffffffcU 
                                        & (vlSelf->a 
                                           >> 4U)) 
                                       ^ ((0xffffffcU 
                                           & (vlSelf->b 
                                              >> 4U)) 
                                          ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                             << 2U)))) 
                                | ((2U & ((0xffffffeU 
                                           & (vlSelf->a 
                                              >> 4U)) 
                                          ^ ((0xffffffeU 
                                              & (vlSelf->b 
                                                 >> 4U)) 
                                             ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                << 1U)))) 
                                   | (1U & ((~ (vlSelf->b 
                                                >> 4U)) 
                                            ^ (vlSelf->a 
                                               >> 4U))))))),4);
    bufp->chgBit(oldp+94,((1U & (vlSelf->a >> 4U))));
    bufp->chgBit(oldp+95,((1U & (vlSelf->b >> 4U))));
    bufp->chgBit(oldp+96,((1U & ((vlSelf->a ^ vlSelf->b) 
                                 >> 4U))));
    bufp->chgBit(oldp+97,((1U & (vlSelf->a >> 5U))));
    bufp->chgBit(oldp+98,((1U & (vlSelf->b >> 5U))));
    bufp->chgBit(oldp+99,((1U & ((vlSelf->a >> 5U) 
                                 ^ ((vlSelf->b >> 5U) 
                                    ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+100,((1U & (vlSelf->a >> 6U))));
    bufp->chgBit(oldp+101,((1U & (vlSelf->b >> 6U))));
    bufp->chgBit(oldp+102,((1U & ((vlSelf->a >> 6U) 
                                  ^ ((vlSelf->b >> 6U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+103,((1U & (vlSelf->a >> 7U))));
    bufp->chgBit(oldp+104,((1U & (vlSelf->b >> 7U))));
    bufp->chgBit(oldp+105,((1U & ((vlSelf->a >> 7U) 
                                  ^ ((vlSelf->b >> 7U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+106,((1U & ((~ (vlSelf->b >> 4U)) 
                                  ^ (vlSelf->a >> 4U)))));
    bufp->chgBit(oldp+107,((1U & ((vlSelf->a >> 5U) 
                                  ^ ((vlSelf->b >> 5U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+108,((1U & ((vlSelf->a >> 6U) 
                                  ^ ((vlSelf->b >> 6U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+109,((1U & ((vlSelf->a >> 7U) 
                                  ^ ((vlSelf->b >> 7U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgCData(oldp+110,((0xfU & (vlSelf->a >> 8U))),4);
    bufp->chgCData(oldp+111,((0xfU & (vlSelf->b >> 8U))),4);
    bufp->chgCData(oldp+112,(((8U & ((0xfffff8U & (vlSelf->a 
                                                   >> 8U)) 
                                     ^ ((0xfffff8U 
                                         & (vlSelf->b 
                                            >> 8U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xfffffcU 
                                         & (vlSelf->a 
                                            >> 8U)) 
                                        ^ ((0xfffffcU 
                                            & (vlSelf->b 
                                               >> 8U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xfffffeU 
                                            & (vlSelf->a 
                                               >> 8U)) 
                                           ^ ((0xfffffeU 
                                               & (vlSelf->b 
                                                  >> 8U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((vlSelf->a 
                                              ^ vlSelf->b) 
                                             >> 8U)))))),4);
    bufp->chgCData(oldp+113,(((8U & ((0xfffff8U & (vlSelf->a 
                                                   >> 8U)) 
                                     ^ ((0xfffff8U 
                                         & (vlSelf->b 
                                            >> 8U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xfffffcU 
                                         & (vlSelf->a 
                                            >> 8U)) 
                                        ^ ((0xfffffcU 
                                            & (vlSelf->b 
                                               >> 8U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xfffffeU 
                                            & (vlSelf->a 
                                               >> 8U)) 
                                           ^ ((0xfffffeU 
                                               & (vlSelf->b 
                                                  >> 8U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((~ (vlSelf->b 
                                                 >> 8U)) 
                                             ^ (vlSelf->a 
                                                >> 8U))))))),4);
    bufp->chgBit(oldp+114,((1U & (vlSelf->a >> 8U))));
    bufp->chgBit(oldp+115,((1U & (vlSelf->b >> 8U))));
    bufp->chgBit(oldp+116,((1U & ((vlSelf->a ^ vlSelf->b) 
                                  >> 8U))));
    bufp->chgBit(oldp+117,((1U & (vlSelf->a >> 9U))));
    bufp->chgBit(oldp+118,((1U & (vlSelf->b >> 9U))));
    bufp->chgBit(oldp+119,((1U & ((vlSelf->a >> 9U) 
                                  ^ ((vlSelf->b >> 9U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+120,((1U & (vlSelf->a >> 0xaU))));
    bufp->chgBit(oldp+121,((1U & (vlSelf->b >> 0xaU))));
    bufp->chgBit(oldp+122,((1U & ((vlSelf->a >> 0xaU) 
                                  ^ ((vlSelf->b >> 0xaU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+123,((1U & (vlSelf->a >> 0xbU))));
    bufp->chgBit(oldp+124,((1U & (vlSelf->b >> 0xbU))));
    bufp->chgBit(oldp+125,((1U & ((vlSelf->a >> 0xbU) 
                                  ^ ((vlSelf->b >> 0xbU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+126,((1U & ((~ (vlSelf->b >> 8U)) 
                                  ^ (vlSelf->a >> 8U)))));
    bufp->chgBit(oldp+127,((1U & ((vlSelf->a >> 9U) 
                                  ^ ((vlSelf->b >> 9U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+128,((1U & ((vlSelf->a >> 0xaU) 
                                  ^ ((vlSelf->b >> 0xaU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+129,((1U & ((vlSelf->a >> 0xbU) 
                                  ^ ((vlSelf->b >> 0xbU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgCData(oldp+130,((0xfU & (vlSelf->a >> 0xcU))),4);
    bufp->chgCData(oldp+131,((0xfU & (vlSelf->b >> 0xcU))),4);
    bufp->chgCData(oldp+132,(((8U & ((0xffff8U & (vlSelf->a 
                                                  >> 0xcU)) 
                                     ^ ((0xffff8U & 
                                         (vlSelf->b 
                                          >> 0xcU)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xffffcU & 
                                         (vlSelf->a 
                                          >> 0xcU)) 
                                        ^ ((0xffffcU 
                                            & (vlSelf->b 
                                               >> 0xcU)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xffffeU 
                                            & (vlSelf->a 
                                               >> 0xcU)) 
                                           ^ ((0xffffeU 
                                               & (vlSelf->b 
                                                  >> 0xcU)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((vlSelf->a 
                                              ^ vlSelf->b) 
                                             >> 0xcU)))))),4);
    bufp->chgCData(oldp+133,(((8U & ((0xffff8U & (vlSelf->a 
                                                  >> 0xcU)) 
                                     ^ ((0xffff8U & 
                                         (vlSelf->b 
                                          >> 0xcU)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xffffcU & 
                                         (vlSelf->a 
                                          >> 0xcU)) 
                                        ^ ((0xffffcU 
                                            & (vlSelf->b 
                                               >> 0xcU)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xffffeU 
                                            & (vlSelf->a 
                                               >> 0xcU)) 
                                           ^ ((0xffffeU 
                                               & (vlSelf->b 
                                                  >> 0xcU)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((~ (vlSelf->b 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->a 
                                                >> 0xcU))))))),4);
    bufp->chgBit(oldp+134,((1U & (vlSelf->a >> 0xcU))));
    bufp->chgBit(oldp+135,((1U & (vlSelf->b >> 0xcU))));
    bufp->chgBit(oldp+136,((1U & ((vlSelf->a ^ vlSelf->b) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+137,((1U & (vlSelf->a >> 0xdU))));
    bufp->chgBit(oldp+138,((1U & (vlSelf->b >> 0xdU))));
    bufp->chgBit(oldp+139,((1U & ((vlSelf->a >> 0xdU) 
                                  ^ ((vlSelf->b >> 0xdU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+140,((1U & (vlSelf->a >> 0xeU))));
    bufp->chgBit(oldp+141,((1U & (vlSelf->b >> 0xeU))));
    bufp->chgBit(oldp+142,((1U & ((vlSelf->a >> 0xeU) 
                                  ^ ((vlSelf->b >> 0xeU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+143,((1U & (vlSelf->a >> 0xfU))));
    bufp->chgBit(oldp+144,((1U & (vlSelf->b >> 0xfU))));
    bufp->chgBit(oldp+145,((1U & ((vlSelf->a >> 0xfU) 
                                  ^ ((vlSelf->b >> 0xfU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+146,((1U & ((~ (vlSelf->b >> 0xcU)) 
                                  ^ (vlSelf->a >> 0xcU)))));
    bufp->chgBit(oldp+147,((1U & ((vlSelf->a >> 0xdU) 
                                  ^ ((vlSelf->b >> 0xdU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+148,((1U & ((vlSelf->a >> 0xeU) 
                                  ^ ((vlSelf->b >> 0xeU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+149,((1U & ((vlSelf->a >> 0xfU) 
                                  ^ ((vlSelf->b >> 0xfU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgCData(oldp+150,((0xfU & (vlSelf->a >> 0x10U))),4);
    bufp->chgCData(oldp+151,((0xfU & (vlSelf->b >> 0x10U))),4);
    bufp->chgCData(oldp+152,(((8U & ((0xfff8U & (vlSelf->a 
                                                 >> 0x10U)) 
                                     ^ ((0xfff8U & 
                                         (vlSelf->b 
                                          >> 0x10U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xfffcU & 
                                         (vlSelf->a 
                                          >> 0x10U)) 
                                        ^ ((0xfffcU 
                                            & (vlSelf->b 
                                               >> 0x10U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xfffeU 
                                            & (vlSelf->a 
                                               >> 0x10U)) 
                                           ^ ((0xfffeU 
                                               & (vlSelf->b 
                                                  >> 0x10U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((vlSelf->a 
                                              ^ vlSelf->b) 
                                             >> 0x10U)))))),4);
    bufp->chgCData(oldp+153,(((8U & ((0xfff8U & (vlSelf->a 
                                                 >> 0x10U)) 
                                     ^ ((0xfff8U & 
                                         (vlSelf->b 
                                          >> 0x10U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xfffcU & 
                                         (vlSelf->a 
                                          >> 0x10U)) 
                                        ^ ((0xfffcU 
                                            & (vlSelf->b 
                                               >> 0x10U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xfffeU 
                                            & (vlSelf->a 
                                               >> 0x10U)) 
                                           ^ ((0xfffeU 
                                               & (vlSelf->b 
                                                  >> 0x10U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((~ (vlSelf->b 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->a 
                                                >> 0x10U))))))),4);
    bufp->chgBit(oldp+154,((1U & (vlSelf->a >> 0x10U))));
    bufp->chgBit(oldp+155,((1U & (vlSelf->b >> 0x10U))));
    bufp->chgBit(oldp+156,((1U & ((vlSelf->a ^ vlSelf->b) 
                                  >> 0x10U))));
    bufp->chgBit(oldp+157,((1U & (vlSelf->a >> 0x11U))));
    bufp->chgBit(oldp+158,((1U & (vlSelf->b >> 0x11U))));
    bufp->chgBit(oldp+159,((1U & ((vlSelf->a >> 0x11U) 
                                  ^ ((vlSelf->b >> 0x11U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+160,((1U & (vlSelf->a >> 0x12U))));
    bufp->chgBit(oldp+161,((1U & (vlSelf->b >> 0x12U))));
    bufp->chgBit(oldp+162,((1U & ((vlSelf->a >> 0x12U) 
                                  ^ ((vlSelf->b >> 0x12U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+163,((1U & (vlSelf->a >> 0x13U))));
    bufp->chgBit(oldp+164,((1U & (vlSelf->b >> 0x13U))));
    bufp->chgBit(oldp+165,((1U & ((vlSelf->a >> 0x13U) 
                                  ^ ((vlSelf->b >> 0x13U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+166,((1U & ((~ (vlSelf->b >> 0x10U)) 
                                  ^ (vlSelf->a >> 0x10U)))));
    bufp->chgBit(oldp+167,((1U & ((vlSelf->a >> 0x11U) 
                                  ^ ((vlSelf->b >> 0x11U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+168,((1U & ((vlSelf->a >> 0x12U) 
                                  ^ ((vlSelf->b >> 0x12U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+169,((1U & ((vlSelf->a >> 0x13U) 
                                  ^ ((vlSelf->b >> 0x13U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgCData(oldp+170,((0xfU & (vlSelf->a >> 0x14U))),4);
    bufp->chgCData(oldp+171,((0xfU & (vlSelf->b >> 0x14U))),4);
    bufp->chgCData(oldp+172,(((8U & ((0xff8U & (vlSelf->a 
                                                >> 0x14U)) 
                                     ^ ((0xff8U & (vlSelf->b 
                                                   >> 0x14U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xffcU & (vlSelf->a 
                                                   >> 0x14U)) 
                                        ^ ((0xffcU 
                                            & (vlSelf->b 
                                               >> 0x14U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xffeU 
                                            & (vlSelf->a 
                                               >> 0x14U)) 
                                           ^ ((0xffeU 
                                               & (vlSelf->b 
                                                  >> 0x14U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((vlSelf->a 
                                              ^ vlSelf->b) 
                                             >> 0x14U)))))),4);
    bufp->chgCData(oldp+173,(((8U & ((0xff8U & (vlSelf->a 
                                                >> 0x14U)) 
                                     ^ ((0xff8U & (vlSelf->b 
                                                   >> 0x14U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xffcU & (vlSelf->a 
                                                   >> 0x14U)) 
                                        ^ ((0xffcU 
                                            & (vlSelf->b 
                                               >> 0x14U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xffeU 
                                            & (vlSelf->a 
                                               >> 0x14U)) 
                                           ^ ((0xffeU 
                                               & (vlSelf->b 
                                                  >> 0x14U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((~ (vlSelf->b 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->a 
                                                >> 0x14U))))))),4);
    bufp->chgBit(oldp+174,((1U & (vlSelf->a >> 0x14U))));
    bufp->chgBit(oldp+175,((1U & (vlSelf->b >> 0x14U))));
    bufp->chgBit(oldp+176,((1U & ((vlSelf->a ^ vlSelf->b) 
                                  >> 0x14U))));
    bufp->chgBit(oldp+177,((1U & (vlSelf->a >> 0x15U))));
    bufp->chgBit(oldp+178,((1U & (vlSelf->b >> 0x15U))));
    bufp->chgBit(oldp+179,((1U & ((vlSelf->a >> 0x15U) 
                                  ^ ((vlSelf->b >> 0x15U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+180,((1U & (vlSelf->a >> 0x16U))));
    bufp->chgBit(oldp+181,((1U & (vlSelf->b >> 0x16U))));
    bufp->chgBit(oldp+182,((1U & ((vlSelf->a >> 0x16U) 
                                  ^ ((vlSelf->b >> 0x16U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+183,((1U & (vlSelf->a >> 0x17U))));
    bufp->chgBit(oldp+184,((1U & (vlSelf->b >> 0x17U))));
    bufp->chgBit(oldp+185,((1U & ((vlSelf->a >> 0x17U) 
                                  ^ ((vlSelf->b >> 0x17U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+186,((1U & ((~ (vlSelf->b >> 0x14U)) 
                                  ^ (vlSelf->a >> 0x14U)))));
    bufp->chgBit(oldp+187,((1U & ((vlSelf->a >> 0x15U) 
                                  ^ ((vlSelf->b >> 0x15U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+188,((1U & ((vlSelf->a >> 0x16U) 
                                  ^ ((vlSelf->b >> 0x16U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+189,((1U & ((vlSelf->a >> 0x17U) 
                                  ^ ((vlSelf->b >> 0x17U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgCData(oldp+190,((0xfU & (vlSelf->a >> 0x18U))),4);
    bufp->chgCData(oldp+191,((0xfU & (vlSelf->b >> 0x18U))),4);
    bufp->chgCData(oldp+192,(((8U & ((0xf8U & (vlSelf->a 
                                               >> 0x18U)) 
                                     ^ ((0xf8U & (vlSelf->b 
                                                  >> 0x18U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xfcU & (vlSelf->a 
                                                  >> 0x18U)) 
                                        ^ ((0xfcU & 
                                            (vlSelf->b 
                                             >> 0x18U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xfeU & 
                                            (vlSelf->a 
                                             >> 0x18U)) 
                                           ^ ((0xfeU 
                                               & (vlSelf->b 
                                                  >> 0x18U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((vlSelf->a 
                                              ^ vlSelf->b) 
                                             >> 0x18U)))))),4);
    bufp->chgCData(oldp+193,(((8U & ((0xf8U & (vlSelf->a 
                                               >> 0x18U)) 
                                     ^ ((0xf8U & (vlSelf->b 
                                                  >> 0x18U)) 
                                        ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                           << 3U)))) 
                              | ((4U & ((0xfcU & (vlSelf->a 
                                                  >> 0x18U)) 
                                        ^ ((0xfcU & 
                                            (vlSelf->b 
                                             >> 0x18U)) 
                                           ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                              << 2U)))) 
                                 | ((2U & ((0xfeU & 
                                            (vlSelf->a 
                                             >> 0x18U)) 
                                           ^ ((0xfeU 
                                               & (vlSelf->b 
                                                  >> 0x18U)) 
                                              ^ ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                 << 1U)))) 
                                    | (1U & ((~ (vlSelf->b 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->a 
                                                >> 0x18U))))))),4);
    bufp->chgBit(oldp+194,((1U & (vlSelf->a >> 0x18U))));
    bufp->chgBit(oldp+195,((1U & (vlSelf->b >> 0x18U))));
    bufp->chgBit(oldp+196,((1U & ((vlSelf->a ^ vlSelf->b) 
                                  >> 0x18U))));
    bufp->chgBit(oldp+197,((1U & (vlSelf->a >> 0x19U))));
    bufp->chgBit(oldp+198,((1U & (vlSelf->b >> 0x19U))));
    bufp->chgBit(oldp+199,((1U & ((vlSelf->a >> 0x19U) 
                                  ^ ((vlSelf->b >> 0x19U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+200,((1U & (vlSelf->a >> 0x1aU))));
    bufp->chgBit(oldp+201,((1U & (vlSelf->b >> 0x1aU))));
    bufp->chgBit(oldp+202,((1U & ((vlSelf->a >> 0x1aU) 
                                  ^ ((vlSelf->b >> 0x1aU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+203,((1U & (vlSelf->a >> 0x1bU))));
    bufp->chgBit(oldp+204,((1U & (vlSelf->b >> 0x1bU))));
    bufp->chgBit(oldp+205,((1U & ((vlSelf->a >> 0x1bU) 
                                  ^ ((vlSelf->b >> 0x1bU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+206,((1U & ((~ (vlSelf->b >> 0x18U)) 
                                  ^ (vlSelf->a >> 0x18U)))));
    bufp->chgBit(oldp+207,((1U & ((vlSelf->a >> 0x19U) 
                                  ^ ((vlSelf->b >> 0x19U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+208,((1U & ((vlSelf->a >> 0x1aU) 
                                  ^ ((vlSelf->b >> 0x1aU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+209,((1U & ((vlSelf->a >> 0x1bU) 
                                  ^ ((vlSelf->b >> 0x1bU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))))));
    bufp->chgCData(oldp+210,((vlSelf->a >> 0x1cU)),4);
    bufp->chgCData(oldp+211,((vlSelf->b >> 0x1cU)),4);
    bufp->chgCData(oldp+212,((((8U & ((vlSelf->a ^ vlSelf->b) 
                                      >> 0x1cU)) ^ 
                               ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                << 3U)) | ((4U & ((0xcU 
                                                   & (vlSelf->a 
                                                      >> 0x1cU)) 
                                                  ^ 
                                                  ((0xcU 
                                                    & (vlSelf->b 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                    << 2U)))) 
                                           | ((2U & 
                                               ((0xeU 
                                                 & (vlSelf->a 
                                                    >> 0x1cU)) 
                                                ^ (
                                                   (0xeU 
                                                    & (vlSelf->b 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                    << 1U)))) 
                                              | (1U 
                                                 & ((vlSelf->a 
                                                     ^ vlSelf->b) 
                                                    >> 0x1cU)))))),4);
    bufp->chgCData(oldp+213,((((8U & ((vlSelf->a ^ vlSelf->b) 
                                      >> 0x1cU)) ^ 
                               ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin) 
                                << 3U)) | ((4U & ((0xcU 
                                                   & (vlSelf->a 
                                                      >> 0x1cU)) 
                                                  ^ 
                                                  ((0xcU 
                                                    & (vlSelf->b 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin) 
                                                    << 2U)))) 
                                           | ((2U & 
                                               ((0xeU 
                                                 & (vlSelf->a 
                                                    >> 0x1cU)) 
                                                ^ (
                                                   (0xeU 
                                                    & (vlSelf->b 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin) 
                                                    << 1U)))) 
                                              | (1U 
                                                 & ((~ 
                                                     (vlSelf->b 
                                                      >> 0x1cU)) 
                                                    ^ 
                                                    (vlSelf->a 
                                                     >> 0x1cU))))))),4);
    bufp->chgBit(oldp+214,((1U & (vlSelf->a >> 0x1cU))));
    bufp->chgBit(oldp+215,((1U & (vlSelf->b >> 0x1cU))));
    bufp->chgBit(oldp+216,((1U & ((vlSelf->a ^ vlSelf->b) 
                                  >> 0x1cU))));
    bufp->chgBit(oldp+217,((1U & (vlSelf->a >> 0x1dU))));
    bufp->chgBit(oldp+218,((1U & (vlSelf->b >> 0x1dU))));
    bufp->chgBit(oldp+219,((1U & ((vlSelf->a >> 0x1dU) 
                                  ^ ((vlSelf->b >> 0x1dU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+220,((1U & (vlSelf->a >> 0x1eU))));
    bufp->chgBit(oldp+221,((1U & (vlSelf->b >> 0x1eU))));
    bufp->chgBit(oldp+222,((1U & ((vlSelf->a >> 0x1eU) 
                                  ^ ((vlSelf->b >> 0x1eU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+223,((vlSelf->a >> 0x1fU)));
    bufp->chgBit(oldp+224,((vlSelf->b >> 0x1fU)));
    bufp->chgBit(oldp+225,((((vlSelf->a ^ vlSelf->b) 
                             >> 0x1fU) ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    bufp->chgBit(oldp+226,((1U & ((~ (vlSelf->b >> 0x1cU)) 
                                  ^ (vlSelf->a >> 0x1cU)))));
    bufp->chgBit(oldp+227,((1U & ((vlSelf->a >> 0x1dU) 
                                  ^ ((vlSelf->b >> 0x1dU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+228,((1U & ((vlSelf->a >> 0x1eU) 
                                  ^ ((vlSelf->b >> 0x1eU) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin))))));
    bufp->chgBit(oldp+229,((((vlSelf->a ^ vlSelf->b) 
                             >> 0x1fU) ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin))));
    bufp->chgCData(oldp+230,((0xfU & vlSelf->a)),4);
    bufp->chgCData(oldp+231,((0xfU & vlSelf->b)),4);
    bufp->chgBit(oldp+232,((1U & vlSelf->a)));
    bufp->chgBit(oldp+233,((1U & vlSelf->b)));
    bufp->chgBit(oldp+234,((1U & (vlSelf->a ^ (vlSelf->b 
                                               ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry))))));
    bufp->chgBit(oldp+235,((1U & (vlSelf->a >> 1U))));
    bufp->chgBit(oldp+236,((1U & (vlSelf->b >> 1U))));
    bufp->chgBit(oldp+237,((1U & ((vlSelf->a >> 1U) 
                                  ^ ((vlSelf->b >> 1U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout))))));
    bufp->chgBit(oldp+238,((1U & (vlSelf->a >> 2U))));
    bufp->chgBit(oldp+239,((1U & (vlSelf->b >> 2U))));
    bufp->chgBit(oldp+240,((1U & ((vlSelf->a >> 2U) 
                                  ^ ((vlSelf->b >> 2U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout))))));
    bufp->chgBit(oldp+241,((1U & (vlSelf->a >> 3U))));
    bufp->chgBit(oldp+242,((1U & (vlSelf->b >> 3U))));
    bufp->chgBit(oldp+243,((1U & ((vlSelf->a >> 3U) 
                                  ^ ((vlSelf->b >> 3U) 
                                     ^ (IData)(vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout))))));
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
