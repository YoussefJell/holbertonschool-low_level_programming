#include "main.h"
/**
 * rev_string - outputs string in reverse
 * @s: string
 * Return: none, void
 */

void rev_string(char *s)
{
	char rev;
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i <= --len)
	{
		rev = s[i];
		s[i++] = s[len];
		s[len] = rev;
	}
}
