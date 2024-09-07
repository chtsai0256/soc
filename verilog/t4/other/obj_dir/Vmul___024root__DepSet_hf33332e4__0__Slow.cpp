// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "verilated.h"

#include "Vmul__Syms.h"
#include "Vmul___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__stl(Vmul___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmul___024root___eval_triggers__stl(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
