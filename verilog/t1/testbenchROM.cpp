#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vrom.h"
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

     Vrom *top = new Vrom("top");
     top->trace(tfp, 0);
     tfp->open("wave.vcd"); 

    int pos=0;
     while(sc_time_stamp(20) < 19 && !Verilated::gotFinish())
     {    
        top->ce_i = 1;
        top->addr_i = pos;
        top->eval();
        printf("pos = %d, data=%x\n",pos, top->inst_o);
        tfp->dump(main_time); //dump wave
        main_time += 1; 
        pos++;
     }
     top->final();
     tfp->close();
     delete top;
     return 0;
}
