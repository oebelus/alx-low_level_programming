#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - initialise a variable of type struct dog
 * @d: pointer to structure dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %d\nAge: %f\nOwner: %d\n", d->name, d->age, d->owner);
}
