// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


VL_ATTR_COLD void Vmul___024root__trace_init_sub__TOP__0(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+586,"req_i", false,-1);
    tracep->declBus(c+587,"a_i", false,-1, 31,0);
    tracep->declBus(c+588,"b_i", false,-1, 31,0);
    tracep->declBit(c+589,"ready_o", false,-1);
    tracep->declQuad(c+590,"result_o", false,-1, 63,0);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+598,"XLEN", false,-1, 31,0);
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+586,"req_i", false,-1);
    tracep->declBus(c+587,"a_i", false,-1, 31,0);
    tracep->declBus(c+588,"b_i", false,-1, 31,0);
    tracep->declBit(c+589,"ready_o", false,-1);
    tracep->declQuad(c+590,"result_o", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1+i*3,"a_temp", true,(i+0), 64,0);
    }
    tracep->declBus(c+97,"ready_temp", false,-1, 5,0);
    tracep->declBit(c+592,"is_a_zero", false,-1);
    tracep->declBit(c+593,"is_b_zero", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+98+i*3,"a_next1", true,(i+0), 64,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+146+i*3,"a_next2", true,(i+0), 64,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+170+i*3,"a_next3", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+182+i*3,"a_next4", true,(i+0), 64,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+188+i*3,"a_next5", true,(i+0), 64,0);
    }
    tracep->pushNamePrefix("mult_cell0 ");
    tracep->declBus(c+598,"XLEN", false,-1, 31,0);
    tracep->declBus(c+598,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+599,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+191,"en_i", false,-1);
    tracep->declBit(c+594,"flush_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+192+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+288+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+336,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+337,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+338,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell1 ");
    tracep->declBus(c+598,"XLEN", false,-1, 31,0);
    tracep->declBus(c+599,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+600,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+336,"en_i", false,-1);
    tracep->declBit(c+594,"flush_i", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+339+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+387+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+411,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+412,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+413,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell2 ");
    tracep->declBus(c+598,"XLEN", false,-1, 31,0);
    tracep->declBus(c+600,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+601,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+411,"en_i", false,-1);
    tracep->declBit(c+594,"flush_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+414+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+438+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+450,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+451,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+452,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell3 ");
    tracep->declBus(c+598,"XLEN", false,-1, 31,0);
    tracep->declBus(c+601,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+602,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+450,"en_i", false,-1);
    tracep->declBit(c+594,"flush_i", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+453+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+465+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+471,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+472,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+473,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell4 ");
    tracep->declBus(c+598,"XLEN", false,-1, 31,0);
    tracep->declBus(c+602,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+603,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+471,"en_i", false,-1);
    tracep->declBit(c+594,"flush_i", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+474+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+480+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+483,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+484,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+485,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cellB ");
    tracep->declBus(c+598,"XLEN", false,-1, 31,0);
    tracep->declBus(c+598,"NrInputs", false,-1, 31,0);
    tracep->declBit(c+584,"clk_i", false,-1);
    tracep->declBit(c+585,"rst_i", false,-1);
    tracep->declBit(c+586,"en_i", false,-1);
    tracep->declBit(c+594,"flush_i", false,-1);
    tracep->declBus(c+587,"a_i", false,-1, 31,0);
    tracep->declBus(c+588,"b_i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+486+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+191,"ready_o", false,-1);
    tracep->declArray(c+595,"r", false,-1, 64,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+582,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+583,"device", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vmul___024root__trace_init_top(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_init_top\n"); );
    // Body
    Vmul___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmul___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmul___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmul___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmul___024root__trace_register(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmul___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmul___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmul___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmul___024root__trace_full_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmul___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_full_top_0\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmul___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmul___024root__trace_full_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h4bfc2a62__0;
    // Body
    bufp->fullWData(oldp+1,(vlSelf->mul__DOT__a_temp[0]),65);
    bufp->fullWData(oldp+4,(vlSelf->mul__DOT__a_temp[1]),65);
    bufp->fullWData(oldp+7,(vlSelf->mul__DOT__a_temp[2]),65);
    bufp->fullWData(oldp+10,(vlSelf->mul__DOT__a_temp[3]),65);
    bufp->fullWData(oldp+13,(vlSelf->mul__DOT__a_temp[4]),65);
    bufp->fullWData(oldp+16,(vlSelf->mul__DOT__a_temp[5]),65);
    bufp->fullWData(oldp+19,(vlSelf->mul__DOT__a_temp[6]),65);
    bufp->fullWData(oldp+22,(vlSelf->mul__DOT__a_temp[7]),65);
    bufp->fullWData(oldp+25,(vlSelf->mul__DOT__a_temp[8]),65);
    bufp->fullWData(oldp+28,(vlSelf->mul__DOT__a_temp[9]),65);
    bufp->fullWData(oldp+31,(vlSelf->mul__DOT__a_temp[10]),65);
    bufp->fullWData(oldp+34,(vlSelf->mul__DOT__a_temp[11]),65);
    bufp->fullWData(oldp+37,(vlSelf->mul__DOT__a_temp[12]),65);
    bufp->fullWData(oldp+40,(vlSelf->mul__DOT__a_temp[13]),65);
    bufp->fullWData(oldp+43,(vlSelf->mul__DOT__a_temp[14]),65);
    bufp->fullWData(oldp+46,(vlSelf->mul__DOT__a_temp[15]),65);
    bufp->fullWData(oldp+49,(vlSelf->mul__DOT__a_temp[16]),65);
    bufp->fullWData(oldp+52,(vlSelf->mul__DOT__a_temp[17]),65);
    bufp->fullWData(oldp+55,(vlSelf->mul__DOT__a_temp[18]),65);
    bufp->fullWData(oldp+58,(vlSelf->mul__DOT__a_temp[19]),65);
    bufp->fullWData(oldp+61,(vlSelf->mul__DOT__a_temp[20]),65);
    bufp->fullWData(oldp+64,(vlSelf->mul__DOT__a_temp[21]),65);
    bufp->fullWData(oldp+67,(vlSelf->mul__DOT__a_temp[22]),65);
    bufp->fullWData(oldp+70,(vlSelf->mul__DOT__a_temp[23]),65);
    bufp->fullWData(oldp+73,(vlSelf->mul__DOT__a_temp[24]),65);
    bufp->fullWData(oldp+76,(vlSelf->mul__DOT__a_temp[25]),65);
    bufp->fullWData(oldp+79,(vlSelf->mul__DOT__a_temp[26]),65);
    bufp->fullWData(oldp+82,(vlSelf->mul__DOT__a_temp[27]),65);
    bufp->fullWData(oldp+85,(vlSelf->mul__DOT__a_temp[28]),65);
    bufp->fullWData(oldp+88,(vlSelf->mul__DOT__a_temp[29]),65);
    bufp->fullWData(oldp+91,(vlSelf->mul__DOT__a_temp[30]),65);
    bufp->fullWData(oldp+94,(vlSelf->mul__DOT__a_temp[31]),65);
    bufp->fullCData(oldp+97,((((IData)(vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o) 
                               << 5U) | (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o) 
                                          << 4U) | 
                                         (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o) 
                                           << 3U) | 
                                          (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o) 
                                               << 1U) 
                                              | (IData)(vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o))))))),6);
    bufp->fullWData(oldp+98,(vlSelf->mul__DOT__a_next1[0]),65);
    bufp->fullWData(oldp+101,(vlSelf->mul__DOT__a_next1[1]),65);
    bufp->fullWData(oldp+104,(vlSelf->mul__DOT__a_next1[2]),65);
    bufp->fullWData(oldp+107,(vlSelf->mul__DOT__a_next1[3]),65);
    bufp->fullWData(oldp+110,(vlSelf->mul__DOT__a_next1[4]),65);
    bufp->fullWData(oldp+113,(vlSelf->mul__DOT__a_next1[5]),65);
    bufp->fullWData(oldp+116,(vlSelf->mul__DOT__a_next1[6]),65);
    bufp->fullWData(oldp+119,(vlSelf->mul__DOT__a_next1[7]),65);
    bufp->fullWData(oldp+122,(vlSelf->mul__DOT__a_next1[8]),65);
    bufp->fullWData(oldp+125,(vlSelf->mul__DOT__a_next1[9]),65);
    bufp->fullWData(oldp+128,(vlSelf->mul__DOT__a_next1[10]),65);
    bufp->fullWData(oldp+131,(vlSelf->mul__DOT__a_next1[11]),65);
    bufp->fullWData(oldp+134,(vlSelf->mul__DOT__a_next1[12]),65);
    bufp->fullWData(oldp+137,(vlSelf->mul__DOT__a_next1[13]),65);
    bufp->fullWData(oldp+140,(vlSelf->mul__DOT__a_next1[14]),65);
    bufp->fullWData(oldp+143,(vlSelf->mul__DOT__a_next1[15]),65);
    bufp->fullWData(oldp+146,(vlSelf->mul__DOT__a_next2[0]),65);
    bufp->fullWData(oldp+149,(vlSelf->mul__DOT__a_next2[1]),65);
    bufp->fullWData(oldp+152,(vlSelf->mul__DOT__a_next2[2]),65);
    bufp->fullWData(oldp+155,(vlSelf->mul__DOT__a_next2[3]),65);
    bufp->fullWData(oldp+158,(vlSelf->mul__DOT__a_next2[4]),65);
    bufp->fullWData(oldp+161,(vlSelf->mul__DOT__a_next2[5]),65);
    bufp->fullWData(oldp+164,(vlSelf->mul__DOT__a_next2[6]),65);
    bufp->fullWData(oldp+167,(vlSelf->mul__DOT__a_next2[7]),65);
    bufp->fullWData(oldp+170,(vlSelf->mul__DOT__a_next3[0]),65);
    bufp->fullWData(oldp+173,(vlSelf->mul__DOT__a_next3[1]),65);
    bufp->fullWData(oldp+176,(vlSelf->mul__DOT__a_next3[2]),65);
    bufp->fullWData(oldp+179,(vlSelf->mul__DOT__a_next3[3]),65);
    bufp->fullWData(oldp+182,(vlSelf->mul__DOT__a_next4[0]),65);
    bufp->fullWData(oldp+185,(vlSelf->mul__DOT__a_next4[1]),65);
    bufp->fullWData(oldp+188,(vlSelf->mul__DOT__a_next5[0]),65);
    bufp->fullBit(oldp+191,(vlSelf->mul__DOT____Vcellout__mult_cellB__ready_o));
    bufp->fullWData(oldp+192,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[0]),65);
    bufp->fullWData(oldp+195,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[1]),65);
    bufp->fullWData(oldp+198,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[2]),65);
    bufp->fullWData(oldp+201,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[3]),65);
    bufp->fullWData(oldp+204,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[4]),65);
    bufp->fullWData(oldp+207,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[5]),65);
    bufp->fullWData(oldp+210,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[6]),65);
    bufp->fullWData(oldp+213,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[7]),65);
    bufp->fullWData(oldp+216,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[8]),65);
    bufp->fullWData(oldp+219,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[9]),65);
    bufp->fullWData(oldp+222,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[10]),65);
    bufp->fullWData(oldp+225,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[11]),65);
    bufp->fullWData(oldp+228,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[12]),65);
    bufp->fullWData(oldp+231,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[13]),65);
    bufp->fullWData(oldp+234,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[14]),65);
    bufp->fullWData(oldp+237,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[15]),65);
    bufp->fullWData(oldp+240,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[16]),65);
    bufp->fullWData(oldp+243,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[17]),65);
    bufp->fullWData(oldp+246,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[18]),65);
    bufp->fullWData(oldp+249,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[19]),65);
    bufp->fullWData(oldp+252,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[20]),65);
    bufp->fullWData(oldp+255,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[21]),65);
    bufp->fullWData(oldp+258,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[22]),65);
    bufp->fullWData(oldp+261,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[23]),65);
    bufp->fullWData(oldp+264,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[24]),65);
    bufp->fullWData(oldp+267,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[25]),65);
    bufp->fullWData(oldp+270,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[26]),65);
    bufp->fullWData(oldp+273,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[27]),65);
    bufp->fullWData(oldp+276,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[28]),65);
    bufp->fullWData(oldp+279,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[29]),65);
    bufp->fullWData(oldp+282,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[30]),65);
    bufp->fullWData(oldp+285,(vlSelf->mul__DOT____Vcellinp__mult_cell0__a_i[31]),65);
    bufp->fullWData(oldp+288,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[0]),65);
    bufp->fullWData(oldp+291,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[1]),65);
    bufp->fullWData(oldp+294,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[2]),65);
    bufp->fullWData(oldp+297,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[3]),65);
    bufp->fullWData(oldp+300,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[4]),65);
    bufp->fullWData(oldp+303,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[5]),65);
    bufp->fullWData(oldp+306,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[6]),65);
    bufp->fullWData(oldp+309,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[7]),65);
    bufp->fullWData(oldp+312,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[8]),65);
    bufp->fullWData(oldp+315,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[9]),65);
    bufp->fullWData(oldp+318,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[10]),65);
    bufp->fullWData(oldp+321,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[11]),65);
    bufp->fullWData(oldp+324,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[12]),65);
    bufp->fullWData(oldp+327,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[13]),65);
    bufp->fullWData(oldp+330,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[14]),65);
    bufp->fullWData(oldp+333,(vlSelf->mul__DOT____Vcellout__mult_cell0__result_o[15]),65);
    bufp->fullBit(oldp+336,(vlSelf->mul__DOT____Vcellout__mult_cell0__ready_o));
    bufp->fullIData(oldp+337,(vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+338,(vlSelf->mul__DOT__mult_cell0__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+339,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[0]),65);
    bufp->fullWData(oldp+342,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[1]),65);
    bufp->fullWData(oldp+345,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[2]),65);
    bufp->fullWData(oldp+348,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[3]),65);
    bufp->fullWData(oldp+351,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[4]),65);
    bufp->fullWData(oldp+354,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[5]),65);
    bufp->fullWData(oldp+357,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[6]),65);
    bufp->fullWData(oldp+360,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[7]),65);
    bufp->fullWData(oldp+363,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[8]),65);
    bufp->fullWData(oldp+366,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[9]),65);
    bufp->fullWData(oldp+369,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[10]),65);
    bufp->fullWData(oldp+372,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[11]),65);
    bufp->fullWData(oldp+375,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[12]),65);
    bufp->fullWData(oldp+378,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[13]),65);
    bufp->fullWData(oldp+381,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[14]),65);
    bufp->fullWData(oldp+384,(vlSelf->mul__DOT____Vcellinp__mult_cell1__a_i[15]),65);
    bufp->fullWData(oldp+387,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[0]),65);
    bufp->fullWData(oldp+390,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[1]),65);
    bufp->fullWData(oldp+393,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[2]),65);
    bufp->fullWData(oldp+396,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[3]),65);
    bufp->fullWData(oldp+399,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[4]),65);
    bufp->fullWData(oldp+402,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[5]),65);
    bufp->fullWData(oldp+405,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[6]),65);
    bufp->fullWData(oldp+408,(vlSelf->mul__DOT____Vcellout__mult_cell1__result_o[7]),65);
    bufp->fullBit(oldp+411,(vlSelf->mul__DOT____Vcellout__mult_cell1__ready_o));
    bufp->fullIData(oldp+412,(vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+413,(vlSelf->mul__DOT__mult_cell1__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+414,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[0]),65);
    bufp->fullWData(oldp+417,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[1]),65);
    bufp->fullWData(oldp+420,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[2]),65);
    bufp->fullWData(oldp+423,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[3]),65);
    bufp->fullWData(oldp+426,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[4]),65);
    bufp->fullWData(oldp+429,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[5]),65);
    bufp->fullWData(oldp+432,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[6]),65);
    bufp->fullWData(oldp+435,(vlSelf->mul__DOT____Vcellinp__mult_cell2__a_i[7]),65);
    bufp->fullWData(oldp+438,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[0]),65);
    bufp->fullWData(oldp+441,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[1]),65);
    bufp->fullWData(oldp+444,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[2]),65);
    bufp->fullWData(oldp+447,(vlSelf->mul__DOT____Vcellout__mult_cell2__result_o[3]),65);
    bufp->fullBit(oldp+450,(vlSelf->mul__DOT____Vcellout__mult_cell2__ready_o));
    bufp->fullIData(oldp+451,(vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+452,(vlSelf->mul__DOT__mult_cell2__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+453,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[0]),65);
    bufp->fullWData(oldp+456,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[1]),65);
    bufp->fullWData(oldp+459,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[2]),65);
    bufp->fullWData(oldp+462,(vlSelf->mul__DOT____Vcellinp__mult_cell3__a_i[3]),65);
    bufp->fullWData(oldp+465,(vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[0]),65);
    bufp->fullWData(oldp+468,(vlSelf->mul__DOT____Vcellout__mult_cell3__result_o[1]),65);
    bufp->fullBit(oldp+471,(vlSelf->mul__DOT____Vcellout__mult_cell3__ready_o));
    bufp->fullIData(oldp+472,(vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+473,(vlSelf->mul__DOT__mult_cell3__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+474,(vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[0]),65);
    bufp->fullWData(oldp+477,(vlSelf->mul__DOT____Vcellinp__mult_cell4__a_i[1]),65);
    bufp->fullWData(oldp+480,(vlSelf->mul__DOT____Vcellout__mult_cell4__result_o[0]),65);
    bufp->fullBit(oldp+483,(vlSelf->mul__DOT____Vcellout__mult_cell4__ready_o));
    bufp->fullIData(oldp+484,(vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+485,(vlSelf->mul__DOT__mult_cell4__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+486,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[0]),65);
    bufp->fullWData(oldp+489,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[1]),65);
    bufp->fullWData(oldp+492,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[2]),65);
    bufp->fullWData(oldp+495,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[3]),65);
    bufp->fullWData(oldp+498,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[4]),65);
    bufp->fullWData(oldp+501,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[5]),65);
    bufp->fullWData(oldp+504,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[6]),65);
    bufp->fullWData(oldp+507,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[7]),65);
    bufp->fullWData(oldp+510,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[8]),65);
    bufp->fullWData(oldp+513,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[9]),65);
    bufp->fullWData(oldp+516,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[10]),65);
    bufp->fullWData(oldp+519,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[11]),65);
    bufp->fullWData(oldp+522,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[12]),65);
    bufp->fullWData(oldp+525,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[13]),65);
    bufp->fullWData(oldp+528,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[14]),65);
    bufp->fullWData(oldp+531,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[15]),65);
    bufp->fullWData(oldp+534,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[16]),65);
    bufp->fullWData(oldp+537,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[17]),65);
    bufp->fullWData(oldp+540,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[18]),65);
    bufp->fullWData(oldp+543,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[19]),65);
    bufp->fullWData(oldp+546,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[20]),65);
    bufp->fullWData(oldp+549,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[21]),65);
    bufp->fullWData(oldp+552,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[22]),65);
    bufp->fullWData(oldp+555,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[23]),65);
    bufp->fullWData(oldp+558,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[24]),65);
    bufp->fullWData(oldp+561,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[25]),65);
    bufp->fullWData(oldp+564,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[26]),65);
    bufp->fullWData(oldp+567,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[27]),65);
    bufp->fullWData(oldp+570,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[28]),65);
    bufp->fullWData(oldp+573,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[29]),65);
    bufp->fullWData(oldp+576,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[30]),65);
    bufp->fullWData(oldp+579,(vlSelf->mul__DOT____Vcellout__mult_cellB__result_o[31]),65);
    bufp->fullIData(oldp+582,(vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+583,(vlSelf->mul__DOT__mult_cellB__DOT__unnamedblk2__DOT__device),32);
    bufp->fullBit(oldp+584,(vlSelf->clk_i));
    bufp->fullBit(oldp+585,(vlSelf->rst_i));
    bufp->fullBit(oldp+586,(vlSelf->req_i));
    bufp->fullIData(oldp+587,(vlSelf->a_i),32);
    bufp->fullIData(oldp+588,(vlSelf->b_i),32);
    bufp->fullBit(oldp+589,(vlSelf->ready_o));
    bufp->fullQData(oldp+590,(vlSelf->result_o),64);
    bufp->fullBit(oldp+592,((1U & (~ (IData)((0U != vlSelf->a_i))))));
    bufp->fullBit(oldp+593,((1U & (~ (IData)((0U != vlSelf->b_i))))));
    bufp->fullBit(oldp+594,((1U & (~ (IData)(vlSelf->req_i)))));
    VL_EXTEND_WI(65,32, __Vtemp_h4bfc2a62__0, vlSelf->a_i);
    bufp->fullWData(oldp+595,(__Vtemp_h4bfc2a62__0),65);
    bufp->fullIData(oldp+598,(0x20U),32);
    bufp->fullIData(oldp+599,(0x10U),32);
    bufp->fullIData(oldp+600,(8U),32);
    bufp->fullIData(oldp+601,(4U),32);
    bufp->fullIData(oldp+602,(2U),32);
    bufp->fullIData(oldp+603,(1U),32);
}
