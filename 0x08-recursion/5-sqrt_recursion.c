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
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		int mid = n / 2;
		int result = _sqrt_recursion(mid);
		if (result == -1)
		{
			return -1;
		}
		else if (result * result == n)
		{
			return result;
		}
		else if (result * result < n && (result + 1) * (result + 1) > n)
		{
			return result;
		}
		else if (result * result > n)
		{
			return _sqrt_recursion(mid);
		}
		else
		{
			return _sqrt_recursion(n - mid);
		}
	}
}
