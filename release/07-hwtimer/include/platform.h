#ifndef __PLATFORM_H__
#define __PLATFORM_H__

#define MAXNUM_CPU 1


#define DEV_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = val)
#define DEV_READ(addr, val) (*((volatile uint32_t *)(addr)))

#define CTRL_BASE 0x200000
#define CTRL_OUT  0x4
#define CTRL_CTRL 0x8


 /*
  * The Core Local INTerruptor (CLINT) block holds memory-mapped control and
  * status registers associated with software and timer interrupts.
  * QEMU-virt reuses sifive configuration for CLINT.
  * see https://gitee.com/qemu/qemu/blob/master/include/hw/riscv/sifive_clint.h
  * enum {
  * 	SIFIVE_SIP_BASE     = 0x0,
  * 	SIFIVE_TIMECMP_BASE = 0x4000,
  * 	SIFIVE_TIME_BASE    = 0xBFF8
  * };
  *
  * enum {
  * 	SIFIVE_CLINT_TIMEBASE_FREQ = 10000000
  * };
  *
  * Notice:
  * The machine-level MSIP bit of mip register are written by accesses to
  * memory-mapped control registers, which are used by remote harts to provide
  * machine-mode interprocessor interrupts.
  * For QEMU-virt machine, Each msip register is a 32-bit wide WARL register
  * where the upper 31 bits are tied to 0. The least significant bit is
  * reflected in the MSIP bit of the mip CSR. We can write msip to generate
  * machine-mode software interrupts. A pending machine-level software
  * interrupt can be cleared by writing 0 to the MSIP bit in mip.
  * On reset, each msip register is cleared to zero.
  */
#define CLINT_BASE 0x2000000L
#define CLINT_MSIP(hartid) (CLINT_BASE + 4 * (hartid))
#define CLINT_MTIMECMP(hartid) (CLINT_BASE + 0x4000 + 8 * (hartid))
#define CLINT_MTIME (CLINT_BASE + 0xBFF8) // cycles since boot.

/* 10000000 ticks per-second */
#define CLINT_TIMEBASE_FREQ 10000000

#endif /* __PLATFORM_H__ */
