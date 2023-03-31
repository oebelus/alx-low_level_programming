#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenating strings
 * @dest: a string
 * @src: a string
 * Return: dest
 */

void rot13(char *str)
	{
	int length = strlen(str);
	int j;

	for (j = 0; j <= strlen(str); j++)
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] = ((str[j] - 'A') + 13) % 26 + 'A';
		}
		else if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = ((str[j] - 'a') + 13) % 26 + 'a';
		}
	}
	return (str);
}
