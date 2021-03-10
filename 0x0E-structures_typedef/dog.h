#ifndef _DOG_H
#define _DOG_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H */
