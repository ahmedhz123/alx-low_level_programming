#include "variadic_functions.h"

/**
 * format_char - formats characters
 *
 * @separator: the string separator
 * @ap: argument pointer
*/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formates integers
 *
 * @separator: the string separator
 * @ap: the pointer parameter
 *
*/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - formats floats
 *
 * @separator: the string separator
 * @ap: the pointer of the arguments
*/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - formates strings
 *
 * @separator: the string separator
 * @ap: the pointer arguments
*/

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	{
		case 1:
			printf("(nil)");
	}
	printf("%s%s", separator, str);
}

/**
 * print_all - prints everything
 *
 * @format: the const-address and const-dereferencing pointer
 *
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator;
	va_list ap;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

















