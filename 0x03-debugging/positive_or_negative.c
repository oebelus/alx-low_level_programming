#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: main - The size of different types.
 * Return: 0 if success
*/

int positive_or_negative(int n)
{
	/* your code goes there */
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
