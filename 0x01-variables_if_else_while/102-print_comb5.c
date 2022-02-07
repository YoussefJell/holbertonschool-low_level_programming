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
	int n4 = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				for (n4 = '0'; n4 <= '9'; n4++)
				{
					if ((n != n3 || n2 != n4) && (n * 10 + n2 < n3 * 10 + n4))
					{
						putchar(n);
						putchar(n2);
						putchar(' ');
						putchar(n3);
						putchar(n4);

					if (n != '9' || n2 != '8' || n3 != '9' || n4 != '9')
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
