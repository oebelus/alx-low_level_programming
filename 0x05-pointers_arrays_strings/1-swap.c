#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - reset to 98
 * @n: pointer
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}