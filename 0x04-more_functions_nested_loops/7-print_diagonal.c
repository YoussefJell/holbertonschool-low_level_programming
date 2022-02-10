#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: n
 * Return: doesn't return
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (k = 1; k <= i; k++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
