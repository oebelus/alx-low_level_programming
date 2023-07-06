#include <stdio.h>

/**
 * print_binary - decimal to binary
 * @n: pointer to integer
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		if (n > 1)
			print_binary(n >> 1);
		putchar((n & 1) + '0');

	else
	{
		putchar('0');
	}
}
