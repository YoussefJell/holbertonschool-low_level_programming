#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ABC = 'a';

	for (ABC = 'a'; ABC <= 'z'; ABC++)
	{
		if (ABC != 'q' && ABC != 'e')
			putchar(ABC);
	}
	putchar('\n');

	return (0);
}
