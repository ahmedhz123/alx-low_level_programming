#include "main.h"

/**
 * _pow_recursion - print the value of x raised to the power of y
 *
 * @x: the parameter of the function
 * @y: the parameter of the function
 *
 * Return:  Always 0 (Success)
 *
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (y - 1));
	}
}
