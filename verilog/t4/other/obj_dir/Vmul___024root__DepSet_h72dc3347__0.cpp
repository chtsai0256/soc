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
    vlSelf->mul__DOT____VdfgExtracted_h0dd22bbe__0 
        = (1U & ((~ (IData)((0U != vlSelf->a_i))) | 
                 (~ (IData)((0U != vlSelf->b_i)))));
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
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v0;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v32;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v0;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v16;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v16;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v17;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v18;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v19;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v20;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v21;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v22;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v23;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v24;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v25;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v26;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v27;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v28;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v29;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v30;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v31;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v0;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v8;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v8;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v9;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v10;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v11;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v12;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v13;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v14;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v15;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v0;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v4;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v4;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v5;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v6;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v7;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v0;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v2;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v2;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v3;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v0;
    VlWide<3>/*64:0*/ __Vdlyvval__mul__DOT____Vcellout__mult_cell4__result_o__v1;
    CData/*0:0*/ __Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v1;
    VlWide<3>/*95:0*/ __Vtemp_hd7a2f452__0;
    VlWide<3>/*95:0*/ __Vtemp_hd7a2c697__0;
    VlWide<3>/*95:0*/ __Vtemp_h0604421c__0;
    VlWide<3>/*95:0*/ __Vtemp_hd7a2c5d8__0;
    VlWide<3>/*95:0*/ __Vtemp_hd7a2c5de__0;
    VlWide<3>/*95:0*/ __Vtemp_hb5e465df__0;
    VlWide<3>/*95:0*/ __Vtemp_h3dc7e436__0;
    VlWide<3>/*95:0*/ __Vtemp_h3dc7e459__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b8dc8d9__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc060d__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc2ee4__0;
    VlWide<3>/*95:0*/ __Vtemp_hd46c2282__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc07a3__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc3449__0;
    VlWide<3>/*95:0*/ __Vtemp_h08b737c0__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc2f0a__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc33cf__0;
    VlWide<3>/*95:0*/ __Vtemp_h10e08650__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc3490__0;
    VlWide<3>/*95:0*/ __Vtemp_hdfdc3578__0;
    VlWide<3>/*95:0*/ __Vtemp_h59c74e9c__0;
    VlWide<3>/*95:0*/ __Vtemp_hd12861d4__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1286293__0;
    VlWide<3>/*95:0*/ __Vtemp_h2aa8a468__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1280b49__0;
    VlWide<3>/*95:0*/ __Vtemp_hd128620a__0;
    VlWide<3>/*95:0*/ __Vtemp_hd66a2e7e__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1280ad7__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1280b98__0;
    VlWide<3>/*95:0*/ __Vtemp_hecf2953c__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1286040__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1285eff__0;
    VlWide<3>/*95:0*/ __Vtemp_h822f2084__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1285fd2__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1286091__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc2cacdd__0;
    VlWide<3>/*95:0*/ __Vtemp_hd128613b__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1285ffc__0;
    VlWide<3>/*95:0*/ __Vtemp_h389494cc__0;
    VlWide<3>/*95:0*/ __Vtemp_hd12860bd__0;
    VlWide<3>/*95:0*/ __Vtemp_hd128617e__0;
    VlWide<3>/*95:0*/ __Vtemp_h15fab5cd__0;
    VlWide<3>/*95:0*/ __Vtemp_hd128663a__0;
    VlWide<3>/*95:0*/ __Vtemp_hd12864f9__0;
    VlWide<3>/*95:0*/ __Vtemp_h3f8e57b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e30d__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e350__0;
    VlWide<3>/*95:0*/ __Vtemp_h6d7ca9c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e88a__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e558ad7__0;
    VlWide<3>/*95:0*/ __Vtemp_h45cd344f__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e80c__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e849__0;
    VlWide<3>/*95:0*/ __Vtemp_h7dc71e83__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e3e1__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e424__0;
    VlWide<3>/*95:0*/ __Vtemp_h07d29635__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e56f__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e5a2__0;
    VlWide<3>/*95:0*/ __Vtemp_hb62871ec__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e4e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e525__0;
    VlWide<3>/*95:0*/ __Vtemp_h1bc33a3d__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e266__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e2a3__0;
    VlWide<3>/*95:0*/ __Vtemp_h574cdec1__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55dde7__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55de1a__0;
    VlWide<3>/*95:0*/ __Vtemp_hf835dc7f__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55df59__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55df9c__0;
    VlWide<3>/*95:0*/ __Vtemp_hfb8c72a7__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e6de__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e71b__0;
    VlWide<3>/*95:0*/ __Vtemp_h48ed5139__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e460__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55e49d__0;
    VlWide<3>/*95:0*/ __Vtemp_h00074823__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55f17d__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55efc0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6cdc93b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55f0fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55f13e__0;
    VlWide<3>/*95:0*/ __Vtemp_h46a70071__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55ee7c__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55f0b9__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e6706ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55edfa__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e55ee47__0;
    VlWide<3>/*95:0*/ __Vtemp_hc3599ce0__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e558b83__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e5589c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h5fbfc96e__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__1;
    VlWide<3>/*95:0*/ __Vtemp_hcecfd3a0__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__2;
    VlWide<3>/*95:0*/ __Vtemp_h4f22fcbd__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__3;
    VlWide<3>/*95:0*/ __Vtemp_hfd662565__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__4;
    VlWide<3>/*95:0*/ __Vtemp_h95ec72ba__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__5;
    VlWide<3>/*95:0*/ __Vtemp_h2049f340__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__6;
    VlWide<3>/*95:0*/ __Vtemp_h96c1b9b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__7;
    VlWide<3>/*95:0*/ __Vtemp_h2c3d13c7__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__8;
    VlWide<3>/*95:0*/ __Vtemp_h4680c09f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__9;
    VlWide<3>/*95:0*/ __Vtemp_hfef2ac87__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__10;
    VlWide<3>/*95:0*/ __Vtemp_h95599895__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__11;
    VlWide<3>/*95:0*/ __Vtemp_hc0992ffa__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__12;
    VlWide<3>/*95:0*/ __Vtemp_h7bd25505__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__13;
    VlWide<3>/*95:0*/ __Vtemp_hb96047b9__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__14;
    VlWide<3>/*95:0*/ __Vtemp_hf1f6f39c__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__15;
    VlWide<3>/*95:0*/ __Vtemp_h595cda14__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__16;
    VlWide<3>/*95:0*/ __Vtemp_h07d5ac92__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__17;
    VlWide<3>/*95:0*/ __Vtemp_h0bae1082__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__18;
    VlWide<3>/*95:0*/ __Vtemp_h7de27e4f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__19;
    VlWide<3>/*95:0*/ __Vtemp_h046f2469__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__20;
    VlWide<3>/*95:0*/ __Vtemp_hcec4b7f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__21;
    VlWide<3>/*95:0*/ __Vtemp_h68c59ffb__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__22;
    VlWide<3>/*95:0*/ __Vtemp_h852ff296__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__23;
    VlWide<3>/*95:0*/ __Vtemp_h5640607a__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__24;
    VlWide<3>/*95:0*/ __Vtemp_he663c3e4__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__25;
    VlWide<3>/*95:0*/ __Vtemp_h7a94e902__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__26;
    VlWide<3>/*95:0*/ __Vtemp_h0fd88c04__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__27;
    VlWide<3>/*95:0*/ __Vtemp_h520b084e__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__28;
    VlWide<3>/*95:0*/ __Vtemp_h9ab4008a__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__29;
    VlWide<3>/*95:0*/ __Vtemp_hc6eea338__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__30;
    VlWide<3>/*95:0*/ __Vtemp_h6bc8b5b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__31;
    VlWide<3>/*95:0*/ __Vtemp_h27ab4750__0;
    // Body
    __Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v0 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v2 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v0 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v1 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v0 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v4 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v0 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v8 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v0 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v16 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v0 = 0U;
    __Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v32 = 0U;
    if ((1U & ((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->req_i))))) {
        vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk1__DOT__device = 0x20U;
        __Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v0 = 1U;
    } else {
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__0, vlSelf->a_i);
        if ((1U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[0U] 
                = __Vtemp_h4bfc2a62__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[1U] 
                = __Vtemp_h4bfc2a62__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[2U] 
                = __Vtemp_h4bfc2a62__0[2U];
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[2U] = 0U;
        }
        __Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v32 = 1U;
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__1, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hcecfd3a0__0, __Vtemp_h4bfc2a62__1, 1U);
        if ((2U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[0U] 
                = __Vtemp_hcecfd3a0__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[1U] 
                = __Vtemp_hcecfd3a0__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[2U] 
                = (1U & __Vtemp_hcecfd3a0__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__2, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h4f22fcbd__0, __Vtemp_h4bfc2a62__2, 2U);
        if ((4U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[0U] 
                = __Vtemp_h4f22fcbd__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[1U] 
                = __Vtemp_h4f22fcbd__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[2U] 
                = (1U & __Vtemp_h4f22fcbd__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__3, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hfd662565__0, __Vtemp_h4bfc2a62__3, 3U);
        if ((8U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[0U] 
                = __Vtemp_hfd662565__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[1U] 
                = __Vtemp_hfd662565__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[2U] 
                = (1U & __Vtemp_hfd662565__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__4, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h95ec72ba__0, __Vtemp_h4bfc2a62__4, 4U);
        if ((0x10U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[0U] 
                = __Vtemp_h95ec72ba__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[1U] 
                = __Vtemp_h95ec72ba__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[2U] 
                = (1U & __Vtemp_h95ec72ba__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__5, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h2049f340__0, __Vtemp_h4bfc2a62__5, 5U);
        if ((0x20U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[0U] 
                = __Vtemp_h2049f340__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[1U] 
                = __Vtemp_h2049f340__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[2U] 
                = (1U & __Vtemp_h2049f340__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__6, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h96c1b9b5__0, __Vtemp_h4bfc2a62__6, 6U);
        if ((0x40U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[0U] 
                = __Vtemp_h96c1b9b5__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[1U] 
                = __Vtemp_h96c1b9b5__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[2U] 
                = (1U & __Vtemp_h96c1b9b5__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__7, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h2c3d13c7__0, __Vtemp_h4bfc2a62__7, 7U);
        if ((0x80U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[0U] 
                = __Vtemp_h2c3d13c7__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[1U] 
                = __Vtemp_h2c3d13c7__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[2U] 
                = (1U & __Vtemp_h2c3d13c7__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__8, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h4680c09f__0, __Vtemp_h4bfc2a62__8, 8U);
        if ((0x100U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[0U] 
                = __Vtemp_h4680c09f__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[1U] 
                = __Vtemp_h4680c09f__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[2U] 
                = (1U & __Vtemp_h4680c09f__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__9, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hfef2ac87__0, __Vtemp_h4bfc2a62__9, 9U);
        if ((0x200U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[0U] 
                = __Vtemp_hfef2ac87__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[1U] 
                = __Vtemp_hfef2ac87__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[2U] 
                = (1U & __Vtemp_hfef2ac87__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__10, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h95599895__0, __Vtemp_h4bfc2a62__10, 0xaU);
        if ((0x400U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[0U] 
                = __Vtemp_h95599895__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[1U] 
                = __Vtemp_h95599895__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[2U] 
                = (1U & __Vtemp_h95599895__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__11, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hc0992ffa__0, __Vtemp_h4bfc2a62__11, 0xbU);
        if ((0x800U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[0U] 
                = __Vtemp_hc0992ffa__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[1U] 
                = __Vtemp_hc0992ffa__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[2U] 
                = (1U & __Vtemp_hc0992ffa__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__12, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h7bd25505__0, __Vtemp_h4bfc2a62__12, 0xcU);
        if ((0x1000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[0U] 
                = __Vtemp_h7bd25505__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[1U] 
                = __Vtemp_h7bd25505__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[2U] 
                = (1U & __Vtemp_h7bd25505__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__13, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hb96047b9__0, __Vtemp_h4bfc2a62__13, 0xdU);
        if ((0x2000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[0U] 
                = __Vtemp_hb96047b9__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[1U] 
                = __Vtemp_hb96047b9__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[2U] 
                = (1U & __Vtemp_hb96047b9__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__14, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hf1f6f39c__0, __Vtemp_h4bfc2a62__14, 0xeU);
        if ((0x4000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[0U] 
                = __Vtemp_hf1f6f39c__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[1U] 
                = __Vtemp_hf1f6f39c__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[2U] 
                = (1U & __Vtemp_hf1f6f39c__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__15, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h595cda14__0, __Vtemp_h4bfc2a62__15, 0xfU);
        if ((0x8000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[0U] 
                = __Vtemp_h595cda14__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[1U] 
                = __Vtemp_h595cda14__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[2U] 
                = (1U & __Vtemp_h595cda14__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__16, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h07d5ac92__0, __Vtemp_h4bfc2a62__16, 0x10U);
        if ((0x10000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[0U] 
                = __Vtemp_h07d5ac92__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[1U] 
                = __Vtemp_h07d5ac92__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[2U] 
                = (1U & __Vtemp_h07d5ac92__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__17, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h0bae1082__0, __Vtemp_h4bfc2a62__17, 0x11U);
        if ((0x20000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[0U] 
                = __Vtemp_h0bae1082__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[1U] 
                = __Vtemp_h0bae1082__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[2U] 
                = (1U & __Vtemp_h0bae1082__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__18, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h7de27e4f__0, __Vtemp_h4bfc2a62__18, 0x12U);
        if ((0x40000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[0U] 
                = __Vtemp_h7de27e4f__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[1U] 
                = __Vtemp_h7de27e4f__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[2U] 
                = (1U & __Vtemp_h7de27e4f__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__19, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h046f2469__0, __Vtemp_h4bfc2a62__19, 0x13U);
        if ((0x80000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[0U] 
                = __Vtemp_h046f2469__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[1U] 
                = __Vtemp_h046f2469__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[2U] 
                = (1U & __Vtemp_h046f2469__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__20, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hcec4b7f8__0, __Vtemp_h4bfc2a62__20, 0x14U);
        if ((0x100000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[0U] 
                = __Vtemp_hcec4b7f8__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[1U] 
                = __Vtemp_hcec4b7f8__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[2U] 
                = (1U & __Vtemp_hcec4b7f8__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__21, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h68c59ffb__0, __Vtemp_h4bfc2a62__21, 0x15U);
        if ((0x200000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[0U] 
                = __Vtemp_h68c59ffb__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[1U] 
                = __Vtemp_h68c59ffb__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[2U] 
                = (1U & __Vtemp_h68c59ffb__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__22, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h852ff296__0, __Vtemp_h4bfc2a62__22, 0x16U);
        if ((0x400000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[0U] 
                = __Vtemp_h852ff296__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[1U] 
                = __Vtemp_h852ff296__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[2U] 
                = (1U & __Vtemp_h852ff296__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__23, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h5640607a__0, __Vtemp_h4bfc2a62__23, 0x17U);
        if ((0x800000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[0U] 
                = __Vtemp_h5640607a__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[1U] 
                = __Vtemp_h5640607a__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[2U] 
                = (1U & __Vtemp_h5640607a__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__24, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_he663c3e4__0, __Vtemp_h4bfc2a62__24, 0x18U);
        if ((0x1000000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[0U] 
                = __Vtemp_he663c3e4__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[1U] 
                = __Vtemp_he663c3e4__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[2U] 
                = (1U & __Vtemp_he663c3e4__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__25, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h7a94e902__0, __Vtemp_h4bfc2a62__25, 0x19U);
        if ((0x2000000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[0U] 
                = __Vtemp_h7a94e902__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[1U] 
                = __Vtemp_h7a94e902__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[2U] 
                = (1U & __Vtemp_h7a94e902__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__26, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h0fd88c04__0, __Vtemp_h4bfc2a62__26, 0x1aU);
        if ((0x4000000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[0U] 
                = __Vtemp_h0fd88c04__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[1U] 
                = __Vtemp_h0fd88c04__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[2U] 
                = (1U & __Vtemp_h0fd88c04__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__27, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h520b084e__0, __Vtemp_h4bfc2a62__27, 0x1bU);
        if ((0x8000000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[0U] 
                = __Vtemp_h520b084e__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[1U] 
                = __Vtemp_h520b084e__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[2U] 
                = (1U & __Vtemp_h520b084e__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__28, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h9ab4008a__0, __Vtemp_h4bfc2a62__28, 0x1cU);
        if ((0x10000000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[0U] 
                = __Vtemp_h9ab4008a__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[1U] 
                = __Vtemp_h9ab4008a__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[2U] 
                = (1U & __Vtemp_h9ab4008a__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__29, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hc6eea338__0, __Vtemp_h4bfc2a62__29, 0x1dU);
        if ((0x20000000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[0U] 
                = __Vtemp_hc6eea338__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[1U] 
                = __Vtemp_hc6eea338__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[2U] 
                = (1U & __Vtemp_hc6eea338__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__30, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h6bc8b5b1__0, __Vtemp_h4bfc2a62__30, 0x1eU);
        if ((0x40000000U & vlSelf->b_i)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[0U] 
                = __Vtemp_h6bc8b5b1__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[1U] 
                = __Vtemp_h6bc8b5b1__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[2U] 
                = (1U & __Vtemp_h6bc8b5b1__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[2U] = 0U;
        }
        VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__31, vlSelf->a_i);
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h27ab4750__0, __Vtemp_h4bfc2a62__31, 0x1fU);
        if ((vlSelf->b_i >> 0x1fU)) {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[0U] 
                = __Vtemp_h27ab4750__0[0U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[1U] 
                = __Vtemp_h27ab4750__0[1U];
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[2U] 
                = (1U & __Vtemp_h27ab4750__0[2U]);
        } else {
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[0U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[1U] = 0U;
            __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[2U] = 0U;
        }
    }
    if ((1U & (~ (1U & ((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->req_i))))))) {
        vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk2__DOT__device = 0x20U;
    }
    if ((1U & (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o))) 
               | (~ (IData)(vlSelf->req_i))))) {
        vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk1__DOT__device = 0x10U;
        __Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v0 = 1U;
    } else {
        __Vtemp_h7e55e30d__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0U][0U];
        __Vtemp_h7e55e30d__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0U][1U];
        __Vtemp_h7e55e30d__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0U][2U];
        __Vtemp_h7e55e350__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [1U][0U];
        __Vtemp_h7e55e350__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [1U][1U];
        __Vtemp_h7e55e350__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_h6d7ca9c8__0, __Vtemp_h7e55e30d__0, __Vtemp_h7e55e350__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v16[0U] 
            = __Vtemp_h6d7ca9c8__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v16[1U] 
            = __Vtemp_h6d7ca9c8__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v16[2U] 
            = (1U & __Vtemp_h6d7ca9c8__0[2U]);
        __Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v16 = 1U;
        __Vtemp_h7e55e88a__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [2U][0U];
        __Vtemp_h7e55e88a__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [2U][1U];
        __Vtemp_h7e55e88a__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [2U][2U];
        __Vtemp_h7e558ad7__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [3U][0U];
        __Vtemp_h7e558ad7__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [3U][1U];
        __Vtemp_h7e558ad7__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_h45cd344f__0, __Vtemp_h7e55e88a__0, __Vtemp_h7e558ad7__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v17[0U] 
            = __Vtemp_h45cd344f__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v17[1U] 
            = __Vtemp_h45cd344f__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v17[2U] 
            = (1U & __Vtemp_h45cd344f__0[2U]);
        __Vtemp_h7e55e80c__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [4U][0U];
        __Vtemp_h7e55e80c__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [4U][1U];
        __Vtemp_h7e55e80c__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [4U][2U];
        __Vtemp_h7e55e849__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [5U][0U];
        __Vtemp_h7e55e849__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [5U][1U];
        __Vtemp_h7e55e849__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp_h7dc71e83__0, __Vtemp_h7e55e80c__0, __Vtemp_h7e55e849__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v18[0U] 
            = __Vtemp_h7dc71e83__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v18[1U] 
            = __Vtemp_h7dc71e83__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v18[2U] 
            = (1U & __Vtemp_h7dc71e83__0[2U]);
        __Vtemp_h7e55e3e1__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [6U][0U];
        __Vtemp_h7e55e3e1__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [6U][1U];
        __Vtemp_h7e55e3e1__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [6U][2U];
        __Vtemp_h7e55e424__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [7U][0U];
        __Vtemp_h7e55e424__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [7U][1U];
        __Vtemp_h7e55e424__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp_h07d29635__0, __Vtemp_h7e55e3e1__0, __Vtemp_h7e55e424__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v19[0U] 
            = __Vtemp_h07d29635__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v19[1U] 
            = __Vtemp_h07d29635__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v19[2U] 
            = (1U & __Vtemp_h07d29635__0[2U]);
        __Vtemp_h7e55e56f__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [8U][0U];
        __Vtemp_h7e55e56f__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [8U][1U];
        __Vtemp_h7e55e56f__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [8U][2U];
        __Vtemp_h7e55e5a2__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [9U][0U];
        __Vtemp_h7e55e5a2__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [9U][1U];
        __Vtemp_h7e55e5a2__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [9U][2U];
        VL_ADD_W(3, __Vtemp_hb62871ec__0, __Vtemp_h7e55e56f__0, __Vtemp_h7e55e5a2__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v20[0U] 
            = __Vtemp_hb62871ec__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v20[1U] 
            = __Vtemp_hb62871ec__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v20[2U] 
            = (1U & __Vtemp_hb62871ec__0[2U]);
        __Vtemp_h7e55e4e8__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][0U];
        __Vtemp_h7e55e4e8__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][1U];
        __Vtemp_h7e55e4e8__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][2U];
        __Vtemp_h7e55e525__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][0U];
        __Vtemp_h7e55e525__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][1U];
        __Vtemp_h7e55e525__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][2U];
        VL_ADD_W(3, __Vtemp_h1bc33a3d__0, __Vtemp_h7e55e4e8__0, __Vtemp_h7e55e525__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v21[0U] 
            = __Vtemp_h1bc33a3d__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v21[1U] 
            = __Vtemp_h1bc33a3d__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v21[2U] 
            = (1U & __Vtemp_h1bc33a3d__0[2U]);
        __Vtemp_h7e55e266__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][0U];
        __Vtemp_h7e55e266__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][1U];
        __Vtemp_h7e55e266__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][2U];
        __Vtemp_h7e55e2a3__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][0U];
        __Vtemp_h7e55e2a3__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][1U];
        __Vtemp_h7e55e2a3__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][2U];
        VL_ADD_W(3, __Vtemp_h574cdec1__0, __Vtemp_h7e55e266__0, __Vtemp_h7e55e2a3__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v22[0U] 
            = __Vtemp_h574cdec1__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v22[1U] 
            = __Vtemp_h574cdec1__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v22[2U] 
            = (1U & __Vtemp_h574cdec1__0[2U]);
        __Vtemp_h7e55dde7__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][0U];
        __Vtemp_h7e55dde7__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][1U];
        __Vtemp_h7e55dde7__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][2U];
        __Vtemp_h7e55de1a__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][0U];
        __Vtemp_h7e55de1a__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][1U];
        __Vtemp_h7e55de1a__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][2U];
        VL_ADD_W(3, __Vtemp_hf835dc7f__0, __Vtemp_h7e55dde7__0, __Vtemp_h7e55de1a__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v23[0U] 
            = __Vtemp_hf835dc7f__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v23[1U] 
            = __Vtemp_hf835dc7f__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v23[2U] 
            = (1U & __Vtemp_hf835dc7f__0[2U]);
        __Vtemp_h7e55df59__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][0U];
        __Vtemp_h7e55df59__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][1U];
        __Vtemp_h7e55df59__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][2U];
        __Vtemp_h7e55df9c__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][0U];
        __Vtemp_h7e55df9c__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][1U];
        __Vtemp_h7e55df9c__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][2U];
        VL_ADD_W(3, __Vtemp_hfb8c72a7__0, __Vtemp_h7e55df59__0, __Vtemp_h7e55df9c__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v24[0U] 
            = __Vtemp_hfb8c72a7__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v24[1U] 
            = __Vtemp_hfb8c72a7__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v24[2U] 
            = (1U & __Vtemp_hfb8c72a7__0[2U]);
        __Vtemp_h7e55e6de__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][0U];
        __Vtemp_h7e55e6de__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][1U];
        __Vtemp_h7e55e6de__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][2U];
        __Vtemp_h7e55e71b__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][0U];
        __Vtemp_h7e55e71b__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][1U];
        __Vtemp_h7e55e71b__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][2U];
        VL_ADD_W(3, __Vtemp_h48ed5139__0, __Vtemp_h7e55e6de__0, __Vtemp_h7e55e71b__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v25[0U] 
            = __Vtemp_h48ed5139__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v25[1U] 
            = __Vtemp_h48ed5139__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v25[2U] 
            = (1U & __Vtemp_h48ed5139__0[2U]);
        __Vtemp_h7e55e460__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][0U];
        __Vtemp_h7e55e460__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][1U];
        __Vtemp_h7e55e460__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][2U];
        __Vtemp_h7e55e49d__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][0U];
        __Vtemp_h7e55e49d__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][1U];
        __Vtemp_h7e55e49d__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][2U];
        VL_ADD_W(3, __Vtemp_h00074823__0, __Vtemp_h7e55e460__0, __Vtemp_h7e55e49d__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v26[0U] 
            = __Vtemp_h00074823__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v26[1U] 
            = __Vtemp_h00074823__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v26[2U] 
            = (1U & __Vtemp_h00074823__0[2U]);
        __Vtemp_h7e55f17d__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][0U];
        __Vtemp_h7e55f17d__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][1U];
        __Vtemp_h7e55f17d__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][2U];
        __Vtemp_h7e55efc0__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][0U];
        __Vtemp_h7e55efc0__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][1U];
        __Vtemp_h7e55efc0__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][2U];
        VL_ADD_W(3, __Vtemp_h6cdc93b1__0, __Vtemp_h7e55f17d__0, __Vtemp_h7e55efc0__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v27[0U] 
            = __Vtemp_h6cdc93b1__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v27[1U] 
            = __Vtemp_h6cdc93b1__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v27[2U] 
            = (1U & __Vtemp_h6cdc93b1__0[2U]);
        __Vtemp_h7e55f0fb__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][0U];
        __Vtemp_h7e55f0fb__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][1U];
        __Vtemp_h7e55f0fb__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][2U];
        __Vtemp_h7e55f13e__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][0U];
        __Vtemp_h7e55f13e__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][1U];
        __Vtemp_h7e55f13e__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][2U];
        VL_ADD_W(3, __Vtemp_h46a70071__0, __Vtemp_h7e55f0fb__0, __Vtemp_h7e55f13e__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v28[0U] 
            = __Vtemp_h46a70071__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v28[1U] 
            = __Vtemp_h46a70071__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v28[2U] 
            = (1U & __Vtemp_h46a70071__0[2U]);
        __Vtemp_h7e55ee7c__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][0U];
        __Vtemp_h7e55ee7c__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][1U];
        __Vtemp_h7e55ee7c__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][2U];
        __Vtemp_h7e55f0b9__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][0U];
        __Vtemp_h7e55f0b9__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][1U];
        __Vtemp_h7e55f0b9__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][2U];
        VL_ADD_W(3, __Vtemp_h7e6706ef__0, __Vtemp_h7e55ee7c__0, __Vtemp_h7e55f0b9__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v29[0U] 
            = __Vtemp_h7e6706ef__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v29[1U] 
            = __Vtemp_h7e6706ef__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v29[2U] 
            = (1U & __Vtemp_h7e6706ef__0[2U]);
        __Vtemp_h7e55edfa__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][0U];
        __Vtemp_h7e55edfa__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][1U];
        __Vtemp_h7e55edfa__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][2U];
        __Vtemp_h7e55ee47__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][0U];
        __Vtemp_h7e55ee47__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][1U];
        __Vtemp_h7e55ee47__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][2U];
        VL_ADD_W(3, __Vtemp_hc3599ce0__0, __Vtemp_h7e55edfa__0, __Vtemp_h7e55ee47__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v30[0U] 
            = __Vtemp_hc3599ce0__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v30[1U] 
            = __Vtemp_hc3599ce0__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v30[2U] 
            = (1U & __Vtemp_hc3599ce0__0[2U]);
        __Vtemp_h7e558b83__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][0U];
        __Vtemp_h7e558b83__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][1U];
        __Vtemp_h7e558b83__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][2U];
        __Vtemp_h7e5589c6__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][0U];
        __Vtemp_h7e5589c6__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][1U];
        __Vtemp_h7e5589c6__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][2U];
        VL_ADD_W(3, __Vtemp_h5fbfc96e__0, __Vtemp_h7e558b83__0, __Vtemp_h7e5589c6__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v31[0U] 
            = __Vtemp_h5fbfc96e__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v31[1U] 
            = __Vtemp_h5fbfc96e__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v31[2U] 
            = (1U & __Vtemp_h5fbfc96e__0[2U]);
    }
    if ((1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o))) 
                  | (~ (IData)(vlSelf->req_i)))))) {
        vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk2__DOT__device = 0x20U;
    }
    if ((1U & (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o))) 
               | (~ (IData)(vlSelf->req_i))))) {
        vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk1__DOT__device = 8U;
        __Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v0 = 1U;
    } else {
        __Vtemp_hd12861d4__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0U][0U];
        __Vtemp_hd12861d4__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0U][1U];
        __Vtemp_hd12861d4__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0U][2U];
        __Vtemp_hd1286293__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [1U][0U];
        __Vtemp_hd1286293__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [1U][1U];
        __Vtemp_hd1286293__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_h2aa8a468__0, __Vtemp_hd12861d4__0, __Vtemp_hd1286293__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v8[0U] 
            = __Vtemp_h2aa8a468__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v8[1U] 
            = __Vtemp_h2aa8a468__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v8[2U] 
            = (1U & __Vtemp_h2aa8a468__0[2U]);
        __Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v8 = 1U;
        __Vtemp_hd1280b49__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [2U][0U];
        __Vtemp_hd1280b49__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [2U][1U];
        __Vtemp_hd1280b49__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [2U][2U];
        __Vtemp_hd128620a__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [3U][0U];
        __Vtemp_hd128620a__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [3U][1U];
        __Vtemp_hd128620a__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_hd66a2e7e__0, __Vtemp_hd1280b49__0, __Vtemp_hd128620a__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v9[0U] 
            = __Vtemp_hd66a2e7e__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v9[1U] 
            = __Vtemp_hd66a2e7e__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v9[2U] 
            = (1U & __Vtemp_hd66a2e7e__0[2U]);
        __Vtemp_hd1280ad7__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [4U][0U];
        __Vtemp_hd1280ad7__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [4U][1U];
        __Vtemp_hd1280ad7__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [4U][2U];
        __Vtemp_hd1280b98__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [5U][0U];
        __Vtemp_hd1280b98__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [5U][1U];
        __Vtemp_hd1280b98__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp_hecf2953c__0, __Vtemp_hd1280ad7__0, __Vtemp_hd1280b98__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v10[0U] 
            = __Vtemp_hecf2953c__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v10[1U] 
            = __Vtemp_hecf2953c__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v10[2U] 
            = (1U & __Vtemp_hecf2953c__0[2U]);
        __Vtemp_hd1286040__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [6U][0U];
        __Vtemp_hd1286040__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [6U][1U];
        __Vtemp_hd1286040__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [6U][2U];
        __Vtemp_hd1285eff__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [7U][0U];
        __Vtemp_hd1285eff__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [7U][1U];
        __Vtemp_hd1285eff__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp_h822f2084__0, __Vtemp_hd1286040__0, __Vtemp_hd1285eff__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v11[0U] 
            = __Vtemp_h822f2084__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v11[1U] 
            = __Vtemp_h822f2084__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v11[2U] 
            = (1U & __Vtemp_h822f2084__0[2U]);
        __Vtemp_hd1285fd2__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [8U][0U];
        __Vtemp_hd1285fd2__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [8U][1U];
        __Vtemp_hd1285fd2__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [8U][2U];
        __Vtemp_hd1286091__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [9U][0U];
        __Vtemp_hd1286091__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [9U][1U];
        __Vtemp_hd1286091__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [9U][2U];
        VL_ADD_W(3, __Vtemp_hfc2cacdd__0, __Vtemp_hd1285fd2__0, __Vtemp_hd1286091__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v12[0U] 
            = __Vtemp_hfc2cacdd__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v12[1U] 
            = __Vtemp_hfc2cacdd__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v12[2U] 
            = (1U & __Vtemp_hfc2cacdd__0[2U]);
        __Vtemp_hd128613b__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][0U];
        __Vtemp_hd128613b__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][1U];
        __Vtemp_hd128613b__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][2U];
        __Vtemp_hd1285ffc__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][0U];
        __Vtemp_hd1285ffc__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][1U];
        __Vtemp_hd1285ffc__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][2U];
        VL_ADD_W(3, __Vtemp_h389494cc__0, __Vtemp_hd128613b__0, __Vtemp_hd1285ffc__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v13[0U] 
            = __Vtemp_h389494cc__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v13[1U] 
            = __Vtemp_h389494cc__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v13[2U] 
            = (1U & __Vtemp_h389494cc__0[2U]);
        __Vtemp_hd12860bd__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][0U];
        __Vtemp_hd12860bd__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][1U];
        __Vtemp_hd12860bd__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][2U];
        __Vtemp_hd128617e__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][0U];
        __Vtemp_hd128617e__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][1U];
        __Vtemp_hd128617e__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][2U];
        VL_ADD_W(3, __Vtemp_h15fab5cd__0, __Vtemp_hd12860bd__0, __Vtemp_hd128617e__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v14[0U] 
            = __Vtemp_h15fab5cd__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v14[1U] 
            = __Vtemp_h15fab5cd__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v14[2U] 
            = (1U & __Vtemp_h15fab5cd__0[2U]);
        __Vtemp_hd128663a__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][0U];
        __Vtemp_hd128663a__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][1U];
        __Vtemp_hd128663a__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][2U];
        __Vtemp_hd12864f9__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][0U];
        __Vtemp_hd12864f9__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][1U];
        __Vtemp_hd12864f9__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][2U];
        VL_ADD_W(3, __Vtemp_h3f8e57b5__0, __Vtemp_hd128663a__0, __Vtemp_hd12864f9__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v15[0U] 
            = __Vtemp_h3f8e57b5__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v15[1U] 
            = __Vtemp_h3f8e57b5__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v15[2U] 
            = (1U & __Vtemp_h3f8e57b5__0[2U]);
    }
    if ((1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o))) 
                  | (~ (IData)(vlSelf->req_i)))))) {
        vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk2__DOT__device = 0x10U;
    }
    if ((1U & (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o))) 
               | (~ (IData)(vlSelf->req_i))))) {
        vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk1__DOT__device = 4U;
        __Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v0 = 1U;
    } else {
        __Vtemp_hdfdc060d__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [0U][0U];
        __Vtemp_hdfdc060d__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [0U][1U];
        __Vtemp_hdfdc060d__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [0U][2U];
        __Vtemp_hdfdc2ee4__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [1U][0U];
        __Vtemp_hdfdc2ee4__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [1U][1U];
        __Vtemp_hdfdc2ee4__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_hd46c2282__0, __Vtemp_hdfdc060d__0, __Vtemp_hdfdc2ee4__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v4[0U] 
            = __Vtemp_hd46c2282__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v4[1U] 
            = __Vtemp_hd46c2282__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v4[2U] 
            = (1U & __Vtemp_hd46c2282__0[2U]);
        __Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v4 = 1U;
        __Vtemp_hdfdc07a3__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [2U][0U];
        __Vtemp_hdfdc07a3__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [2U][1U];
        __Vtemp_hdfdc07a3__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [2U][2U];
        __Vtemp_hdfdc3449__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [3U][0U];
        __Vtemp_hdfdc3449__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [3U][1U];
        __Vtemp_hdfdc3449__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_h08b737c0__0, __Vtemp_hdfdc07a3__0, __Vtemp_hdfdc3449__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v5[0U] 
            = __Vtemp_h08b737c0__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v5[1U] 
            = __Vtemp_h08b737c0__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v5[2U] 
            = (1U & __Vtemp_h08b737c0__0[2U]);
        __Vtemp_hdfdc2f0a__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [4U][0U];
        __Vtemp_hdfdc2f0a__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [4U][1U];
        __Vtemp_hdfdc2f0a__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [4U][2U];
        __Vtemp_hdfdc33cf__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [5U][0U];
        __Vtemp_hdfdc33cf__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [5U][1U];
        __Vtemp_hdfdc33cf__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp_h10e08650__0, __Vtemp_hdfdc2f0a__0, __Vtemp_hdfdc33cf__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v6[0U] 
            = __Vtemp_h10e08650__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v6[1U] 
            = __Vtemp_h10e08650__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v6[2U] 
            = (1U & __Vtemp_h10e08650__0[2U]);
        __Vtemp_hdfdc3490__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [6U][0U];
        __Vtemp_hdfdc3490__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [6U][1U];
        __Vtemp_hdfdc3490__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [6U][2U];
        __Vtemp_hdfdc3578__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [7U][0U];
        __Vtemp_hdfdc3578__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [7U][1U];
        __Vtemp_hdfdc3578__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp_h59c74e9c__0, __Vtemp_hdfdc3490__0, __Vtemp_hdfdc3578__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v7[0U] 
            = __Vtemp_h59c74e9c__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v7[1U] 
            = __Vtemp_h59c74e9c__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v7[2U] 
            = (1U & __Vtemp_h59c74e9c__0[2U]);
    }
    if ((1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o))) 
                  | (~ (IData)(vlSelf->req_i)))))) {
        vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk2__DOT__device = 8U;
    }
    if ((1U & (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o))) 
               | (~ (IData)(vlSelf->req_i))))) {
        vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk1__DOT__device = 2U;
        __Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v0 = 1U;
    } else {
        __Vtemp_hd7a2f452__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [0U][0U];
        __Vtemp_hd7a2f452__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [0U][1U];
        __Vtemp_hd7a2f452__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [0U][2U];
        __Vtemp_hd7a2c697__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [1U][0U];
        __Vtemp_hd7a2c697__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [1U][1U];
        __Vtemp_hd7a2c697__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_h0604421c__0, __Vtemp_hd7a2f452__0, __Vtemp_hd7a2c697__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v2[0U] 
            = __Vtemp_h0604421c__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v2[1U] 
            = __Vtemp_h0604421c__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v2[2U] 
            = (1U & __Vtemp_h0604421c__0[2U]);
        __Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v2 = 1U;
        __Vtemp_hd7a2c5d8__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [2U][0U];
        __Vtemp_hd7a2c5d8__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [2U][1U];
        __Vtemp_hd7a2c5d8__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [2U][2U];
        __Vtemp_hd7a2c5de__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [3U][0U];
        __Vtemp_hd7a2c5de__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [3U][1U];
        __Vtemp_hd7a2c5de__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_hb5e465df__0, __Vtemp_hd7a2c5d8__0, __Vtemp_hd7a2c5de__0);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v3[0U] 
            = __Vtemp_hb5e465df__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v3[1U] 
            = __Vtemp_hb5e465df__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v3[2U] 
            = (1U & __Vtemp_hb5e465df__0[2U]);
    }
    if ((1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o))) 
                  | (~ (IData)(vlSelf->req_i)))))) {
        vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk2__DOT__device = 4U;
    }
    if ((1U & (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o))) 
               | (~ (IData)(vlSelf->req_i))))) {
        vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk1__DOT__device = 1U;
        __Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v0 = 1U;
    } else {
        __Vtemp_h3dc7e436__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i
            [0U][0U];
        __Vtemp_h3dc7e436__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i
            [0U][1U];
        __Vtemp_h3dc7e436__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i
            [0U][2U];
        __Vtemp_h3dc7e459__0[0U] = vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i
            [1U][0U];
        __Vtemp_h3dc7e459__0[1U] = vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i
            [1U][1U];
        __Vtemp_h3dc7e459__0[2U] = vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_h9b8dc8d9__0, __Vtemp_h3dc7e436__0, __Vtemp_h3dc7e459__0);
        vlSelf->mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0[0U] 
            = __Vtemp_h9b8dc8d9__0[0U];
        vlSelf->mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0[1U] 
            = __Vtemp_h9b8dc8d9__0[1U];
        vlSelf->mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0[2U] 
            = (1U & __Vtemp_h9b8dc8d9__0[2U]);
        __Vdlyvval__mul__DOT____Vcellout__mult_cell4__result_o__v1[0U] 
            = vlSelf->mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0[0U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell4__result_o__v1[1U] 
            = vlSelf->mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0[1U];
        __Vdlyvval__mul__DOT____Vcellout__mult_cell4__result_o__v1[2U] 
            = vlSelf->mul__DOT__mult_cell4__DOT____Vlvbound_hf342a81c__0[2U];
        __Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v1 = 1U;
    }
    if ((1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o))) 
                  | (~ (IData)(vlSelf->req_i)))))) {
        vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk2__DOT__device = 2U;
        vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o = 1U;
    } else {
        vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o = 0U;
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v0) {
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1U][2U] = 0U;
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell3__result_o__v2) {
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v2[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v2[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v2[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v3[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v3[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell3__result_o__v3[2U];
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v0) {
        vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0U][2U] = 0U;
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell4__result_o__v1) {
        vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell4__result_o__v1[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell4__result_o__v1[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell4__result_o__v1[2U];
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v0) {
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3U][2U] = 0U;
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell2__result_o__v4) {
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v4[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v4[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v4[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v5[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v5[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v5[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v6[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v6[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v6[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v7[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v7[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell2__result_o__v7[2U];
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v0) {
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7U][2U] = 0U;
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell1__result_o__v8) {
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v8[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v8[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v8[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v9[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v9[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v9[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v10[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v10[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v10[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v11[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v11[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v11[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v12[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v12[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v12[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v13[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v13[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v13[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v14[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v14[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v14[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v15[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v15[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell1__result_o__v15[2U];
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v0) {
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xaU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xaU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xaU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xbU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xbU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xbU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xcU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xcU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xcU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xdU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xdU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xdU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xeU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xeU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xeU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xfU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xfU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xfU][2U] = 0U;
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cell0__result_o__v16) {
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v16[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v16[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v16[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v17[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v17[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v17[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v18[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v18[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v18[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v19[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v19[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v19[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v20[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v20[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v20[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v21[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v21[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v21[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v22[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v22[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v22[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v23[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v23[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v23[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v24[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v24[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v24[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v25[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v25[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v25[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xaU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v26[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xaU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v26[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xaU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v26[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xbU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v27[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xbU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v27[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xbU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v27[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xcU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v28[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xcU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v28[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xcU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v28[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xdU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v29[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xdU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v29[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xdU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v29[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xeU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v30[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xeU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v30[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xeU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v30[2U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xfU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v31[0U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xfU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v31[1U];
        vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0xfU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cell0__result_o__v31[2U];
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v0) {
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xaU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xaU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xaU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xbU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xbU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xbU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xcU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xcU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xcU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xdU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xdU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xdU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xeU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xeU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xeU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xfU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xfU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xfU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x10U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x10U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x10U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x11U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x11U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x11U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x12U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x12U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x12U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x13U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x13U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x13U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x14U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x14U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x14U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x15U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x15U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x15U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x16U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x16U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x16U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x17U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x17U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x17U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x18U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x18U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x18U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x19U][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x19U][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x19U][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1aU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1aU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1aU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1bU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1bU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1bU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1cU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1cU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1cU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1dU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1dU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1dU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1eU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1eU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1eU][2U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1fU][0U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1fU][1U] = 0U;
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1fU][2U] = 0U;
    }
    if (__Vdlyvset__mul__DOT____Vcellout__mult_cellB__result_o__v32) {
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v32[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v33[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v34[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v35[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v36[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v37[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v38[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v39[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v40[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v41[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xaU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xaU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xaU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v42[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xbU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xbU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xbU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v43[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xcU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xcU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xcU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v44[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xdU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xdU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xdU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v45[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xeU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xeU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xeU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v46[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xfU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xfU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0xfU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v47[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x10U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x10U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x10U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v48[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x11U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x11U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x11U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v49[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x12U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x12U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x12U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v50[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x13U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x13U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x13U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v51[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x14U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x14U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x14U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v52[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x15U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x15U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x15U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v53[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x16U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x16U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x16U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v54[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x17U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x17U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x17U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v55[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x18U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x18U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x18U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v56[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x19U][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x19U][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x19U][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v57[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1aU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1aU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1aU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v58[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1bU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1bU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1bU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v59[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1cU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1cU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1cU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v60[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1dU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1dU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1dU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v61[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1eU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1eU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1eU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v62[2U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1fU][0U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[0U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1fU][1U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[1U];
        vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0x1fU][2U] 
            = __Vdlyvval__mul__DOT____Vcellout__mult_cellB__result_o__v63[2U];
    }
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
    vlSelf->mul__DOT__a_next5[0U][0U] = vlSelf->mul__DOT____Vcellout__mult_cell4__result_o
        [0U][0U];
    vlSelf->mul__DOT__a_next5[0U][1U] = vlSelf->mul__DOT____Vcellout__mult_cell4__result_o
        [0U][1U];
    vlSelf->mul__DOT__a_next5[0U][2U] = vlSelf->mul__DOT____Vcellout__mult_cell4__result_o
        [0U][2U];
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
    vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o 
        = (1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o))) 
                    | (~ (IData)(vlSelf->req_i)))));
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
    vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o 
        = (1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o))) 
                    | (~ (IData)(vlSelf->req_i)))));
    vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o 
        = (1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o))) 
                    | (~ (IData)(vlSelf->req_i)))));
    vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o 
        = (1U & (~ (((IData)(vlSelf->rst_i) | (~ (IData)(vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o))) 
                    | (~ (IData)(vlSelf->req_i)))));
    vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o 
        = (1U & (~ (1U & ((IData)(vlSelf->rst_i) | 
                          (~ (IData)(vlSelf->req_i))))));
}

VL_INLINE_OPT void Vmul___024root___nba_sequent__TOP__1(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___nba_sequent__TOP__1\n"); );
    // Body
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
}

void Vmul___024root___eval_nba(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmul___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vmul___024root___nba_sequent__TOP__1(vlSelf);
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
