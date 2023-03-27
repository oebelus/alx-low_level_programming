#include <stdio.h>
#include "main.h"

/**
 * print_rev - the length of a string
 * @s: a string
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
