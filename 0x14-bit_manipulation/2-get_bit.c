#include "main.h"
/**
 * get_bit -  Get the bit object at index
 * @n: number input
 * @index: index to find bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus = -1;

	if (index > 63)
		return (-1);

	bitStatus = (n >> index) & 1;

	return (bitStatus);
}
