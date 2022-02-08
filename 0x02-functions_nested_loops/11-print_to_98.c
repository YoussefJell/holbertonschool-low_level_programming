#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98 wether ascending or descending
 * @n: input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
		putchar('\n');
	}
}
