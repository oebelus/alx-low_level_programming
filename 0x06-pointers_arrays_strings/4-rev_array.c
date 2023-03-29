#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: an integer
 * @n: an integer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--) {
		if (a[i] != a[0])
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	return (0);
}
