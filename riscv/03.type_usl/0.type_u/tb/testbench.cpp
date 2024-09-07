#include <stdio.h>
#include <string>
#include <assert.h>
#include "Vtest_top.h"
#include "Vtest_top__Syms.h"
#include "verilated_vcd_c.h"

#define MAX_SIM_CYCLE 20
vluint64_t main_time = 0; 

using namespace std;
void sim_mem_load_bin(Vtest_top_rom* rom, string filename);
uint32_t sim_regs_read(Vtest_top_regfile* regs,uint32_t addr);

double sc_time_stamp()
 {
     return (main_time);
 }

 void one_cycle(Vtest_top *top, VerilatedVcdC* tfp)
 {
        top->clk_i = 0;
        top->eval ();
        main_time += 5;
        tfp->dump(main_time);
        top->clk_i = 1;
        top->eval ();
        main_time += 5;
        tfp->dump(main_time);
 }

int main(int argc,char **argv)
{
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true); 

    if (argc < 2) {
        printf("Please provide riscv test elf file\n");
        return -1;
    }

    VerilatedVcdC* tfp = new VerilatedVcdC(); 

    Vtest_top *top = new Vtest_top("top");
    top->trace(tfp, 0);
    tfp->open("wave.vcd"); 

    sim_mem_load_bin(top->test_top->rom0, string(argv[1]));

    top->rst_i = 1;
    for (int i = 0 ; i < 5 ; i ++)
        one_cycle(top, tfp);
    top->rst_i = 0;    
    
    for( int i=0; i<MAX_SIM_CYCLE;i++) 
        one_cycle(top,tfp);
    
    for (int i=0; i<32;i++) {
        int x = sim_regs_read(top->test_top->regfile0, i);        
        printf(" x%02d = %08x% --  ", i, x);
        if (i%4==3) printf("\n");
    }

     top->final();
     tfp->close();
     delete top;
     return 0;
}


