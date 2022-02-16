#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements
 * Return: none, void
 */
void reverse_array(int *a, int n)
{
	char tmp;
	int j;

	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = tmp;
	}
}
