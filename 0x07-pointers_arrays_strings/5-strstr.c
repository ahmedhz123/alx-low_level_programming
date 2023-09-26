#include "main.h"

/**
 * _strstr - Locates a substring in a string
 *
 * @haystack: The first pointer parameter for the function
 * @needle:  The second pointer parameter for the function
 *
 * Return: An array of characters
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		const char *a = needle;
		while (*needle != '\0')
		{
			if (*haystack == *a)
				return (haystack);
			a++;
		}
		haystack++;
	}
	return (NULL);
}
