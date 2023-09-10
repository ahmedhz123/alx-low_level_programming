#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet letters in reverse
 *
 * Return: Always (0) Success
 * 
*/

int main(void)
{
	int ch = 128;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}	

	putchar('\n');
	
	return (0);
}
