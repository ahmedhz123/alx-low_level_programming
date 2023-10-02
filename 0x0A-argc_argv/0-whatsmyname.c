#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: the arguments count
 * @argv: the argument vector
 *
 * Return: 0 Always (success)
*/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
