// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_router.h for the primary calling header

#include "Vmesh_router__pch.h"
#include "Vmesh_router___024root.h"

VL_ATTR_COLD void Vmesh_router___024root___eval_static(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_static\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vmesh_router___024root___eval_initial__TOP(Vmesh_router___024root* vlSelf);
VL_ATTR_COLD void Vmesh_router___024root____Vm_traceActivitySetAll(Vmesh_router___024root* vlSelf);

VL_ATTR_COLD void Vmesh_router___024root___eval_initial(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_initial\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmesh_router___024root___eval_initial__TOP(vlSelf);
    Vmesh_router___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vmesh_router___024root___eval_initial__TOP(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_initial__TOP\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_router__DOT__calc_idx = 5U;
}

VL_ATTR_COLD void Vmesh_router___024root___eval_final(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_final\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__stl(Vmesh_router___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmesh_router___024root___eval_phase__stl(Vmesh_router___024root* vlSelf);

VL_ATTR_COLD void Vmesh_router___024root___eval_settle(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_settle\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmesh_router___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/noc/mesh_router.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmesh_router___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__stl(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___dump_triggers__stl\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmesh_router___024root___stl_sequent__TOP__0(Vmesh_router___024root* vlSelf);

VL_ATTR_COLD void Vmesh_router___024root___eval_stl(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_stl\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmesh_router___024root___stl_sequent__TOP__0(vlSelf);
        Vmesh_router___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vmesh_router___024root___stl_sequent__TOP__0(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___stl_sequent__TOP__0\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ mesh_router__DOT____Vlvbound_hbe698950__0;
    mesh_router__DOT____Vlvbound_hbe698950__0 = 0;
    CData/*2:0*/ __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout;
    __Vfunc_mesh_router__DOT__get_output_port__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in;
    __Vfunc_mesh_router__DOT__get_output_port__0__dest_id_in = 0;
    // Body
    vlSelfRef.north_in_ready = (1U & (~ (IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid)));
    vlSelfRef.east_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                        >> 1U)));
    vlSelfRef.south_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                         >> 2U)));
    vlSelfRef.west_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                        >> 3U)));
    vlSelfRef.local_in_ready = (1U & (~ ((IData)(vlSelfRef.mesh_router__DOT__input_buffer_valid) 
                                         >> 4U)));
    vlSelfRef.mesh_router__DOT__output_ready = ((((IData)(vlSelfRef.local_out_ready) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.west_out_ready) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.south_out_ready) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.east_out_ready) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.north_out_ready)));
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

VL_ATTR_COLD void Vmesh_router___024root___eval_triggers__stl(Vmesh_router___024root* vlSelf);

VL_ATTR_COLD bool Vmesh_router___024root___eval_phase__stl(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_phase__stl\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmesh_router___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmesh_router___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__ico(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___dump_triggers__ico\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__act(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___dump_triggers__act\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__nba(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___dump_triggers__nba\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmesh_router___024root____Vm_traceActivitySetAll(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root____Vm_traceActivitySetAll\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vmesh_router___024root___ctor_var_reset(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___ctor_var_reset\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->north_in_data = VL_RAND_RESET_I(32);
    vlSelf->north_in_valid = VL_RAND_RESET_I(1);
    vlSelf->north_in_ready = VL_RAND_RESET_I(1);
    vlSelf->north_out_data = VL_RAND_RESET_I(32);
    vlSelf->north_out_valid = VL_RAND_RESET_I(1);
    vlSelf->north_out_ready = VL_RAND_RESET_I(1);
    vlSelf->east_in_data = VL_RAND_RESET_I(32);
    vlSelf->east_in_valid = VL_RAND_RESET_I(1);
    vlSelf->east_in_ready = VL_RAND_RESET_I(1);
    vlSelf->east_out_data = VL_RAND_RESET_I(32);
    vlSelf->east_out_valid = VL_RAND_RESET_I(1);
    vlSelf->east_out_ready = VL_RAND_RESET_I(1);
    vlSelf->south_in_data = VL_RAND_RESET_I(32);
    vlSelf->south_in_valid = VL_RAND_RESET_I(1);
    vlSelf->south_in_ready = VL_RAND_RESET_I(1);
    vlSelf->south_out_data = VL_RAND_RESET_I(32);
    vlSelf->south_out_valid = VL_RAND_RESET_I(1);
    vlSelf->south_out_ready = VL_RAND_RESET_I(1);
    vlSelf->west_in_data = VL_RAND_RESET_I(32);
    vlSelf->west_in_valid = VL_RAND_RESET_I(1);
    vlSelf->west_in_ready = VL_RAND_RESET_I(1);
    vlSelf->west_out_data = VL_RAND_RESET_I(32);
    vlSelf->west_out_valid = VL_RAND_RESET_I(1);
    vlSelf->west_out_ready = VL_RAND_RESET_I(1);
    vlSelf->local_in_data = VL_RAND_RESET_I(32);
    vlSelf->local_in_valid = VL_RAND_RESET_I(1);
    vlSelf->local_in_ready = VL_RAND_RESET_I(1);
    vlSelf->local_out_data = VL_RAND_RESET_I(32);
    vlSelf->local_out_valid = VL_RAND_RESET_I(1);
    vlSelf->local_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mesh_router__DOT__input_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mesh_router__DOT__input_buffer_valid = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mesh_router__DOT__output_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mesh_router__DOT__output_valid = VL_RAND_RESET_I(5);
    vlSelf->mesh_router__DOT__output_ready = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mesh_router__DOT__dest_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mesh_router__DOT__output_port[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mesh_router__DOT__grant[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->mesh_router__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->mesh_router__DOT__calc_idx = VL_RAND_RESET_I(32);
    vlSelf->mesh_router__DOT____Vlvbound_hd4bd47f4__0 = VL_RAND_RESET_I(1);
    vlSelf->mesh_router__DOT____Vlvbound_h2afa5cb1__0 = VL_RAND_RESET_I(32);
    vlSelf->mesh_router__DOT____Vlvbound_hbafd1025__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
