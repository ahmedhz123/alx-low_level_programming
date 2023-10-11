#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function to free dogs
 *
 * @d: the struct pointer
 *
 * Return: Void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
