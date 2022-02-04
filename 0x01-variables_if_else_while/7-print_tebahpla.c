#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ABC = 'z';

	for (ABC = 'z'; ABC >= 'a'; ABC--)
	{
		putchar(ABC);
	}
	putchar('\n');

	return (0);
}
