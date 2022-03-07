#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes doggo structure
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
