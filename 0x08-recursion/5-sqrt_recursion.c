#include "main.h"
/**
 * _sqrt_recursion - square root of n
 * @n: input number
 * Return: square root of n
 */
int square_root_wrapper(int n, int i)
{
	if (n < i)
		return (-1);

	if (i * i == n)
		return (i);
	else
		i += 1;
	return (square_root_wrapper(n, i));
}

int _sqrt_recursion(int n)
{
	return (square_root_wrapper(n, 1));
}