#include "main.h"
/**
 * binary_to_uint - binary to unsigned int convertor
 *
 * @b: char array of 0's and 1's
 * Return: 0 or unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result <<= 1;
		else
			return (0);

		b++;
	}

	return (result);
}
