#include "main.h"
/**
 * flip_bits - counts number of bits i would need to flip to go from n to m
 *
 * @n: first input
 * @m: second input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;

	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}
	return (count);
}
