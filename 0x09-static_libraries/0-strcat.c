#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenating strings
 * @dest: a string
 * @src: a string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
