#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: pointer parameter for the function
 * @accept: pointer parameter for the function
 *
 * Return: array of characters
 *
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
