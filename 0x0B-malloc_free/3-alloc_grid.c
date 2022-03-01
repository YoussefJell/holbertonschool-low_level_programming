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

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
