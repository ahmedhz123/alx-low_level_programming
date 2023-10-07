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

	if (nmemb == 0 || size == 0)
		return (NULL);
	nmemb = calloc(size, sizeof(int));

	if (nmemb == NULL)
		return (NULL);
	return (nmemb);
}
