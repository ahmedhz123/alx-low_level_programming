#include "main.h"

/**
 * *cap_string - capitalize all words in the string
 *
 * @s: the pointer parameter
 *
 * Return: 0 Always (Success)
 *
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
			s[i] = s[i] - 32;
		if (s[i] == ' ' &&
		    s[i + 1] >= 'a' &&
		    s[i + 1] <= 'z')
		{
			i++;
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
