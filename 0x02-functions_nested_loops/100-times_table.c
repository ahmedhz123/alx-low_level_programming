#include "main.h"

/**
 * print_times_table - print time table of n
 *
 * @n: takes number input
 *
 * Return: void
*/

void print_times_table(int n)
{
	if (n <= 15 || n >= 0)
	{
		int i;

		for (i = 0; i <= n ; i++)
		{
			int j, prod;

			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				_putchar(prod + '0');

					if (j != n)
					{
						_putchar(',');
						 _putchar(' ');
						_putchar(' ');
					}

			}
		_putchar('\n');
	}
	_putchar('\n');
	}

}

