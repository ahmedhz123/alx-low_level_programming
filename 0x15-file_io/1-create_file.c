#include "main.h"

/**
 * _strlen - find the length of the string
 *
 * @s: the pointer to the first character in the string
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}


/**
 * create_file - A function that creates a new file
 *
 * @filename:  the name of the file to be created
 * @text_content: the null terminated string
 *
 * Return: 1 if success | -1 if failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
	{
		bytes = write(fd, text_content, len);
	}
	close(fd);

	return (bytes == len ? 1 : -1);
}
