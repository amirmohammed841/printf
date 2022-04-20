#include "main.h"

/**
 *caller - calls apropriate function
 *@format:char
 *Return:int
 */

int (*caller(const char *format))(va_list)
{
	int i;

	func_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{"b", print_bin},
		{NULL, NULL}
	};
	for (i = 0; p[i].t; i++)
	{
		if (*format == *(p[i].t))
		{
			return (p[i].f);
		}
	}
	return (0);/*null*/
}
