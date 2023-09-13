#include"main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: take number input
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = (-1) * (n % 10);
	}
	else
	{
		lastdigit = n % 10;
	}
	_putchar(lastdigit + 48);
	return (lastdigit);
}
