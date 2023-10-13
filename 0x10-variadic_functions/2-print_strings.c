#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_string - prints string followed by new line
 *
 *
 * @separator: A character that separate strings
 * @n: the number of the arguments
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	char *s;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s",(s = va_arg(args, char *)) ? s : "(nil)");

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");

}
