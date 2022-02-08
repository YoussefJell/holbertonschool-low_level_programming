#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{

	if ((n % 10) < 0)
	{

		_putchar((-1 * (n % 10)) + 48);
		return (-1 * (n % 10));
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}
