#include "main.h"

/**
 * _isupper - function checks whether a character is uppercase
 * @c: the character to be checked
 *
 * Return: 1 for uppercase, otherwise return zero.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (c);
}
