#include "main.h"
/**
 * print_rev - outputs string in reverse
 * @s: string
 * Return: none, void
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
