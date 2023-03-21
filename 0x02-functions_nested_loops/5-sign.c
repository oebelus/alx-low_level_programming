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
		printf("+1");
		return (1);
	}
	else if (n == 0)
	{
		printf("00");
		return (0);
	}
	else
	{
		printf("-1");
		return (-1);
	}
		
}