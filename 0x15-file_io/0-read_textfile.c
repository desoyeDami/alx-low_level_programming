#include "main.h"

/**
 * read_textfile - Reads and prints the contents of a file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The number of bytes read, including the new line character.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_rd;
	char buf[1024];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	bytes_rd = read(fd, buf, letters);

	if (bytes_rd < 0)
	{
		return (0);
	}
	write(STDOUT_FILENO, buf, bytes_rd);

	write(STDOUT_FILENO, "\n", 1);
	bytes_rd++;

	close(fd);
	return (bytes_rd);
}
