#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copies string
 * @dest: destination
 * @src: destination
 * Return: (dest value)
 */
char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (saved);
}
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

	dog->name = malloc(sizeof(name));
	dog->owner = malloc(sizeof(owner));
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
