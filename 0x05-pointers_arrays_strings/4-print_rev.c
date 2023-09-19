#include <stdio.h>

/**
 * print_rev - pritns the strint in reverse
 *
 * @s: the pointer parameter
 *
 * Return: void
 *
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
