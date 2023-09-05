#include <stdlib.h>
#include "main.h"

/**
 * create_array - function creates an array of chars, with a specific char.
 * @size: number of times to print
 * @c: character to be printed
 * Return: NULL if size is zero else ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = malloc(size * sizeof(c));

	if (ptr == 0)
		return (NULL);
	if (size == 0)
		return ("failed to allocate memory");

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
