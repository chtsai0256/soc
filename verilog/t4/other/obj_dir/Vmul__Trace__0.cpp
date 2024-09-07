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
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->mul__DOT__a_temp[0]),65);
        bufp->chgWData(oldp+3,(vlSelf->mul__DOT__a_temp[1]),65);
        bufp->chgWData(oldp+6,(vlSelf->mul__DOT__a_temp[2]),65);
        bufp->chgWData(oldp+9,(vlSelf->mul__DOT__a_temp[3]),65);
        bufp->chgWData(oldp+12,(vlSelf->mul__DOT__a_temp[4]),65);
        bufp->chgWData(oldp+15,(vlSelf->mul__DOT__a_temp[5]),65);
        bufp->chgWData(oldp+18,(vlSelf->mul__DOT__a_temp[6]),65);
        bufp->chgWData(oldp+21,(vlSelf->mul__DOT__a_temp[7]),65);
        bufp->chgWData(oldp+24,(vlSelf->mul__DOT__a_temp[8]),65);
        bufp->chgWData(oldp+27,(vlSelf->mul__DOT__a_temp[9]),65);
        bufp->chgWData(oldp+30,(vlSelf->mul__DOT__a_temp[10]),65);
        bufp->chgWData(oldp+33,(vlSelf->mul__DOT__a_temp[11]),65);
        bufp->chgWData(oldp+36,(vlSelf->mul__DOT__a_temp[12]),65);
        bufp->chgWData(oldp+39,(vlSelf->mul__DOT__a_temp[13]),65);
        bufp->chgWData(oldp+42,(vlSelf->mul__DOT__a_temp[14]),65);
        bufp->chgWData(oldp+45,(vlSelf->mul__DOT__a_temp[15]),65);
        bufp->chgWData(oldp+48,(vlSelf->mul__DOT__a_temp[16]),65);
        bufp->chgWData(oldp+51,(vlSelf->mul__DOT__a_temp[17]),65);
        bufp->chgWData(oldp+54,(vlSelf->mul__DOT__a_temp[18]),65);
        bufp->chgWData(oldp+57,(vlSelf->mul__DOT__a_temp[19]),65);
        bufp->chgWData(oldp+60,(vlSelf->mul__DOT__a_temp[20]),65);
        bufp->chgWData(oldp+63,(vlSelf->mul__DOT__a_temp[21]),65);
        bufp->chgWData(oldp+66,(vlSelf->mul__DOT__a_temp[22]),65);
        bufp->chgWData(oldp+69,(vlSelf->mul__DOT__a_temp[23]),65);
        bufp->chgWData(oldp+72,(vlSelf->mul__DOT__a_temp[24]),65);
        bufp->chgWData(oldp+75,(vlSelf->mul__DOT__a_temp[25]),65);
        bufp->chgWData(oldp+78,(vlSelf->mul__DOT__a_temp[26]),65);
        bufp->chgWData(oldp+81,(vlSelf->mul__DOT__a_temp[27]),65);
        bufp->chgWData(oldp+84,(vlSelf->mul__DOT__a_temp[28]),65);
        bufp->chgWData(oldp+87,(vlSelf->mul__DOT__a_temp[29]),65);
        bufp->chgWData(oldp+90,(vlSelf->mul__DOT__a_temp[30]),65);
        bufp->chgWData(oldp+93,(vlSelf->mul__DOT__a_temp[31]),65);
        bufp->chgCData(oldp+96,((((IData)(vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o) 
                                  << 5U) | (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o) 
                                             << 4U) 
                                            | (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o) 
                                                << 3U) 
                                               | (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o))))))),6);
        bufp->chgWData(oldp+97,(vlSelf->mul__DOT__a_next1[0]),65);
        bufp->chgWData(oldp+100,(vlSelf->mul__DOT__a_next1[1]),65);
        bufp->chgWData(oldp+103,(vlSelf->mul__DOT__a_next1[2]),65);
        bufp->chgWData(oldp+106,(vlSelf->mul__DOT__a_next1[3]),65);
        bufp->chgWData(oldp+109,(vlSelf->mul__DOT__a_next1[4]),65);
        bufp->chgWData(oldp+112,(vlSelf->mul__DOT__a_next1[5]),65);
        bufp->chgWData(oldp+115,(vlSelf->mul__DOT__a_next1[6]),65);
        bufp->chgWData(oldp+118,(vlSelf->mul__DOT__a_next1[7]),65);
        bufp->chgWData(oldp+121,(vlSelf->mul__DOT__a_next1[8]),65);
        bufp->chgWData(oldp+124,(vlSelf->mul__DOT__a_next1[9]),65);
        bufp->chgWData(oldp+127,(vlSelf->mul__DOT__a_next1[10]),65);
        bufp->chgWData(oldp+130,(vlSelf->mul__DOT__a_next1[11]),65);
        bufp->chgWData(oldp+133,(vlSelf->mul__DOT__a_next1[12]),65);
        bufp->chgWData(oldp+136,(vlSelf->mul__DOT__a_next1[13]),65);
        bufp->chgWData(oldp+139,(vlSelf->mul__DOT__a_next1[14]),65);
        bufp->chgWData(oldp+142,(vlSelf->mul__DOT__a_next1[15]),65);
        bufp->chgWData(oldp+145,(vlSelf->mul__DOT__a_next2[0]),65);
        bufp->chgWData(oldp+148,(vlSelf->mul__DOT__a_next2[1]),65);
        bufp->chgWData(oldp+151,(vlSelf->mul__DOT__a_next2[2]),65);
        bufp->chgWData(oldp+154,(vlSelf->mul__DOT__a_next2[3]),65);
        bufp->chgWData(oldp+157,(vlSelf->mul__DOT__a_next2[4]),65);
        bufp->chgWData(oldp+160,(vlSelf->mul__DOT__a_next2[5]),65);
        bufp->chgWData(oldp+163,(vlSelf->mul__DOT__a_next2[6]),65);
        bufp->chgWData(oldp+166,(vlSelf->mul__DOT__a_next2[7]),65);
        bufp->chgWData(oldp+169,(vlSelf->mul__DOT__a_next3[0]),65);
        bufp->chgWData(oldp+172,(vlSelf->mul__DOT__a_next3[1]),65);
        bufp->chgWData(oldp+175,(vlSelf->mul__DOT__a_next3[2]),65);
        bufp->chgWData(oldp+178,(vlSelf->mul__DOT__a_next3[3]),65);
        bufp->chgWData(oldp+181,(vlSelf->mul__DOT__a_next4[0]),65);
        bufp->chgWData(oldp+184,(vlSelf->mul__DOT__a_next4[1]),65);
        bufp->chgWData(oldp+187,(vlSelf->mul__DOT__a_next5[0]),65);
        bufp->chgBit(oldp+190,(vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o));
        bufp->chgWData(oldp+191,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0]),65);
        bufp->chgWData(oldp+194,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[1]),65);
        bufp->chgWData(oldp+197,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[2]),65);
        bufp->chgWData(oldp+200,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[3]),65);
        bufp->chgWData(oldp+203,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[4]),65);
        bufp->chgWData(oldp+206,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[5]),65);
        bufp->chgWData(oldp+209,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[6]),65);
        bufp->chgWData(oldp+212,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[7]),65);
        bufp->chgWData(oldp+215,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[8]),65);
        bufp->chgWData(oldp+218,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[9]),65);
        bufp->chgWData(oldp+221,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[10]),65);
        bufp->chgWData(oldp+224,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[11]),65);
        bufp->chgWData(oldp+227,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[12]),65);
        bufp->chgWData(oldp+230,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[13]),65);
        bufp->chgWData(oldp+233,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[14]),65);
        bufp->chgWData(oldp+236,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[15]),65);
        bufp->chgWData(oldp+239,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[16]),65);
        bufp->chgWData(oldp+242,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[17]),65);
        bufp->chgWData(oldp+245,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[18]),65);
        bufp->chgWData(oldp+248,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[19]),65);
        bufp->chgWData(oldp+251,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[20]),65);
        bufp->chgWData(oldp+254,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[21]),65);
        bufp->chgWData(oldp+257,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[22]),65);
        bufp->chgWData(oldp+260,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[23]),65);
        bufp->chgWData(oldp+263,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[24]),65);
        bufp->chgWData(oldp+266,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[25]),65);
        bufp->chgWData(oldp+269,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[26]),65);
        bufp->chgWData(oldp+272,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[27]),65);
        bufp->chgWData(oldp+275,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[28]),65);
        bufp->chgWData(oldp+278,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[29]),65);
        bufp->chgWData(oldp+281,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[30]),65);
        bufp->chgWData(oldp+284,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[31]),65);
        bufp->chgWData(oldp+287,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0]),65);
        bufp->chgWData(oldp+290,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1]),65);
        bufp->chgWData(oldp+293,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2]),65);
        bufp->chgWData(oldp+296,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3]),65);
        bufp->chgWData(oldp+299,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4]),65);
        bufp->chgWData(oldp+302,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5]),65);
        bufp->chgWData(oldp+305,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6]),65);
        bufp->chgWData(oldp+308,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7]),65);
        bufp->chgWData(oldp+311,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8]),65);
        bufp->chgWData(oldp+314,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9]),65);
        bufp->chgWData(oldp+317,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[10]),65);
        bufp->chgWData(oldp+320,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[11]),65);
        bufp->chgWData(oldp+323,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[12]),65);
        bufp->chgWData(oldp+326,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[13]),65);
        bufp->chgWData(oldp+329,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[14]),65);
        bufp->chgWData(oldp+332,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[15]),65);
        bufp->chgBit(oldp+335,(vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o));
        bufp->chgIData(oldp+336,(vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+337,(vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+338,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0]),65);
        bufp->chgWData(oldp+341,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[1]),65);
        bufp->chgWData(oldp+344,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[2]),65);
        bufp->chgWData(oldp+347,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[3]),65);
        bufp->chgWData(oldp+350,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[4]),65);
        bufp->chgWData(oldp+353,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[5]),65);
        bufp->chgWData(oldp+356,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[6]),65);
        bufp->chgWData(oldp+359,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[7]),65);
        bufp->chgWData(oldp+362,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[8]),65);
        bufp->chgWData(oldp+365,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[9]),65);
        bufp->chgWData(oldp+368,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[10]),65);
        bufp->chgWData(oldp+371,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[11]),65);
        bufp->chgWData(oldp+374,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[12]),65);
        bufp->chgWData(oldp+377,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[13]),65);
        bufp->chgWData(oldp+380,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[14]),65);
        bufp->chgWData(oldp+383,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[15]),65);
        bufp->chgWData(oldp+386,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0]),65);
        bufp->chgWData(oldp+389,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1]),65);
        bufp->chgWData(oldp+392,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2]),65);
        bufp->chgWData(oldp+395,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3]),65);
        bufp->chgWData(oldp+398,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4]),65);
        bufp->chgWData(oldp+401,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5]),65);
        bufp->chgWData(oldp+404,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6]),65);
        bufp->chgWData(oldp+407,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7]),65);
        bufp->chgBit(oldp+410,(vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o));
        bufp->chgIData(oldp+411,(vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+412,(vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+413,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[0]),65);
        bufp->chgWData(oldp+416,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[1]),65);
        bufp->chgWData(oldp+419,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[2]),65);
        bufp->chgWData(oldp+422,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[3]),65);
        bufp->chgWData(oldp+425,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[4]),65);
        bufp->chgWData(oldp+428,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[5]),65);
        bufp->chgWData(oldp+431,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[6]),65);
        bufp->chgWData(oldp+434,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[7]),65);
        bufp->chgWData(oldp+437,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0]),65);
        bufp->chgWData(oldp+440,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1]),65);
        bufp->chgWData(oldp+443,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2]),65);
        bufp->chgWData(oldp+446,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3]),65);
        bufp->chgBit(oldp+449,(vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o));
        bufp->chgIData(oldp+450,(vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+451,(vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+452,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[0]),65);
        bufp->chgWData(oldp+455,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[1]),65);
        bufp->chgWData(oldp+458,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[2]),65);
        bufp->chgWData(oldp+461,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[3]),65);
        bufp->chgWData(oldp+464,(vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0]),65);
        bufp->chgWData(oldp+467,(vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1]),65);
        bufp->chgBit(oldp+470,(vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o));
        bufp->chgIData(oldp+471,(vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+472,(vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+473,(vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[0]),65);
        bufp->chgWData(oldp+476,(vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[1]),65);
        bufp->chgWData(oldp+479,(vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0]),65);
        bufp->chgBit(oldp+482,(vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o));
        bufp->chgIData(oldp+483,(vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+484,(vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+485,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0]),65);
        bufp->chgWData(oldp+488,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1]),65);
        bufp->chgWData(oldp+491,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2]),65);
        bufp->chgWData(oldp+494,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3]),65);
        bufp->chgWData(oldp+497,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4]),65);
        bufp->chgWData(oldp+500,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5]),65);
        bufp->chgWData(oldp+503,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6]),65);
        bufp->chgWData(oldp+506,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7]),65);
        bufp->chgWData(oldp+509,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8]),65);
        bufp->chgWData(oldp+512,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9]),65);
        bufp->chgWData(oldp+515,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[10]),65);
        bufp->chgWData(oldp+518,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[11]),65);
        bufp->chgWData(oldp+521,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[12]),65);
        bufp->chgWData(oldp+524,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[13]),65);
        bufp->chgWData(oldp+527,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[14]),65);
        bufp->chgWData(oldp+530,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[15]),65);
        bufp->chgWData(oldp+533,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[16]),65);
        bufp->chgWData(oldp+536,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[17]),65);
        bufp->chgWData(oldp+539,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[18]),65);
        bufp->chgWData(oldp+542,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[19]),65);
        bufp->chgWData(oldp+545,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[20]),65);
        bufp->chgWData(oldp+548,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[21]),65);
        bufp->chgWData(oldp+551,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[22]),65);
        bufp->chgWData(oldp+554,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[23]),65);
        bufp->chgWData(oldp+557,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[24]),65);
        bufp->chgWData(oldp+560,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[25]),65);
        bufp->chgWData(oldp+563,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[26]),65);
        bufp->chgWData(oldp+566,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[27]),65);
        bufp->chgWData(oldp+569,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[28]),65);
        bufp->chgWData(oldp+572,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[29]),65);
        bufp->chgWData(oldp+575,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[30]),65);
        bufp->chgWData(oldp+578,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[31]),65);
        bufp->chgIData(oldp+581,(vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+582,(vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk2__DOT__device),32);
    }
    bufp->chgBit(oldp+583,(vlSelf->clk_i));
    bufp->chgBit(oldp+584,(vlSelf->rst_i));
    bufp->chgBit(oldp+585,(vlSelf->req_i));
    bufp->chgIData(oldp+586,(vlSelf->a_i),32);
    bufp->chgIData(oldp+587,(vlSelf->b_i),32);
    bufp->chgBit(oldp+588,(vlSelf->ready_o));
    bufp->chgQData(oldp+589,(vlSelf->result_o),64);
    bufp->chgBit(oldp+591,((1U & (~ (IData)((0U != vlSelf->a_i))))));
    bufp->chgBit(oldp+592,((1U & (~ (IData)((0U != vlSelf->b_i))))));
    bufp->chgBit(oldp+593,((1U & (~ (IData)(vlSelf->req_i)))));
    VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__0, vlSelf->a_i);
    bufp->chgWData(oldp+594,(__Vtemp_h4bfc2a62__0),65);
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
