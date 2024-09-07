CROSS_COMPILE = riscv64-unknown-elf-
CFLAGS = -nostdlib -fno-builtin -march=rv32ima -mabi=ilp32 -g -Wall

CC = ${CROSS_COMPILE}gcc
OBJCOPY = ${CROSS_COMPILE}objcopy
OBJDUMP = ${CROSS_COMPILE}objdump

.DEFAULT_GOAL := all
all: 
	${CC} ${CFLAGS} test.S -Ttext=0x00000000 -o test.elf
	${OBJCOPY} -O binary test.elf test.bin

.PHONY : code
code: all
	@${OBJDUMP} -S test.elf | less

.PHONY : hex
hex: all
	@hexdump -C test.bin

.PHONY : clean
clean:
	rm -rf *.o *.bin *.elf
