#include "main.h"
/**
 * _strstr - finds the needle in haystack
 * @haystack: string
 * @needle: substring
 * Return: char*
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (Begin);

		haystack = Begin + 1;
	}
	return ((void *)0);
}
