#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of some numbers
 *
 * @argc: the arguments count
 * @argv: the arguments count
 *
 * Return: 0 Always (success)
*/

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (**argv > '9' || **argv < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	else if (argc == 1)
	{
		printf("%d\n", sum);
	}
	return (0);
}
