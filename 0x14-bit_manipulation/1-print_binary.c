#include "main.h"

/**
 * print_binary - decimal to binary
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		if (n > 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0'); # To convert to char
	}
	else
	{
		_putchar('0');
	}
}
