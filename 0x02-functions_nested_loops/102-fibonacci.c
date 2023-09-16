#include <stdio.h>

/**
 * main - function prints first 50 numbers of fibonacci series
 * Return: 0 Always (Success)
*/

int main(void)
{
	unsigned long int next;
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	int i;

	printf("%lu, ", term1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
