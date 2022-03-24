#include "main.h"
/**
 * print_rev - outputs string in reverse
 * @s: string
 * Return: none, void
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i)
	{
		_putchar(s[--i]);
	}
}

/**
 * print_binary - Print binary
 *
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char arr[1024];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (n > 0)
	{
		if ((n & 1) == 1)
		{
			arr[i] = '1';
			i++;
			n >>= 1;
		}
		else if ((n & 1) == 0)
		{
			arr[i] = '0';
			i++;
			n >>= 1;
		}
		arr[i] = '\0';
	}
	print_rev(arr);
}
