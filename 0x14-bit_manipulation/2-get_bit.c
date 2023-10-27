#include "main.h"

/**
 * get_bit - find the value of the bit at a given index
 *
 * @index: the index of the bit
 * @n: the entered number
 *
 * Return: the value of the index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
