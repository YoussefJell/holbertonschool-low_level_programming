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
 * _strpbrk - searches string for set of bytes
 * @s: s
 * @accept: string
 * Return: ptr to  byte in s that matches bytes of accept or null if none
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == ((void *)0)) || (accept == ((void *)0)))
		return ((void *)0);
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ((void *)0);
}
