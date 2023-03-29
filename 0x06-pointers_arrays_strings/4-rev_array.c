#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: an integer
 * @n: an integer
 * Return: result
 */

void reverse_array(int *a, int n)
{
	int size = sizeof(a) / sizeof(a[0]);
	int i;

	for (i = size - 1; i >= 0; i--) {
		if (a[i] != a[0])
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}
