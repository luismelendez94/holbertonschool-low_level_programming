#include "holberton.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum number in the array
 * @max: Maximum number in the array
 *
 * Return: A pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, len = 0;

	if (min > max)
		return (NULL);

	len = max - min;

	pointer = malloc((len + 1) * sizeof(int));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		pointer[i] = min;
		min++;
	}

	return (pointer);
}
