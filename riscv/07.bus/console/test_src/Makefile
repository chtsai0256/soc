
CROSS_COMPILE = riscv64-unknown-elf-
CFLAGS = -nostdlib -fno-builtin -march=rv32imazicsr -mabi=ilp32 -g -Wall
CC = ${CROSS_COMPILE}gcc
OBJCOPY = ${CROSS_COMPILE}objcopy
OBJDUMP = ${CROSS_COMPILE}objdump

#startup
SRCS_ASM += $(wildcard ./util/boot.S)
INC += -I./util

#util
SRCS_C += $(wildcard ./util/*.c)

#helloworld
SRCS_C += $(wildcard ./helloworld/*.c)
INC += -I./helloworld

OBJS = $(patsubst %.S, objs/%.o, $(notdir ${SRCS_ASM}))
OBJS += $(patsubst %.c, objs/%.o, $(notdir ${SRCS_C}))

.DEFAULT_GOAL := all
all: test.elf

# start.o must be the first in dependency!
test.elf: ${OBJS}
	${CC} ${CFLAGS} -T link.ld -o test.elf $^
	${OBJCOPY} -O binary test.elf test.bin

objs/%.o : ${SRCS_ASM} ${SRCS_C}
	${CC} ${CFLAGS} ${INC} -c $(filter %/$(*F).c,$^) $(filter %/$(*F).S,$^) -o $@

.PHONY : code
code: all
	@${OBJDUMP} -S test.elf | less

.PHONY : hex
hex: all
	@hexdump -C test.bin

.PHONY : clean
clean:
	rm -rf ./objs/*.o *.bin *.elf

