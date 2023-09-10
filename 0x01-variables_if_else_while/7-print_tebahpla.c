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
        char ch = 'z';

        while (ch >= 'a')
        {
                putchar(ch);
                ch--;
        }

        putchar('\n');

        return (0);
}
