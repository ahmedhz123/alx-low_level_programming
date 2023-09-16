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
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= 9; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = mult * num;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					-putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
					_putchar((prod % 100) % 10);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
