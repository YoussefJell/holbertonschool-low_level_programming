#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates string
 * @str: string to be duplicated
 * Return: array
 */

char *_strdup(char *str)
{
	size_t i;
	char *p;

	if (strlen(str) > 0)
	{
		p = (char *)malloc(sizeof(char) * strlen(str));

		for (i = 0; i <= strlen(str); i++)
		{
			p[i] = str[i];
		}
		return (p);
	}
	else

		return (NULL);
}
