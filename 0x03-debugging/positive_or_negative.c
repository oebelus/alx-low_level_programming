#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: positive_or_negative - The size of different types.
 * @n: an integer.
 * Return: 0 if success
*/

void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}