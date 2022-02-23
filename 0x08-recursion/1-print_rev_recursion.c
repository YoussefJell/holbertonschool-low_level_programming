#include "main.h"
/**
 * _print_rev_recursion - puts with recursion
 * @s: string
 * Return: none, void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
