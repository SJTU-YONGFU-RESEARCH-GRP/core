// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_router.h for the primary calling header

#include "Vmesh_router__pch.h"
#include "Vmesh_router___024root.h"

void Vmesh_router___024root___ico_sequent__TOP__0(Vmesh_router___024root* vlSelf);

void Vmesh_router___024root___eval_ico(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_ico\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmesh_router___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmesh_router___024root___ico_sequent__TOP__0(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___ico_sequent__TOP__0\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_router__DOT__output_ready = ((((IData)(vlSelfRef.local_out_ready) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.west_out_ready) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.south_out_ready) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.east_out_ready) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.north_out_ready)));
}

void Vmesh_router___024root___eval_triggers__ico(Vmesh_router___024root* vlSelf);

bool Vmesh_router___024root___eval_phase__ico(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_phase__ico\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmesh_router___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmesh_router___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmesh_router___024root___eval_act(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_act\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmesh_router___024root___nba_sequent__TOP__0(Vmesh_router___024root* vlSelf);

void Vmesh_router___024root___eval_nba(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_nba\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmesh_router___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vmesh_router___024root___nba_sequent__TOP__0(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___nba_sequent__TOP__0\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ mesh_router__DOT____Vlvbound_hbe698950__0;
    mesh_router__DOT____Vlvbound_hbe698950__0 = 0;
    CData/*2:0*/ __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout;
    __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in;
    __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in = 0;
    CData/*4:0*/ __Vdly__mesh_router__DOT__input_buffer_valid;
    __Vdly__mesh_router__DOT__input_buffer_valid = 0;
    IData/*31:0*/ __VdlyVal__mesh_router__DOT__input_buffer__v0;
    __VdlyVal__mesh_router__DOT__input_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_router__DOT__input_buffer__v0;
    __VdlySet__mesh_router__DOT__input_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__mesh_router__DOT__input_buffer__v1;
    __VdlyVal__mesh_router__DOT__input_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__mesh_router__DOT__input_buffer__v1;
    __VdlySet__mesh_router__DOT__input_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__mesh_router__DOT__input_buffer__v2;
    __VdlyVal__mesh_router__DOT__input_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_router__DOT__input_buffer__v2;
    __VdlySet__mesh_router__DOT__input_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__mesh_router__DOT__input_buffer__v3;
    __VdlyVal__mesh_router__DOT__input_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_router__DOT__input_buffer__v3;
    __VdlySet__mesh_router__DOT__input_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__mesh_router__DOT__input_buffer__v4;
    __VdlyVal__mesh_router__DOT__input_buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_router__DOT__input_buffer__v4;
    __VdlySet__mesh_router__DOT__input_buffer__v4 = 0;
    // Body
    __Vdly__mesh_router__DOT__input_buffer_valid = vlSelfRef.mesh_router__DOT__input_buffer_valid;
    __VdlySet__mesh_router__DOT__input_buffer__v0 = 0U;
    __VdlySet__mesh_router__DOT__input_buffer__v1 = 0U;
    __VdlySet__mesh_router__DOT__input_buffer__v2 = 0U;
    __VdlySet__mesh_router__DOT__input_buffer__v3 = 0U;
    __VdlySet__mesh_router__DOT__input_buffer__v4 = 0U;
    if (vlSelfRef.rst_n) {
        vlSelfRef.mesh_router__DOT__j = 5U;
        if (((IData)(vlSelfRef.north_in_valid) & (~ (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid)))) {
            __VdlyVal__mesh_router__DOT__input_buffer__v0 
                = vlSelfRef.north_in_data;
            __VdlySet__mesh_router__DOT__input_buffer__v0 = 1U;
            __Vdly__mesh_router__DOT__input_buffer_valid 
                = (1U | (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
        }
        if (((IData)(vlSelfRef.east_in_valid) & (~ 
                                                 ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                                  >> 1U)))) {
            __VdlyVal__mesh_router__DOT__input_buffer__v1 
                = vlSelfRef.east_in_data;
            __VdlySet__mesh_router__DOT__input_buffer__v1 = 1U;
            __Vdly__mesh_router__DOT__input_buffer_valid 
                = (2U | (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
        }
        if (((IData)(vlSelfRef.south_in_valid) & (~ 
                                                  ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                                   >> 2U)))) {
            __VdlyVal__mesh_router__DOT__input_buffer__v2 
                = vlSelfRef.south_in_data;
            __VdlySet__mesh_router__DOT__input_buffer__v2 = 1U;
            __Vdly__mesh_router__DOT__input_buffer_valid 
                = (4U | (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
        }
        if (((IData)(vlSelfRef.west_in_valid) & (~ 
                                                 ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                                  >> 3U)))) {
            __VdlyVal__mesh_router__DOT__input_buffer__v3 
                = vlSelfRef.west_in_data;
            __VdlySet__mesh_router__DOT__input_buffer__v3 = 1U;
            __Vdly__mesh_router__DOT__input_buffer_valid 
                = (8U | (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
        }
        if (((IData)(vlSelfRef.local_in_valid) & (~ 
                                                  ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                                   >> 4U)))) {
            __VdlyVal__mesh_router__DOT__input_buffer__v4 
                = vlSelfRef.local_in_data;
            __VdlySet__mesh_router__DOT__input_buffer__v4 = 1U;
            __Vdly__mesh_router__DOT__input_buffer_valid 
                = (0x10U | (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
        }
        if ((1U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
            if ((((4U >= vlSelfRef.mesh_router__DOT__output_port
                   [0U]) ? vlSelfRef.mesh_router__DOT__grant
                  [vlSelfRef.mesh_router__DOT__output_port
                  [0U]] : 0U) & ((4U >= vlSelfRef.mesh_router__DOT__output_port
                                  [0U]) && (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_ready) 
                                                  >> 
                                                  vlSelfRef.mesh_router__DOT__output_port
                                                  [0U]))))) {
                __Vdly__mesh_router__DOT__input_buffer_valid 
                    = (0x1eU & (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
            }
        }
        if ((2U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
            if (((((4U >= vlSelfRef.mesh_router__DOT__output_port
                    [1U]) ? vlSelfRef.mesh_router__DOT__grant
                   [vlSelfRef.mesh_router__DOT__output_port
                   [1U]] : 0U) >> 1U) & ((4U >= vlSelfRef.mesh_router__DOT__output_port
                                          [1U]) && 
                                         (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_ready) 
                                                >> 
                                                vlSelfRef.mesh_router__DOT__output_port
                                                [1U]))))) {
                __Vdly__mesh_router__DOT__input_buffer_valid 
                    = (0x1dU & (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
            }
        }
        if ((4U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
            if (((((4U >= vlSelfRef.mesh_router__DOT__output_port
                    [2U]) ? vlSelfRef.mesh_router__DOT__grant
                   [vlSelfRef.mesh_router__DOT__output_port
                   [2U]] : 0U) >> 2U) & ((4U >= vlSelfRef.mesh_router__DOT__output_port
                                          [2U]) && 
                                         (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_ready) 
                                                >> 
                                                vlSelfRef.mesh_router__DOT__output_port
                                                [2U]))))) {
                __Vdly__mesh_router__DOT__input_buffer_valid 
                    = (0x1bU & (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
            }
        }
        if ((8U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
            if (((((4U >= vlSelfRef.mesh_router__DOT__output_port
                    [3U]) ? vlSelfRef.mesh_router__DOT__grant
                   [vlSelfRef.mesh_router__DOT__output_port
                   [3U]] : 0U) >> 3U) & ((4U >= vlSelfRef.mesh_router__DOT__output_port
                                          [3U]) && 
                                         (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_ready) 
                                                >> 
                                                vlSelfRef.mesh_router__DOT__output_port
                                                [3U]))))) {
                __Vdly__mesh_router__DOT__input_buffer_valid 
                    = (0x17U & (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
            }
        }
        if ((0x10U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
            if (((((4U >= vlSelfRef.mesh_router__DOT__output_port
                    [4U]) ? vlSelfRef.mesh_router__DOT__grant
                   [vlSelfRef.mesh_router__DOT__output_port
                   [4U]] : 0U) >> 4U) & ((4U >= vlSelfRef.mesh_router__DOT__output_port
                                          [4U]) && 
                                         (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_ready) 
                                                >> 
                                                vlSelfRef.mesh_router__DOT__output_port
                                                [4U]))))) {
                __Vdly__mesh_router__DOT__input_buffer_valid 
                    = (0xfU & (IData)(__Vdly__mesh_router__DOT__input_buffer_valid));
            }
        }
    } else {
        __Vdly__mesh_router__DOT__input_buffer_valid = 0U;
    }
    vlSelfRef.mesh_router__DOT__input_buffer_valid 
        = __Vdly__mesh_router__DOT__input_buffer_valid;
    if (__VdlySet__mesh_router__DOT__input_buffer__v0) {
        vlSelfRef.mesh_router__DOT__input_buffer[0U] 
            = __VdlyVal__mesh_router__DOT__input_buffer__v0;
    }
    if (__VdlySet__mesh_router__DOT__input_buffer__v1) {
        vlSelfRef.mesh_router__DOT__input_buffer[1U] 
            = __VdlyVal__mesh_router__DOT__input_buffer__v1;
    }
    if (__VdlySet__mesh_router__DOT__input_buffer__v2) {
        vlSelfRef.mesh_router__DOT__input_buffer[2U] 
            = __VdlyVal__mesh_router__DOT__input_buffer__v2;
    }
    if (__VdlySet__mesh_router__DOT__input_buffer__v3) {
        vlSelfRef.mesh_router__DOT__input_buffer[3U] 
            = __VdlyVal__mesh_router__DOT__input_buffer__v3;
    }
    if (__VdlySet__mesh_router__DOT__input_buffer__v4) {
        vlSelfRef.mesh_router__DOT__input_buffer[4U] 
            = __VdlyVal__mesh_router__DOT__input_buffer__v4;
    }
    vlSelfRef.north_in_ready = (1U & (~ (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid)));
    vlSelfRef.east_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                        >> 1U)));
    vlSelfRef.south_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                         >> 2U)));
    vlSelfRef.west_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                        >> 3U)));
    vlSelfRef.local_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                         >> 4U)));
    vlSelfRef.mesh_router__DOT__dest_id[0U] = (vlSelfRef.mesh_router__DOT__input_buffer
                                               [0U] 
                                               >> 0x18U);
    vlSelfRef.mesh_router__DOT__dest_id[1U] = (vlSelfRef.mesh_router__DOT__input_buffer
                                               [1U] 
                                               >> 0x18U);
    vlSelfRef.mesh_router__DOT__dest_id[2U] = (vlSelfRef.mesh_router__DOT__input_buffer
                                               [2U] 
                                               >> 0x18U);
    vlSelfRef.mesh_router__DOT__dest_id[3U] = (vlSelfRef.mesh_router__DOT__input_buffer
                                               [3U] 
                                               >> 0x18U);
    vlSelfRef.mesh_router__DOT__dest_id[4U] = (vlSelfRef.mesh_router__DOT__input_buffer
                                               [4U] 
                                               >> 0x18U);
    __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in 
        = vlSelfRef.mesh_router__DOT__dest_id[0U];
    __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout 
        = ((1U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
            ? 0U : ((6U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                     ? 1U : ((9U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                              ? 2U : ((4U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                       ? 3U : ((5U 
                                                == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                                ? 4U
                                                : (
                                                   (9U 
                                                    == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                                    ? 2U
                                                    : 4U))))));
    mesh_router__DOT____Vlvbound_hbe698950__0 = __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout;
    vlSelfRef.mesh_router__DOT__output_port[0U] = mesh_router__DOT____Vlvbound_hbe698950__0;
    __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in 
        = vlSelfRef.mesh_router__DOT__dest_id[1U];
    __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout 
        = ((1U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
            ? 0U : ((6U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                     ? 1U : ((9U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                              ? 2U : ((4U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                       ? 3U : ((5U 
                                                == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                                    ? 3U
                                                    : 4U))))));
    mesh_router__DOT____Vlvbound_hbe698950__0 = __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout;
    vlSelfRef.mesh_router__DOT__output_port[1U] = mesh_router__DOT____Vlvbound_hbe698950__0;
    __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in 
        = vlSelfRef.mesh_router__DOT__dest_id[2U];
    __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout 
        = ((1U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
            ? 0U : ((6U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                     ? 1U : ((9U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                              ? 2U : ((4U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                       ? 3U : 4U))));
    mesh_router__DOT____Vlvbound_hbe698950__0 = __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout;
    vlSelfRef.mesh_router__DOT__output_port[2U] = mesh_router__DOT____Vlvbound_hbe698950__0;
    __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in 
        = vlSelfRef.mesh_router__DOT__dest_id[3U];
    __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout 
        = ((1U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
            ? 0U : ((6U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                     ? 1U : ((9U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                              ? 2U : ((4U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                       ? 3U : 4U))));
    mesh_router__DOT____Vlvbound_hbe698950__0 = __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout;
    vlSelfRef.mesh_router__DOT__output_port[3U] = mesh_router__DOT____Vlvbound_hbe698950__0;
    __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in 
        = vlSelfRef.mesh_router__DOT__dest_id[4U];
    __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout 
        = ((1U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
            ? 0U : ((6U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                     ? 1U : ((9U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                              ? 2U : ((4U == (IData)(__Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in))
                                       ? 3U : 4U))));
    mesh_router__DOT____Vlvbound_hbe698950__0 = __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout;
    vlSelfRef.mesh_router__DOT__output_port[4U] = mesh_router__DOT____Vlvbound_hbe698950__0;
    vlSelfRef.mesh_router__DOT__grant[0U] = 0U;
    vlSelfRef.mesh_router__DOT__grant[1U] = 0U;
    vlSelfRef.mesh_router__DOT__grant[2U] = 0U;
    vlSelfRef.mesh_router__DOT__grant[3U] = 0U;
    vlSelfRef.mesh_router__DOT__grant[4U] = 0U;
    if ((1U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0 = 1U;
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [0U])) {
            vlSelfRef.mesh_router__DOT__grant[vlSelfRef.mesh_router__DOT__output_port[0U]] 
                = ((0x1eU & vlSelfRef.mesh_router__DOT__grant
                    [vlSelfRef.mesh_router__DOT__output_port
                    [0U]]) | (IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0));
        }
    }
    if ((2U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0 = 1U;
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [1U])) {
            vlSelfRef.mesh_router__DOT__grant[vlSelfRef.mesh_router__DOT__output_port[1U]] 
                = ((0x1dU & vlSelfRef.mesh_router__DOT__grant
                    [vlSelfRef.mesh_router__DOT__output_port
                    [1U]]) | ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0) 
                              << 1U));
        }
    }
    if ((4U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0 = 1U;
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [2U])) {
            vlSelfRef.mesh_router__DOT__grant[vlSelfRef.mesh_router__DOT__output_port[2U]] 
                = ((0x1bU & vlSelfRef.mesh_router__DOT__grant
                    [vlSelfRef.mesh_router__DOT__output_port
                    [2U]]) | ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0) 
                              << 2U));
        }
    }
    vlSelfRef.mesh_router__DOT__output_valid = 0U;
    if ((1U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0 = 1U;
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [0U])) {
            vlSelfRef.mesh_router__DOT__output_valid 
                = (((~ ((IData)(1U) << vlSelfRef.mesh_router__DOT__output_port
                        [0U])) & (IData)(vlSelfRef.mesh_router__DOT__output_valid)) 
                   | (0x1fU & ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0) 
                               << vlSelfRef.mesh_router__DOT__output_port
                               [0U])));
        }
    }
    if ((2U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0 = 1U;
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [1U])) {
            vlSelfRef.mesh_router__DOT__output_valid 
                = (((~ ((IData)(1U) << vlSelfRef.mesh_router__DOT__output_port
                        [1U])) & (IData)(vlSelfRef.mesh_router__DOT__output_valid)) 
                   | (0x1fU & ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0) 
                               << vlSelfRef.mesh_router__DOT__output_port
                               [1U])));
        }
    }
    if ((4U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0 = 1U;
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [2U])) {
            vlSelfRef.mesh_router__DOT__output_valid 
                = (((~ ((IData)(1U) << vlSelfRef.mesh_router__DOT__output_port
                        [2U])) & (IData)(vlSelfRef.mesh_router__DOT__output_valid)) 
                   | (0x1fU & ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0) 
                               << vlSelfRef.mesh_router__DOT__output_port
                               [2U])));
        }
    }
    if ((8U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0 = 1U;
        vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0 = 1U;
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [3U])) {
            vlSelfRef.mesh_router__DOT__grant[vlSelfRef.mesh_router__DOT__output_port[3U]] 
                = ((0x17U & vlSelfRef.mesh_router__DOT__grant
                    [vlSelfRef.mesh_router__DOT__output_port
                    [3U]]) | ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0) 
                              << 3U));
            vlSelfRef.mesh_router__DOT__output_valid 
                = (((~ ((IData)(1U) << vlSelfRef.mesh_router__DOT__output_port
                        [3U])) & (IData)(vlSelfRef.mesh_router__DOT__output_valid)) 
                   | (0x1fU & ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0) 
                               << vlSelfRef.mesh_router__DOT__output_port
                               [3U])));
        }
    }
    vlSelfRef.mesh_router__DOT__output_data[0U] = 0U;
    vlSelfRef.mesh_router__DOT__output_data[1U] = 0U;
    vlSelfRef.mesh_router__DOT__output_data[2U] = 0U;
    vlSelfRef.mesh_router__DOT__output_data[3U] = 0U;
    vlSelfRef.mesh_router__DOT__output_data[4U] = 0U;
    if ((1U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0 
            = vlSelfRef.mesh_router__DOT__input_buffer
            [0U];
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [0U])) {
            vlSelfRef.mesh_router__DOT__output_data[vlSelfRef.mesh_router__DOT__output_port[0U]] 
                = vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0;
        }
    }
    if ((2U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0 
            = vlSelfRef.mesh_router__DOT__input_buffer
            [1U];
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [1U])) {
            vlSelfRef.mesh_router__DOT__output_data[vlSelfRef.mesh_router__DOT__output_port[1U]] 
                = vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0;
        }
    }
    if ((4U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0 
            = vlSelfRef.mesh_router__DOT__input_buffer
            [2U];
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [2U])) {
            vlSelfRef.mesh_router__DOT__output_data[vlSelfRef.mesh_router__DOT__output_port[2U]] 
                = vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0;
        }
    }
    if ((8U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0 
            = vlSelfRef.mesh_router__DOT__input_buffer
            [3U];
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [3U])) {
            vlSelfRef.mesh_router__DOT__output_data[vlSelfRef.mesh_router__DOT__output_port[3U]] 
                = vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0;
        }
    }
    if ((0x10U & (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid))) {
        vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0 = 1U;
        vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0 = 1U;
        vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0 
            = vlSelfRef.mesh_router__DOT__input_buffer
            [4U];
        if ((4U >= vlSelfRef.mesh_router__DOT__output_port
             [4U])) {
            vlSelfRef.mesh_router__DOT__grant[vlSelfRef.mesh_router__DOT__output_port[4U]] 
                = ((0xfU & vlSelfRef.mesh_router__DOT__grant
                    [vlSelfRef.mesh_router__DOT__output_port
                    [4U]]) | ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hd4bd47f4__0) 
                              << 4U));
            vlSelfRef.mesh_router__DOT__output_valid 
                = (((~ ((IData)(1U) << vlSelfRef.mesh_router__DOT__output_port
                        [4U])) & (IData)(vlSelfRef.mesh_router__DOT__output_valid)) 
                   | (0x1fU & ((IData)(vlSelfRef.mesh_router__DOT____Vlvbound_hbafd1025__0) 
                               << vlSelfRef.mesh_router__DOT__output_port
                               [4U])));
            vlSelfRef.mesh_router__DOT__output_data[vlSelfRef.mesh_router__DOT__output_port[4U]] 
                = vlSelfRef.mesh_router__DOT____Vlvbound_h2afa5cb1__0;
        }
    }
    vlSelfRef.north_out_valid = (1U & (IData)(vlSelfRef.mesh_router__DOT__output_valid));
    vlSelfRef.east_out_valid = (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_valid) 
                                      >> 1U));
    vlSelfRef.south_out_valid = (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_valid) 
                                       >> 2U));
    vlSelfRef.west_out_valid = (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_valid) 
                                      >> 3U));
    vlSelfRef.local_out_valid = (1U & ((IData)(vlSelfRef.mesh_router__DOT__output_valid) 
                                       >> 4U));
    vlSelfRef.north_out_data = vlSelfRef.mesh_router__DOT__output_data
        [0U];
    vlSelfRef.east_out_data = vlSelfRef.mesh_router__DOT__output_data
        [1U];
    vlSelfRef.south_out_data = vlSelfRef.mesh_router__DOT__output_data
        [2U];
    vlSelfRef.west_out_data = vlSelfRef.mesh_router__DOT__output_data
        [3U];
    vlSelfRef.local_out_data = vlSelfRef.mesh_router__DOT__output_data
        [4U];
}

