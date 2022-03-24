#include "main.h"
/**
 * get_bit -  Get the bit object at index
 * @n: number input
 * @index: index to find bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
