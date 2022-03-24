#include "main.h"
/**
 * print_binary - prints binary
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
	while (n)
	{
		_putchar((n & 1) + '0');
		n >>= 1;
	}
}
