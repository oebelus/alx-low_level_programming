#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - if lowercase.
 * @n: is an integer.
 * Return: 1 if success 0 if failure.
*/

int print_last_digit(int n)
{
	int b = n % 10;

	if (b < 0)
	{
		b = b * -1;
	}

	_putchar(b + '0');
	return (b);
