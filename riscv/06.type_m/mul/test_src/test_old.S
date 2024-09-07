
.section .text

_start:
  .global _start

  /* clear BSS */
  la x26, start_bbs
  addi x27, x26, 0x10

  bge x26, x27, zero_loop_end

zero_loop:
  sw x0, 0(x26)
  addi x26, x26, 4
  ble x26, x27, zero_loop
zero_loop_end:


main_entry:
  /* jump to main program entry point (argc = argv = 0) */
  addi x10, x0, 0
  addi x11, x0, 0
  jal x1, main

  /* If execution ends up here just put the core to sleep */
sleep_loop:
  j sleep_loop

/* =================================================== [ exceptions ] === */
/* This section has to be down here, since we have to disable rvc for it  */


main:
  nop
  nop
  nop

start_bbs:
