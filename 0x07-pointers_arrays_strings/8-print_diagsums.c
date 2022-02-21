#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonal in square matrix
 * @a: matrix
 * @size: size
 * Return: void, none
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int principal = 0, secondary = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				principal += a[(size * i) + j];

			if ((i + j) == (size - 1))
				secondary += a[(size * (i + 1)) - (i + 1)];
		}
	}
	printf("%d, %d\n", principal, secondary);
}
