#include "main.h"

/**
 *print_numbers - function prints integers from 0-9 and enters a new line
 *
 *@i: int to print
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
