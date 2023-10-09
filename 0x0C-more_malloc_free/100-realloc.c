#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates the memory using malloc and free
 *
 * @ptr: the pointer parameter of the function
 * @old_size: the second parameter of the function
 * @new_size: the third parameter of the function
 *
 * Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *output;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		output = malloc(new_size);

		if (output == NULL)
			return (NULL);
		return (output);
	}
	if (new_size > old_size)
	{
		output = malloc(new_size);
		if (output == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)output + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (output);
}
