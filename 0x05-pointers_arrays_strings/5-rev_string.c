#include "main.h"
/**
 * rev_string - outputs string in reverse
 * @s: string
 * Return: none, void
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int k = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1; j > (i - 1) / 2; j--)
	{
		tmp = s[j];
		s[j] = s[k];
		s[k] = tmp;
		k++;
	}
}
