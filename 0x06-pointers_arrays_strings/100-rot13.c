#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - rot13
 * @str: a string
 * Return: str
 */

char *rot13(char *str)
{
	int index, count;
	int len = strlen(str);

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; index < len; index++)
	{
		for (count = 0; count < strlen(minus); count++)
		{
			if (str[index] == minus[count])
			{
				str[index] = rot[count];
				break;
			}
		}
	}
	return (str);
}