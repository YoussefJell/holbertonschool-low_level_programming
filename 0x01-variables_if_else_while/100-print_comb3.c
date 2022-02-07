#include <stdio.h>
/**
* main - Main func
*
* Return: 0 (Success)
*/
int main(void)
{
	int n = '0';
	int n2 = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			if (n < n2)
			{
				putchar(n);
				putchar(n2);

				if ((n + n2) != ('8' + '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
