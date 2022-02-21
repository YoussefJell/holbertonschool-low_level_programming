#include "main.h"
/**
 * _strchr - locates character in string
 * @s: string
 * @c: characters
 * Return: char
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	return ((void *)0);
}
