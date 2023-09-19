#include "main.h"

/**
* rev_string - prints the string in reverse
*
* @s: pointer parameter
*
* Return: void
*/

void rev_string(char *s)
{
	int l, i;
	char tmp;

	for (i = 0; i != '\0'; i++)
		;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
