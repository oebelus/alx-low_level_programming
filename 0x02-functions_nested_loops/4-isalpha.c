#include <stdio.h>

/**
 * _islower - if lowercase.
 * @c: is an integer.
 * Return: 1 if success 0 if failure.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
