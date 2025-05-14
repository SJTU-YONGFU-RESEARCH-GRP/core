// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__trace_chg_0_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu___024root__trace_chg_0_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->alu__DOT__add_result),8);
        bufp->chgCData(oldp+1,(vlSelf->alu__DOT__sub_result),8);
        bufp->chgCData(oldp+2,(vlSelf->alu__DOT__and_result),8);
        bufp->chgCData(oldp+3,(vlSelf->alu__DOT__or_result),8);
        bufp->chgCData(oldp+4,(vlSelf->alu__DOT__xor_result),8);
        bufp->chgCData(oldp+5,(vlSelf->alu__DOT__shl_result),8);
        bufp->chgCData(oldp+6,(vlSelf->alu__DOT__shr_result),8);
        bufp->chgCData(oldp+7,(vlSelf->alu__DOT__cmp_result),8);
    }
    bufp->chgBit(oldp+8,(vlSelf->clk));
    bufp->chgBit(oldp+9,(vlSelf->rst_n));
    bufp->chgCData(oldp+10,(vlSelf->a),8);
    bufp->chgCData(oldp+11,(vlSelf->b),8);
    bufp->chgCData(oldp+12,(vlSelf->op_code),3);
    bufp->chgCData(oldp+13,(vlSelf->result),8);
    bufp->chgBit(oldp+14,(vlSelf->zero_flag));
    bufp->chgBit(oldp+15,(vlSelf->overflow_flag));
    bufp->chgSData(oldp+16,((0x1ffU & ((IData)(vlSelf->a) 
                                       + (IData)(vlSelf->b)))),9);
    bufp->chgBit(oldp+17,((1U & (((IData)(vlSelf->a) 
                                  + (IData)(vlSelf->b)) 
                                 >> 8U))));
    bufp->chgBit(oldp+18,((((1U & ((IData)(vlSelf->a) 
                                   >> 7U)) != (1U & 
                                               ((IData)(vlSelf->b) 
                                                >> 7U))) 
                           & ((1U & ((IData)(vlSelf->alu__DOT__sub_result) 
                                     >> 7U)) != (1U 
                                                 & ((IData)(vlSelf->a) 
                                                    >> 7U))))));
}

void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_cleanup\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
