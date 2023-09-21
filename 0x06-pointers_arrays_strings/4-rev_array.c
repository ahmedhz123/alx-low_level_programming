#include "main.h"

/**
 * reverse_array - Function to reverse the content of an array of integers
 *
 * @a: the pointer parameter
 * @n: the size of the array and function parameter
 *
 * Return: void
 *
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

	for (i = 0; i < n ; i++)
		_putchar(a[i] + 48);
}
