#include "main.h"
/**
 * more_numbers - prints numbers
 *
 * Return: void doesn't return
 */
void more_numbers(void)
{
	int i;
	int s;

	for (s = 0; s <= 9; s++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
