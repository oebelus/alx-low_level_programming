#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: integer
 * Return: 0 if 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, total = 0;

	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);

	return (total);
}
