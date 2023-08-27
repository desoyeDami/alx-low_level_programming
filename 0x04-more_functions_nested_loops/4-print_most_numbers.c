#include "main.h"

/**
 * print_most_numbers - print all digits except 2 & 3
 *
 * @i: integer to be returned
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
