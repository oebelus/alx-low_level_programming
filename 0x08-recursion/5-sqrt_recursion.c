#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - square root
 *
 * @n: the integer
 * Return: return
 */

int _sqrt_recursion(int n)
{
	int start = 1;
	int end = n;
	int mid = (start + end) / 2;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return n;
	}
    
	if (mid * mid == n)
	{
		return mid;
	}
	else if (mid * mid < n)
	{
		int result = _sqrt_recursion(mid + 1);
		if (result == -1)
		{
			return mid;
		}
		return result;
	}
	else
	{
		return _sqrt_recursion(start, mid - 1);
	}
}
