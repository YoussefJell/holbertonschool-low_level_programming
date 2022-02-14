#include "main.h"
/**
 * _puts - outputs string
 * @str: string
 * Return: none, void
 */

void _puts(char *str)
{
	int strlen = 0;

	for (strlen = 0; str[strlen] != '\0'; strlen++)
		_putchar(str[strlen]);

	_putchar('\n');
}