#include "main.h"
/**
 * _fill - fill up on heap and empty 1's and 0's
 * @n: input
 * Return: void
 */
void _fill(unsigned long int n)
{
	if (n == 0)
		return;

	_fill(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');

	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints binary from decimal
 * @n: unsigned long int input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_fill(n);
}
