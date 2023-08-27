#include <stdio.h>

int main(void)
{
	long i = 2, n = 612852475143, largest = 0;

	for (; i <= n; i++)
	{
		while ( n % i == 0)
		{
			n /= i;

			if (i > largest)
				largest = i;
		}	
	}

	printf("%ld\n", largest);
	return (0);
}
