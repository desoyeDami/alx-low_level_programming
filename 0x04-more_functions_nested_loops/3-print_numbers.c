#include "main.h"

/**
 *print_numbers - function prints integers from 0-9 and enters a new line
 *
 *@i: integers to print
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}

	_putchar("\n");
	return (i);
}
