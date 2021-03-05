#include "holberton.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements
 * @size: Type of the elements
 *
 * Return: A pointer to a memory location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;

	return (pointer);
}
