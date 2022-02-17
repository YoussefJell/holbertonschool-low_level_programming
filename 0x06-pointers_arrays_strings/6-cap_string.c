#include "main.h"
/**
 * cap_string - capitalizes string
 * @c: input
 * Return: (pointer to dest)
 */
char *cap_string(char *c)
{
	int i;
	int j;
	char spr[] = {',', ';', '.', '!', '"', '(', ')', '{', '}', '?',
				  '\n', '\t', ' '};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; spr[j]; j++)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				if (c[i - 1] == spr[j] && c[i] != spr[j])
				{
					c[i] = c[i] - 32;
				}
			}
		}
	}
	return (c);
}
