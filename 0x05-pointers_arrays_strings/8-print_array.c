#include "main.h"

/**
 * print_array - the function name
 * @a: parameter 1
 * @n: parameter 2
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i] + 48);

		if (i < n - 1)
			_putchar(", ");
	}
	_putchar('\n');
}
