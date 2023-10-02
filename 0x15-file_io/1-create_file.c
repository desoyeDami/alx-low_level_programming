#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 * (file cannot be created, write fails, etc.).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	written_bytes =	write(fd, text_content, len);
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
