#include <stdlib.h>
#inlcude "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 *         If malloc fails, the malloc_checked function exits
 *         the program with a status value of 98
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

