#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two number arguments
 * @argc: argument count
 * @argv: arguemnt array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 0; i < argc; i++)
	{
		if ((*argv[i] >= 65 && *argv[i] <= 90) ||
			(*argv[i] >= 97 && *argv[i] <= 122))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
