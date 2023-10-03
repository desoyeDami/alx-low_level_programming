#include "main.h"

/**
 * exit_error - Exits the program with an error message and code.
 * @exit_code: The exit code.
 * @fmt: The format string for the error message.
 * @...: The variable number of arguments for the format string.
 *
 * This function prints an error message to stderr using dprintf,
 * and then exits the program with the specified exit code.
 */
void exit_error(int exit_code, const char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	dprintf(STDERR_FILENO, fmt, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * This program copies the content of a source file to a destination file.
 * It handles various error conditions as specified and provides appropriate
 * error messages. The permissions of the created file are set to rw-rw-r--,
 * and the destination file is truncated if it already exists.
 *
 * Return: 0 on success, or appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_frm, fd_to;
	char buffer[BUFFER_SIZE];
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	ssize_t read_bytes, written_bytes;

	if (argc != 3)
		exit_error(97, "Usage: cp file_from file_to\n");

	fd_frm = open(file_from, O_RDONLY);
	if (fd_frm == -1)
		exit_error(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error(99, "Error: Can't write to %s\n", file_to);

	while ((read_bytes = read(fd_frm, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			close(fd_frm);
			close(fd_to);
			exit_error(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (read_bytes == -1)
	{
		close(fd_frm);
		close(fd_to);
		exit_error(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(fd_frm) == -1)
		exit_error(100, "Error: Can't close fd %d\n", file_from);
	if (close(fd_to) == -1)
		exit_error(100, "Error: Can't close fd  %d\n", file_to);
	return (0);
}
