#include "variadic_functions.h"
/**
 * print_numbers - prints all parameters
 * @n: number of integers passed
 * @separator: separator to separate integers
 * @...: functions
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
