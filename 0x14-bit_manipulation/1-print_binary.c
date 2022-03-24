#include "main.h"
/**
 * binary_to_uint - binary to unsigned int convertor
 *
 * @b: char array of 0's and 1's
 * Return: 0 or unsigned int number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (n > 0)
	{
		if ((n & 1) == 1)
		{
			_putchar('1');
			n >>= 1;
		}
		else if ((n & 1) == 0)
		{
			_putchar('0');
			n >>= 1;
		}
	}
}
