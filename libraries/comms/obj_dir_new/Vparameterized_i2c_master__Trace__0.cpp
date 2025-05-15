// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_i2c_master__Syms.h"


void Vparameterized_i2c_master___024root__trace_chg_0_sub_0(Vparameterized_i2c_master___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vparameterized_i2c_master___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root__trace_chg_0\n"); );
    // Init
    Vparameterized_i2c_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_i2c_master___024root*>(voidSelf);
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vparameterized_i2c_master___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vparameterized_i2c_master___024root__trace_chg_0_sub_0(Vparameterized_i2c_master___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->parameterized_i2c_master__DOT__divider_counter),7);
        bufp->chgBit(oldp+1,(vlSelf->parameterized_i2c_master__DOT__scl_internal));
        bufp->chgBit(oldp+2,(vlSelf->parameterized_i2c_master__DOT__sda_internal));
        bufp->chgBit(oldp+3,(vlSelf->parameterized_i2c_master__DOT__cmd_read));
        bufp->chgBit(oldp+4,(vlSelf->parameterized_i2c_master__DOT__cmd_write));
    }
    bufp->chgBit(oldp+5,(vlSelf->clk));
    bufp->chgBit(oldp+6,(vlSelf->rst_n));
    bufp->chgBit(oldp+7,(vlSelf->start));
    bufp->chgBit(oldp+8,(vlSelf->stop));
    bufp->chgBit(oldp+9,(vlSelf->read));
    bufp->chgBit(oldp+10,(vlSelf->write));
    bufp->chgCData(oldp+11,(vlSelf->data_in),8);
    bufp->chgCData(oldp+12,(vlSelf->addr),7);
    bufp->chgBit(oldp+13,(vlSelf->busy));
    bufp->chgBit(oldp+14,(vlSelf->done));
    bufp->chgBit(oldp+15,(vlSelf->ack_error));
    bufp->chgCData(oldp+16,(vlSelf->data_out),8);
    bufp->chgBit(oldp+17,(vlSelf->scl));
    bufp->chgBit(oldp+18,(vlSelf->sda));
    bufp->chgCData(oldp+19,(vlSelf->state),4);
    bufp->chgCData(oldp+20,(vlSelf->phase),2);
    bufp->chgBit(oldp+21,(vlSelf->scl_internal_debug));
    bufp->chgBit(oldp+22,(vlSelf->sda_internal_debug));
    bufp->chgCData(oldp+23,(vlSelf->shift_reg_debug),8);
    bufp->chgCData(oldp+24,(vlSelf->bit_counter_debug),3);
}

void Vparameterized_i2c_master___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root__trace_cleanup\n"); );
    // Init
    Vparameterized_i2c_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_i2c_master___024root*>(voidSelf);
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
