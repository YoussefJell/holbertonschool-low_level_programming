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
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1 - 1] = tmp;
	}
}
