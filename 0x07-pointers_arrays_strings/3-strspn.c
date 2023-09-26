#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 *
 * @s: A pointer to a location in the memory
 * @accept: A pointer to a location in the memory
 *
 * Return: 0 Always (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; *accept != '\0'; j++)
			if (s[i] == s[j])
				n++;
	}
	return (n);
}
