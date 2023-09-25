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
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		s[i][j] = b;
	}
	return (s);
}
