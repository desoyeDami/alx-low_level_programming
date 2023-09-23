#include "main.h"
#include <unistd.h>


/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int i = 0, j;
	char buf[12];

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	while (n != 0)
	{
		buf[i++] = '0' + (n % 10);
		n /= 10;
	}

	j = i - 1;

	while (j >= 0)
	{
		write(1, &buf[j], 1);
		j--;
	}
}
