#include <stdio.h>

/**
 * main - prints the contents of the argv array
 *
 * @argc: the arguments count
 * @argv: the arguments vector
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
