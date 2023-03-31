#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - rot13
 * @str: a string
 * Return: str
 */

void *rot13(char *str)
{
	int i, j;
	char *result = str;
	char *alphabet = 	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_alphabet = 	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				result[i] = rot13_alphabet[j];
				break;
			}
		}
	}
	return (result);
}
