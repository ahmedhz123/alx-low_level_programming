#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers 0-9 separated by comma
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit < 57)
			putchar(44);
		digit++;
	}
	return (0);
}
