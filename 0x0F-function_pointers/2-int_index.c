#include "function_pointers.h"

/**
 * int_index - A function that searches for integers
 *
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the Function pointer
 *
 * Return: An integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
