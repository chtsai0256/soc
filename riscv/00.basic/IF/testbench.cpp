#include <stdio.h>
#include <string>
#include <assert.h>
#include "Vinst_fetch.h"
#include "Vinst_fetch__Syms.h"
#include "verilated_vcd_c.h"

#define MAX_SIM_CYCLE 20
vluint64_t main_time = 0; 

using namespace std;
void sim_mem_load_bin(Vinst_fetch_rom* rom, string filename);


double sc_time_stamp()
 {
     return (main_time);
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

    Vinst_fetch *top = new Vinst_fetch("top");
    top->trace(tfp, 0);
    tfp->open("wave.vcd"); 

    sim_mem_load_bin(top->inst_fetch->rom0, string(argv[1]));

    top->rst_i = 1;
    for (int i = 0 ; i < 5 ; i ++){
        top->clk_i = 0;
        top->eval ();
        main_time += 5;
        tfp->dump(main_time);
        top->clk_i = 1;
        top->eval ();
        main_time += 5;
        tfp->dump(main_time);
    }
    top->rst_i = 0;    
    
    for( int i=0; i<MAX_SIM_CYCLE;i++) {
        top->clk_i=0;
        top->eval();
        main_time +=5;
        tfp->dump(main_time);
        top->clk_i=1;
        top->eval();
        main_time +=5;
        tfp->dump(main_time);
    }
     top->final();
     tfp->close();
     delete top;
     return 0;
}


