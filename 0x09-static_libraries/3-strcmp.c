#include "main.h"

/**
 * _strcmp - Function to compare to string
 *
 * @s1: the pointer parameter
 * @s2: the pointer parameter
 *
 * Return: 0 Always (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
