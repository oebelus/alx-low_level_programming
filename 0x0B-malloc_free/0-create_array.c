#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars
*@size: Size array
*@c: charto insert
*Return: NULL if failure, array if success
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
