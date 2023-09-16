#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 Always (Success)
*/

int main(void)
{
	unsigned long int term1 = 1, term2 = 2, next;
	int i;

	printf("%lu, ", term1);

	for (i = 1; i < 98; i++)
	{
		printf("%lu", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;

		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
