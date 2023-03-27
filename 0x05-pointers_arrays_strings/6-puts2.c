#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: a string
 * Return: the length if success
 */

void puts2(char *str)
{
	int i = 0;

	while (i < strlen(str))
	{
		putchar(str[i]);
		putchar('\n');
		i++;
	}
}
