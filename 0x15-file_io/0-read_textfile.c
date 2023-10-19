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
	ssize_t bytes_rd, written_bytes;
	char *buf;
	int has_newline;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == 0)
		return (0);
	bytes_rd = read(fd, buf, letters);
	if (bytes_rd < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	has_newline = (bytes_rd > 0 && buf[bytes_rd - 1] == '\n');
	if ((size_t)bytes_rd < letters && !has_newline)
	{
		buf[bytes_rd] = '\n';
		bytes_rd++;
	}
	written_bytes = write(STDOUT_FILENO, buf, bytes_rd);
	if (written_bytes != bytes_rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	free(buf);
	return (bytes_rd);
}
