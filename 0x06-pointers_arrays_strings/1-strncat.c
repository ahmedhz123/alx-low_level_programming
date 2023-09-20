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
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
}
