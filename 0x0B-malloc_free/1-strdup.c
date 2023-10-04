#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the pointe parameter
 *
 * Return: 0 Always (success)
*/

char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
