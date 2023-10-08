#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);

	if (output == NULL)
		return (NULL);
	else
		return (output);
}
