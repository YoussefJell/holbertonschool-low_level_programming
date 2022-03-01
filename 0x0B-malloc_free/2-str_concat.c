#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to be duplicated
 * Return: array
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	p = (char *)malloc(sizeof(char) * (j + i) + 1);
	if (p == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		p[k] = *s1;
		s1++;
		k++;
	}
	while (*s2 != '\0')
	{
		p[k] = *s2;
		s2++;
		k++;
	}
	p[k] = '\0';
	return (p);
}
