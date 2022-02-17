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
	int i;
	int b = n - 1;
	int tmp;

	for (i = 0; i < b; i++, b--)
	{
		tmp = a[i];
		a[i] = a[b];
		a[b] = tmp;
	}
}
