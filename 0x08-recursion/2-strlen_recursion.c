#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string
 *
 * @s: the string
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') return 0;
	else return 1 + _strlen_recursion(s + 1);
}
