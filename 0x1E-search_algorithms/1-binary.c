#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of
 *integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t max = size - 1;
	size_t min = 0;
	size_t mid = (max + min) / 2;
	size_t i = 0;

	if (!array)
		return (-1);

	while (min <= max)
	{
		mid = (max + min) / 2;

		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i == min)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");

		if (value > array[mid])
			min = mid + 1;
		else if (value < array[mid])
			max = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
