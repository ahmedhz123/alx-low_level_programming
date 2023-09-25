#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: a location in the memory
 * @src: a intial location in the memory
 * @n: bytes of the memory area
 *
 * Return: a pointer to dest
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
