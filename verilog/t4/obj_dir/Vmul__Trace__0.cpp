// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


void Vmul___024root__trace_chg_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmul___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_chg_top_0\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmul___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmul___024root__trace_chg_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->mul__DOT__a_temp[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->mul__DOT__a_temp[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->mul__DOT__a_temp[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->mul__DOT__a_temp[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->mul__DOT__a_temp[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->mul__DOT__a_temp[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->mul__DOT__a_temp[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->mul__DOT__a_temp[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->mul__DOT__a_temp[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->mul__DOT__a_temp[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->mul__DOT__a_temp[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->mul__DOT__a_temp[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->mul__DOT__a_temp[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->mul__DOT__a_temp[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->mul__DOT__a_temp[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->mul__DOT__a_temp[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->mul__DOT__a_temp[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->mul__DOT__a_temp[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->mul__DOT__a_temp[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->mul__DOT__a_temp[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->mul__DOT__a_temp[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->mul__DOT__a_temp[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->mul__DOT__a_temp[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->mul__DOT__a_temp[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->mul__DOT__a_temp[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->mul__DOT__a_temp[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->mul__DOT__a_temp[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->mul__DOT__a_temp[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->mul__DOT__a_temp[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->mul__DOT__a_temp[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->mul__DOT__a_temp[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->mul__DOT__a_temp[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->mul__DOT__b_temp[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->mul__DOT__b_temp[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->mul__DOT__b_temp[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->mul__DOT__b_temp[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->mul__DOT__b_temp[4]),32);
        bufp->chgIData(oldp+37,(vlSelf->mul__DOT__b_temp[5]),32);
        bufp->chgIData(oldp+38,(vlSelf->mul__DOT__b_temp[6]),32);
        bufp->chgIData(oldp+39,(vlSelf->mul__DOT__b_temp[7]),32);
        bufp->chgIData(oldp+40,(vlSelf->mul__DOT__b_temp[8]),32);
        bufp->chgIData(oldp+41,(vlSelf->mul__DOT__b_temp[9]),32);
        bufp->chgIData(oldp+42,(vlSelf->mul__DOT__b_temp[10]),32);
        bufp->chgIData(oldp+43,(vlSelf->mul__DOT__b_temp[11]),32);
        bufp->chgIData(oldp+44,(vlSelf->mul__DOT__b_temp[12]),32);
        bufp->chgIData(oldp+45,(vlSelf->mul__DOT__b_temp[13]),32);
        bufp->chgIData(oldp+46,(vlSelf->mul__DOT__b_temp[14]),32);
        bufp->chgIData(oldp+47,(vlSelf->mul__DOT__b_temp[15]),32);
        bufp->chgIData(oldp+48,(vlSelf->mul__DOT__b_temp[16]),32);
        bufp->chgIData(oldp+49,(vlSelf->mul__DOT__b_temp[17]),32);
        bufp->chgIData(oldp+50,(vlSelf->mul__DOT__b_temp[18]),32);
        bufp->chgIData(oldp+51,(vlSelf->mul__DOT__b_temp[19]),32);
        bufp->chgIData(oldp+52,(vlSelf->mul__DOT__b_temp[20]),32);
        bufp->chgIData(oldp+53,(vlSelf->mul__DOT__b_temp[21]),32);
        bufp->chgIData(oldp+54,(vlSelf->mul__DOT__b_temp[22]),32);
        bufp->chgIData(oldp+55,(vlSelf->mul__DOT__b_temp[23]),32);
        bufp->chgIData(oldp+56,(vlSelf->mul__DOT__b_temp[24]),32);
        bufp->chgIData(oldp+57,(vlSelf->mul__DOT__b_temp[25]),32);
        bufp->chgIData(oldp+58,(vlSelf->mul__DOT__b_temp[26]),32);
        bufp->chgIData(oldp+59,(vlSelf->mul__DOT__b_temp[27]),32);
        bufp->chgIData(oldp+60,(vlSelf->mul__DOT__b_temp[28]),32);
        bufp->chgIData(oldp+61,(vlSelf->mul__DOT__b_temp[29]),32);
        bufp->chgIData(oldp+62,(vlSelf->mul__DOT__b_temp[30]),32);
        bufp->chgIData(oldp+63,(vlSelf->mul__DOT__b_temp[31]),32);
        bufp->chgWData(oldp+64,(vlSelf->mul__DOT__acc_temp[0]),65);
        bufp->chgWData(oldp+67,(vlSelf->mul__DOT__acc_temp[1]),65);
        bufp->chgWData(oldp+70,(vlSelf->mul__DOT__acc_temp[2]),65);
        bufp->chgWData(oldp+73,(vlSelf->mul__DOT__acc_temp[3]),65);
        bufp->chgWData(oldp+76,(vlSelf->mul__DOT__acc_temp[4]),65);
        bufp->chgWData(oldp+79,(vlSelf->mul__DOT__acc_temp[5]),65);
        bufp->chgWData(oldp+82,(vlSelf->mul__DOT__acc_temp[6]),65);
        bufp->chgWData(oldp+85,(vlSelf->mul__DOT__acc_temp[7]),65);
        bufp->chgWData(oldp+88,(vlSelf->mul__DOT__acc_temp[8]),65);
        bufp->chgWData(oldp+91,(vlSelf->mul__DOT__acc_temp[9]),65);
        bufp->chgWData(oldp+94,(vlSelf->mul__DOT__acc_temp[10]),65);
        bufp->chgWData(oldp+97,(vlSelf->mul__DOT__acc_temp[11]),65);
        bufp->chgWData(oldp+100,(vlSelf->mul__DOT__acc_temp[12]),65);
        bufp->chgWData(oldp+103,(vlSelf->mul__DOT__acc_temp[13]),65);
        bufp->chgWData(oldp+106,(vlSelf->mul__DOT__acc_temp[14]),65);
        bufp->chgWData(oldp+109,(vlSelf->mul__DOT__acc_temp[15]),65);
        bufp->chgWData(oldp+112,(vlSelf->mul__DOT__acc_temp[16]),65);
        bufp->chgWData(oldp+115,(vlSelf->mul__DOT__acc_temp[17]),65);
        bufp->chgWData(oldp+118,(vlSelf->mul__DOT__acc_temp[18]),65);
        bufp->chgWData(oldp+121,(vlSelf->mul__DOT__acc_temp[19]),65);
        bufp->chgWData(oldp+124,(vlSelf->mul__DOT__acc_temp[20]),65);
        bufp->chgWData(oldp+127,(vlSelf->mul__DOT__acc_temp[21]),65);
        bufp->chgWData(oldp+130,(vlSelf->mul__DOT__acc_temp[22]),65);
        bufp->chgWData(oldp+133,(vlSelf->mul__DOT__acc_temp[23]),65);
        bufp->chgWData(oldp+136,(vlSelf->mul__DOT__acc_temp[24]),65);
        bufp->chgWData(oldp+139,(vlSelf->mul__DOT__acc_temp[25]),65);
        bufp->chgWData(oldp+142,(vlSelf->mul__DOT__acc_temp[26]),65);
        bufp->chgWData(oldp+145,(vlSelf->mul__DOT__acc_temp[27]),65);
        bufp->chgWData(oldp+148,(vlSelf->mul__DOT__acc_temp[28]),65);
        bufp->chgWData(oldp+151,(vlSelf->mul__DOT__acc_temp[29]),65);
        bufp->chgWData(oldp+154,(vlSelf->mul__DOT__acc_temp[30]),65);
        bufp->chgWData(oldp+157,(vlSelf->mul__DOT__acc_temp[31]),65);
        bufp->chgIData(oldp+160,((((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o) 
                                   << 0x1fU) | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->mul__DOT____Vcellout__u_mult_step0__ready_o))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+161,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+162,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+163,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+164,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgIData(oldp+167,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+168,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+169,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+172,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+173,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+174,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+175,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+178,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+179,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+180,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+181,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+184,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+185,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+186,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+187,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+190,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+191,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+192,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+193,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+196,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+197,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+198,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+199,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+202,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+203,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+204,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+205,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+208,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+209,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+210,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+211,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+214,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+215,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+216,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+217,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+220,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+221,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+222,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+223,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+226,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o));
        bufp->chgBit(oldp+227,(vlSelf->mul__DOT____Vcellout__u_mult_step0__ready_o));
        bufp->chgIData(oldp+228,(vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o),32);
        bufp->chgIData(oldp+229,(vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o),32);
        bufp->chgWData(oldp+230,(vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o),65);
        bufp->chgIData(oldp+233,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+234,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+235,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+238,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+239,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+240,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+241,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+244,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+245,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+246,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+247,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+250,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+251,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+252,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+253,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+256,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+257,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+258,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+259,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+262,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+263,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+264,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+265,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+268,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+269,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+270,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+271,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+274,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+275,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+276,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+277,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+280,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+281,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+282,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+283,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+286,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+287,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+288,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+289,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+292,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+293,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+294,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+295,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+298,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+299,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+300,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+301,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+304,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+305,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+306,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+307,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+310,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+311,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+312,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+313,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+316,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+317,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+318,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+319,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+322,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+323,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+324,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+325,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+328,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+329,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+330,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+331,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+334,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+335,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+336,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+337,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+340,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+341,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+342,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+343,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+346,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o));
        bufp->chgIData(oldp+347,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o),32);
        bufp->chgIData(oldp+348,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o),32);
        bufp->chgWData(oldp+349,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o),65);
        bufp->chgBit(oldp+352,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o));
    }
    bufp->chgBit(oldp+353,(vlSelf->clk_i));
    bufp->chgBit(oldp+354,(vlSelf->rst_i));
    bufp->chgBit(oldp+355,(vlSelf->req_i));
    bufp->chgIData(oldp+356,(vlSelf->a_i),32);
    bufp->chgIData(oldp+357,(vlSelf->b_i),32);
    bufp->chgBit(oldp+358,(vlSelf->ready_o));
    bufp->chgQData(oldp+359,(vlSelf->result_o),64);
    bufp->chgBit(oldp+361,((1U & (~ (IData)(vlSelf->req_i)))));
}

void Vmul___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_cleanup\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
