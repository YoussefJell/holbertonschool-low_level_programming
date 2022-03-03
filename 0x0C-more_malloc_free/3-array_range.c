#include "main.h"
#include <stdlib.h>
/**
 * array_range - array from min to max
 * @min: minimum
 * @max: maximum
 * Return: ptr to memory allocated
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min) + 4);
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
