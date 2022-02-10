#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: size of triangle (height)
 * Return: void doesn't return
 */
void print_triangle(int size)
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
			if (w >= size - h - 1)
			{
				_putchar(c);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
