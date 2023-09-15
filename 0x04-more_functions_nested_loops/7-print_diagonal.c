#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *		should be printed
 * Return: void
*/

void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, space;

		for (i = 0; i < n; i++)
		{
			for (space = 0; space <= i; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '\' char */

			_putchar('\n');
		}
	}
}
