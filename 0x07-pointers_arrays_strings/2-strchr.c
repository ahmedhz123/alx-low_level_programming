#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string
 *
 * @s: the character pointer
 * @c: char parameter
 *
 * Return: 0 Always (Success)
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}
	if (s[i] == c)
		return (s);
	return (NULL);

}
