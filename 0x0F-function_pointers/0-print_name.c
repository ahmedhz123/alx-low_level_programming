#include "function_pointers.h"

/**
 * print_name - A function that prints name
 *
 * @name: A string
 * @f: A function pointer
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
