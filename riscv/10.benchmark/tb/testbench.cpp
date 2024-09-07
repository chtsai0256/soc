#include <stdio.h>
#include <string>
#include <assert.h>
#include "Vtest_top.h"
#include "Vtest_top__Syms.h"
#include "verilated_vcd_c.h"

#define MAX_SIM_CYCLE 200
vluint64_t main_time = 0; 

using namespace std;
void sim_mem_load_bin(Vtest_top_dpram__R200000_RB15* rom, string filename);
uint32_t sim_regs_read(Vtest_top_regfile* regs,uint32_t addr);

double sc_time_stamp()
 {
     return (main_time);
 }

 void one_cycle(Vtest_top *top, VerilatedVcdC* tfp, int vcd)
 {
        top->clk_i = 0;
        top->eval ();
        if (vcd==2) {
            main_time += 1;
            tfp->dump(main_time);
        }
        top->clk_i = 1;
        top->eval ();
        if (vcd==2) {
            main_time += 1;
            tfp->dump(main_time);
        }
 }

int main(int argc,char **argv)
{
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true); 

    if (argc < 2) {
        printf("Please provide riscv test elf file\n");
        return -1;
    }

    int isa_test = 0;
    if (argc == 3) {
        isa_test = stoi(string(argv[2]));
    }

    VerilatedVcdC* tfp = new VerilatedVcdC(); 

    Vtest_top *top = new Vtest_top("top");
    if (isa_test==2) {
        top->trace(tfp, 0);
        tfp->open("wave.vcd"); 
    }

    sim_mem_load_bin(top->test_top->data_ram0, string(argv[1]));

    top->rst_i = 1;
    for (int i = 0 ; i < 5 ; i ++)
        one_cycle(top, tfp, isa_test);
    top->rst_i = 0;    
    
    while(!Verilated::gotFinish()) {
        one_cycle(top,tfp, isa_test);
        int x = top->halt_o;
        if (x==1)
            break;
        //printf("halt=%d\n", x);
    }

    if (isa_test==1) {
        int a0 = sim_regs_read(top->test_top->core_top0->regfile0, 10);
        if (a0) { 
            printf("FAIL %d\n",a0);
        } else
            printf("PASS\n");
    }
    /*
   for (int i=0; i<32;i++) {
        int x = sim_regs_read(top->test_top->core_top0->regfile0, i);        
        printf(" x%02d = %08x% --  ", i, x);
        if (i%4==3) printf("\n");
    } 
    */   
     top->final();
     tfp->close();
     delete top;
     return 0;
}


