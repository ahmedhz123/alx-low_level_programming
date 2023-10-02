#include "main.h"

/**
 * _memset - function fills the memory with constant byte
 *
 * @s: array of characters
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: array of characters
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
