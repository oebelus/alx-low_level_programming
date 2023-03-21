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

	int c = _putchar(b);

	return(c);
}