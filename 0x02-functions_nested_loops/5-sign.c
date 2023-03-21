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
		printf("+1\n");
	}
	else if (n == 0)
	{
		printf("00\n");
	}
	else
	{
		printf("-1\n");
	}
		
}