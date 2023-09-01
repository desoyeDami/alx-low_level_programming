#include <stdio.h>
#include <stdlib.h>

/**
 * main -program that prints its name, followed by a new line
 * @argc: Argument Count
 * @argv: Argument Vector String
 * Return: 0
 */

int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
