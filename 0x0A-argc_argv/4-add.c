#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - multiplies two number arguments
 * @argc: argument count
 * @argv: arguemnt array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, l;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			l = strlen(argv[i]);

			for (j = 0; j < l; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
