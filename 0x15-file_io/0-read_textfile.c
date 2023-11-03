#include "main.h"

/**
 * read_textfile - A function that read the te
 * xt file and prints it to the POSIX
 *
 * @filename: the name of the file
 * @letters: the number of the letters
 *
 * Return: the actual number of the letters
 *
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);

	close(fd);
	return (bytes);

}
