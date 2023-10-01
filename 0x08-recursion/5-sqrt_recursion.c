#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 *
 * @n: the parameter of function
 * @val: the value of the function
 *
 * Return: Always 0 (success)
 *
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the root of a number
 *
 * @n: parameter of the function
 * @val: parameter of the function and
 *	the value of root
 *
 * Return: Always 0 (success)
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
