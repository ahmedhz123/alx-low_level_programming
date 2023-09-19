#include "main.h"

/**
 * _puts - function that prints the string input
 *
 * @str: pointer parameter
 *
 * Return: void
*/

void _puts(char *str)
{
	int counter;

	for (counter = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		counter++
	}
}
