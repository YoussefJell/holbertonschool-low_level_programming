#include "main.h"
/**
 * print_rev - outputs string in reverse
 * @s: string
 * Return: none, void
 */

void print_rev(char *s)
{
	int strlen = 0;

	for (strlen = 0; s[strlen] != '\0'; strlen++)
		;

	for (; s[strlen] >= 0; strlen--)
	{
		_putchar(s[strlen]);
	}
	_putchar('\n');
}
