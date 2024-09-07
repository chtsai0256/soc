#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vram.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0; 

double sc_time_stamp(int len)
 {
     return (main_time%len);
 }

int main(int argc,char **argv)
{
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true); 

    VerilatedVcdC* tfp = new VerilatedVcdC(); 

    Vram *top = new Vram("top");
    top->trace(tfp, 0);
    tfp->open("wave.vcd"); 

    int pos=0;
    for (pos=0;pos<16;pos++)
    {
        top->ce_i=1;
        top->clk_i=0;
        top->eval();
        tfp->dump(main_time); //dump wave
        main_time++; 
        top->clk_i=1;
        top->addr_i = pos;
        top->data_i = pos;
        top->we_i = 1;
        top->eval();
        tfp->dump(main_time); //dump wave
        main_time++; 

    }

    pos=0;
    for (pos=0;pos<16;pos++)
    {
        top->ce_i=1;
        top->clk_i=0;
        top->eval();
        tfp->dump(main_time); //dump wave
        main_time++; 
        top->clk_i=1;
        top->addr_i = pos;
        top->we_i = 0;
        top->eval();
        printf("read %d = %d\n", pos, top->data_o);
        tfp->dump(main_time); //dump wave
        main_time++; 
    }
    top->final();
    tfp->close();
    delete top;
    return 0;
}
