#include "main.h"
#include "stdio.h"

/**
 *
 *
 *
 *
 */

void print_square(int size)
{
	char i, k;

	for (k = 2; k <= size; k++)
	{
		for (i = '1'; i <= k; i++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
