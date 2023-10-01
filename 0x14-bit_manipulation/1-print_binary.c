#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to convert and print.
 *
 * Return: No return value (void).
 */
void print_binary(unsigned long int n)
{
	int bufsiz = sizeof(int) * 8;
	int i = bufsiz - 1, j;
	char binbuf[32];

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n  && i >= 0)
	{
		binbuf[i] = (n & 1) + '0';
		n >>= 1;
		i--;
	}

	for (j = i + 1; j < bufsiz; j++)
	{
		_putchar(binbuf[j]);
	}
}
