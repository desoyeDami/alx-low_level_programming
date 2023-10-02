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

	if (filename == NULL)
	{
		return (0);
	}
	/* Open a File.*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/* Allocate memory to the buffer where files would be stored.*/
	buf = malloc(sizeof(char) * letters);
	if (buf == 0)
		return (0);
	/* Read file characters and save them to the buffer.*/
	bytes_rd = read(fd, buf, letters);
	if (bytes_rd < 0)
		return (0);
	/*If EOF has been reached, add a new line.*/
	if ((size_t)bytes_rd < letters)
	{
		buf[bytes_rd] = '\n';
		bytes_rd++;
	}
	/* Write stored characters to STDOUT*/
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
