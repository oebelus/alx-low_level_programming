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
	int mid = n / 2;
	int result = _sqrt_recursion(mid);

	if (n < 0)
	{
		return -1;
	}
	if (n == 0 || n == 1)
	{
		return n;
	}
 	if (result == -1)
	{
		return -1;
	}
	if (result * result <= n && (result + 1) * (result + 1) > n)
	{
		return result;
	}
	if (result * result > n)
	{
		return _sqrt_recursion(n - mid);
	}
	else
	{
		return _sqrt_recursion(n);
    	}
}
