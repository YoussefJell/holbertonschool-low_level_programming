#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* checks if n is zero or greater than zero or smaller than zero
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", (n));
	}
	else if (n == 0)
	{
		printf("%d is zero\n", (n));
	}
	else
	{
		printf("%d is positive\n", (n));
	}
	return (0);
}
