TOP = test_top
GTKWAVE = gtkwave

V_SRC = ./rtl/soc/test_top.v
V_SRC += ./rtl/core/core_top.v
V_SRC += $(wildcard ./rtl/core/if/*.v)
V_SRC += $(wildcard ./rtl/core/id/*.v)
V_SRC += $(wildcard ./rtl/core/exe/*.v)
V_SRC += $(wildcard ./rtl/core/mem/*.v)
V_SRC += $(wildcard ./rtl/core/wb/*.v)
V_SRC += $(wildcard ./rtl/core/ctrl/*.v)
V_SRC += $(wildcard ./rtl/device/*.v)

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ./rtl/soc/${TOP}.v
INC = -Irtl/core/include
PROG = test
PROG_S = $(wildcard ./test_src/*.S)

.DEFAULT_GOAL := all
all: vhdl

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC} 
	verilator --cc --trace -Wall --exe --build ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace
	
obj_dir/V${TOP}.exe : obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

test_src/${PROG}.bin: ${PROG_S}
	$(MAKE) -C test_src

.PHONY : vhdl
vhdl: obj_dir/V${TOP}.mk

.PHONY : run
run: test_src/${PROG}.bin obj_dir/V${TOP}.exe 
	obj_dir/V${TOP} test_src/${PROG}.bin

.PHONY : wave
wave: run
	${GTKWAVE} wave.vcd

.PHONY : clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin

