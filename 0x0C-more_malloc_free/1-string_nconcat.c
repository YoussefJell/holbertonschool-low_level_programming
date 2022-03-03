#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to take from s2
 * Return: returns p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k = 0;
	unsigned int len = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	p = (char *)malloc(sizeof(char) * (j + i) + 1);
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i + n; k++)
	{
		if (k < i)
			p[k] = i;
		else
			p[k] = s2[k - i];
	}
	p[k] = '\0';
	return (p);
}
