#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - function that frees dogs
 *
 * @d: ptr to dogs that are to be freed
 *
 * Return: Null
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
