CROSS_COMPILE = riscv64-unknown-elf-
CFLAGS = -nostdlib -fno-builtin -march=rv32imazicsr -mabi=ilp32 -g -Wall

QEMU = qemu-system-riscv32
QFLAGS = -nographic -smp 1 -machine virt -bios none

GDB = gdb-multiarch
CC = ${CROSS_COMPILE}gcc
OBJCOPY = ${CROSS_COMPILE}objcopy
OBJDUMP = ${CROSS_COMPILE}objdump

#startup
SRCS_ASM += $(wildcard ./startup/*.S)
INC += -I./startup

#asm
SRCS_ASM += $(wildcard ./asm/*.S)
INC += -I./asm

#lib
SRCS_C += $(wildcard ./lib/*.c)
INC += -I./lib

#kernel
SRCS_C += $(wildcard ./kernel/*.c)
INC += -I./kernel

OBJS = $(patsubst %.S, objs/%.o, $(notdir ${SRCS_ASM}))
OBJS += $(patsubst %.c, objs/%.o, $(notdir ${SRCS_C}))

.DEFAULT_GOAL := all
all: os.elf

# start.o must be the first in dependency!
os.elf: ${OBJS}
	${CC} ${CFLAGS} -T os.ld -o os.elf $^
	${OBJCOPY} -O binary os.elf os.bin

objs/%.o : ${SRCS_ASM} ${SRCS_C}
	${CC} ${CFLAGS} ${INC} -c $(filter %/$(*F).c,$^) $(filter %/$(*F).S,$^) -o $@

run: all
	@${QEMU} -M ? | grep virt >/dev/null || exit
	@echo "Press Ctrl-A and then X to exit QEMU"
	@echo "------------------------------------"
	@${QEMU} ${QFLAGS} -kernel os.elf

.PHONY : debug
debug: all
	@echo "Press Ctrl-C and then input 'quit' to exit GDB and QEMU"
	@echo "-------------------------------------------------------"
	@${QEMU} ${QFLAGS} -kernel os.elf -s -S &
	@${GDB} os.elf -q -x ../gdbinit

.PHONY : code
code: all
	@${OBJDUMP} -S os.elf | less

.PHONY : clean
clean:
	rm -rf ./objs/*.o *.bin *.elf

