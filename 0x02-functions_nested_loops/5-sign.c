#include"main.h"

/**
 * print_sign - function which is used to know the sign of a number
 *
 * @n: takes input from other functions
 *
 * Return: 1 if the number is positive
 *	   0 if th number is zero
 *	   -1 if the number is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_Putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
