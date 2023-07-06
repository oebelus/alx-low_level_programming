#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at an index
 * @n: pointer to integer
 * @index: index of the char
 * Return: The value of the bit at the given index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
