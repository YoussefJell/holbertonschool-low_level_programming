#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints doggo structure
 * @d: struct
 * Return: Void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
