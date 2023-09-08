#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr (in bytes)
 * @new_size: new size of the memory block (in bytes)
 *
 * Return: pointer to the newly reallocated memory block
 *         If new_size > old_size, the "added" memory is not initialized
 *         If new_size == old_size, no changes are made, and ptr is returned
 *         If ptr is NULL, it's equivalent to malloc(new_size)
 *         If new_size is zero and ptr is not NULL, it's equivalent to
 *         free(ptr) and returns NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr_new = malloc(new_size);

	if ((new_size - old_size) == 0)
		return (ptr);

	if (ptr == NULL)
		return (ptr_new);

	if (new_size == 0 && ptr != NULL)
		return (NULL);


	return (ptr_new);
}
