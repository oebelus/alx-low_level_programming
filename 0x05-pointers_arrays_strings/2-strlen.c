#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - the length of a string
 * @s: a string
 * Return: the length if success
 */

int _strlen(char *s)
{
	unsigned int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
