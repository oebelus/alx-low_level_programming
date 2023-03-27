#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: a string
 * Return: the length if success
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1];
		}
	}
	putchar('\n');
}
