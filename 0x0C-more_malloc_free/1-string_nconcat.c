#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to take from s2
 * Return: returns p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (strlen(s1) + n); i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - strlen(s1)];
	}
	ptr[i] = '\0';
	return (ptr);
}
