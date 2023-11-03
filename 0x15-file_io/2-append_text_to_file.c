#include "main.h"

/**
 * _strlen - function to find the length of the string
 *
 * @s: the pointer points to the first letter in the string
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - A function that appends text at the end of the file
 *
 * @filename: the name of the exist file
 * @text_content: the content of the file
 *
 * Return: 1 if success -1 if failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
	{
		bytes = write(fd, text_content, len);
	}
	close(fd);

	return (bytes == len ? 1 : -1);

}
