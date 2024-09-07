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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_IN8(req_i,0,0);
        VL_OUT8(ready_o,0,0);
        CData/*0:0*/ mul__DOT____Vcellout__u_mult_step0__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o;
        CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
        CData/*0:0*/ __VactContinue;
        VL_IN(a_i,31,0);
        VL_IN(b_i,31,0);
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__u_mult_step0__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__u_mult_step0__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__u_mult_step0__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o;
    };
    struct {
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o;
    };
    struct {
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o;
        VlWide<3>/*64:0*/ mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o;
        IData/*31:0*/ mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(result_o,63,0);
        VlUnpacked<IData/*31:0*/, 32> mul__DOT__a_temp;
        VlUnpacked<IData/*31:0*/, 32> mul__DOT__b_temp;
        VlUnpacked<VlWide<3>/*64:0*/, 32> mul__DOT__acc_temp;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
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
