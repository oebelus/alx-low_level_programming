#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - concatenating strings
 * @dest: a string
 * @src: a string
 * @n: an integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
