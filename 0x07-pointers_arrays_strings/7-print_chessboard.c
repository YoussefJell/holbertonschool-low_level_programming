#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array of spots
 * Return: Void doesnt return
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j == 8)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(a[i][j]);
			}
		}
	}
}
