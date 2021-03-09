#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - Information of the dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner name
 *
 * Description: This struct is for the information of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
