#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - prints an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: the char parameter
 *
 * Return: Always 0 (success)
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
