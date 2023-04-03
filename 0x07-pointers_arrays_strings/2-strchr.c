#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character
 * @s: the string
 * @c: the character to find
 *
 * Return: s if yes, NULL if no.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
	
}
