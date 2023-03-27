#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - the length of a string
 * @s: a string
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
