#include "main.h"

/**
 * clear_bit - clear the bit and set it 0
 *
 * @n: the pointer to the bin number
 * @index: the index of the bit in the given number
 *
 * Return: 1 if success -1 if failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
