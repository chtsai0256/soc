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
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+356,"req_i", false,-1);
    tracep->declBus(c+357,"a_i", false,-1, 31,0);
    tracep->declBus(c+358,"b_i", false,-1, 31,0);
    tracep->declBit(c+359,"ready_o", false,-1);
    tracep->declQuad(c+360,"result_o", false,-1, 63,0);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+356,"req_i", false,-1);
    tracep->declBus(c+357,"a_i", false,-1, 31,0);
    tracep->declBus(c+358,"b_i", false,-1, 31,0);
    tracep->declBit(c+359,"ready_o", false,-1);
    tracep->declQuad(c+360,"result_o", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"a_temp", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,"b_temp", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+65+i*3,"acc_temp", true,(i+0), 64,0);
    }
    tracep->declBus(c+161,"ready_temp", false,-1, 31,0);
    tracep->pushNamePrefix("mult_stepx[10] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+162,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+163,"a_i", false,-1, 31,0);
    tracep->declBus(c+164,"b_i", false,-1, 31,0);
    tracep->declArray(c+165,"acc_i", false,-1, 64,0);
    tracep->declBus(c+168,"a_o", false,-1, 31,0);
    tracep->declBus(c+169,"b_o", false,-1, 31,0);
    tracep->declArray(c+170,"acc_o", false,-1, 64,0);
    tracep->declBit(c+173,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[11] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+173,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+168,"a_i", false,-1, 31,0);
    tracep->declBus(c+169,"b_i", false,-1, 31,0);
    tracep->declArray(c+170,"acc_i", false,-1, 64,0);
    tracep->declBus(c+174,"a_o", false,-1, 31,0);
    tracep->declBus(c+175,"b_o", false,-1, 31,0);
    tracep->declArray(c+176,"acc_o", false,-1, 64,0);
    tracep->declBit(c+179,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[12] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+179,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+174,"a_i", false,-1, 31,0);
    tracep->declBus(c+175,"b_i", false,-1, 31,0);
    tracep->declArray(c+176,"acc_i", false,-1, 64,0);
    tracep->declBus(c+180,"a_o", false,-1, 31,0);
    tracep->declBus(c+181,"b_o", false,-1, 31,0);
    tracep->declArray(c+182,"acc_o", false,-1, 64,0);
    tracep->declBit(c+185,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[13] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+185,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+180,"a_i", false,-1, 31,0);
    tracep->declBus(c+181,"b_i", false,-1, 31,0);
    tracep->declArray(c+182,"acc_i", false,-1, 64,0);
    tracep->declBus(c+186,"a_o", false,-1, 31,0);
    tracep->declBus(c+187,"b_o", false,-1, 31,0);
    tracep->declArray(c+188,"acc_o", false,-1, 64,0);
    tracep->declBit(c+191,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[14] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+191,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+186,"a_i", false,-1, 31,0);
    tracep->declBus(c+187,"b_i", false,-1, 31,0);
    tracep->declArray(c+188,"acc_i", false,-1, 64,0);
    tracep->declBus(c+192,"a_o", false,-1, 31,0);
    tracep->declBus(c+193,"b_o", false,-1, 31,0);
    tracep->declArray(c+194,"acc_o", false,-1, 64,0);
    tracep->declBit(c+197,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[15] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+197,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+192,"a_i", false,-1, 31,0);
    tracep->declBus(c+193,"b_i", false,-1, 31,0);
    tracep->declArray(c+194,"acc_i", false,-1, 64,0);
    tracep->declBus(c+198,"a_o", false,-1, 31,0);
    tracep->declBus(c+199,"b_o", false,-1, 31,0);
    tracep->declArray(c+200,"acc_o", false,-1, 64,0);
    tracep->declBit(c+203,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[16] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+203,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+198,"a_i", false,-1, 31,0);
    tracep->declBus(c+199,"b_i", false,-1, 31,0);
    tracep->declArray(c+200,"acc_i", false,-1, 64,0);
    tracep->declBus(c+204,"a_o", false,-1, 31,0);
    tracep->declBus(c+205,"b_o", false,-1, 31,0);
    tracep->declArray(c+206,"acc_o", false,-1, 64,0);
    tracep->declBit(c+209,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[17] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+209,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+204,"a_i", false,-1, 31,0);
    tracep->declBus(c+205,"b_i", false,-1, 31,0);
    tracep->declArray(c+206,"acc_i", false,-1, 64,0);
    tracep->declBus(c+210,"a_o", false,-1, 31,0);
    tracep->declBus(c+211,"b_o", false,-1, 31,0);
    tracep->declArray(c+212,"acc_o", false,-1, 64,0);
    tracep->declBit(c+215,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[18] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+215,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+210,"a_i", false,-1, 31,0);
    tracep->declBus(c+211,"b_i", false,-1, 31,0);
    tracep->declArray(c+212,"acc_i", false,-1, 64,0);
    tracep->declBus(c+216,"a_o", false,-1, 31,0);
    tracep->declBus(c+217,"b_o", false,-1, 31,0);
    tracep->declArray(c+218,"acc_o", false,-1, 64,0);
    tracep->declBit(c+221,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[19] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+221,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+216,"a_i", false,-1, 31,0);
    tracep->declBus(c+217,"b_i", false,-1, 31,0);
    tracep->declArray(c+218,"acc_i", false,-1, 64,0);
    tracep->declBus(c+222,"a_o", false,-1, 31,0);
    tracep->declBus(c+223,"b_o", false,-1, 31,0);
    tracep->declArray(c+224,"acc_o", false,-1, 64,0);
    tracep->declBit(c+227,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[1] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+228,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+229,"a_i", false,-1, 31,0);
    tracep->declBus(c+230,"b_i", false,-1, 31,0);
    tracep->declArray(c+231,"acc_i", false,-1, 64,0);
    tracep->declBus(c+234,"a_o", false,-1, 31,0);
    tracep->declBus(c+235,"b_o", false,-1, 31,0);
    tracep->declArray(c+236,"acc_o", false,-1, 64,0);
    tracep->declBit(c+239,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[20] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+227,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+222,"a_i", false,-1, 31,0);
    tracep->declBus(c+223,"b_i", false,-1, 31,0);
    tracep->declArray(c+224,"acc_i", false,-1, 64,0);
    tracep->declBus(c+240,"a_o", false,-1, 31,0);
    tracep->declBus(c+241,"b_o", false,-1, 31,0);
    tracep->declArray(c+242,"acc_o", false,-1, 64,0);
    tracep->declBit(c+245,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[21] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+245,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+240,"a_i", false,-1, 31,0);
    tracep->declBus(c+241,"b_i", false,-1, 31,0);
    tracep->declArray(c+242,"acc_i", false,-1, 64,0);
    tracep->declBus(c+246,"a_o", false,-1, 31,0);
    tracep->declBus(c+247,"b_o", false,-1, 31,0);
    tracep->declArray(c+248,"acc_o", false,-1, 64,0);
    tracep->declBit(c+251,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[22] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+251,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+246,"a_i", false,-1, 31,0);
    tracep->declBus(c+247,"b_i", false,-1, 31,0);
    tracep->declArray(c+248,"acc_i", false,-1, 64,0);
    tracep->declBus(c+252,"a_o", false,-1, 31,0);
    tracep->declBus(c+253,"b_o", false,-1, 31,0);
    tracep->declArray(c+254,"acc_o", false,-1, 64,0);
    tracep->declBit(c+257,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[23] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+257,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+252,"a_i", false,-1, 31,0);
    tracep->declBus(c+253,"b_i", false,-1, 31,0);
    tracep->declArray(c+254,"acc_i", false,-1, 64,0);
    tracep->declBus(c+258,"a_o", false,-1, 31,0);
    tracep->declBus(c+259,"b_o", false,-1, 31,0);
    tracep->declArray(c+260,"acc_o", false,-1, 64,0);
    tracep->declBit(c+263,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[24] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+263,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+258,"a_i", false,-1, 31,0);
    tracep->declBus(c+259,"b_i", false,-1, 31,0);
    tracep->declArray(c+260,"acc_i", false,-1, 64,0);
    tracep->declBus(c+264,"a_o", false,-1, 31,0);
    tracep->declBus(c+265,"b_o", false,-1, 31,0);
    tracep->declArray(c+266,"acc_o", false,-1, 64,0);
    tracep->declBit(c+269,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[25] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+269,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+264,"a_i", false,-1, 31,0);
    tracep->declBus(c+265,"b_i", false,-1, 31,0);
    tracep->declArray(c+266,"acc_i", false,-1, 64,0);
    tracep->declBus(c+270,"a_o", false,-1, 31,0);
    tracep->declBus(c+271,"b_o", false,-1, 31,0);
    tracep->declArray(c+272,"acc_o", false,-1, 64,0);
    tracep->declBit(c+275,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[26] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+275,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+270,"a_i", false,-1, 31,0);
    tracep->declBus(c+271,"b_i", false,-1, 31,0);
    tracep->declArray(c+272,"acc_i", false,-1, 64,0);
    tracep->declBus(c+276,"a_o", false,-1, 31,0);
    tracep->declBus(c+277,"b_o", false,-1, 31,0);
    tracep->declArray(c+278,"acc_o", false,-1, 64,0);
    tracep->declBit(c+281,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[27] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+281,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+276,"a_i", false,-1, 31,0);
    tracep->declBus(c+277,"b_i", false,-1, 31,0);
    tracep->declArray(c+278,"acc_i", false,-1, 64,0);
    tracep->declBus(c+282,"a_o", false,-1, 31,0);
    tracep->declBus(c+283,"b_o", false,-1, 31,0);
    tracep->declArray(c+284,"acc_o", false,-1, 64,0);
    tracep->declBit(c+287,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[28] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+287,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+282,"a_i", false,-1, 31,0);
    tracep->declBus(c+283,"b_i", false,-1, 31,0);
    tracep->declArray(c+284,"acc_i", false,-1, 64,0);
    tracep->declBus(c+288,"a_o", false,-1, 31,0);
    tracep->declBus(c+289,"b_o", false,-1, 31,0);
    tracep->declArray(c+290,"acc_o", false,-1, 64,0);
    tracep->declBit(c+293,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[29] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+293,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+288,"a_i", false,-1, 31,0);
    tracep->declBus(c+289,"b_i", false,-1, 31,0);
    tracep->declArray(c+290,"acc_i", false,-1, 64,0);
    tracep->declBus(c+294,"a_o", false,-1, 31,0);
    tracep->declBus(c+295,"b_o", false,-1, 31,0);
    tracep->declArray(c+296,"acc_o", false,-1, 64,0);
    tracep->declBit(c+299,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[2] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+239,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+234,"a_i", false,-1, 31,0);
    tracep->declBus(c+235,"b_i", false,-1, 31,0);
    tracep->declArray(c+236,"acc_i", false,-1, 64,0);
    tracep->declBus(c+300,"a_o", false,-1, 31,0);
    tracep->declBus(c+301,"b_o", false,-1, 31,0);
    tracep->declArray(c+302,"acc_o", false,-1, 64,0);
    tracep->declBit(c+305,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[30] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+299,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+294,"a_i", false,-1, 31,0);
    tracep->declBus(c+295,"b_i", false,-1, 31,0);
    tracep->declArray(c+296,"acc_i", false,-1, 64,0);
    tracep->declBus(c+306,"a_o", false,-1, 31,0);
    tracep->declBus(c+307,"b_o", false,-1, 31,0);
    tracep->declArray(c+308,"acc_o", false,-1, 64,0);
    tracep->declBit(c+311,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[31] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+311,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+306,"a_i", false,-1, 31,0);
    tracep->declBus(c+307,"b_i", false,-1, 31,0);
    tracep->declArray(c+308,"acc_i", false,-1, 64,0);
    tracep->declBus(c+312,"a_o", false,-1, 31,0);
    tracep->declBus(c+313,"b_o", false,-1, 31,0);
    tracep->declArray(c+314,"acc_o", false,-1, 64,0);
    tracep->declBit(c+317,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[3] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+305,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+300,"a_i", false,-1, 31,0);
    tracep->declBus(c+301,"b_i", false,-1, 31,0);
    tracep->declArray(c+302,"acc_i", false,-1, 64,0);
    tracep->declBus(c+318,"a_o", false,-1, 31,0);
    tracep->declBus(c+319,"b_o", false,-1, 31,0);
    tracep->declArray(c+320,"acc_o", false,-1, 64,0);
    tracep->declBit(c+323,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[4] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+323,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+318,"a_i", false,-1, 31,0);
    tracep->declBus(c+319,"b_i", false,-1, 31,0);
    tracep->declArray(c+320,"acc_i", false,-1, 64,0);
    tracep->declBus(c+324,"a_o", false,-1, 31,0);
    tracep->declBus(c+325,"b_o", false,-1, 31,0);
    tracep->declArray(c+326,"acc_o", false,-1, 64,0);
    tracep->declBit(c+329,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[5] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+329,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+324,"a_i", false,-1, 31,0);
    tracep->declBus(c+325,"b_i", false,-1, 31,0);
    tracep->declArray(c+326,"acc_i", false,-1, 64,0);
    tracep->declBus(c+330,"a_o", false,-1, 31,0);
    tracep->declBus(c+331,"b_o", false,-1, 31,0);
    tracep->declArray(c+332,"acc_o", false,-1, 64,0);
    tracep->declBit(c+335,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[6] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+335,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+330,"a_i", false,-1, 31,0);
    tracep->declBus(c+331,"b_i", false,-1, 31,0);
    tracep->declArray(c+332,"acc_i", false,-1, 64,0);
    tracep->declBus(c+336,"a_o", false,-1, 31,0);
    tracep->declBus(c+337,"b_o", false,-1, 31,0);
    tracep->declArray(c+338,"acc_o", false,-1, 64,0);
    tracep->declBit(c+341,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[7] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+341,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+336,"a_i", false,-1, 31,0);
    tracep->declBus(c+337,"b_i", false,-1, 31,0);
    tracep->declArray(c+338,"acc_i", false,-1, 64,0);
    tracep->declBus(c+342,"a_o", false,-1, 31,0);
    tracep->declBus(c+343,"b_o", false,-1, 31,0);
    tracep->declArray(c+344,"acc_o", false,-1, 64,0);
    tracep->declBit(c+347,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[8] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+347,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+342,"a_i", false,-1, 31,0);
    tracep->declBus(c+343,"b_i", false,-1, 31,0);
    tracep->declArray(c+344,"acc_i", false,-1, 64,0);
    tracep->declBus(c+348,"a_o", false,-1, 31,0);
    tracep->declBus(c+349,"b_o", false,-1, 31,0);
    tracep->declArray(c+350,"acc_o", false,-1, 64,0);
    tracep->declBit(c+353,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_stepx[9] ");
    tracep->pushNamePrefix("u_mult_step ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+353,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+348,"a_i", false,-1, 31,0);
    tracep->declBus(c+349,"b_i", false,-1, 31,0);
    tracep->declArray(c+350,"acc_i", false,-1, 64,0);
    tracep->declBus(c+163,"a_o", false,-1, 31,0);
    tracep->declBus(c+164,"b_o", false,-1, 31,0);
    tracep->declArray(c+165,"acc_o", false,-1, 64,0);
    tracep->declBit(c+162,"ready_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_mult_step0 ");
    tracep->declBus(c+363,"XLEN", false,-1, 31,0);
    tracep->declBit(c+354,"clk_i", false,-1);
    tracep->declBit(c+355,"rst_i", false,-1);
    tracep->declBit(c+356,"en_i", false,-1);
    tracep->declBit(c+362,"flush_i", false,-1);
    tracep->declBus(c+357,"a_i", false,-1, 31,0);
    tracep->declBus(c+358,"b_i", false,-1, 31,0);
    tracep->declArray(c+364,"acc_i", false,-1, 64,0);
    tracep->declBus(c+229,"a_o", false,-1, 31,0);
    tracep->declBus(c+230,"b_o", false,-1, 31,0);
    tracep->declArray(c+231,"acc_o", false,-1, 64,0);
    tracep->declBit(c+228,"ready_o", false,-1);
    tracep->popNamePrefix(2);
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
    VlWide<3>/*95:0*/ __Vtemp_h63ab8a43__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->mul__DOT__a_temp[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->mul__DOT__a_temp[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->mul__DOT__a_temp[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->mul__DOT__a_temp[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->mul__DOT__a_temp[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->mul__DOT__a_temp[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->mul__DOT__a_temp[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->mul__DOT__a_temp[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->mul__DOT__a_temp[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->mul__DOT__a_temp[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->mul__DOT__a_temp[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->mul__DOT__a_temp[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->mul__DOT__a_temp[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->mul__DOT__a_temp[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->mul__DOT__a_temp[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->mul__DOT__a_temp[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->mul__DOT__a_temp[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->mul__DOT__a_temp[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->mul__DOT__a_temp[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->mul__DOT__a_temp[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->mul__DOT__a_temp[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->mul__DOT__a_temp[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->mul__DOT__a_temp[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->mul__DOT__a_temp[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->mul__DOT__a_temp[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->mul__DOT__a_temp[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->mul__DOT__a_temp[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->mul__DOT__a_temp[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->mul__DOT__a_temp[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->mul__DOT__a_temp[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->mul__DOT__a_temp[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->mul__DOT__a_temp[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->mul__DOT__b_temp[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->mul__DOT__b_temp[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->mul__DOT__b_temp[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->mul__DOT__b_temp[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->mul__DOT__b_temp[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->mul__DOT__b_temp[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->mul__DOT__b_temp[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->mul__DOT__b_temp[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->mul__DOT__b_temp[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->mul__DOT__b_temp[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->mul__DOT__b_temp[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->mul__DOT__b_temp[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->mul__DOT__b_temp[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->mul__DOT__b_temp[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->mul__DOT__b_temp[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->mul__DOT__b_temp[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->mul__DOT__b_temp[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->mul__DOT__b_temp[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->mul__DOT__b_temp[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->mul__DOT__b_temp[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->mul__DOT__b_temp[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->mul__DOT__b_temp[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->mul__DOT__b_temp[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->mul__DOT__b_temp[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->mul__DOT__b_temp[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->mul__DOT__b_temp[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->mul__DOT__b_temp[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->mul__DOT__b_temp[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->mul__DOT__b_temp[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->mul__DOT__b_temp[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->mul__DOT__b_temp[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->mul__DOT__b_temp[31]),32);
    bufp->fullWData(oldp+65,(vlSelf->mul__DOT__acc_temp[0]),65);
    bufp->fullWData(oldp+68,(vlSelf->mul__DOT__acc_temp[1]),65);
    bufp->fullWData(oldp+71,(vlSelf->mul__DOT__acc_temp[2]),65);
    bufp->fullWData(oldp+74,(vlSelf->mul__DOT__acc_temp[3]),65);
    bufp->fullWData(oldp+77,(vlSelf->mul__DOT__acc_temp[4]),65);
    bufp->fullWData(oldp+80,(vlSelf->mul__DOT__acc_temp[5]),65);
    bufp->fullWData(oldp+83,(vlSelf->mul__DOT__acc_temp[6]),65);
    bufp->fullWData(oldp+86,(vlSelf->mul__DOT__acc_temp[7]),65);
    bufp->fullWData(oldp+89,(vlSelf->mul__DOT__acc_temp[8]),65);
    bufp->fullWData(oldp+92,(vlSelf->mul__DOT__acc_temp[9]),65);
    bufp->fullWData(oldp+95,(vlSelf->mul__DOT__acc_temp[10]),65);
    bufp->fullWData(oldp+98,(vlSelf->mul__DOT__acc_temp[11]),65);
    bufp->fullWData(oldp+101,(vlSelf->mul__DOT__acc_temp[12]),65);
    bufp->fullWData(oldp+104,(vlSelf->mul__DOT__acc_temp[13]),65);
    bufp->fullWData(oldp+107,(vlSelf->mul__DOT__acc_temp[14]),65);
    bufp->fullWData(oldp+110,(vlSelf->mul__DOT__acc_temp[15]),65);
    bufp->fullWData(oldp+113,(vlSelf->mul__DOT__acc_temp[16]),65);
    bufp->fullWData(oldp+116,(vlSelf->mul__DOT__acc_temp[17]),65);
    bufp->fullWData(oldp+119,(vlSelf->mul__DOT__acc_temp[18]),65);
    bufp->fullWData(oldp+122,(vlSelf->mul__DOT__acc_temp[19]),65);
    bufp->fullWData(oldp+125,(vlSelf->mul__DOT__acc_temp[20]),65);
    bufp->fullWData(oldp+128,(vlSelf->mul__DOT__acc_temp[21]),65);
    bufp->fullWData(oldp+131,(vlSelf->mul__DOT__acc_temp[22]),65);
    bufp->fullWData(oldp+134,(vlSelf->mul__DOT__acc_temp[23]),65);
    bufp->fullWData(oldp+137,(vlSelf->mul__DOT__acc_temp[24]),65);
    bufp->fullWData(oldp+140,(vlSelf->mul__DOT__acc_temp[25]),65);
    bufp->fullWData(oldp+143,(vlSelf->mul__DOT__acc_temp[26]),65);
    bufp->fullWData(oldp+146,(vlSelf->mul__DOT__acc_temp[27]),65);
    bufp->fullWData(oldp+149,(vlSelf->mul__DOT__acc_temp[28]),65);
    bufp->fullWData(oldp+152,(vlSelf->mul__DOT__acc_temp[29]),65);
    bufp->fullWData(oldp+155,(vlSelf->mul__DOT__acc_temp[30]),65);
    bufp->fullWData(oldp+158,(vlSelf->mul__DOT__acc_temp[31]),65);
    bufp->fullIData(oldp+161,((((IData)(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o) 
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
    bufp->fullBit(oldp+162,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+163,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+164,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+165,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__9__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullIData(oldp+168,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+169,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+170,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+173,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__10__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+174,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+175,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+176,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+179,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__11__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+180,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+181,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+182,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+185,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__12__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+186,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+187,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+188,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+191,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__13__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+192,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+193,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+194,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+197,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__14__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+198,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+199,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+200,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+203,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__15__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+204,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+205,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+206,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+209,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__16__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+210,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+211,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+212,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+215,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__17__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+216,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+217,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+218,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+221,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__18__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+222,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+223,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+224,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+227,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__19__KET____DOT__u_mult_step__ready_o));
    bufp->fullBit(oldp+228,(vlSelf->mul__DOT____Vcellout__u_mult_step0__ready_o));
    bufp->fullIData(oldp+229,(vlSelf->mul__DOT____Vcellout__u_mult_step0__a_o),32);
    bufp->fullIData(oldp+230,(vlSelf->mul__DOT____Vcellout__u_mult_step0__b_o),32);
    bufp->fullWData(oldp+231,(vlSelf->mul__DOT____Vcellout__u_mult_step0__acc_o),65);
    bufp->fullIData(oldp+234,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+235,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+236,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+239,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__1__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+240,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+241,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+242,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+245,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__20__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+246,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+247,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+248,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+251,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__21__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+252,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+253,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+254,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+257,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__22__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+258,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+259,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+260,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+263,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__23__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+264,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+265,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+266,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+269,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__24__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+270,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+271,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+272,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+275,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__25__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+276,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+277,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+278,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+281,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__26__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+282,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+283,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+284,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+287,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__27__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+288,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+289,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+290,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+293,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__28__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+294,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+295,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+296,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+299,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__29__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+300,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+301,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+302,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+305,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__2__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+306,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+307,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+308,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+311,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__30__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+312,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+313,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+314,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+317,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__31__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+318,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+319,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+320,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+323,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__3__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+324,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+325,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+326,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+329,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__4__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+330,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+331,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+332,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+335,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__5__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+336,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+337,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+338,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+341,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__6__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+342,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+343,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+344,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+347,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__7__KET____DOT__u_mult_step__ready_o));
    bufp->fullIData(oldp+348,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__a_o),32);
    bufp->fullIData(oldp+349,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__b_o),32);
    bufp->fullWData(oldp+350,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__acc_o),65);
    bufp->fullBit(oldp+353,(vlSelf->mul__DOT____Vcellout__mult_stepx__BRA__8__KET____DOT__u_mult_step__ready_o));
    bufp->fullBit(oldp+354,(vlSelf->clk_i));
    bufp->fullBit(oldp+355,(vlSelf->rst_i));
    bufp->fullBit(oldp+356,(vlSelf->req_i));
    bufp->fullIData(oldp+357,(vlSelf->a_i),32);
    bufp->fullIData(oldp+358,(vlSelf->b_i),32);
    bufp->fullBit(oldp+359,(vlSelf->ready_o));
    bufp->fullQData(oldp+360,(vlSelf->result_o),64);
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->req_i)))));
    bufp->fullIData(oldp+363,(0x20U),32);
    __Vtemp_h63ab8a43__0[0U] = 0U;
    __Vtemp_h63ab8a43__0[1U] = 0U;
    __Vtemp_h63ab8a43__0[2U] = 0U;
    bufp->fullWData(oldp+364,(__Vtemp_h63ab8a43__0),65);
}
