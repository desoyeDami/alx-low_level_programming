#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 *         If filename is NULL or if text_content is NULL, returns -1.
 *         Does not create the file if it does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
