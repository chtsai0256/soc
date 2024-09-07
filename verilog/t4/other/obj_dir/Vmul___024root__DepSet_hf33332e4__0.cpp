// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "verilated.h"

#include "Vmul__Syms.h"
#include "Vmul___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__ico(Vmul___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul___024root___eval_triggers__ico(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__act(Vmul___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul___024root___eval_triggers__act(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk_i)));
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul___024root___dump_triggers__act(vlSelf);
    }
#endif
}
