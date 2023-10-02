#include <stdio.h>

/**
 * main - prints the number of arguments
 *
 * @argc: the arguments count
 * @argv: the arguments vector
 *
 * Return: 0 Always (success)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
