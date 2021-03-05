#include "holberton.h"

/**
 * _realloc - Reallocate a memory block
 * @ptr: Pointer to an allocated memory
 * @old_size: Old size in bytes
 * @new_size: New size in bytes
 *
 * Return: A pointer to a memory reallocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer = malloc(new_size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		pointer[i] = ((char *)ptr)[i];

	free(ptr);

	return (pointer);
}
