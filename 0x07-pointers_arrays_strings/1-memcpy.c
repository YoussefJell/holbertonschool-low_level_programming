#include "main.h"
/**
 * _memcpy - fills memory with constant byte
 * @s: memory area
 * @n: bytes
 * @b: constant
 * Return: Pointer to memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
