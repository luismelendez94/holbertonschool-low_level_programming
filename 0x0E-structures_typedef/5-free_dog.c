#include "dog.h"

/**
 * free_dog - Free data from the dog variable
 * @d: Pointer to dog information
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);
}
