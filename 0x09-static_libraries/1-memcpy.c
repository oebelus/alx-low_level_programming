#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: where to put copied buffer
 * @src: source to copy from
 * @n: memory area
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
