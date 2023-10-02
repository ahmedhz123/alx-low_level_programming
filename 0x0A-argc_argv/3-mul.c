#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: the arguments count
 * @argv: the arguments vector
 *
 * Return: the multiplication of two numbers
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul  = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
