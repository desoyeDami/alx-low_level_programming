#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu", sizeof(double));
	return 0;
}
