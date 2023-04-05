#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string
 *
 * @s: the string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s+1);
		printf("%c", *s);
	}
}
