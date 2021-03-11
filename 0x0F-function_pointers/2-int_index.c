#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array: Pointer to an array
 * @size: Number of elements in the array
 * @cmp: Pointer to a function
 *
 * Return: The index of the number, -1 if fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
