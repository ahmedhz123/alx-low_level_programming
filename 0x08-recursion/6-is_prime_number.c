#include "main.h"

/**
 * is_prime_number - checks if the number is prime or not
 *
 * @n: parameter of the function
 * @i: parameter of the function
 *
 * Return: Always 0 (success)
 *
*/

int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if the number is prime or not
 *
 * @n: int
 * @i: int
 *
 * Return: 1 if the number is prime
 *	   0 if the number is not prime
*/

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}
