#include <stdio.h>

/**
 * _strlen - a function that returns the lenght of a string
 *
 * @s: char parameter
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}
