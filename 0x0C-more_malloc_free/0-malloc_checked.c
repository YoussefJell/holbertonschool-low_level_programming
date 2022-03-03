#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: pointer to first spot or exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
