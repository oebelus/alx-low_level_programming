#include "main.h"

/**
 * get_bit - decimal to binary
 * @n: pointer to integer
 * @index: index of the char
 * Return: The value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
