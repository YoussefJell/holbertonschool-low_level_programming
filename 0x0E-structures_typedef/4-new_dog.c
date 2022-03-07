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

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	if (nd->name == NULL)
		return (NULL);
	if (nd->owner == NULL)
		return (NULL);
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
