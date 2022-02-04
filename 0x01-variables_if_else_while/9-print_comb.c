#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';
	int s = ' ';
	int v = ',';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(v);
			putchar(s);
		}
	}
	putchar('\n');

	return (0);
}
