#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vadder4.h"
#include "verilated_vcd_c.h"
 
vluint64_t main_time = 0;  //initial 仿真时间
 
double sc_time_stamp(int len)
 {
     return (main_time%len);
 }
 
int main(int argc,char **argv)
{
     Verilated::commandArgs(argc,argv);
     Verilated::traceEverOn(true); //导出vcd波形需要加此语句
 
     VerilatedVcdC* tfp = new VerilatedVcdC(); //导出vcd波形需要加此语句
 
     Vadder4 *top = new Vadder4("top");
     top->trace(tfp, 0);
     tfp->open("wave.vcd"); //打开vcd
 
     while(sc_time_stamp(20) < 19 && !Verilated::gotFinish())
     {                                                                                                                                                                                                            
     	int a = rand() & 0xF;
     	int b = rand() & 0xF;
     	top->a = a;
     	top->b = b;
     	top->c_in=0;
     	top->eval();
     	printf("time=%ld, a = %d, b = %d, sum = %d\n",main_time, a,b, top->sum);
     	tfp->dump(main_time); //dump wave
     	main_time++; //推动仿真时间
     }
     top->final();
     tfp->close();
     delete top;
     return 0;
}
