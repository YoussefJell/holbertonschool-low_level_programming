#include "main.h"
/**
 * _strstr - finds the needle in haystack
 * @haystack: string
 * @needle: substring
 * Return: char*
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (needle);
		}
		haystack++;
	}

	return ((void *)0);
}
