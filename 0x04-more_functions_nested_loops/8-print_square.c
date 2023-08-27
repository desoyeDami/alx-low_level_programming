#include "main.h"

/*
 *
 *
 *
 *
 */

void print_square(int size)
{
	int i = 1, j = 2;

	while(j <= size)
	{
		while (i <= size)
		{
		_putchar('#');
		i++;
		}

		_putchar(j);
		j++;
	}
	_putchar('\n');
}
