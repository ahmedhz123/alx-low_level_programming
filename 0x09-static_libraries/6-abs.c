#include"main.h"

/**
 * _abs - function that compute the absolute
 *		value of an integer
 *
 * @n: take an integer type input for function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
