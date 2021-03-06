#include "main.h"
/**
 * set_bit - sets a value of bit to 1 in a given index
 * @n: number
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	int check;

	if (index > 64)
		return (-1);

	check = *n |= mask;

	if (check)
		return (1);
	else
		return (-1);
}
