#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_numeric - checks if a string input is a char
 * @str: pointer to a string
 * Return: true else false
 */

bool is_numeric(char *str)
{
	int j;

	for (j = 0; (str[j] != '\0'); j++)
	{
		if (str[j] < '0' || str[j] > '9')
			return (true);
	}
	return (false);
}

/**
 * main - program that adds positive numbers
 * @argc: Argument Count
 * @argv: Argument Vector String
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_numeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
