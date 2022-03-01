#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to be duplicated
 * Return: array
 */

char *_strdup(char *str)
{
	int i, strlenstr;
	char *p;

	for (strlenstr = 0; str[strlenstr] != '\0'; strlenstr++)
		;

	p = (char *)malloc(sizeof(char) * strlenstr);

	if (p == NULL || str == NULL)
		return (NULL);

	for (i = 0; i <= strlenstr; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
