#include <stdio.h>
#include "main.h"

/**
 * add - if lowercase.
 * @n: a number
 * Return: 1 if success 0 if failure.
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	else
		{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d", n);
			}
		}
	}
}
