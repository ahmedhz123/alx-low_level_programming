#include "main.h"

/**
 * factorial - print the factorial of a number
 *
 * @n: the parameter of the function
 *
 * Return: the factorial of a number
 *
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
		return (n * factorial(n - 1));
}
