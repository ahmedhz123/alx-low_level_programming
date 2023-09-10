#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet letters in reverse
 *
 * Return: Always (0) Success
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> cbb349b7ef92ae3d36919364eab62f30edc5a734
*/

int main(void)
{
<<<<<<< HEAD
        char ch = 'z';

        while (ch >= 'a')
        {
                putchar(ch);
                ch--;
        }

        putchar('\n');

        return (0);
=======
	int ch = 128;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}	

	putchar('\n');
	
	return (0);
>>>>>>> cbb349b7ef92ae3d36919364eab62f30edc5a734
}
