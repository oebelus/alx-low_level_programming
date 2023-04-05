#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - square root
 *
 * @n: the integer
 * Return: return
 */

int _sqrt_recursion(int n)
{
	int mid = (start + end) / 2;
	if (n < 0)
	{
		return -1;
	}
	if (n == 0 || n == 1)
	{
		return n;
	}
	int start = 1, end = n, ans = 0;

	while (start <= end)
	{
		if (mid * mid == n)
		{
			return mid;
		}
		else if (mid * mid < n)
		{
			start = mid + 1;
			ans = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return ans;
}