void Vmesh_router___024root___eval_triggers__act(Vmesh_router___024root* vlSelf);

bool Vmesh_router___024root___eval_phase__act(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_phase__act\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmesh_router___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmesh_router___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmesh_router___024root___eval_phase__nba(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_phase__nba\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmesh_router___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__ico(Vmesh_router___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__nba(Vmesh_router___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__act(Vmesh_router___024root* vlSelf);
#endif  // VL_DEBUG

void Vmesh_router___024root___eval(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmesh_router___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/noc/mesh_router.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmesh_router___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmesh_router___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/noc/mesh_router.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmesh_router___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/noc/mesh_router.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmesh_router___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmesh_router___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmesh_router___024root___eval_debug_assertions(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_debug_assertions\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.north_in_valid & 0xfeU)))) {
        Verilated::overWidthError("north_in_valid");}
    if (VL_UNLIKELY(((vlSelfRef.north_out_ready & 0xfeU)))) {
        Verilated::overWidthError("north_out_ready");}
    if (VL_UNLIKELY(((vlSelfRef.east_in_valid & 0xfeU)))) {
        Verilated::overWidthError("east_in_valid");}
    if (VL_UNLIKELY(((vlSelfRef.east_out_ready & 0xfeU)))) {
        Verilated::overWidthError("east_out_ready");}
    if (VL_UNLIKELY(((vlSelfRef.south_in_valid & 0xfeU)))) {
        Verilated::overWidthError("south_in_valid");}
    if (VL_UNLIKELY(((vlSelfRef.south_out_ready & 0xfeU)))) {
        Verilated::overWidthError("south_out_ready");}
    if (VL_UNLIKELY(((vlSelfRef.west_in_valid & 0xfeU)))) {
        Verilated::overWidthError("west_in_valid");}
    if (VL_UNLIKELY(((vlSelfRef.west_out_ready & 0xfeU)))) {
        Verilated::overWidthError("west_out_ready");}
    if (VL_UNLIKELY(((vlSelfRef.local_in_valid & 0xfeU)))) {
        Verilated::overWidthError("local_in_valid");}
    if (VL_UNLIKELY(((vlSelfRef.local_out_ready & 0xfeU)))) {
        Verilated::overWidthError("local_out_ready");}
}
#endif  // VL_DEBUG
