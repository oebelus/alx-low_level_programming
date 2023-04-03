#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: pointer to memory area to fill
 * @b: constant byte
 * @n: bytes to be filled
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
