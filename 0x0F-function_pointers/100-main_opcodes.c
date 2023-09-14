#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes of the main function.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *main_addr = (unsigned char *)print_opcodes;
    
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_addr[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 if successful, 1 if incorrect number of arguments,
 *         2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s number_of_bytes\n", argv[0]);
		return (1);
	}

	int num_bytes = atoi(argv[1]);
	print_opcodes(num_bytes);

	return (0);
}

