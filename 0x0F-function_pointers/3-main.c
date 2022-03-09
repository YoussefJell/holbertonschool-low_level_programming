#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calc
 *
 * @argc: arg count
 * @argv: arg value
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*i)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	i = get_op_func(argv[2]);
	if (i == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", i(a, b));

	return (0);
}
