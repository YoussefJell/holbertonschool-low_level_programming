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
	while (n--)
	{
		*s++ = (unsigned char)b;
	}
	return (s);
}
