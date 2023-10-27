#include "main.h"

/**
 * flip_bits - finds the number you need to flip to get one number to another
 *
 * @n: the original number
 * @m: the number you need ot flip
 *
 * Return: the number you need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
