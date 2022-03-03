#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates array with size
 * @nmemb: elements
 * @size: size of array
 * Return: void doesn't return
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
