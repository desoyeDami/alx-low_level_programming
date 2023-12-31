#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Argument Count
 * @argv: Argument Vector String
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul;

	i = mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (; i < 3; i++)
		mul *= atoi(argv[i]);

	printf("%d\n", mul);
	return (0);
}
