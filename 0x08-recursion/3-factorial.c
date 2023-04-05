#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of a string
 *
 * @s: the string
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
		return n * factorial(n - 1);
	}
}
