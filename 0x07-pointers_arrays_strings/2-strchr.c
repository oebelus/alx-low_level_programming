#include "main.h"

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
	int i; 

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
