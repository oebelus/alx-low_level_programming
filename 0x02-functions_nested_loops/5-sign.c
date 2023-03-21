#include <stdio.h>

/**
 * print_sign - if lowercase.
 * @n: is an integer.
 * Return: 1 if success 0 if failure.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar(',');
		putchar(' ');
		putchar('1');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		putchar(',');
		putchar(' ');
		putchar('/');
		return (-1);
	}
		
}