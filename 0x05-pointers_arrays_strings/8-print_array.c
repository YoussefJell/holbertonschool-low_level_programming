#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array
 * @a: array
 * @n: number of elements
 * Return: none, void
 */
void print_array(int *a, int n)
{
	int i;
	int fI = 0;

	for (i = 0; i < n; i++)
	{
		if (fI == 0)
		{
			fI = 1;
			printf("%d", *a);
			a++;
		}
		else
		{
			printf(", %d", *a);
			a++;
		}
	}
	printf("\n");
}
