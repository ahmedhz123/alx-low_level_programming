#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - counts the sum of all its parameters
 *
 * @n: the number of arguments
 *
 * Return: Always 0 (success)
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arguments, int);

	va_end(arguments);
	return (sum);
}
