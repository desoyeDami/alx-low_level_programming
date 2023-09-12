#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - a function that returns the length of a string
 * @s: the string pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}

/**
 * new_dog - function to create a new dog
 * @name: pointer to the dog's name
 * @age: pointer to the dog's age
 * @owner: ptr variable to the dog's owner name
 *
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i;

	if (name == NULL || age < 0 || owner == 0)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= _strlen(name); i++)
		n_dog->name[i] = name[i];

	for (i = 0; i <= _strlen(owner); i++)
		n_dog->owner[i] = owner[i];

	n_dog->name = n_dog->name;
	n_dog->age = age;
	n_dog->owner = n_dog->owner;
	return (n_dog);
}
