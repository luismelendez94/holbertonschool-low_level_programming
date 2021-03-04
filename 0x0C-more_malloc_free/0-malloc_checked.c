#include "holberton.h"

/**
 * malloc_checked - Allocate memory
 * @b: Size of the space to allocate
 *
 * Return: A pointer to a memory location
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
