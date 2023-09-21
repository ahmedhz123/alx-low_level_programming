#include "main.h"

/**
 * *string_toupper - convert every lower case letter to upper case
 *
 * @s: the pointer parameter
 *
 * Return: 0 Always (Success)
 *
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
}
