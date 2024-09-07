#include "Vdiv.h"
#include <memory>
#include <iostream>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
#include "verilated_vcd_c.h"

#define MAX_CYCLE 1000
vluint64_t main_time = 0; 

double sc_time_stamp()
 {
     return (main_time);
 }

int main(int, char**) {
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	
 	Vdiv *dut = new Vdiv("top");
     dut->trace(tfp, 0);
     tfp->open("wave.vcd"); 

		//rst after 5 cycle
		dut->rst_i = 1;
		for(int i=0; i<5; i++) {
			dut->clk_i = 0;
			dut->eval();
			main_time += 5;
	     	tfp->dump(main_time); //dump wave
			dut->clk_i = 1;
			dut->eval();
			main_time += 5;
	     	tfp->dump(main_time); //dump wave
		}
		dut->rst_i = 0;
    	dut->eval();
		printf("start...\n");
		srand( time(NULL) );
	int op=0;
	int div_ready = 1;
	for (int clk=0; clk<MAX_CYCLE;clk++) {
		int a;
		int b;
		if (div_ready) {
			a = rand()%(200+60+1)-60;
			b = rand()%(200+60+1)-60;
			printf("a=%d, b=%d, op=%d\n", a ,b, op);
			dut->a_i= a;
			dut->b_i= b;
			dut->req_i = 1;
			dut->eval();
		}
		main_time += 5;
     	tfp->dump(main_time); //dump wave
     	main_time++; 
		dut->clk_i = 0;
		dut->eval();
   	    tfp->dump(main_time); //dump wave
		dut->clk_i = 1;
		dut->eval();
		main_time += 5;
     	tfp->dump(main_time); //dump wave
		div_ready = dut->ready_o;
		if (dut->ready_o == 1) {
			printf("%d / %d 商 %d 餘數 %d\n", a, b, dut->q_o, dut->r_o);
			dut->req_i = 0;
			dut->ready_o = 0;
			dut->eval();
			break;
		}
     	main_time++; 
	}
    dut->final();
    tfp->close();
    delete dut;
	return 0;
}
