#include "holberton.h"

/**
 * create_array - Create an array
 * @size: Size of the array
 * @c: Character to be filled in the array
 *
 * Return: A pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
