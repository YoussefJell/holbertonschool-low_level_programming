#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: destination
 * @n: decimal
 * @src: source
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
