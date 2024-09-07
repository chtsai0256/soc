// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "verilated.h"

#include "Vmul___024root.h"

VL_INLINE_OPT void Vmul___024root___ico_sequent__TOP__0(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ready_o = ((~ (IData)(vlSelf->rst_i)) & 
                       ((IData)(vlSelf->req_i) & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o)));
    vlSelf->result_o = ((IData)(vlSelf->rst_i) ? 0ULL
                         : ((IData)(vlSelf->req_i) ? 
                            (((QData)((IData)(vlSelf->mul__DOT__acc_temp
                                              [0x1fU][1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->mul__DOT__acc_temp
                                                          [0x1fU][0U])))
                             : 0ULL));
}

void Vmul___024root___eval_ico(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmul___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmul___024root___eval_act(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmul___024root___nba_sequent__TOP__0(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h633326fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h98af809c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6c157356__0;
    VlWide<3>/*95:0*/ __Vtemp_hede2fdd3__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd569c67__0;
    VlWide<3>/*95:0*/ __Vtemp_h91566361__0;
    VlWide<3>/*95:0*/ __Vtemp_h905b5dad__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e4f5dce__0;
    VlWide<3>/*95:0*/ __Vtemp_hbb707974__0;
    VlWide<3>/*95:0*/ __Vtemp_h3c98fcf5__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf90a939__0;
    VlWide<3>/*95:0*/ __Vtemp_h989220d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h852f0556__0;
    VlWide<3>/*95:0*/ __Vtemp_hf8c7ddbf__0;
    VlWide<3>/*95:0*/ __Vtemp_hfaba09f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h8acab90d__0;
    VlWide<3>/*95:0*/ __Vtemp_heb68d4fb__0;
    VlWide<3>/*95:0*/ __Vtemp_hb95f870c__0;
    VlWide<3>/*95:0*/ __Vtemp_hae2167cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h9d0a1bf1__0;
    VlWide<3>/*95:0*/ __Vtemp_ha057055c__0;
    VlWide<3>/*95:0*/ __Vtemp_hcee793f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h7251a409__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd3aef8f__0;
    VlWide<3>/*95:0*/ __Vtemp_hb9a7513d__0;
    VlWide<3>/*95:0*/ __Vtemp_h841efb1a__0;
    VlWide<3>/*95:0*/ __Vtemp_hbb786230__0;
    VlWide<3>/*95:0*/ __Vtemp_ha216eb52__0;
    VlWide<3>/*95:0*/ __Vtemp_h4afbef6e__0;
    VlWide<3>/*95:0*/ __Vtemp_h147e274d__0;
    VlWide<3>/*95:0*/ __Vtemp_h4656b962__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f8dc2d3__0;
    VlWide<3>/*95:0*/ __Vtemp_h30c87529__0;
    VlWide<3>/*95:0*/ __Vtemp_h513bbae5__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5b587a9__0;
    VlWide<3>/*95:0*/ __Vtemp_h5cd78308__0;
    VlWide<3>/*95:0*/ __Vtemp_h99b3b909__0;
    VlWide<3>/*95:0*/ __Vtemp_h91ce313f__0;
    VlWide<3>/*95:0*/ __Vtemp_h242b6353__0;
    VlWide<3>/*95:0*/ __Vtemp_h21eef32d__0;
    VlWide<3>/*95:0*/ __Vtemp_hab2accf2__0;
    VlWide<3>/*95:0*/ __Vtemp_h018aaa5c__0;
    VlWide<3>/*95:0*/ __Vtemp_h317945ba__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2c4d838__0;
    VlWide<3>/*95:0*/ __Vtemp_h685818b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h61f16eb2__0;
    VlWide<3>/*95:0*/ __Vtemp_hc68c4059__0;
    VlWide<3>/*95:0*/ __Vtemp_hdaad1241__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2502fb8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6a55870a__0;
    VlWide<3>/*95:0*/ __Vtemp_ha5ca7eee__0;
    VlWide<3>/*95:0*/ __Vtemp_h59e6c453__0;
    VlWide<3>/*95:0*/ __Vtemp_h89ed9f01__0;
    VlWide<3>/*95:0*/ __Vtemp_hb77b99d9__0;
    VlWide<3>/*95:0*/ __Vtemp_h8799174e__0;
    VlWide<3>/*95:0*/ __Vtemp_h50486ac3__0;
    VlWide<3>/*95:0*/ __Vtemp_hed6b0b91__0;
    VlWide<3>/*95:0*/ __Vtemp_hadbcdde2__0;
    VlWide<3>/*95:0*/ __Vtemp_h38a2c369__0;
    VlWide<3>/*95:0*/ __Vtemp_h574139fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h8f6f8f87__0;
    VlWide<3>/*95:0*/ __Vtemp_h511836a3__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__0;
    // Body
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h633326fb__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h98af809c__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o, __Vtemp_h633326fb__0);
    vlSelf->ready_o = ((~ (IData)(vlSelf->rst_i)) & 
                       ((IData)(vlSelf->req_i) & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o)));
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x1fU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x1fU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h98af809c__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h98af809c__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h98af809c__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x1fU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x1fU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x1fU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1fU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1fU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h6c157356__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hede2fdd3__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o, __Vtemp_h6c157356__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x1eU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x1eU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hede2fdd3__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hede2fdd3__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hede2fdd3__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x1eU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x1eU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x1eU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1eU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1eU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hcd569c67__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h91566361__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o, __Vtemp_hcd569c67__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x1dU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x1dU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h91566361__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h91566361__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h91566361__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x1dU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x1dU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x1dU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1dU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1dU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h905b5dad__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h7e4f5dce__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o, __Vtemp_h905b5dad__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x1cU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x1cU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h7e4f5dce__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h7e4f5dce__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h7e4f5dce__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x1cU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x1cU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x1cU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1cU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1cU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hbb707974__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h3c98fcf5__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o, __Vtemp_hbb707974__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x1bU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x1bU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h3c98fcf5__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h3c98fcf5__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h3c98fcf5__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x1bU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x1bU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x1bU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1bU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1bU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hbf90a939__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h989220d1__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o, __Vtemp_hbf90a939__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x1aU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x1aU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h989220d1__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h989220d1__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h989220d1__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x1aU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x1aU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x1aU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x1aU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x1aU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h852f0556__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hf8c7ddbf__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o, __Vtemp_h852f0556__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x19U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x19U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hf8c7ddbf__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hf8c7ddbf__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hf8c7ddbf__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x19U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x19U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x19U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x19U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x19U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hfaba09f3__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h8acab90d__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o, __Vtemp_hfaba09f3__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x18U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x18U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h8acab90d__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h8acab90d__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h8acab90d__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x18U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x18U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x18U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x18U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x18U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_heb68d4fb__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hb95f870c__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o, __Vtemp_heb68d4fb__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x17U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x17U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hb95f870c__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hb95f870c__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hb95f870c__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x17U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x17U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x17U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x17U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x17U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hae2167cc__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h9d0a1bf1__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o, __Vtemp_hae2167cc__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x16U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x16U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h9d0a1bf1__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h9d0a1bf1__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h9d0a1bf1__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x16U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x16U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x16U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x16U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x16U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_ha057055c__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hcee793f4__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o, __Vtemp_ha057055c__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x15U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x15U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hcee793f4__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hcee793f4__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hcee793f4__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x15U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x15U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x15U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x15U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x15U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h7251a409__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hdd3aef8f__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o, __Vtemp_h7251a409__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x14U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x14U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hdd3aef8f__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hdd3aef8f__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hdd3aef8f__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x14U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x14U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x14U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x14U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x14U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hb9a7513d__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h841efb1a__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o, __Vtemp_hb9a7513d__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x13U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x13U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h841efb1a__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h841efb1a__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h841efb1a__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x13U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x13U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x13U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x13U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x13U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hbb786230__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_ha216eb52__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o, __Vtemp_hbb786230__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x12U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x12U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_ha216eb52__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_ha216eb52__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_ha216eb52__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x12U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x12U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x12U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x12U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x12U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h4afbef6e__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h147e274d__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o, __Vtemp_h4afbef6e__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x11U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x11U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h147e274d__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h147e274d__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h147e274d__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x11U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x11U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x11U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x11U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x11U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h4656b962__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h5f8dc2d3__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o, __Vtemp_h4656b962__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0x10U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0x10U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h5f8dc2d3__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h5f8dc2d3__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h5f8dc2d3__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0x10U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0x10U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0x10U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0x10U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0x10U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h30c87529__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h513bbae5__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o, __Vtemp_h30c87529__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0xfU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0xfU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h513bbae5__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h513bbae5__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h513bbae5__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0xfU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0xfU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0xfU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xfU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xfU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hd5b587a9__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h5cd78308__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o, __Vtemp_hd5b587a9__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0xeU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0xeU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h5cd78308__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h5cd78308__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h5cd78308__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0xeU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0xeU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0xeU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xeU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xeU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h99b3b909__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h91ce313f__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o, __Vtemp_h99b3b909__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0xdU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0xdU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h91ce313f__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h91ce313f__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h91ce313f__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0xdU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0xdU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0xdU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xdU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xdU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h242b6353__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h21eef32d__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o, __Vtemp_h242b6353__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0xcU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0xcU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h21eef32d__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h21eef32d__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h21eef32d__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0xcU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0xcU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0xcU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xcU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xcU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hab2accf2__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h018aaa5c__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o, __Vtemp_hab2accf2__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0xbU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0xbU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h018aaa5c__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h018aaa5c__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h018aaa5c__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0xbU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0xbU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0xbU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xbU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xbU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h317945ba__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hb2c4d838__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o, __Vtemp_h317945ba__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0xaU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0xaU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hb2c4d838__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hb2c4d838__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hb2c4d838__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0xaU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[0xaU] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0xaU][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0xaU][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0xaU][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h685818b8__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h61f16eb2__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o, __Vtemp_h685818b8__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[9U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[9U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h61f16eb2__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h61f16eb2__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h61f16eb2__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[9U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[9U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[9U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[9U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[9U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hc68c4059__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hdaad1241__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o, __Vtemp_hc68c4059__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[8U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[8U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hdaad1241__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hdaad1241__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hdaad1241__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[8U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[8U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[8U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[8U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[8U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hb2502fb8__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h6a55870a__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o, __Vtemp_hb2502fb8__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[7U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[7U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h6a55870a__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h6a55870a__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h6a55870a__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[7U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[7U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[7U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[7U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[7U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_ha5ca7eee__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h59e6c453__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o, __Vtemp_ha5ca7eee__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[6U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[6U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h59e6c453__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h59e6c453__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h59e6c453__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[6U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[6U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[6U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[6U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[6U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h89ed9f01__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hb77b99d9__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o, __Vtemp_h89ed9f01__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[5U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[5U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hb77b99d9__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hb77b99d9__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hb77b99d9__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[5U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[5U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[5U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[5U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[5U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h8799174e__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h50486ac3__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o, __Vtemp_h8799174e__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[4U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[4U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h50486ac3__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h50486ac3__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h50486ac3__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[4U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[4U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[4U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[4U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[4U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_hed6b0b91__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_hadbcdde2__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o, __Vtemp_hed6b0b91__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[3U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[3U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_hadbcdde2__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_hadbcdde2__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_hadbcdde2__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[3U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[3U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[3U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[3U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[3U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h38a2c369__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o);
    VL_ADD_W(3, __Vtemp_h574139fb__0, vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o, __Vtemp_h38a2c369__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h574139fb__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h574139fb__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h574139fb__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[2U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[2U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[2U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->req_i) 
                                         & (IData)(vlSelf->mul__DOT____Vcellout__u_mult_step0__ready_o)));
    VL_EXTEND_WI(65,32, __Vtemp_h8f6f8f87__0, vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o);
    VL_ADD_W(3, __Vtemp_h511836a3__0, vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o, __Vtemp_h8f6f8f87__0);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o = 0U;
        vlSelf->mul__DOT__b_temp[1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o = 0U;
        vlSelf->mul__DOT__a_temp[1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->mul__DOT____Vcellout__u_mult_step0__ready_o) {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o 
                    = (vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o 
                       >> 1U);
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o 
                    = (vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o 
                       << 1U);
                if ((1U & vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o)) {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] 
                        = __Vtemp_h511836a3__0[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] 
                        = __Vtemp_h511836a3__0[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & __Vtemp_h511836a3__0[2U]);
                } else {
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] 
                        = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] 
                        = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U];
                    vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] 
                        = (1U & vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U]);
                }
            } else {
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o;
        vlSelf->mul__DOT__a_temp[1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o;
    }
    vlSelf->mul__DOT__acc_temp[1U][0U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[1U][1U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[1U][2U] = vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o[2U];
    vlSelf->mul__DOT____Vcellout__u_mult_step0__ready_o 
        = ((~ (IData)(vlSelf->rst_i)) & (IData)(vlSelf->req_i));
    VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__0, vlSelf->a_i);
    if (vlSelf->rst_i) {
        vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o = 0U;
        vlSelf->mul__DOT__b_temp[0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o;
        vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o = 0U;
        vlSelf->mul__DOT__a_temp[0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o;
        vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
        vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
        vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
    } else {
        if (vlSelf->req_i) {
            if (vlSelf->req_i) {
                vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o 
                    = (vlSelf->b_i >> 1U);
                vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o 
                    = (vlSelf->a_i << 1U);
                if ((1U & vlSelf->b_i)) {
                    vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U] 
                        = __Vtemp_h4bfc2a62__0[0U];
                    vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U] 
                        = __Vtemp_h4bfc2a62__0[1U];
                    vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U] 
                        = __Vtemp_h4bfc2a62__0[2U];
                } else {
                    vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
                    vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
                    vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
                }
            } else {
                vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o = 0U;
                vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o = 0U;
                vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
                vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
                vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
            }
        } else {
            vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o = 0U;
            vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o = 0U;
            vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
            vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
            vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
        }
        vlSelf->mul__DOT__b_temp[0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o;
        vlSelf->mul__DOT__a_temp[0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o;
    }
    vlSelf->mul__DOT__acc_temp[0U][0U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[0U];
    vlSelf->mul__DOT__acc_temp[0U][1U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[1U];
    vlSelf->mul__DOT__acc_temp[0U][2U] = vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o[2U];
    vlSelf->result_o = ((IData)(vlSelf->rst_i) ? 0ULL
                         : ((IData)(vlSelf->req_i) ? 
                            (((QData)((IData)(vlSelf->mul__DOT__acc_temp
                                              [0x1fU][1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->mul__DOT__acc_temp
                                                          [0x1fU][0U])))
                             : 0ULL));
}

void Vmul___024root___eval_nba(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmul___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmul___024root___eval_triggers__ico(Vmul___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__ico(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
void Vmul___024root___eval_triggers__act(Vmul___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__act(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__nba(Vmul___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul___024root___eval(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmul___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if ((0x64U < vlSelf->__VicoIterCount)) {
#ifdef VL_DEBUG
                Vmul___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("mul.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmul___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmul___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    Vmul___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mul.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmul___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                Vmul___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mul.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmul___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmul___024root___eval_debug_assertions(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->req_i & 0xfeU))) {
        Verilated::overWidthError("req_i");}
}
#endif  // VL_DEBUG
