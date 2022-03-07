#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new doggy
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name != NULL && owner != NULL)
	{
		nd = malloc(sizeof(name) + sizeof(owner));
		nd->name = name;
		nd->owner = owner;
		nd->age = age;
	}
	return (nd);
}
