#include "main.h"

/**
 * print_chessboard - function to print the chess board
 *
 * @a: the pointer to some location in the memory
 *
 * Return: 0 Always (success)
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');

	}

}
