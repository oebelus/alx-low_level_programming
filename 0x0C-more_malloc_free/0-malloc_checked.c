#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: the memory space
 * Return: 98 if error; ptr if success
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
