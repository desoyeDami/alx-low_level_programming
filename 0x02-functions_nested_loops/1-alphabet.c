#include "main.h"

/**
 *
 * main - write a code that prints lowercase alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		_putchar(b);
	_putchar('\n');
}
