#include "main.h"


void print_number(int n)
{
	int ndupli = n, i = 1;

	if (n < 0)
	{
		_putchar('-');
		ndupli = n * -1;
	}

	while (ndupli / i >= 10)
	{
		i *= 10;
	}

	while (i > 0)
	{
		int dig = ndupli / i;

		_putchar('0' + dig % 10);
		ndupli %= i;
		i /= 10;
	}
}
