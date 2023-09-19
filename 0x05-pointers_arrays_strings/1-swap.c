#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: int parameter
 * @b: int parameter
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
