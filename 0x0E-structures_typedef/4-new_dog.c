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

	if (nd->name != NULL)
	{
		nd = malloc(sizeof(nd->name));
		nd->name = name;
	}
	if (nd->owner != NULL)
	{
		nd = malloc(sizeof(nd->owner));
		nd->owner = owner;
	}
	nd->age = age;
	return (nd);
}
