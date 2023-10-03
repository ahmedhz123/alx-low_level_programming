#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *	to make change for amount of money
 *
 * @argc: the arguments count
 * @argv: the arguments vector
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcents = 0;
		int money = atoi(argv[1]);
		int cent_value[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cent_value[i])
			{
				leastcents += money / cent_value[i];
				money = money % cent_value[i];

				if (money % cent_value[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
