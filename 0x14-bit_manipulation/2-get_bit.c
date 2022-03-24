#include "main.h"
/**
 * get_bit -  Get the bit object at index
 * @n: number input
 * @index: index to find bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus;

	bitStatus = (n >> index) & 1;

	if (bitStatus != 0 && bitStatus != 1)
		return (-1);

	return (bitStatus);
}
