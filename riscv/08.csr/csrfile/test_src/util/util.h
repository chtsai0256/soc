#ifndef _UTILS_H_
#define _UTILS_H_

#include <stdint.h>

#define DEV_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = val)
#define DEV_READ(addr, val) (*((volatile uint32_t *)(addr)))

/**
 * Immediately halts the simulation
 */
void sim_halt();

#endif