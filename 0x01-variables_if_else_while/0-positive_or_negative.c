#include <stdio.h>

/*
 *main - checks if a number is positive, negative or zero
 *
 *return: 0;
 */

int main(void)
{
	int i;

	if (i < 0)
	{
		printf(“%d is negative”, i);

	}
	else if (i > 0)
	{
		printf(“%d is positive”, i);
	}
	else
	{
		printf(“%d is zero”, i);
	}
	return (0);
}
