#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - function fills the memory with constant byte
 *
 * @s: array of characters
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: array of characters
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory by using calloc functio
 *
 * @nmemb: the first parameter and an array
 * @size: the second parameter
 *
 * Return: any type of pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *output;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = malloc(nmemb * size);

	if (output == NULL)
		return (output);
	_memset(output, 0, size * nmemb);
}
