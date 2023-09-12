#ifndef __DOG_H_
#define __DOG_H_

/**
 * struct dog - defines dog information
 *
 * @name: name of dog
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Description: Collects dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /*__DOG_H__*/
