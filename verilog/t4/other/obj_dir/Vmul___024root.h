// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul.h for the primary calling header

#ifndef VERILATED_VMUL___024ROOT_H_
#define VERILATED_VMUL___024ROOT_H_  // guard

#include "verilated.h"

class Vmul__Syms;

class Vmul___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(req_i,0,0);
    VL_OUT8(ready_o,0,0);
    CData/*0:0*/ mul__DOT____Vcellout__mult_cellB__ready_o;
    CData/*0:0*/ mul__DOT____Vcellout__mult_cell0__ready_o;
    CData/*0:0*/ mul__DOT____Vcellout__mult_cell1__ready_o;
    CData/*0:0*/ mul__DOT____Vcellout__mult_cell2__ready_o;
    CData/*0:0*/ mul__DOT____Vcellout__mult_cell3__ready_o;
    CData/*0:0*/ mul__DOT____Vcellout__mult_cell4__ready_o;
    CData/*0:0*/ mul__DOT____VdfgExtracted_h0dd22bbe__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
    CData/*0:0*/ __VactContinue;
    VL_IN(a_i,31,0);
    VL_IN(b_i,31,0);
    IData/*31:0*/ mul__DOT__mult_cellB__DOT__unnamedblk1__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cellB__DOT__unnamedblk2__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell0__DOT__unnamedblk1__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell0__DOT__unnamedblk2__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell1__DOT__unnamedblk1__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell1__DOT__unnamedblk2__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell2__DOT__unnamedblk1__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell2__DOT__unnamedblk2__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell3__DOT__unnamedblk1__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell3__DOT__unnamedblk2__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell4__DOT__unnamedblk1__DOT__device;
    IData/*31:0*/ mul__DOT__mult_cell4__DOT__unnamedblk2__DOT__device;
    VlWide<3>/*64:0*/ mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(result_o,63,0);
    VlUnpacked<VlWide<3>/*64:0*/, 32> mul__DOT__a_temp;
    VlUnpacked<VlWide<3>/*64:0*/, 32> mul__DOT____Vcellout__mult_cellB__result_o;
    VlUnpacked<VlWide<3>/*64:0*/, 16> mul__DOT__a_next1;
    VlUnpacked<VlWide<3>/*64:0*/, 16> mul__DOT____Vcellout__mult_cell0__result_o;
    VlUnpacked<VlWide<3>/*64:0*/, 32> mul__DOT____Vcellinp__mult_cell0__a_i;
    VlUnpacked<VlWide<3>/*64:0*/, 8> mul__DOT__a_next2;
    VlUnpacked<VlWide<3>/*64:0*/, 8> mul__DOT____Vcellout__mult_cell1__result_o;
    VlUnpacked<VlWide<3>/*64:0*/, 16> mul__DOT____Vcellinp__mult_cell1__a_i;
    VlUnpacked<VlWide<3>/*64:0*/, 4> mul__DOT__a_next3;
    VlUnpacked<VlWide<3>/*64:0*/, 4> mul__DOT____Vcellout__mult_cell2__result_o;
    VlUnpacked<VlWide<3>/*64:0*/, 8> mul__DOT____Vcellinp__mult_cell2__a_i;
    VlUnpacked<VlWide<3>/*64:0*/, 2> mul__DOT__a_next4;
    VlUnpacked<VlWide<3>/*64:0*/, 2> mul__DOT____Vcellout__mult_cell3__result_o;
    VlUnpacked<VlWide<3>/*64:0*/, 4> mul__DOT____Vcellinp__mult_cell3__a_i;
    VlUnpacked<VlWide<3>/*64:0*/, 1> mul__DOT__a_next5;
    VlUnpacked<VlWide<3>/*64:0*/, 1> mul__DOT____Vcellout__mult_cell4__result_o;
    VlUnpacked<VlWide<3>/*64:0*/, 2> mul__DOT____Vcellinp__mult_cell4__a_i;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmul___024root(Vmul__Syms* symsp, const char* name);
    ~Vmul___024root();
    VL_UNCOPYABLE(Vmul___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
