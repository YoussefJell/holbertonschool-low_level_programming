#include <stdio.h>
/**
 * main - prints argument count
 * @argc: argument count
 * @argv: arguemnt array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
