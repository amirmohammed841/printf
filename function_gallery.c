#include "main.h"
#include <stdarg.h>

/**
 *print_bin - function to change unsigned to binary
 *@list:list argument passed from caller
 *Return:int
 *
 *
 */
int print_bin(va_list list)
{
	unsigned int value = va_arg(list, unsigned int);
	int i, j = 0;
	int k = 0;
	int arr[32];

	if (value == 0)
		j += _putchar(0 + '0');
	for (i = 0; value > 0; i++)
	{
		arr[i] = value % 2;
		value = value / 2;
	}
	for (k = i - 1; k >= 0; k--)
	{
		j += _putchar(arr[k] + '0');
	}
	return (j);
}
