#include "main.h"
/**
 * square_root_wrapper - square root of n by guessing i
 * @n: input number
 * @i: input number for math
 * Return: square root of n
 */
int square_root_wrapper(int n, int i)
{
	if (n < i)
		return (-1);

	if (i * i == n)
		return (i);

	i += 1;
	return (square_root_wrapper(n, i));
}
/**
 * _sqrt_recursion - square root of n
 * @n: input number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (square_root_wrapper(n, 1));
}
