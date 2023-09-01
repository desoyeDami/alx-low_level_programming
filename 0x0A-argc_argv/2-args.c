#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: Argument Count
 * @argv: Argument Vector String
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
