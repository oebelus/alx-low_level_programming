#include <stdio.h>

/**
 * print_sign - if lowercase.
 * @n: is an integer.
 * Return: 1 if success 0 if failure.
*/

int _abs(int)
{
	if (n >= 0)
	{
		printf("%d", n);
		return (1);
	}
	else
	{
		int abs = n * (-1);
		printf("%d", abs);
		return (0);
	}
}