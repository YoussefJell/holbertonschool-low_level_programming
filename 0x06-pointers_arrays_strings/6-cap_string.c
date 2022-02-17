#include "main.h"
/**
 * cap_string - capitalizes string
 * @c: input
 * Return: (pointer to dest)
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			int s = c[i - 1];

			if (s == ' ' || s == '.' || s == 9 || s == 10 || s == ',')
			{
				c[i] = c[i] - 32;
			}
			else if (s == ';' || s == '!' || s == '?' || s == '\"')
			{
				c[i] = c[i] - 32;
			}
			else if (s == '(' || s == ')' || s == '{' || s == '}')
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c);
}
