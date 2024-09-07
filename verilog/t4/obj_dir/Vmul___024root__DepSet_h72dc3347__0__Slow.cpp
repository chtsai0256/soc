// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "verilated.h"

#include "Vmul___024root.h"

VL_ATTR_COLD void Vmul___024root___eval_static(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmul___024root___eval_initial(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vmul___024root___eval_final(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmul___024root___eval_triggers__stl(Vmul___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__stl(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmul___024root___eval_stl(Vmul___024root* vlSelf);

VL_ATTR_COLD void Vmul___024root___eval_settle(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmul___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vmul___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("mul.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmul___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__stl(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmul___024root___stl_sequent__TOP__0(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ready_o = ((~ (IData)(vlSelf->rst_i)) & 
                       ((IData)(vlSelf->req_i) & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o)));
    vlSelf->mul__DOT__a_temp[0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o;
    vlSelf->mul__DOT__a_temp[1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[3U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[4U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[5U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[6U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[7U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[8U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[9U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0xaU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0xbU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0xcU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0xdU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0xeU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0xfU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x10U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x11U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x12U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x13U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x14U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x15U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x16U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x17U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x18U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x19U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x1aU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x1bU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x1cU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x1dU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x1eU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__a_temp[0x1fU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o;
    vlSelf->mul__DOT__b_temp[0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o;
    vlSelf->mul__DOT__b_temp[1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[3U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[4U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[5U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[6U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[7U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[8U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[9U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0xaU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0xbU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0xcU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0xdU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0xeU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0xfU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x10U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x11U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x12U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x13U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x14U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x15U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x16U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x17U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x18U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x19U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x1aU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x1bU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x1cU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x1dU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x1eU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__b_temp[0x1fU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o;
    vlSelf->mul__DOT__acc_temp[0U][0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0U][1U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0U][2U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[1U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[1U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[1U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[2U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[2U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[2U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[3U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[3U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[3U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[4U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[4U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[4U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[5U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[5U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[5U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[6U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[6U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[6U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[7U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[7U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[7U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[8U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[8U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[8U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[9U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[9U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[9U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0xaU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xaU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xaU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0xbU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xbU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xbU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0xcU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xcU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xcU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0xdU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xdU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xdU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0xeU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xeU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xeU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0xfU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xfU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xfU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x10U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x10U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x10U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x11U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x11U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x11U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x12U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x12U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x12U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x13U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x13U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x13U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x14U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x14U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x14U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x15U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x15U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x15U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x16U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x16U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x16U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x17U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x17U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x17U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x18U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x18U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x18U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x19U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x19U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x19U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x1aU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1aU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1aU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x1bU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1bU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1bU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x1cU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1cU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1cU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x1dU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1dU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1dU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x1eU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1eU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1eU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT__acc_temp[0x1fU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1fU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1fU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->result_o = ((IData)(vlSelf->rst_i) ? 0ULL
                         : ((IData)(vlSelf->req_i) ? 
                            (((QData)((IData)(vlSelf->mul__DOT__acc_temp
                                              [0x1fU][1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->mul__DOT__acc_temp
                                                          [0x1fU][0U])))
                             : 0ULL));
}

VL_ATTR_COLD void Vmul___024root___eval_stl(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vmul___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__ico(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__act(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__nba(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmul___024root___ctor_var_reset(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->req_i = VL_RAND_RESET_I(1);
    vlSelf->a_i = VL_RAND_RESET_I(32);
    vlSelf->b_i = VL_RAND_RESET_I(32);
    vlSelf->ready_o = VL_RAND_RESET_I(1);
    vlSelf->result_o = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mul__DOT__a_temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mul__DOT__b_temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT__acc_temp[__Vi0]);
    }
    vlSelf->mul__DOT____Vcellout__u_mult_step0__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o);
    vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o = VL_RAND_RESET_I(32);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
