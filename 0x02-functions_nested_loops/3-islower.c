#include <stdio.h>

/**
 * Description: _islower - if lowercase.
 * Description: c - int.
 * Return: 1 if success 0 if failure.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
