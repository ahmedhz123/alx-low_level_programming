#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i;
	int length1 = 0;
	int length2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		length1++;

	for (i = 0; s2[i] != '\0'; i++)
		length2++;

	c = malloc(sizeof(char) * (length1 + length2) + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		c[length1 + i] = s2[i];

	return (c);
}
