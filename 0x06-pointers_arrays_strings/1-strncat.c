#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenating strings
 * @dest: a string
 * @src: a string
 * @n: an integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
