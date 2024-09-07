#include "Vadder4.h"
#include <memory>
#include <iostream>

int main(int, char**) {
	std::unique_ptr<Vadder4> dut(new Vadder4);

	dut->a=10;
	dut->b=4;
	dut->c_in=0;
	dut->eval();
	printf("%d\n", dut->sum);
	for(int i=0; i<16; i++) {
		dut->b = i;
		dut->eval();
		printf("%d\n", dut->sum);
	}
	return 0;
}
