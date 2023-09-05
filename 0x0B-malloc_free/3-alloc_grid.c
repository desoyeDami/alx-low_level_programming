#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: array rows
 * @height: array column
 *
 * Return: NULL if either width or height is 0
 * else return array
 */
int **alloc_grid(int width, int height)
{
	int row, column, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		arr[row] = malloc(width * sizeof(int *));
		if (arr[row] == NULL)
		{
			for (column = 0; column < row; column++)
				free(arr[column]);

			free(arr);
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			arr[row][column] = 0;
		}
	}

	return (arr);
}
