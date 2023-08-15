#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * c: the character to br printed out
 *
 * Return: Always i (Success);
 * If an error occurs, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
