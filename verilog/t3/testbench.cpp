#include "Vmul.h"
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

void one_cycle(Vmul *dut, VerilatedVcdC* tfp)
{
	dut->clk_i = 1;
	dut->eval();
	main_time += 5;
   	tfp->dump(main_time); //dump wave
	dut->clk_i = 0;
	dut->eval();
    main_time += 5;
   	tfp->dump(main_time); //dump wave
}

int main(int, char**) {
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	
 	Vmul *dut = new Vmul("top");
     dut->trace(tfp, 0);
     tfp->open("wave.vcd"); 

	//rst after 5 cycle
	dut->rst_i = 1;
	for(int i=0; i<5; i++) {
		one_cycle(dut,tfp);
	}
	dut->rst_i = 0;
    dut->eval();
	printf("start...\n");
	srand( time(NULL) );
	int caseNum = 10;
	for (int test=0; test<caseNum;test++) {
		int mul_ready;
		int a = rand()%(200);
		int b = rand()%(200);

		printf("a=%d, b=%d, ", a ,b);
		dut->a_i= a;
		dut->b_i= b;
		dut->req_i = 1;
		dut->eval();
		one_cycle(dut, tfp);
		mul_ready = dut->ready_o;		
		while(!mul_ready) {
			mul_ready = dut->ready_o;		
			if (mul_ready) {
				printf("%d\n", dut->result_o);
				dut->req_i = 0;
				dut->eval();
				one_cycle(dut, tfp);
			}else{
				one_cycle(dut, tfp);
			}
		}
	}
    dut->final();
    tfp->close();
    delete dut;
	return 0;
}
