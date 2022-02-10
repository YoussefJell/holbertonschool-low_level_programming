#include "main.h"
/**
 * _isupper - tests if character is uppercase
 * @c: Input
 * Return: 1 if (Success) or 0 if (Not Uppercase)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
