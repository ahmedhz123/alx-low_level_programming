#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two string
 *
 * @s1: the first pointer parameter of the function
 * @s2: the second pointer parameter of the function
 * @n: the first n bytes of s2
 *
 * Return: A pointer to location in the memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (i = 0; s2[i] != '\0'; i++)
		length2++;

	output = malloc(sizeof(char) * (length1 + n) + 1);

	if (output == NULL)
		return (NULL);

	if (n >= length2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[i + length1] = s2[i];
	       output[length1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[length1 + i] = s2[i];
		output[length1 + i] = '\0';
	}
	return (output);
}
