#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t n_dog = (dog_t)malloc(sizeof(dog_t));

	n_dog.name = name;
	n_dog.age = age;
	n_dog.owner = owner;

	return;
}
