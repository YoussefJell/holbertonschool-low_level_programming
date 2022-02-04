#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char n = '0';
	char ABC = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (ABC = 'a'; ABC <= 'f'; ABC++)
	{
		putchar(ABC);
	}
	putchar('\n');

	return (0);
}
