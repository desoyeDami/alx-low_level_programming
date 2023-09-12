#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: pointer to the dog's name
 * @age: pointer to the dog's age
 * @owner: ptr variable to the dog's owner name
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
