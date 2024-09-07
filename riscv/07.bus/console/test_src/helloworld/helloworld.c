
#include "util.h"
#include "soc_reg.h"
#include "kprintf.h"

int main(int argc, char **argv) 
{
  int c=18;
  char *s = "Hello";

  c = 0x31;
  printf("DCLab 系統晶片%s %c, %d, %x, %p\n",s,c,c,c,s);
  return 0;
}


