#include "main.h"

/**
 * _isdigit - function checks whether an input is a digit
 * @c: the character to be checked
 *
 * Return: 1 a digit, otherwise return zero.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (c);
}
