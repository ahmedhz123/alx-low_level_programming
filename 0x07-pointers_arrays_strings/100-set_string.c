#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 *
 * @s: double pointer parameter of the function
 * @to: pointer parameter of the function
 *
 * Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
