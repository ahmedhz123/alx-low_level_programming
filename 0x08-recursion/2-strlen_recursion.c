#include "main.h"

/**
 * _strlen_recursion - prints the length of the string
 *
 * @s: pointer to some location in the memory
 *
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
