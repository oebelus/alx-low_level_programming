#include <stdio.h>

/**
 * print_sign - if lowercase.
 * @n: is an integer.
 * Return: 1 if success 0 if failure.
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		int abs = n * -1;
		return (abs);
	}
}