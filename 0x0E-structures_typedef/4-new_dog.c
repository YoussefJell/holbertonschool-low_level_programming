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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
