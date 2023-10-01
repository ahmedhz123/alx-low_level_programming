#include "main.h"
int check_palindrome(char *s, int start, int end, int mod);

/**
 * last_index - find the lenght of the string
 *
 * @s: the pointer parameter
 *
 * Return: Always 0 (success)
 *
*/

int last_index(char *s)
{
	if (*s != '\0')
		return (1 + last_index(s + 1));
	else
		return (0);
}

/**
 * is_palindrome - prints if the string is palindorm or not
 *
 * @s: the poiter parameter
 *
 * Return: 1 if the string is palindrome
 *	   0 if the string is not palindrome
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check_palindrome(s, 0, end - 1, end % 2));
}

/**
 * check_palindrome - checks if the string is palindrome or not
 *
 * @mod: end % 2
 * @s: the string
 * @start: index 0
 * @end: last index
 *
 * Return: 1 if is the string is palindrome
 *	   0 if the string is not palindrome
*/

int check_palindrome(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check_palindrome(s, start + 1, end - 1, mod));
}
