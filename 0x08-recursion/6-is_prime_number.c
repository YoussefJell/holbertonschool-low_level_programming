#include "main.h"
/**
 * check_prime - checks if prime number
 * @n: input int
 * @i: input from is_prime_number
 * Return: 1 if prime 0 if not prime
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - checks if prime number
 * @n: input int
 * Return: 1 if prime 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, n - 1));
}
