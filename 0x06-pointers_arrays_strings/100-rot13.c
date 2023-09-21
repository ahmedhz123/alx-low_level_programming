#include "main.h"

/**
 * *rot13 - A function that encodes a string using rot13
 *
 * @s: the pointer parameter
 *
 * Return: 0 Always (Success)
 *
*/

char *rot13(char *s)
{
	char *a = "abcdefghiklmnopqrstvxyzABCDEFGHIKLMNOPQRSTVXYZ";
	char *b = "nopqrstuvxyzabcdefgiklmNOPQRSTUVXYZABCDEFGIKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
