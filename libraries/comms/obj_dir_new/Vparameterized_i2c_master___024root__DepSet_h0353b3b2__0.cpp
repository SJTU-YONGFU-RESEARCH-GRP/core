// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_i2c_master.h for the primary calling header

#include "Vparameterized_i2c_master__pch.h"
#include "Vparameterized_i2c_master___024root.h"

void Vparameterized_i2c_master___024root___eval_act(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vparameterized_i2c_master___024root___nba_sequent__TOP__0(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__phase;
    __Vdly__phase = 0;
    CData/*3:0*/ __Vdly__state;
    __Vdly__state = 0;
    CData/*2:0*/ __Vdly__bit_counter_debug;
    __Vdly__bit_counter_debug = 0;
    CData/*7:0*/ __Vdly__shift_reg_debug;
    __Vdly__shift_reg_debug = 0;
    CData/*0:0*/ __Vdly__ack_error;
    __Vdly__ack_error = 0;
    // Body
    __Vdly__ack_error = vlSelf->ack_error;
    __Vdly__shift_reg_debug = vlSelf->shift_reg_debug;
    __Vdly__bit_counter_debug = vlSelf->bit_counter_debug;
    __Vdly__state = vlSelf->state;
    __Vdly__phase = vlSelf->phase;
    if (vlSelf->rst_n) {
        vlSelf->done = 0U;
        if ((0U < (IData)(vlSelf->parameterized_i2c_master__DOT__divider_counter))) {
            vlSelf->parameterized_i2c_master__DOT__divider_counter 
                = (0x7fU & ((IData)(vlSelf->parameterized_i2c_master__DOT__divider_counter) 
                            - (IData)(1U)));
        } else {
            __Vdly__phase = ((2U & (IData)(vlSelf->phase))
                              ? ((1U & (IData)(vlSelf->phase))
                                  ? 0U : 3U) : ((1U 
                                                 & (IData)(vlSelf->phase))
                                                 ? 2U
                                                 : 1U));
            vlSelf->parameterized_i2c_master__DOT__divider_counter = 0x7cU;
            if ((8U & (IData)(vlSelf->state))) {
                if ((4U & (IData)(vlSelf->state))) {
                    __Vdly__state = 0U;
                    vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                    vlSelf->busy = 0U;
                } else if ((2U & (IData)(vlSelf->state))) {
                    __Vdly__state = 0U;
                    vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                    vlSelf->busy = 0U;
                } else if ((1U & (IData)(vlSelf->state))) {
                    __Vdly__state = 0U;
                    vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                    vlSelf->busy = 0U;
                } else {
                    vlSelf->busy = 1U;
                    if ((2U & (IData)(vlSelf->phase))) {
                        if ((1U & (IData)(vlSelf->phase))) {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                            vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                            __Vdly__state = 0U;
                            vlSelf->done = 1U;
                            vlSelf->busy = 0U;
                        } else {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                            vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                        }
                    } else if ((1U & (IData)(vlSelf->phase))) {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                    } else {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                    }
                }
            } else if ((4U & (IData)(vlSelf->state))) {
                if ((2U & (IData)(vlSelf->state))) {
                    if ((1U & (IData)(vlSelf->state))) {
                        vlSelf->busy = 1U;
                        if ((2U & (IData)(vlSelf->phase))) {
                            if ((1U & (IData)(vlSelf->phase))) {
                                vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                                if (vlSelf->stop) {
                                    __Vdly__state = 8U;
                                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                                } else if (vlSelf->parameterized_i2c_master__DOT__cmd_read) {
                                    __Vdly__state = 6U;
                                    __Vdly__bit_counter_debug = 7U;
                                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                                } else {
                                    __Vdly__state = 8U;
                                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                                }
                            } else {
                                vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                            }
                        } else if ((1U & (IData)(vlSelf->phase))) {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                        } else {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                            vlSelf->parameterized_i2c_master__DOT__sda_internal 
                                = vlSelf->stop;
                        }
                    } else {
                        vlSelf->busy = 1U;
                        if ((2U & (IData)(vlSelf->phase))) {
                            if ((1U & (IData)(vlSelf->phase))) {
                                vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                                if ((0U < (IData)(vlSelf->bit_counter_debug))) {
                                    __Vdly__bit_counter_debug 
                                        = (7U & ((IData)(vlSelf->bit_counter_debug) 
                                                 - (IData)(1U)));
                                } else {
                                    __Vdly__state = 7U;
                                    vlSelf->data_out 
                                        = vlSelf->shift_reg_debug;
                                    vlSelf->parameterized_i2c_master__DOT__sda_internal 
                                        = vlSelf->stop;
                                }
                            } else {
                                vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                                __Vdly__shift_reg_debug 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelf->bit_counter_debug))) 
                                        & (IData)(__Vdly__shift_reg_debug)) 
                                       | (0xffU & ((IData)(vlSelf->sda) 
                                                   << (IData)(vlSelf->bit_counter_debug))));
                            }
                        } else if ((1U & (IData)(vlSelf->phase))) {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                        } else {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                            vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->state))) {
                    vlSelf->busy = 1U;
                    if ((2U & (IData)(vlSelf->phase))) {
                        if ((1U & (IData)(vlSelf->phase))) {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                            if (((IData)(vlSelf->stop) 
                                 | (IData)(vlSelf->sda))) {
                                __Vdly__state = 8U;
                                vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                            } else if (vlSelf->parameterized_i2c_master__DOT__cmd_write) {
                                __Vdly__state = 4U;
                                __Vdly__bit_counter_debug = 7U;
                                __Vdly__shift_reg_debug 
                                    = vlSelf->data_in;
                                vlSelf->parameterized_i2c_master__DOT__sda_internal 
                                    = (1U & ((IData)(vlSelf->data_in) 
                                             >> 7U));
                            } else {
                                __Vdly__state = 8U;
                                vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                            }
                        } else {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                            __Vdly__ack_error = vlSelf->sda;
                        }
                    } else if ((1U & (IData)(vlSelf->phase))) {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                    } else {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                    }
                } else {
                    vlSelf->busy = 1U;
                    if ((2U & (IData)(vlSelf->phase))) {
                        if ((1U & (IData)(vlSelf->phase))) {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                            if ((0U < (IData)(vlSelf->bit_counter_debug))) {
                                __Vdly__bit_counter_debug 
                                    = (7U & ((IData)(vlSelf->bit_counter_debug) 
                                             - (IData)(1U)));
                            } else {
                                __Vdly__state = 5U;
                                vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                            }
                        } else {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                        }
                    } else if ((1U & (IData)(vlSelf->phase))) {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                    } else {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal 
                            = (1U & ((IData)(vlSelf->shift_reg_debug) 
                                     >> (IData)(vlSelf->bit_counter_debug)));
                    }
                }
            } else if ((2U & (IData)(vlSelf->state))) {
                if ((1U & (IData)(vlSelf->state))) {
                    vlSelf->busy = 1U;
                    if ((2U & (IData)(vlSelf->phase))) {
                        if ((1U & (IData)(vlSelf->phase))) {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                            if ((1U & (~ (IData)(vlSelf->ack_error)))) {
                                if (vlSelf->parameterized_i2c_master__DOT__cmd_read) {
                                    __Vdly__bit_counter_debug = 7U;
                                    __Vdly__state = 6U;
                                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                                } else {
                                    __Vdly__bit_counter_debug = 7U;
                                    __Vdly__state = 4U;
                                    vlSelf->parameterized_i2c_master__DOT__sda_internal 
                                        = (1U & ((IData)(vlSelf->shift_reg_debug) 
                                                 >> 7U));
                                    __Vdly__shift_reg_debug 
                                        = vlSelf->data_in;
                                }
                            }
                        } else {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                            if (vlSelf->sda) {
                                __Vdly__ack_error = 1U;
                                __Vdly__state = 8U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->phase))) {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                    } else {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                    }
                } else {
                    vlSelf->busy = 1U;
                    if ((2U & (IData)(vlSelf->phase))) {
                        if ((1U & (IData)(vlSelf->phase))) {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                            if ((0U < (IData)(vlSelf->bit_counter_debug))) {
                                __Vdly__bit_counter_debug 
                                    = (7U & ((IData)(vlSelf->bit_counter_debug) 
                                             - (IData)(1U)));
                                __Vdly__shift_reg_debug 
                                    = (0xfeU & ((IData)(vlSelf->shift_reg_debug) 
                                                << 1U));
                            } else {
                                __Vdly__state = 3U;
                                vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                            }
                        } else {
                            vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                        }
                    } else if ((1U & (IData)(vlSelf->phase))) {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                    } else {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal 
                            = (1U & ((IData)(vlSelf->shift_reg_debug) 
                                     >> 7U));
                    }
                }
            } else if ((1U & (IData)(vlSelf->state))) {
                vlSelf->busy = 1U;
                if ((2U & (IData)(vlSelf->phase))) {
                    if ((1U & (IData)(vlSelf->phase))) {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                        __Vdly__state = 2U;
                    } else {
                        vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                        vlSelf->parameterized_i2c_master__DOT__sda_internal = 0U;
                        __Vdly__shift_reg_debug = ((IData)(vlSelf->parameterized_i2c_master__DOT__cmd_read)
                                                    ? 
                                                   (1U 
                                                    | ((IData)(vlSelf->addr) 
                                                       << 1U))
                                                    : 
                                                   ((IData)(vlSelf->addr) 
                                                    << 1U));
                        __Vdly__bit_counter_debug = 7U;
                    }
                } else if ((1U & (IData)(vlSelf->phase))) {
                    vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                } else {
                    vlSelf->parameterized_i2c_master__DOT__scl_internal = 0U;
                    vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                }
            } else {
                vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
                vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
                vlSelf->busy = 0U;
                if (vlSelf->start) {
                    __Vdly__state = 1U;
                    vlSelf->busy = 1U;
                    __Vdly__ack_error = 0U;
                    __Vdly__bit_counter_debug = 7U;
                    __Vdly__shift_reg_debug = (((IData)(vlSelf->addr) 
                                                << 1U) 
                                               | (IData)(vlSelf->read));
                    vlSelf->parameterized_i2c_master__DOT__cmd_read 
                        = vlSelf->read;
                    vlSelf->parameterized_i2c_master__DOT__cmd_write 
                        = vlSelf->write;
                }
            }
        }
    } else {
        __Vdly__state = 0U;
        __Vdly__phase = 0U;
        vlSelf->parameterized_i2c_master__DOT__divider_counter = 0x7cU;
        __Vdly__bit_counter_debug = 7U;
        __Vdly__shift_reg_debug = 0U;
        vlSelf->parameterized_i2c_master__DOT__scl_internal = 1U;
        vlSelf->parameterized_i2c_master__DOT__sda_internal = 1U;
        vlSelf->busy = 0U;
        vlSelf->done = 0U;
        __Vdly__ack_error = 0U;
        vlSelf->data_out = 0U;
        vlSelf->parameterized_i2c_master__DOT__cmd_read = 0U;
        vlSelf->parameterized_i2c_master__DOT__cmd_write = 0U;
    }
    vlSelf->phase = __Vdly__phase;
    vlSelf->state = __Vdly__state;
    vlSelf->bit_counter_debug = __Vdly__bit_counter_debug;
    vlSelf->shift_reg_debug = __Vdly__shift_reg_debug;
    vlSelf->ack_error = __Vdly__ack_error;
    vlSelf->scl_internal_debug = vlSelf->parameterized_i2c_master__DOT__scl_internal;
    vlSelf->sda_internal_debug = vlSelf->parameterized_i2c_master__DOT__sda_internal;
}

