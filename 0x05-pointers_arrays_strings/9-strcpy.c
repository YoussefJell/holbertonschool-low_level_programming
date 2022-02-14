#include "main.h"
/**
 * _strcpy - copies string
 * @dest: destination
 * @src: destination
 * Return: (dest value)
 */
char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (saved);
}
