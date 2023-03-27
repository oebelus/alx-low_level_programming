#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap 2 pointers
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
