#include "main.h"
/**
 * _strcmp - compares src to dest
 * @s1: string1
 * @s2: string2
 * Return: (pointer to dest)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((*s1 == *s2) ? 0 : (*(unsigned char *)s1 - *(unsigned char *)s2));
}
