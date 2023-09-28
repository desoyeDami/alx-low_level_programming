#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 *
 * @b: A pointer to the binary string.
 *
 * Return: The equivalent unsigned integer, or 0 if the conversion fails.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	int base = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += base;
		base *= 2;
	}
	return (sum);
}
