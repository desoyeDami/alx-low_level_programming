#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value (inclusive)
 * @max: the maximum value (inclusive)
 *
 * Return: pointer to the newly created array of integers
 *         If min > max or if malloc fails, it returns NULL
 */

int *array_range(int min, int max)
{
	int i, size, *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

