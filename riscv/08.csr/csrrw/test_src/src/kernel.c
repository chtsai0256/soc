#include "riscv.h"

void start_kernel(void)
{
	printf("Hello, RVOS!\n");

	int c=0x12345678;
	w_mscratch(c);
	int x = r_mscratch();
	printf("store=%08x, read=%08x\n", c, x);
}

