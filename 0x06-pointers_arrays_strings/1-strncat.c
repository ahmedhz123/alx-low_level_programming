#include "main.h"

/**
 * *_strncat - concates two string
 *
 * @dest: the pointer parameter
 * @src: the pointer parameter
 * @n: parameter for function
 *
 * Return: 0 Always
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
