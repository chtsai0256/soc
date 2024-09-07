
#ifndef __SOC_REGS_H__
#define __SOC_REGS_H__

#define CTRL_BASE 0x200000
#define CTRL_OUT  0x4
#define CTRL_CTRL 0x8

#define CLINT_BASE 0x2000000L
#define CLINT_MSIP(hartid) (CLINT_BASE + 4 * (hartid))
#define CLINT_MTIMECMP(hartid) (CLINT_BASE + 0x4000 + 8 * (hartid))
#define CLINT_MTIME (CLINT_BASE + 0xBFF8) // cycles since boot.

/*
#define TIMER_BASE 0x300000
#define TIMER_MTIME 0x0
#define TIMER_MTIMEH 0x4
#define TIMER_MTIMECMP 0x8
#define TIMER_MTIMECMPH 0xC
*/
#endif  // __SOC_REGS_H__
