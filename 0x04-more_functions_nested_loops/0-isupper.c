#include "main.h"

/** 
 * _isupper - check if uppercase.
 * @c: an integer.
 * Return: 1 if yes 0 if no.
 */

int _isupper(int c);
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
