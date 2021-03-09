#include "dog.h"

/**
 * init_dog - Initialize a variable type dog
 * @d: struct variable type dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
