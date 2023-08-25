#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * c: the character to be printed out
 *
 * Return: Always i (Success);
 * If an error occurs, -1 is returned.
 */
int _putchar(int c)
{
        return (write(1, &c, 1));
}