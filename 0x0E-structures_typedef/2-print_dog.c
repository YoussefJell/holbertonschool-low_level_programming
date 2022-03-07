#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints doggo structure
 * @d: struct
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit();
	else if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else if (d->owner == NULL)
		d->owner = "(nil)";
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
