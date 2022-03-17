#include <stdio.h>
void print_faster(void) __attribute__((constructor));
/**
 * print_faster - prints faster than main
 * Return: none, void
 */
void print_faster(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
