#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - the length of a string
 * @s: a string
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[len] = s[len - 1 - i];
		s[len -1 - i] = tmp;
	}
}
