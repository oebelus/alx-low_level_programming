#include "main.h"

/**
 * _isdigit - if an int is a digit
 * @c: an integer
 * Return: 1 if yes 0 if no
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}