#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to fill array with
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
