#include "main.h"
/**
 * clear_bit - sets a value of bit to 0 in a given index
 * @n: number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1 << index);
	unsigned long int check;

	if (index < 64)
	{
		check = *n &= mask;
		if (check)
			return (1);
	}
	return (-1);
}
