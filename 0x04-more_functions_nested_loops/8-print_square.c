#include "main.h"
/**
 * print_square - Prints a square
 * @size: size of square (height and width)
 * Return: void doesn't return
 */
void print_square(int size)
{
	int h;
	int w;
	int c = '#';

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
