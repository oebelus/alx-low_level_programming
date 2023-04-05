#include "main.h"
#include <stdio.h>

/**
 * factorial - prints the length of a string
 *
 * @n: the integer
 * Return: return
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
