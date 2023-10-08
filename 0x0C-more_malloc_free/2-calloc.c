#include <stdio.h>
#include <stdlib.h>

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
	char *output;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = malloc(nmemb * size);

	if (output == NULL)
		return (output);

	for (i = 0; i < nmemb; i++)
		output[i] = 0;
	return (output);
}
