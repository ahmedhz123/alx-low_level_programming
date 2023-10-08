#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function to create an array of integers
 *
 * @min: the first parameter
 * @max: the second parameter
 *
 * Return: A pointer to location of integers in memory
*/

int *array_range(int min, int max)
{
	int *output;
	int i = 0, length = 0;
	int start = min;

	if (min > max)
		return (NULL);

	while (start <= max)
	{
		length++;
		start++;
	}
	output = malloc(sizeof(int) * (length + 1));

	if (output == NULL)
		return (NULL);

	while (min <= max)
	{
		output[i] = min;
		i++;
		min++;
	}
	output[i++] = '\0';
	return (output);
}
