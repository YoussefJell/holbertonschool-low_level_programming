#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0) Always (Success)
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				putchar(' ');
			if (i == 100)
				putchar('\n');
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
