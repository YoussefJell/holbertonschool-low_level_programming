#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @n: bytes
 * @b: constant
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = (unsigned char)b;
		i++;
	}
	return (s);
}
