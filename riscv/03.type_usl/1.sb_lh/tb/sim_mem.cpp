
#include <cstdint>
#include <cstdlib>
#include "verilated_vcd_c.h"
#include "Vtest_top.h"
#include "Vtest_top__Syms.h"
#include "verilated.h"
#include <string>
#include <fstream>
#include <iostream>



#define bswap from_le

//X86 machine
template<typename T> static inline T from_le(T n) { return n; }

void sim_mem_write(Vtest_top_dpram__R200000_RB15* rom, uint32_t addr, size_t length, const void* bytes)
{
    //out of boundary protection?
    for (int i = 0 ; i < length ; i +=4 ) {
        rom->writeByte(addr+i,*((unsigned char*)bytes+i+3));
        rom->writeByte(addr+i+1,*((unsigned char*)bytes+i+2));
        rom->writeByte(addr+i+2,*((unsigned char*)bytes+i+1));
        rom->writeByte(addr+i+3,*((unsigned char*)bytes+i));
    }
}

uint32_t sim_regs_read(Vtest_top_regfile* regs,uint32_t addr)
{
    uint32_t v;
    regs->readRegister(addr, v);
    //printf("read register\n");
    return v;
}
void sim_mem_load_bin(Vtest_top_dpram__R200000_RB15* rom, std::string fn)
{
    std::ifstream bpfs(fn, std::ios::binary|std::ios::ate);
    std::ifstream::pos_type pos = bpfs.tellg();
    int f_length = pos;
    char * buf = new char[f_length];
    bpfs.seekg(0, std::ios::beg);
    bpfs.read(buf, f_length);
    bpfs.close();
    printf("file size: %d\n", f_length);

    for(int i=0; i<f_length;i+=4) {
        sim_mem_write(rom, bswap(i),4,(uint8_t*)buf+i);
    }
}
