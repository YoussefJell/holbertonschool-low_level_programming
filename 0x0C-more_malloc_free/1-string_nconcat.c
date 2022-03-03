#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates string
 * @s1: string 1
 * @s2: string 2
 * @n: new string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k = 0;
	unsigned int l = 0;
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
	for (l = 0; s2[l] != '\0' && l < n; l++)
	{
		p[k] = s2[l];
		k++;
	}
	p[k] = '\0';
	return (p);
}
