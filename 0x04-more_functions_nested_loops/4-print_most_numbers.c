#include"main.h"

/**
 * print_most_numbers - print all decimal except 2 and 4.
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + 48);
	}
	_putchar('\n');
}
