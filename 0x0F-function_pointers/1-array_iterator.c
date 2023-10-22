#include "function_pointers.h"

/**
 * array_iterator - A function that perform an action on
 *		the element of an array by using a function pointer
 *
 * @array: An array of integers
 * @size: the size of the array
 * @action: a function pointer that perfomed on each element
 *			in the array
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
