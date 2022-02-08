#include "main.h"
/**
 * print_last_digit - Entry point
 * _abs - Absolute number
 * @n: input
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

int print_last_digit(int n)
{
	int x = _abs(n) % 10;

	_putchar(x + 48);
	return (x);
}
