#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character
 * @s: the string
 * @c: the character to find
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
