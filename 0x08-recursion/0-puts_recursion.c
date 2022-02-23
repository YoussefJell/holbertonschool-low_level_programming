#include "main.h"
/**
 * _puts_recursion - puts with recursion
 * @s: string
 * Return: none, void
 */
void _puts_recursion(char *s)
{

	_putchar(*s++);

	if (*s == '\0')
	{
		_putchar('\n');
	}
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}
