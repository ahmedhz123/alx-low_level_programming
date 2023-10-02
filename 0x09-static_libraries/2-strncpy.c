#include "main.h"

/**
 * *_strncpy - copy strings
 *
 * @dest: the pointer parameter
 * @src: the pointer parameter
 * @n: the function parameter
 *
 * Return: 0 Always
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
