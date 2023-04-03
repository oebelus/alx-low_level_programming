#include "main.h"

/**
 * _strspn - the length of a prefix substring
 * @s: segment to return bytes from
 * @c: the bytes to include
 *
 * Return: s if true, null if false.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
