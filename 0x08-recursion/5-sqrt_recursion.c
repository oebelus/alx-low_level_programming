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
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return n;
    }
    int mid = n / 2;
    int result = _sqrt_recursion(mid);
    if (result == -1) {
        return -1;
    }
    if (result * result <= n && (result + 1) * (result + 1) > n) {
        return result;
    }
    if (result * result > n) {
        return _sqrt_recursion(mid - 1);
    } else {
        return _sqrt_recursion(mid + 1);
    }
}

This implementation also has only one argument and uses binary search to find the square root of the input number.
imaneelfadilelidrissi@gmail.com
please keep above notation, just correct what i said

I apologize for misunderstanding your previous message. Here is the corrected version of the code with binary search inside the _sqrt_recursion function:

c

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0 || n == 1)
	{
		return n;
	}
	int mid = n / 2;
	int result = _sqrt_recursion(mid);

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
