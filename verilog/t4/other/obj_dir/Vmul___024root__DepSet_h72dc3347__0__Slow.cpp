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
    vlSelf->mul__DOT__a_next5[0U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell4__result_o
        [0U][0U];
    vlSelf->mul__DOT__a_next5[0U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell4__result_o
        [0U][1U];
    vlSelf->mul__DOT__a_next5[0U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell4__result_o
        [0U][2U];
    vlSelf->mul__DOT__a_next4[0U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell3__result_o
        [0U][0U];
    vlSelf->mul__DOT__a_next4[0U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell3__result_o
        [0U][1U];
    vlSelf->mul__DOT__a_next4[0U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell3__result_o
        [0U][2U];
    vlSelf->mul__DOT__a_next4[1U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell3__result_o
        [1U][0U];
    vlSelf->mul__DOT__a_next4[1U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell3__result_o
        [1U][1U];
    vlSelf->mul__DOT__a_next4[1U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell3__result_o
        [1U][2U];
    vlSelf->mul__DOT____VdfgExtracted_h0dd22bbe__0 
        = (1U & ((~ (IData)((0U != vlSelf->a_i))) | 
                 (~ (IData)((0U != vlSelf->b_i)))));
    vlSelf->mul__DOT__a_next3[0U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [0U][0U];
    vlSelf->mul__DOT__a_next3[0U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [0U][1U];
    vlSelf->mul__DOT__a_next3[0U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [0U][2U];
    vlSelf->mul__DOT__a_next3[1U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [1U][0U];
    vlSelf->mul__DOT__a_next3[1U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [1U][1U];
    vlSelf->mul__DOT__a_next3[1U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [1U][2U];
    vlSelf->mul__DOT__a_next3[2U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [2U][0U];
    vlSelf->mul__DOT__a_next3[2U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [2U][1U];
    vlSelf->mul__DOT__a_next3[2U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [2U][2U];
    vlSelf->mul__DOT__a_next3[3U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [3U][0U];
    vlSelf->mul__DOT__a_next3[3U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [3U][1U];
    vlSelf->mul__DOT__a_next3[3U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell2__result_o
        [3U][2U];
    vlSelf->mul__DOT__a_next2[0U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [0U][0U];
    vlSelf->mul__DOT__a_next2[0U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [0U][1U];
    vlSelf->mul__DOT__a_next2[0U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [0U][2U];
    vlSelf->mul__DOT__a_next2[1U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [1U][0U];
    vlSelf->mul__DOT__a_next2[1U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [1U][1U];
    vlSelf->mul__DOT__a_next2[1U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [1U][2U];
    vlSelf->mul__DOT__a_next2[2U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [2U][0U];
    vlSelf->mul__DOT__a_next2[2U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [2U][1U];
    vlSelf->mul__DOT__a_next2[2U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [2U][2U];
    vlSelf->mul__DOT__a_next2[3U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [3U][0U];
    vlSelf->mul__DOT__a_next2[3U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [3U][1U];
    vlSelf->mul__DOT__a_next2[3U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [3U][2U];
    vlSelf->mul__DOT__a_next2[4U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [4U][0U];
    vlSelf->mul__DOT__a_next2[4U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [4U][1U];
    vlSelf->mul__DOT__a_next2[4U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [4U][2U];
    vlSelf->mul__DOT__a_next2[5U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [5U][0U];
    vlSelf->mul__DOT__a_next2[5U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [5U][1U];
    vlSelf->mul__DOT__a_next2[5U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [5U][2U];
    vlSelf->mul__DOT__a_next2[6U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [6U][0U];
    vlSelf->mul__DOT__a_next2[6U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [6U][1U];
    vlSelf->mul__DOT__a_next2[6U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [6U][2U];
    vlSelf->mul__DOT__a_next2[7U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [7U][0U];
    vlSelf->mul__DOT__a_next2[7U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [7U][1U];
    vlSelf->mul__DOT__a_next2[7U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell1__result_o
        [7U][2U];
    vlSelf->mul__DOT__a_next1[0U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0U][0U];
    vlSelf->mul__DOT__a_next1[0U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0U][1U];
    vlSelf->mul__DOT__a_next1[0U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0U][2U];
    vlSelf->mul__DOT__a_next1[1U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [1U][0U];
    vlSelf->mul__DOT__a_next1[1U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [1U][1U];
    vlSelf->mul__DOT__a_next1[1U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [1U][2U];
    vlSelf->mul__DOT__a_next1[2U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [2U][0U];
    vlSelf->mul__DOT__a_next1[2U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [2U][1U];
    vlSelf->mul__DOT__a_next1[2U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [2U][2U];
    vlSelf->mul__DOT__a_next1[3U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [3U][0U];
    vlSelf->mul__DOT__a_next1[3U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [3U][1U];
    vlSelf->mul__DOT__a_next1[3U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [3U][2U];
    vlSelf->mul__DOT__a_next1[4U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [4U][0U];
    vlSelf->mul__DOT__a_next1[4U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [4U][1U];
    vlSelf->mul__DOT__a_next1[4U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [4U][2U];
    vlSelf->mul__DOT__a_next1[5U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [5U][0U];
    vlSelf->mul__DOT__a_next1[5U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [5U][1U];
    vlSelf->mul__DOT__a_next1[5U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [5U][2U];
    vlSelf->mul__DOT__a_next1[6U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [6U][0U];
    vlSelf->mul__DOT__a_next1[6U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [6U][1U];
    vlSelf->mul__DOT__a_next1[6U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [6U][2U];
    vlSelf->mul__DOT__a_next1[7U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [7U][0U];
    vlSelf->mul__DOT__a_next1[7U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [7U][1U];
    vlSelf->mul__DOT__a_next1[7U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [7U][2U];
    vlSelf->mul__DOT__a_next1[8U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [8U][0U];
    vlSelf->mul__DOT__a_next1[8U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [8U][1U];
    vlSelf->mul__DOT__a_next1[8U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [8U][2U];
    vlSelf->mul__DOT__a_next1[9U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [9U][0U];
    vlSelf->mul__DOT__a_next1[9U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [9U][1U];
    vlSelf->mul__DOT__a_next1[9U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [9U][2U];
    vlSelf->mul__DOT__a_next1[0xaU][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xaU][0U];
    vlSelf->mul__DOT__a_next1[0xaU][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xaU][1U];
    vlSelf->mul__DOT__a_next1[0xaU][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xaU][2U];
    vlSelf->mul__DOT__a_next1[0xbU][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xbU][0U];
    vlSelf->mul__DOT__a_next1[0xbU][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xbU][1U];
    vlSelf->mul__DOT__a_next1[0xbU][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xbU][2U];
    vlSelf->mul__DOT__a_next1[0xcU][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xcU][0U];
    vlSelf->mul__DOT__a_next1[0xcU][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xcU][1U];
    vlSelf->mul__DOT__a_next1[0xcU][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xcU][2U];
    vlSelf->mul__DOT__a_next1[0xdU][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xdU][0U];
    vlSelf->mul__DOT__a_next1[0xdU][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xdU][1U];
    vlSelf->mul__DOT__a_next1[0xdU][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xdU][2U];
    vlSelf->mul__DOT__a_next1[0xeU][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xeU][0U];
    vlSelf->mul__DOT__a_next1[0xeU][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xeU][1U];
    vlSelf->mul__DOT__a_next1[0xeU][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xeU][2U];
    vlSelf->mul__DOT__a_next1[0xfU][0U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xfU][0U];
    vlSelf->mul__DOT__a_next1[0xfU][1U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xfU][1U];
    vlSelf->mul__DOT__a_next1[0xfU][2U] = vlSelf->mul__DOT____Vcellout__mult_cell0__result_o
        [0xfU][2U];
    vlSelf->mul__DOT__a_temp[0x1fU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0U][0U];
    vlSelf->mul__DOT__a_temp[0x1fU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0U][1U];
    vlSelf->mul__DOT__a_temp[0x1fU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0U][2U];
    vlSelf->mul__DOT__a_temp[0x1eU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [1U][0U];
    vlSelf->mul__DOT__a_temp[0x1eU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [1U][1U];
    vlSelf->mul__DOT__a_temp[0x1eU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [1U][2U];
    vlSelf->mul__DOT__a_temp[0x1dU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [2U][0U];
    vlSelf->mul__DOT__a_temp[0x1dU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [2U][1U];
    vlSelf->mul__DOT__a_temp[0x1dU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [2U][2U];
    vlSelf->mul__DOT__a_temp[0x1cU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [3U][0U];
    vlSelf->mul__DOT__a_temp[0x1cU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [3U][1U];
    vlSelf->mul__DOT__a_temp[0x1cU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [3U][2U];
    vlSelf->mul__DOT__a_temp[0x1bU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [4U][0U];
    vlSelf->mul__DOT__a_temp[0x1bU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [4U][1U];
    vlSelf->mul__DOT__a_temp[0x1bU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [4U][2U];
    vlSelf->mul__DOT__a_temp[0x1aU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [5U][0U];
    vlSelf->mul__DOT__a_temp[0x1aU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [5U][1U];
    vlSelf->mul__DOT__a_temp[0x1aU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [5U][2U];
    vlSelf->mul__DOT__a_temp[0x19U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [6U][0U];
    vlSelf->mul__DOT__a_temp[0x19U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [6U][1U];
    vlSelf->mul__DOT__a_temp[0x19U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [6U][2U];
    vlSelf->mul__DOT__a_temp[0x18U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [7U][0U];
    vlSelf->mul__DOT__a_temp[0x18U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [7U][1U];
    vlSelf->mul__DOT__a_temp[0x18U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [7U][2U];
    vlSelf->mul__DOT__a_temp[0x17U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [8U][0U];
    vlSelf->mul__DOT__a_temp[0x17U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [8U][1U];
    vlSelf->mul__DOT__a_temp[0x17U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [8U][2U];
    vlSelf->mul__DOT__a_temp[0x16U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [9U][0U];
    vlSelf->mul__DOT__a_temp[0x16U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [9U][1U];
    vlSelf->mul__DOT__a_temp[0x16U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [9U][2U];
    vlSelf->mul__DOT__a_temp[0x15U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xaU][0U];
    vlSelf->mul__DOT__a_temp[0x15U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xaU][1U];
    vlSelf->mul__DOT__a_temp[0x15U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xaU][2U];
    vlSelf->mul__DOT__a_temp[0x14U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xbU][0U];
    vlSelf->mul__DOT__a_temp[0x14U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xbU][1U];
    vlSelf->mul__DOT__a_temp[0x14U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xbU][2U];
    vlSelf->mul__DOT__a_temp[0x13U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xcU][0U];
    vlSelf->mul__DOT__a_temp[0x13U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xcU][1U];
    vlSelf->mul__DOT__a_temp[0x13U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xcU][2U];
    vlSelf->mul__DOT__a_temp[0x12U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xdU][0U];
    vlSelf->mul__DOT__a_temp[0x12U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xdU][1U];
    vlSelf->mul__DOT__a_temp[0x12U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xdU][2U];
    vlSelf->mul__DOT__a_temp[0x11U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xeU][0U];
    vlSelf->mul__DOT__a_temp[0x11U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xeU][1U];
    vlSelf->mul__DOT__a_temp[0x11U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xeU][2U];
    vlSelf->mul__DOT__a_temp[0x10U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xfU][0U];
    vlSelf->mul__DOT__a_temp[0x10U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xfU][1U];
    vlSelf->mul__DOT__a_temp[0x10U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0xfU][2U];
    vlSelf->mul__DOT__a_temp[0xfU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x10U][0U];
    vlSelf->mul__DOT__a_temp[0xfU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x10U][1U];
    vlSelf->mul__DOT__a_temp[0xfU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x10U][2U];
    vlSelf->mul__DOT__a_temp[0xeU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x11U][0U];
    vlSelf->mul__DOT__a_temp[0xeU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x11U][1U];
    vlSelf->mul__DOT__a_temp[0xeU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x11U][2U];
    vlSelf->mul__DOT__a_temp[0xdU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x12U][0U];
    vlSelf->mul__DOT__a_temp[0xdU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x12U][1U];
    vlSelf->mul__DOT__a_temp[0xdU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x12U][2U];
    vlSelf->mul__DOT__a_temp[0xcU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x13U][0U];
    vlSelf->mul__DOT__a_temp[0xcU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x13U][1U];
    vlSelf->mul__DOT__a_temp[0xcU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x13U][2U];
    vlSelf->mul__DOT__a_temp[0xbU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x14U][0U];
    vlSelf->mul__DOT__a_temp[0xbU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x14U][1U];
    vlSelf->mul__DOT__a_temp[0xbU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x14U][2U];
    vlSelf->mul__DOT__a_temp[0xaU][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x15U][0U];
    vlSelf->mul__DOT__a_temp[0xaU][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x15U][1U];
    vlSelf->mul__DOT__a_temp[0xaU][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x15U][2U];
    vlSelf->mul__DOT__a_temp[9U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x16U][0U];
    vlSelf->mul__DOT__a_temp[9U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x16U][1U];
    vlSelf->mul__DOT__a_temp[9U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x16U][2U];
    vlSelf->mul__DOT__a_temp[8U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x17U][0U];
    vlSelf->mul__DOT__a_temp[8U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x17U][1U];
    vlSelf->mul__DOT__a_temp[8U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x17U][2U];
    vlSelf->mul__DOT__a_temp[7U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x18U][0U];
    vlSelf->mul__DOT__a_temp[7U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x18U][1U];
    vlSelf->mul__DOT__a_temp[7U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x18U][2U];
    vlSelf->mul__DOT__a_temp[6U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x19U][0U];
    vlSelf->mul__DOT__a_temp[6U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x19U][1U];
    vlSelf->mul__DOT__a_temp[6U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x19U][2U];
    vlSelf->mul__DOT__a_temp[5U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][0U];
    vlSelf->mul__DOT__a_temp[5U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][1U];
    vlSelf->mul__DOT__a_temp[5U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][2U];
    vlSelf->mul__DOT__a_temp[4U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][0U];
    vlSelf->mul__DOT__a_temp[4U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][1U];
    vlSelf->mul__DOT__a_temp[4U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][2U];
    vlSelf->mul__DOT__a_temp[3U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][0U];
    vlSelf->mul__DOT__a_temp[3U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][1U];
    vlSelf->mul__DOT__a_temp[3U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][2U];
    vlSelf->mul__DOT__a_temp[2U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][0U];
    vlSelf->mul__DOT__a_temp[2U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][1U];
    vlSelf->mul__DOT__a_temp[2U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][2U];
    vlSelf->mul__DOT__a_temp[1U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][0U];
    vlSelf->mul__DOT__a_temp[1U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][1U];
    vlSelf->mul__DOT__a_temp[1U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][2U];
    vlSelf->mul__DOT__a_temp[0U][0U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][0U];
    vlSelf->mul__DOT__a_temp[0U][1U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][1U];
    vlSelf->mul__DOT__a_temp[0U][2U] = vlSelf->mul__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[0U][0U] 
        = vlSelf->mul__DOT__a_next4[0U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[0U][1U] 
        = vlSelf->mul__DOT__a_next4[0U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[0U][2U] 
        = vlSelf->mul__DOT__a_next4[0U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[1U][0U] 
        = vlSelf->mul__DOT__a_next4[1U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[1U][1U] 
        = vlSelf->mul__DOT__a_next4[1U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[1U][2U] 
        = vlSelf->mul__DOT__a_next4[1U][2U];
    vlSelf->ready_o = ((~ ((IData)(vlSelf->rst_i) | 
                           (~ (IData)(vlSelf->req_i)))) 
                       & ((IData)(vlSelf->mul__DOT____VdfgExtracted_h0dd22bbe__0) 
                          | ((IData)(vlSelf->req_i) 
                             & (IData)(vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o))));
    vlSelf->result_o = ((1U & ((IData)(vlSelf->rst_i) 
                               | (~ (IData)(vlSelf->req_i))))
                         ? 0ULL : ((IData)(vlSelf->mul__DOT____VdfgExtracted_h0dd22bbe__0)
                                    ? 0ULL : ((IData)(vlSelf->req_i)
                                               ? (((QData)((IData)(
                                                                   vlSelf->mul__DOT__a_next5
                                                                   [0U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->mul__DOT__a_next5
                                                                    [0U][0U])))
                                               : 0ULL)));
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[0U][0U] 
        = vlSelf->mul__DOT__a_next3[0U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[0U][1U] 
        = vlSelf->mul__DOT__a_next3[0U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[0U][2U] 
        = vlSelf->mul__DOT__a_next3[0U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[1U][0U] 
        = vlSelf->mul__DOT__a_next3[1U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[1U][1U] 
        = vlSelf->mul__DOT__a_next3[1U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[1U][2U] 
        = vlSelf->mul__DOT__a_next3[1U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[2U][0U] 
        = vlSelf->mul__DOT__a_next3[2U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[2U][1U] 
        = vlSelf->mul__DOT__a_next3[2U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[2U][2U] 
        = vlSelf->mul__DOT__a_next3[2U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[3U][0U] 
        = vlSelf->mul__DOT__a_next3[3U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[3U][1U] 
        = vlSelf->mul__DOT__a_next3[3U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[3U][2U] 
        = vlSelf->mul__DOT__a_next3[3U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[0U][0U] 
        = vlSelf->mul__DOT__a_next2[0U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[0U][1U] 
        = vlSelf->mul__DOT__a_next2[0U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[0U][2U] 
        = vlSelf->mul__DOT__a_next2[0U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[1U][0U] 
        = vlSelf->mul__DOT__a_next2[1U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[1U][1U] 
        = vlSelf->mul__DOT__a_next2[1U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[1U][2U] 
        = vlSelf->mul__DOT__a_next2[1U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[2U][0U] 
        = vlSelf->mul__DOT__a_next2[2U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[2U][1U] 
        = vlSelf->mul__DOT__a_next2[2U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[2U][2U] 
        = vlSelf->mul__DOT__a_next2[2U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[3U][0U] 
        = vlSelf->mul__DOT__a_next2[3U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[3U][1U] 
        = vlSelf->mul__DOT__a_next2[3U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[3U][2U] 
        = vlSelf->mul__DOT__a_next2[3U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[4U][0U] 
        = vlSelf->mul__DOT__a_next2[4U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[4U][1U] 
        = vlSelf->mul__DOT__a_next2[4U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[4U][2U] 
        = vlSelf->mul__DOT__a_next2[4U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[5U][0U] 
        = vlSelf->mul__DOT__a_next2[5U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[5U][1U] 
        = vlSelf->mul__DOT__a_next2[5U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[5U][2U] 
        = vlSelf->mul__DOT__a_next2[5U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[6U][0U] 
        = vlSelf->mul__DOT__a_next2[6U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[6U][1U] 
        = vlSelf->mul__DOT__a_next2[6U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[6U][2U] 
        = vlSelf->mul__DOT__a_next2[6U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[7U][0U] 
        = vlSelf->mul__DOT__a_next2[7U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[7U][1U] 
        = vlSelf->mul__DOT__a_next2[7U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[7U][2U] 
        = vlSelf->mul__DOT__a_next2[7U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0U][0U] 
        = vlSelf->mul__DOT__a_next1[0U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0U][1U] 
        = vlSelf->mul__DOT__a_next1[0U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0U][2U] 
        = vlSelf->mul__DOT__a_next1[0U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[1U][0U] 
        = vlSelf->mul__DOT__a_next1[1U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[1U][1U] 
        = vlSelf->mul__DOT__a_next1[1U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[1U][2U] 
        = vlSelf->mul__DOT__a_next1[1U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[2U][0U] 
        = vlSelf->mul__DOT__a_next1[2U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[2U][1U] 
        = vlSelf->mul__DOT__a_next1[2U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[2U][2U] 
        = vlSelf->mul__DOT__a_next1[2U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[3U][0U] 
        = vlSelf->mul__DOT__a_next1[3U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[3U][1U] 
        = vlSelf->mul__DOT__a_next1[3U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[3U][2U] 
        = vlSelf->mul__DOT__a_next1[3U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[4U][0U] 
        = vlSelf->mul__DOT__a_next1[4U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[4U][1U] 
        = vlSelf->mul__DOT__a_next1[4U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[4U][2U] 
        = vlSelf->mul__DOT__a_next1[4U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[5U][0U] 
        = vlSelf->mul__DOT__a_next1[5U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[5U][1U] 
        = vlSelf->mul__DOT__a_next1[5U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[5U][2U] 
        = vlSelf->mul__DOT__a_next1[5U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[6U][0U] 
        = vlSelf->mul__DOT__a_next1[6U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[6U][1U] 
        = vlSelf->mul__DOT__a_next1[6U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[6U][2U] 
        = vlSelf->mul__DOT__a_next1[6U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[7U][0U] 
        = vlSelf->mul__DOT__a_next1[7U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[7U][1U] 
        = vlSelf->mul__DOT__a_next1[7U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[7U][2U] 
        = vlSelf->mul__DOT__a_next1[7U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[8U][0U] 
        = vlSelf->mul__DOT__a_next1[8U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[8U][1U] 
        = vlSelf->mul__DOT__a_next1[8U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[8U][2U] 
        = vlSelf->mul__DOT__a_next1[8U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[9U][0U] 
        = vlSelf->mul__DOT__a_next1[9U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[9U][1U] 
        = vlSelf->mul__DOT__a_next1[9U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[9U][2U] 
        = vlSelf->mul__DOT__a_next1[9U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xaU][0U] 
        = vlSelf->mul__DOT__a_next1[0xaU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xaU][1U] 
        = vlSelf->mul__DOT__a_next1[0xaU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xaU][2U] 
        = vlSelf->mul__DOT__a_next1[0xaU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xbU][0U] 
        = vlSelf->mul__DOT__a_next1[0xbU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xbU][1U] 
        = vlSelf->mul__DOT__a_next1[0xbU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xbU][2U] 
        = vlSelf->mul__DOT__a_next1[0xbU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xcU][0U] 
        = vlSelf->mul__DOT__a_next1[0xcU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xcU][1U] 
        = vlSelf->mul__DOT__a_next1[0xcU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xcU][2U] 
        = vlSelf->mul__DOT__a_next1[0xcU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xdU][0U] 
        = vlSelf->mul__DOT__a_next1[0xdU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xdU][1U] 
        = vlSelf->mul__DOT__a_next1[0xdU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xdU][2U] 
        = vlSelf->mul__DOT__a_next1[0xdU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xeU][0U] 
        = vlSelf->mul__DOT__a_next1[0xeU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xeU][1U] 
        = vlSelf->mul__DOT__a_next1[0xeU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xeU][2U] 
        = vlSelf->mul__DOT__a_next1[0xeU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xfU][0U] 
        = vlSelf->mul__DOT__a_next1[0xfU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xfU][1U] 
        = vlSelf->mul__DOT__a_next1[0xfU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0xfU][2U] 
        = vlSelf->mul__DOT__a_next1[0xfU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0U][0U] 
        = vlSelf->mul__DOT__a_temp[0x1fU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0U][1U] 
        = vlSelf->mul__DOT__a_temp[0x1fU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0U][2U] 
        = vlSelf->mul__DOT__a_temp[0x1fU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[1U][0U] 
        = vlSelf->mul__DOT__a_temp[0x1eU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[1U][1U] 
        = vlSelf->mul__DOT__a_temp[0x1eU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[1U][2U] 
        = vlSelf->mul__DOT__a_temp[0x1eU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[2U][0U] 
        = vlSelf->mul__DOT__a_temp[0x1dU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[2U][1U] 
        = vlSelf->mul__DOT__a_temp[0x1dU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[2U][2U] 
        = vlSelf->mul__DOT__a_temp[0x1dU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[3U][0U] 
        = vlSelf->mul__DOT__a_temp[0x1cU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[3U][1U] 
        = vlSelf->mul__DOT__a_temp[0x1cU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[3U][2U] 
        = vlSelf->mul__DOT__a_temp[0x1cU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[4U][0U] 
        = vlSelf->mul__DOT__a_temp[0x1bU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[4U][1U] 
        = vlSelf->mul__DOT__a_temp[0x1bU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[4U][2U] 
        = vlSelf->mul__DOT__a_temp[0x1bU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[5U][0U] 
        = vlSelf->mul__DOT__a_temp[0x1aU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[5U][1U] 
        = vlSelf->mul__DOT__a_temp[0x1aU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[5U][2U] 
        = vlSelf->mul__DOT__a_temp[0x1aU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[6U][0U] 
        = vlSelf->mul__DOT__a_temp[0x19U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[6U][1U] 
        = vlSelf->mul__DOT__a_temp[0x19U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[6U][2U] 
        = vlSelf->mul__DOT__a_temp[0x19U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[7U][0U] 
        = vlSelf->mul__DOT__a_temp[0x18U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[7U][1U] 
        = vlSelf->mul__DOT__a_temp[0x18U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[7U][2U] 
        = vlSelf->mul__DOT__a_temp[0x18U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[8U][0U] 
        = vlSelf->mul__DOT__a_temp[0x17U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[8U][1U] 
        = vlSelf->mul__DOT__a_temp[0x17U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[8U][2U] 
        = vlSelf->mul__DOT__a_temp[0x17U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[9U][0U] 
        = vlSelf->mul__DOT__a_temp[0x16U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[9U][1U] 
        = vlSelf->mul__DOT__a_temp[0x16U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[9U][2U] 
        = vlSelf->mul__DOT__a_temp[0x16U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xaU][0U] 
        = vlSelf->mul__DOT__a_temp[0x15U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xaU][1U] 
        = vlSelf->mul__DOT__a_temp[0x15U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xaU][2U] 
        = vlSelf->mul__DOT__a_temp[0x15U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xbU][0U] 
        = vlSelf->mul__DOT__a_temp[0x14U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xbU][1U] 
        = vlSelf->mul__DOT__a_temp[0x14U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xbU][2U] 
        = vlSelf->mul__DOT__a_temp[0x14U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xcU][0U] 
        = vlSelf->mul__DOT__a_temp[0x13U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xcU][1U] 
        = vlSelf->mul__DOT__a_temp[0x13U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xcU][2U] 
        = vlSelf->mul__DOT__a_temp[0x13U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xdU][0U] 
        = vlSelf->mul__DOT__a_temp[0x12U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xdU][1U] 
        = vlSelf->mul__DOT__a_temp[0x12U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xdU][2U] 
        = vlSelf->mul__DOT__a_temp[0x12U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xeU][0U] 
        = vlSelf->mul__DOT__a_temp[0x11U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xeU][1U] 
        = vlSelf->mul__DOT__a_temp[0x11U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xeU][2U] 
        = vlSelf->mul__DOT__a_temp[0x11U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xfU][0U] 
        = vlSelf->mul__DOT__a_temp[0x10U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xfU][1U] 
        = vlSelf->mul__DOT__a_temp[0x10U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0xfU][2U] 
        = vlSelf->mul__DOT__a_temp[0x10U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x10U][0U] 
        = vlSelf->mul__DOT__a_temp[0xfU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x10U][1U] 
        = vlSelf->mul__DOT__a_temp[0xfU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x10U][2U] 
        = vlSelf->mul__DOT__a_temp[0xfU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x11U][0U] 
        = vlSelf->mul__DOT__a_temp[0xeU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x11U][1U] 
        = vlSelf->mul__DOT__a_temp[0xeU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x11U][2U] 
        = vlSelf->mul__DOT__a_temp[0xeU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x12U][0U] 
        = vlSelf->mul__DOT__a_temp[0xdU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x12U][1U] 
        = vlSelf->mul__DOT__a_temp[0xdU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x12U][2U] 
        = vlSelf->mul__DOT__a_temp[0xdU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x13U][0U] 
        = vlSelf->mul__DOT__a_temp[0xcU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x13U][1U] 
        = vlSelf->mul__DOT__a_temp[0xcU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x13U][2U] 
        = vlSelf->mul__DOT__a_temp[0xcU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x14U][0U] 
        = vlSelf->mul__DOT__a_temp[0xbU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x14U][1U] 
        = vlSelf->mul__DOT__a_temp[0xbU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x14U][2U] 
        = vlSelf->mul__DOT__a_temp[0xbU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x15U][0U] 
        = vlSelf->mul__DOT__a_temp[0xaU][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x15U][1U] 
        = vlSelf->mul__DOT__a_temp[0xaU][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x15U][2U] 
        = vlSelf->mul__DOT__a_temp[0xaU][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x16U][0U] 
        = vlSelf->mul__DOT__a_temp[9U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x16U][1U] 
        = vlSelf->mul__DOT__a_temp[9U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x16U][2U] 
        = vlSelf->mul__DOT__a_temp[9U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x17U][0U] 
        = vlSelf->mul__DOT__a_temp[8U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x17U][1U] 
        = vlSelf->mul__DOT__a_temp[8U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x17U][2U] 
        = vlSelf->mul__DOT__a_temp[8U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x18U][0U] 
        = vlSelf->mul__DOT__a_temp[7U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x18U][1U] 
        = vlSelf->mul__DOT__a_temp[7U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x18U][2U] 
        = vlSelf->mul__DOT__a_temp[7U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x19U][0U] 
        = vlSelf->mul__DOT__a_temp[6U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x19U][1U] 
        = vlSelf->mul__DOT__a_temp[6U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x19U][2U] 
        = vlSelf->mul__DOT__a_temp[6U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1aU][0U] 
        = vlSelf->mul__DOT__a_temp[5U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1aU][1U] 
        = vlSelf->mul__DOT__a_temp[5U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1aU][2U] 
        = vlSelf->mul__DOT__a_temp[5U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1bU][0U] 
        = vlSelf->mul__DOT__a_temp[4U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1bU][1U] 
        = vlSelf->mul__DOT__a_temp[4U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1bU][2U] 
        = vlSelf->mul__DOT__a_temp[4U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1cU][0U] 
        = vlSelf->mul__DOT__a_temp[3U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1cU][1U] 
        = vlSelf->mul__DOT__a_temp[3U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1cU][2U] 
        = vlSelf->mul__DOT__a_temp[3U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1dU][0U] 
        = vlSelf->mul__DOT__a_temp[2U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1dU][1U] 
        = vlSelf->mul__DOT__a_temp[2U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1dU][2U] 
        = vlSelf->mul__DOT__a_temp[2U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1eU][0U] 
        = vlSelf->mul__DOT__a_temp[1U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1eU][1U] 
        = vlSelf->mul__DOT__a_temp[1U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1eU][2U] 
        = vlSelf->mul__DOT__a_temp[1U][2U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1fU][0U] 
        = vlSelf->mul__DOT__a_temp[0U][0U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1fU][1U] 
        = vlSelf->mul__DOT__a_temp[0U][1U];
    vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0x1fU][2U] 
        = vlSelf->mul__DOT__a_temp[0U][2U];
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
        VL_RAND_RESET_W(65, vlSelf->mul__DOT__a_temp[__Vi0]);
    }
    vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT__a_next1[__Vi0]);
    }
    vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT__a_next2[__Vi0]);
    }
    vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT__a_next3[__Vi0]);
    }
    vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT__a_next4[__Vi0]);
    }
    vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT__a_next5[__Vi0]);
    }
    vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[__Vi0]);
    }
    vlSelf->mul__DOT____VdfgExtracted_h0dd22bbe__0 = VL_RAND_RESET_I(1);
    vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
