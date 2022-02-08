#include "main.h"
/**
 * _isalpha - checks if character is lower
 * @c: input
 * Return: if 1 is lowercase otherwise 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
