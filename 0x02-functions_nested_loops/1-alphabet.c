#include "main.h"

/**
 * print_alphabet - utilizes on the _puthchar function
 *		to print the alphabet a - z
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		-putchar(ch);
	_putchar('\n');
}
