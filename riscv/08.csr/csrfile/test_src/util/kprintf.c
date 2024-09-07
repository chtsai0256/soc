

#include "kprintf.h"
#include "soc_reg.h"
#include "util.h"

#include <stdarg.h>


/*----------------------------------------------*/
/* Put a character                              */
/*----------------------------------------------*/
int put_char(char c) 
{
  DEV_WRITE(CTRL_BASE + CTRL_OUT, (unsigned char)c);
  return c;
}

int put_str(const char *str) 
{
  while (*str) 
  {
    put_char(*str++);
  }
  return 0;
}

static void _kprintf(const char* s, va_list vl)
{
	int format = 0;
	int longarg = 0;
	unsigned char out;
	for (; *s; s++) {
		if (format) {
			switch(*s) {
			case 'l': {
				longarg = 1;
				break;
			}
			case 'p': {
				longarg = 1;
				put_str("0x");
			}
			case 'x': {
				long num = longarg ? va_arg(vl, long) : va_arg(vl, int);
				int hexdigits = 2*(longarg ? sizeof(long) : sizeof(int))-1;
				for(int i = hexdigits; i >= 0; i--) {
					unsigned char out;
					int d = (num >> (4*i)) & 0xF;
					out = (d < 10 ? '0'+d : 'a'+d-10);
					put_char(out);
				}
				longarg = 0;
				format = 0;
				break;
			}
			case 'd': {
				long num = longarg ? va_arg(vl, long) : va_arg(vl, int);
				if (num < 0) {
					num = -num;
					put_char('-');
				}
				long digits = 1;
				for (long nn = num; nn /= 10; digits++);
				for (int i = digits-1; i >= 0; i--) {
				    out = '0' + (num % 10);
					put_char(out);
					num /= 10;
				}
				longarg = 0;
				format = 0;
				break;
			}
			case 's': {
				const char* s2 = va_arg(vl, const char*);
				while (*s2) {
					put_char(*s2);
					s2++;
				}
				longarg = 0;
				format = 0;
				break;
			}
			case 'c': {
				out = (char)va_arg(vl,int);
				put_char(out);
				longarg = 0;
				format = 0;
				break;
			}
			default:
				break;
			}
		} else if (*s == '%') {
			format = 1;
		} else {
			put_char(*s);
		}
   	}
}


void printf(const char* s, ...)
{
	va_list vl;
	va_start(vl, s);
	_kprintf(s, vl);
	va_end(vl);
}




