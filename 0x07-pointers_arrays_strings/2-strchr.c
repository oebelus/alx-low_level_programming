#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strchr - locates a character
 * @s: where to put copied buffer
 * @c: source to copy from
 * @n: memory area
 *
 * Return: NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}
	return NULL;
}