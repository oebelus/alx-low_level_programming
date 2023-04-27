#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements
 * @h: pointer to the head to the list
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h; // pointer to the head
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		count += 1;
		current = current->next
		}
	}
}
