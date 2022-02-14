#include "main.h"
/**
 * puts_half - outputs half string
 * @str: string
 * Return: none, void
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (j = (i / 2); j <= (i - 1); j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i + 1) / 2; j <= (i - 1); j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
