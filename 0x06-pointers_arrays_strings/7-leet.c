#include "main.h"
/**
 * leet - changes text to leet text
 * @c: input
 * Return: (pointer to dest)
 */
char *leet(char *c)
{
	int i;
	int j;
	char str[] = "aAeEoOtTlL";
	char num[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (c[i] == str[j])
			{
				c[i] = num[j / 2];
			}
		}
	}
	return (c);
}
