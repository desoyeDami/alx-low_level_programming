#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start_printing = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			start_printing = 1;
			putchar('1');
		}
		else if (start_printing)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
