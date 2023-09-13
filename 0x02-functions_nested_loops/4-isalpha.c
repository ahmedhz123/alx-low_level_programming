#include"main.h"

/**
 * _isalpha - funtction check if the input is
 *		letter or not
 *
 * @c: checks the input of function
 *
 * Return: return 1 if the input is a letter
 *		otherwise Always 0 (Success);
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90
		|| c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
