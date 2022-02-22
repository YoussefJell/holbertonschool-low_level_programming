#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: s
 * @accept: string
 * Return: ptr to  byte in s that matches bytes of accept or null if none
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
