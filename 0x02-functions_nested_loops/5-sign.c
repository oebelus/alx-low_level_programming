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
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		printf("0");
	}
	else
	{
		return (-1);
		printf("-");
	}
		
}