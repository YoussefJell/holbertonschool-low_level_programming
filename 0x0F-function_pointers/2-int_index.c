#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for index
 * @array: array
 * @size: size
 * @cmp: compare func
 * Return: Integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int k = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		k = cmp(array[i]);
		if (k != 0)
		{
			return (i);
		}
	}
	return (-1);
}
