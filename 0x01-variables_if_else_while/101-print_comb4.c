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
	int n3 = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				if (n < n2 && n2 < n3)
				{
					putchar(n);
					putchar(n2);
					putchar(n3);

					if ((n + n2 + n3) != ('7' + '8' + '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
