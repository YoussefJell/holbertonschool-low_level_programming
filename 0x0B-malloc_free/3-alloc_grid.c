#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates grid
 * @width: width of grid
 * @height: height of grid
 * Return: null on failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width == 0 || height == 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	else
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int) * width);
		}
	return (arr);
}
