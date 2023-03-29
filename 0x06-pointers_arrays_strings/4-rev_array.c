#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: an array

 * @n: an integer
 */

void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end)
		*(a + end) = swap;
		begin++;
		end--;
	}
}
