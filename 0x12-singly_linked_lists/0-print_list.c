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
	const list_t *current = head; // pointer to the head
	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", current->str);
		}
		current = current->next
	}
}