void Vparameterized_i2c_master___024root___eval_nba(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vparameterized_i2c_master___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vparameterized_i2c_master___024root___eval_triggers__act(Vparameterized_i2c_master___024root* vlSelf);

bool Vparameterized_i2c_master___024root___eval_phase__act(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vparameterized_i2c_master___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vparameterized_i2c_master___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vparameterized_i2c_master___024root___eval_phase__nba(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vparameterized_i2c_master___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_i2c_master___024root___dump_triggers__nba(Vparameterized_i2c_master___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_i2c_master___024root___dump_triggers__act(Vparameterized_i2c_master___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_i2c_master___024root___eval(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vparameterized_i2c_master___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("parameterized_i2c_master.v", 18, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vparameterized_i2c_master___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("parameterized_i2c_master.v", 18, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vparameterized_i2c_master___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vparameterized_i2c_master___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vparameterized_i2c_master___024root___eval_debug_assertions(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->stop & 0xfeU))) {
        Verilated::overWidthError("stop");}
    if (VL_UNLIKELY((vlSelf->read & 0xfeU))) {
        Verilated::overWidthError("read");}
    if (VL_UNLIKELY((vlSelf->write & 0xfeU))) {
        Verilated::overWidthError("write");}
    if (VL_UNLIKELY((vlSelf->addr & 0x80U))) {
        Verilated::overWidthError("addr");}
    if (VL_UNLIKELY((vlSelf->sda & 0xfeU))) {
        Verilated::overWidthError("sda");}
}
#endif  // VL_DEBUG
