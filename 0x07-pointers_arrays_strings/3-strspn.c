#include "main.h"

/**
 * _strchr - locates character in string
 * @b: string
 * @c: characters
 * Return: char
 */

char *_strchr(char *b, char c)
{

	for (; *b != '\0'; b++)
		if (*b == c)
			return (b);
	return ((void *)0);
}

/**
 * _strspn - locates character in string
 * @accept: bytes
 * @s: str
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == ((void *)0)) || (accept == ((void *)0)))
		return (len);

	while (s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
