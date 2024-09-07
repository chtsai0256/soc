#include "os.h"

/*
 * Following functions SHOULD be called ONLY ONE time here,
 * so just declared here ONCE and NOT included in file os.h.
 */
extern void uart_init(void);
extern void page_init(void);
extern void sched_init(void);
extern void schedule(void);
extern void os_main(void);
extern void trap_init(void);
extern void plic_init(void);
extern void timer_init(void);

void start_kernel(void)
{
	uart_init();
	uart_puts("Hello, RVOS!\n");

	page_init();

	printf("page_init ok...\n");
	trap_init();
	printf("trap_init ok...\n");

	timer_init();
	printf("time_init ok...\n");

	sched_init();
	printf("sched_init ok...\n");

	os_main();
	printf("os_main_init ok...\n");
	schedule();

	uart_puts("Would not go here!\n");
	while (1) {}; // stop here!
}

