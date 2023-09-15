#include"main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 *		form 2 and 4 and you can
 *		only use _putchar twice
 *
 * Return: 0 Always (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
