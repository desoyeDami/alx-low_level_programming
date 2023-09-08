#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element (in bytes)
 *
 * Return: pointer to the allocated memory for the array
 *         If nmemb or size is 0, or if malloc fails, it returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, size * nmemb);
	return (ptr);
}

