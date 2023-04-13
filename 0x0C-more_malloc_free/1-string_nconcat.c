#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - cancatenating 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of s2
 * Return: 98 if error; result if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	if (n < s2_len)
	{
		s2_len = n;
	}
	char *result = malloc(s1_len + s2_len + 1);

	if (result = NULL)
	{
		exit(98);
	}
	strcpy(result, s1);
	strncat(result, s2, s2_len);

	return (result);
}
