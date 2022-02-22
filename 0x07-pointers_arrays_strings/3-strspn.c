#include "main.h"
/**
 * _strspn - locates character in string
 * @accept: bytes
 * @s: str
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] != s[i])
			break;
	}
	return (i);
}
