#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to be duplicated
 * Return: array
 */
char *_strdup(char *str)
{
	size_t i, strlenstr;

	char *p = (char *)malloc(sizeof(str));

	if (str == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);

	for (strlenstr = 0; str[strlenstr] != '\0'; strlenstr++)
		;

	for (i = 0; i < strlenstr; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
