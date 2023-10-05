#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 *
 * @ac: the arguments count
 * @av: the arguments vector
 *
 * Return: pointer to some location in the memory
 *
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int count = 0;
	char *output;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	output = malloc(sizeof(char) * count + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[k] = av[i][j];
			k++;
		}
		_putchar('\n');
	}
	output[k] = '\0';
	return (output);
}
