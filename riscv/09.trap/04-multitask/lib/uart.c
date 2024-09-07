#include "os.h"

void uart_init()
{

}

int uart_putc(char ch)
{
	put_char(ch);
	return ch;
}

void uart_puts(char *s)
{
	put_str(s);
}

/*----------------------------------------------*/
/* Put a character                              */
/*----------------------------------------------*/
void put_char(char c) 
{
  DEV_WRITE(CTRL_BASE + CTRL_OUT, (unsigned char)c);
}

void put_str(const char *str) 
{
  while (*str) 
  {
    put_char(*str++);
  }
}
