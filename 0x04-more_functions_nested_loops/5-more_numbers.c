#include "main.h"
#include "stdio.h"

/**
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k <= 9; k++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}

		for (j = '0'; j <= '4'; j++)
		{	
			_putchar(j);
		}
		_putchar('\n');
	}

}
