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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			puchar(44);
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
